package;

import flixel.addons.display.shapes.FlxShapeLine;
import JsonTypes;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import towsterFlxUtil.*;

class Note extends FlxSprite
{
	public var type:Int;
	public var holdLength:Int;
	public var time:Int;
	public var position:Array<Int>;
	public var sliderPoints:Array<Int>;

	public var dead:Bool = false;

	public var holdEndPointer:Note;
	public var holdLinePointer:HoldLines;

	public var isHold:Bool;
	public var isHeld:Bool = false;
	public var holdFailed:Int = 0;

	public function new(noteJson:NoteJson, ?isHold:Bool = false, ?sectionGraphicSize:Int = 50)
	{
		type = noteJson.type;
		holdLength = noteJson.holdLength;
		time = noteJson.time;
		position = noteJson.position;
		sliderPoints = noteJson.sliderPoints;

		this.isHold = isHold;

		super(0, 0);

		loadGraphic(Paths.getFilePath('images/circle', PNG));
		setGraphicSize(Math.floor(Utils.percentFromHeight(0.15)), Math.floor(Utils.percentFromHeight(0.15)));
		updateHitbox();

		if (!isHold && holdLength > 0)
		{
			var tempNoteEnd:Note = new Note(noteJson, true);
			tempNoteEnd.time += noteJson.holdLength;
			tempNoteEnd.holdLength = 0;
			holdEndPointer = tempNoteEnd;

			var tempSprite = new FlxSprite(0, 0).loadGraphic(Paths.getFilePath('images/circle', PNG));
			tempSprite.setGraphicSize(sectionGraphicSize, sectionGraphicSize);
			tempSprite.updateHitbox();

			var tempNoteLine = new HoldLines(new FlxPoint(0, 0), new FlxPoint(0, 0), tempSprite, 70);
			holdLinePointer = tempNoteLine;
		}
	}

	public function updateLine()
	{
		if (holdLength <= 0)
		{
			trace('only update this when note it a long note please');
			return;
		}
		holdLinePointer.point.set(x + width / 2, y + height / 2);
		holdLinePointer.point2.set(holdEndPointer.x - 30 + holdEndPointer.width / 2, holdEndPointer.y + holdEndPointer.height / 2);
	}

	override function kill()
	{
		super.kill();
		if (isHold || holdLength == 0)
			return;
		holdEndPointer.kill();
		holdLinePointer.kill();
	}

	override function revive()
	{
		super.revive();
		if (isHold || holdLength == 0)
			return;
		holdEndPointer.revive();
		holdLinePointer.revive();
	}
}
