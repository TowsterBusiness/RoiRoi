package;

import flixel.math.FlxPoint;
import flixel.addons.plugin.FlxMouseControl;
import flixel.addons.display.shapes.FlxShapeLine;
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

	var noteHoldEnds:FlxTypedSpriteGroup<Note>;
	var noteHoldLines:FlxTypedSpriteGroup<HoldLines>;

	var songJson:ChartJson;

	var conductor:Conductor;

	var scrollSpeed:Int = 1000; // in ms
	var noteLoadSpeed:Int = 200; // in ms

	var score:Int = 0;
	var scoreBoard:FlxText;

	var combo:Int = 0;
	var comboBoard:FlxText;

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

		noteHoldEnds = new FlxTypedSpriteGroup(0, 0, 999);
		add(noteHoldEnds);

		activeNotes = new FlxTypedSpriteGroup(0, 0, 99999);
		add(activeNotes);

		noteHoldLines = new FlxTypedSpriteGroup(0, 0, 999);
		add(noteHoldLines);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.keys.justPressed.NINE)
		{
			FlxG.switchState(new PlayState());
		}

		reOrganizeNotes();

		for (keyIndex in 0...keyBinds.length)
		{
			if (FlxG.keys.checkStatus(keyBinds[keyIndex], JUST_PRESSED))
			{
				inputPressed(keyIndex);
			}
			if (FlxG.keys.checkStatus(keyBinds[keyIndex], JUST_RELEASED))
			{
				inputReleased(keyIndex);
			}
		}

		activeNotes.forEachAlive(function(activeNote)
		{
			if (activeNote.holdLength == 0)
			{
				moveNote(activeNote);
			}
			else
			{
				if (activeNote.holdFailed != 0)
					moveNote(activeNote, activeNote.holdFailed - activeNote.time);
				else
					moveNote(activeNote);

				moveNote(activeNote.holdEndPointer);
				activeNote.holdLinePointer.point.set(activeNote.x + activeNote.width / 2, activeNote.y + activeNote.width / 2);
				activeNote.holdLinePointer.point2.set(activeNote.holdEndPointer.x + activeNote.holdEndPointer.width / 2,
					activeNote.holdEndPointer.y + activeNote.holdEndPointer.height / 2);
			}

			if (conductor.getMil() - noteAccuracyList[noteAccuracyList.length - 1] > activeNote.time
				&& !activeNote.dead
				&& !activeNote.isHeld)
			{
				killCombo();
				activeNote.dead = true;
			}
		});

		super.update(elapsed);
	}

	function inputPressed(keyNum:Int)
	{
		inputCircles.members[keyNum].setGraphicSize(Math.floor(MyUtils.percentFromHeight(0.16)), Math.floor(MyUtils.percentFromHeight(0.16)));

		activeNotes.forEachAlive(function(activeNote)
		{
			var noteAcc = noteRater(activeNote);

			if (activeNote.type != keyNum || noteAcc == noteAccuracyList.length)
				return;

			raterActions(noteAcc);
			if (activeNote.holdLength == 0)
			{
				activeNote.kill();
			}
			else if (activeNote.holdFailed == 0)
			{
				activeNote.isHeld = true;
				activeNote.dead = true;
			}
		});
	}

	function inputReleased(keyNum:Int)
	{
		inputCircles.members[keyNum].setGraphicSize(Math.floor(MyUtils.percentFromHeight(0.15)), Math.floor(MyUtils.percentFromHeight(0.15)));

		activeNotes.forEachAlive(function(activeNote)
		{
			if (activeNote.holdLength == 0 || keyNum != activeNote.type || !activeNote.isHeld)
				return;

			var endNote = activeNote.holdEndPointer;
			var holdAcc = noteRater(endNote);

			if (holdAcc == noteAccuracyList.length)
			{
				activeNote.isHeld = false;
				activeNote.holdFailed = conductor.getMil();
			}
			else
			{
				raterActions(holdAcc, false);
				activeNote.kill();
			}
		});
	}

	// Wonderful, Perfect, Good, Eh, Smh, OOF
	public var noteAccuracyList:Array<Int> = [10, 20, 50, 180, 200];

	function noteRater(note:Note):Int
	{
		var offset = Math.abs(conductor.getMil() - note.time);
		for (noteAccInx in 0...noteAccuracyList.length)
		{
			if (offset < noteAccuracyList[noteAccInx])
				return noteAccInx;
		}

		return noteAccuracyList.length;
	}

	function raterActions(rating:Int, killCombos:Bool = true)
	{
		trace(rating);
		switch (rating)
		{
			case 4:
				if (killCombos)
					killCombo();
			default:
				addCombo();
				addScore(100);
		}
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

	function killCombo()
	{
		combo = 0;
		comboBoard.text = '0x';
		comboBoard.screenCenter(XY);
		comboBoard.angle = Math.random() * 20 - 10;
		comboBoard.scale.set(0.6, 0.6);
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

		var milTillKill:Int = 2000;
		activeNotes.forEach(function(a)
		{
			if (a.time > lastNoteAdded_Time)
			{
				lastNoteAdded_Time = a.time;
			}

			if ((a.holdLength == 0 && a.time < conductor.getMil() - milTillKill)
				|| (a.holdLength > 0 && a.holdEndPointer.time < conductor.getMil() - milTillKill))
			{
				a.kill();
			}
		});

		for (note in songJson.chart)
		{
			if (note.time < conductor.getMil() + scrollSpeed + 1000
				&& note.time > conductor.getMil() - scrollSpeed - 1000
				&& note.time > lastNoteAdded_Time)
			{
				var noteToAdd = new Note(note);
				activeNotes.add(noteToAdd);

				if (note.holdLength > 0)
				{
					noteHoldEnds.add(noteToAdd.holdEndPointer);
					noteHoldLines.add(noteToAdd.holdLinePointer);
				}
			}
		}
	}

	function moveNote(note:Note, ?visualOffset:Int)
	{
		var noteFromAlphaStart = conductor.getMil() - (note.time - noteLoadSpeed - scrollSpeed - visualOffset);
		var noteFromMoveStart = conductor.getMil() - (note.time - scrollSpeed - visualOffset);
		note.alpha = noteFromAlphaStart / noteLoadSpeed;
		note.x = Utils.percentFromWidth(doorPosList[note.type][0]
			+ (noteFromMoveStart / scrollSpeed) * (inputCirclePosList[note.type][0] - doorPosList[note.type][0]));
		note.y = Utils.percentFromHeight(doorPosList[note.type][1]
			+ (noteFromMoveStart / scrollSpeed) * (inputCirclePosList[note.type][1] - doorPosList[note.type][1]));
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
