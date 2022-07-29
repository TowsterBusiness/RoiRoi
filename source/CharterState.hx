package;

import JsonTypes;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.shapes.FlxShapeLine;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.math.FlxPoint;
import flixel.util.FlxSort;
import lime.utils.BytePointer;
import openfl.Lib;
import towsterFlxUtil.*;

class CharterState extends FlxState
{
	var songJson:ChartJson;

	var activeNotes:FlxTypedSpriteGroup<Note>;
	var inputCircles:FlxTypedSpriteGroup<FlxSprite>;

	var beatBars:FlxTypedSpriteGroup<FlxShapeLine>;
	var barDivisions:Int = 4;

	var mil:Float = 0;
	var zoom:Float = 1;

	var inputSize:Int = 60;
	var spaceBtwInputs:Int = 10;

	var isWheelMoving:Bool = false;
	var wheelScrollSpd:Float = 3;

	override function create()
	{
		#if ios
		Utils.windowWidth = 1792;
		Utils.windowHeight = 828; //// Ughhhhhh I'ma fix this later
		#else
		Utils.windowWidth = Lib.application.window.width;
		Utils.windowHeight = Lib.application.window.height;
		#end
		trace('fix this soon');

		super.create();
		songJson = Paths.getFile('data/songs/Plus-Danshi/chart-easy', JSON);

		inputCircles = new FlxTypedSpriteGroup(30, 500, 7);
		add(inputCircles);
		for (i in 0...7)
		{
			var circle = new FlxSprite(i * (inputSize + spaceBtwInputs), 0).loadGraphic('assets/images/circle.png');
			circle.setGraphicSize(inputSize, inputSize);
			circle.updateHitbox();
			inputCircles.add(circle);
		}

		beatBars = new FlxTypedSpriteGroup(30, 0, 30);
		add(beatBars);

		activeNotes = new FlxTypedSpriteGroup(30, 0, 99999);
		add(activeNotes);

		organizeNotes();
		reloadBeatBars();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.mouse.wheel != 0 && mil >= 0)
		{
			isWheelMoving = true;
			mil += FlxG.mouse.wheel * wheelScrollSpd;

			// Fake moving
			activeNotes.forEachAlive(function(note)
			{
				note.y += FlxG.mouse.wheel * wheelScrollSpd;
			});
			beatBars.forEachAlive(function(bar)
			{
				bar.y += FlxG.mouse.wheel * wheelScrollSpd;
			});
		}
		else if (mil < 0)
		{
			mil = 0;
		}

		if (FlxG.mouse.wheel == 0 && isWheelMoving)
		{
			organizeNotes();
			reloadBeatBars();
		}

		if (FlxG.mouse.justPressed)
		{
			var quickNoteJson:NoteJson = {
				note: 0,
				time: 0,
				sliderPoints: [0],
				position: [0, 0]
			};

			quickNoteJson.note = Math.floor((FlxG.mouse.x - inputCircles.x + spaceBtwInputs / 2) / (inputSize + spaceBtwInputs));
			quickNoteJson.time = Math.floor(yPosToTime(FlxG.mouse.y));

			songJson.chart.push(quickNoteJson);
			organizeNotes();
		}
	}

	var renderRange:Int = 1000;

	function organizeNotes()
	{
		activeNotes.clear();

		for (note in songJson.chart)
		{
			if (note.time < mil + renderRange && note.time > mil - renderRange)
			{
				var modifiedNote = new Note(note.note, note.time, note.sliderPoints, note.position);
				modifiedNote.setGraphicSize(inputSize, inputSize);
				modifiedNote.x = note.note * (inputSize + spaceBtwInputs);
				activeNotes.add(modifiedNote);
			}
		}

		activeNotes.forEachAlive(function(note)
		{
			if (note.time > mil + renderRange && note.time < mil - renderRange)
			{
				note.kill();
			}
			note.y = timeToYPos(note.time);
		});
	}

	function reloadBeatBars()
	{
		beatBars.clear();

		var inFrameBPM:Array<BPMJson> = [];
		var replacementBPM:BPMJson = {bpm: 120, time: -1};

		for (index => bpmObj in songJson.bpmList)
		{
			var yPos = yPosToTime(bpmObj.time);
			if (yPos >= 0 && yPos <= Utils.windowHeight)
			{
				if (inFrameBPM.length == 0 && index != 0)
				{
					inFrameBPM.push(songJson.bpmList[index - 1]);
				}
				inFrameBPM.push(bpmObj);
			}

			if (bpmObj.time < yPosToTime(Utils.windowHeight) && bpmObj.time > replacementBPM.time)
				replacementBPM = bpmObj;
		}

		if (inFrameBPM.length == 0)
		{
			if (replacementBPM.time < 0)
			{
				inFrameBPM.push(replacementBPM);
			}
			else
			{
				inFrameBPM.push(songJson.bpmList[songJson.bpmList.length - 1]);
			}
		}

		for (i => bpmObj in inFrameBPM)
		{
			var bpmPointerLength:Int;

			if (inFrameBPM[i + 1] == null)
			{
				bpmPointerLength = Math.ceil((yPosToTime(0) - bpmObj.time) * (bpmObj.bpm / 6000));
			}
			else
			{
				bpmPointerLength = Math.floor((inFrameBPM[i + 1].time - bpmObj.time) * (bpmObj.bpm / 6000));
			}

			for (e in 0...bpmPointerLength)
			{
				var newBarY = timeToYPos(bpmObj.time) - (e * (6000 / bpmObj.bpm) * zoom);

				var isAdd = true;
				if (newBarY < Utils.windowHeight)
				{
					beatBars.forEachAlive(function(bar)
					{
						if (bar.y == newBarY)
							isAdd = false;
					});
					if (isAdd)
						beatBars.add(new FlxShapeLine(0, newBarY, new FlxPoint(inputCircles.x - spaceBtwInputs, 0),
							new FlxPoint(inputCircles.x + ((inputSize + spaceBtwInputs) * 6) + spaceBtwInputs, 0), {
								thickness: 5
							}));
				}
			}
		}
	}

	function noteSnap(time:Float):Int
	{
		return 0;
	}

	// the equasion I came up with
	// mil - <smallest bpm change from note.time> / (6000 / <smallest bpm change from note.bpm)

	function timeToYPos(time:Float)
	{
		return inputCircles.y - (time - mil) * zoom;
	}

	function yPosToTime(yPos:Float)
	{
		return -((yPos - inputCircles.y) / zoom) + mil;
	}
}
