package;

import Conductor;
import JsonTypes;
import Note;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.input.keyboard.FlxKey;
import flixel.input.keyboard.FlxKeyList;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import haxe.Timer;
import openfl.Lib;
import towsterFlxUtil.Paths as MyPaths;
import towsterFlxUtil.Sprite as MySprite;
import towsterFlxUtil.Utils as MyUtils;
import towsterFlxUtil.Utils;
#if FLX_TOUCH
import flixel.input.touch.FlxTouchManager;
#end

class PlayState extends FlxState
{
	var activeNotes:FlxTypedSpriteGroup<Note>;
	var inputCircles:FlxTypedSpriteGroup<FlxSprite>;

	var songJson:ChartJson;

	var conductor:Conductor;

	var scrollSpeed:Int = 1000; // in ms
	var noteLoadSpeed:Int = 200; // in ms

	var score:Int = 0;
	var scoreBoard:FlxText;

	var combo:Int = 0;
	var comboBoard:FlxText;

	// reminder, I copied this into Note.hx as a place holder put i need to make a json for this later.
	public var inputCirclePosList = [
		[0.125, 0.125],
		[0.075, 0.425],
		[0.125, 0.725],
		[0.775, 0.125],
		[0.825, 0.425],
		[0.775, 0.725],
	];

	public var doorPosList = [
		[0.49, 0.45],
		[0.49, 0.5],
		[0.49, 0.55],
		[0.51, 0.45],
		[0.51, 0.5],
		[0.51, 0.55],
	];

	public var keyBinds:Array<FlxKey> = ['R', 'F', 'V', 'I', 'J', 'N'];

	override public function create()
	{
		#if ios
		MyUtils.windowWidth = 1792;
		MyUtils.windowHeight = 828; //// Ughhhhhh I'ma fix this later
		#else
		MyUtils.windowWidth = Lib.application.window.width;
		MyUtils.windowHeight = Lib.application.window.height;
		#end

		comboBoard = new FlxText(0, 0, 0, '0x', 100);
		comboBoard.font = 'assets/fonts/Nunito-VariableFont_wght.ttf';
		comboBoard.bold = true;
		comboBoard.screenCenter(XY);
		comboBoard.centerOrigin();
		add(comboBoard);

		scoreBoard = new FlxText(0, 0, 0, '0', 30);
		scoreBoard.font = 'assets/fonts/Nunito-VariableFont_wght.ttf';
		add(scoreBoard);

		songJson = MyPaths.getFile('data/songs/Plus-Danshi/chart-easy', JSON);
		conductor = new Conductor(songJson.bpmList);

		inputCircles = new FlxTypedSpriteGroup(0, 0, inputCirclePosList.length);
		add(inputCircles);
		for (pos in inputCirclePosList)
		{
			var circle = new FlxSprite(MyUtils.percentFromWidth(pos[0]), MyUtils.percentFromHeight(pos[1])).loadGraphic('assets/images/circle.png');
			circle.setGraphicSize(Math.floor(MyUtils.percentFromHeight(0.15)), Math.floor(MyUtils.percentFromHeight(0.15)));
			circle.updateHitbox();
			inputCircles.add(circle);
		}

		activeNotes = new FlxTypedSpriteGroup(0, 0, 99999);
		add(activeNotes);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		reOrganizeNotes();

		for (keyIndex in 0...keyBinds.length)
		{
			if (FlxG.keys.checkStatus(keyBinds[keyIndex], JUST_PRESSED))
			{
				inputPressed(keyIndex);
			}
		}
		for (keyIndex in 0...keyBinds.length)
		{
			if (FlxG.keys.checkStatus(keyBinds[keyIndex], JUST_RELEASED))
			{
				inputCircles.members[keyIndex].setGraphicSize(Math.floor(MyUtils.percentFromHeight(0.15)), Math.floor(MyUtils.percentFromHeight(0.15)));
			}
		}

		activeNotes.forEachAlive(function(activeNote)
		{
			var noteFromAlphaStart = conductor.getMil() - (activeNote.time - noteLoadSpeed - scrollSpeed);
			var noteFromMoveStart = conductor.getMil() - (activeNote.time - scrollSpeed);
			activeNote.alpha = noteFromAlphaStart / noteLoadSpeed;
			activeNote.x = Utils.percentFromWidth(doorPosList[activeNote.noteType][0]
				+ (noteFromMoveStart / scrollSpeed) * (inputCirclePosList[activeNote.noteType][0] - doorPosList[activeNote.noteType][0]));
			activeNote.y = Utils.percentFromHeight(doorPosList[activeNote.noteType][1]
				+ (noteFromMoveStart / scrollSpeed) * (inputCirclePosList[activeNote.noteType][1] - doorPosList[activeNote.noteType][1]));
		});

		super.update(elapsed);
	}

	function inputPressed(keyNum:Int)
	{
		inputCircles.members[keyNum].setGraphicSize(Math.floor(MyUtils.percentFromHeight(0.16)), Math.floor(MyUtils.percentFromHeight(0.16)));
		// Please only put this in the end
		activeNotes.forEachAlive(function(activeNote)
		{
			var noteAcc = noteAccuracyCalculator(activeNote);
			if (noteAcc == noteAccuracyList.length)
				return;
			activeNote.kill();
			addCombo();
			addScore(100);
		});
	}

	// Wonderful, Perfect, Good, Eh, Smh
	public var noteAccuracyList:Array<Int> = [10, 20, 50, 100];

	public function noteAccuracyCalculator(note:Note):Int
	{
		var offset = Math.abs(conductor.getMil() - note.time);
		for (noteAccInx in 0...noteAccuracyList.length)
		{
			if (offset < noteAccuracyList[noteAccInx])
				return noteAccInx;
		}
		return noteAccuracyList.length;
	}

	function addCombo()
	{
		combo++;
		comboBoard.text = combo + 'x';
		comboBoard.screenCenter(XY);
		comboBoard.angle = Math.random() * 20 - 10;
		comboBoard.scale.set(1.3, 1.3);
		FlxTween.tween(comboBoard.scale, {x: 1, y: 1}, 0.2, {ease: FlxEase.backOut});
	}

	function addScore(amount:Int)
	{
		score += amount * combo;
		scoreBoard.text = score + '';
	}

	function reOrganizeNotes()
	{
		var lastNoteAdded_Time:Int = 0;
		activeNotes.forEach(function(a)
		{
			if (a.time > lastNoteAdded_Time)
			{
				lastNoteAdded_Time = a.time;
			}
		});
		for (note in songJson.chart)
		{
			if (note.time < conductor.getMil() + scrollSpeed + 1000
				&& note.time > conductor.getMil() - scrollSpeed - 1000
				&& note.time > lastNoteAdded_Time)
			{
				activeNotes.add(new Note(note.note, note.time, note.sliderPoints, note.position));
			}
		}
	}

	override function onFocusLost()
	{
		super.onFocusLost();
		conductor.pause();
	}

	override function onFocus()
	{
		super.onFocus();
		conductor.start();
	}
}
