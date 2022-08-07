package;

import flixel.addons.display.shapes.FlxShapeLine;
import flixel.FlxSprite;
import towsterFlxUtil.*;

class NoteTemplate extends FlxSprite
{
	public var noteType:Int;
	public var time:Int;
	public var sliderPoints:Array<Int>;
	public var noteLength:Int;

	public var isSliderTail:Bool;
	public var sliderEndPointer:Note;
	public var sliderLinePointer:FlxShapeLine;

	public function new(noteType:Int = 0, time:Int = 0, noteLength:Int = 0, sliderPoints:Array<Int>, position:Array<Int>, ?isSliderTail:Bool = false)
	{
		this.noteType = noteType;
		this.time = time;
		this.sliderPoints = sliderPoints;
		this.noteLength = noteLength;
		this.isSliderTail = isSliderTail;

		super(0, 0);

		loadGraphic(Paths.getFilePath('images/circle', PNG));
		setGraphicSize(Math.floor(Utils.percentFromHeight(0.15)), Math.floor(Utils.percentFromHeight(0.15)));
		updateHitbox();
	}
}
