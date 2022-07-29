package;

import flixel.FlxSprite;
import towsterFlxUtil.*;

class Note extends FlxSprite
{
	var doorPosList = [[0.5, 0.6], [0.5, 0.5], [0.5, 0.4], [0.5, 0.6], [0.5, 0.5], [0.48, 0.4]];

	public var noteType:Int;
	public var time:Int;
	public var sliderPoints:Array<Int>;

	public function new(noteType:Int = 0, time:Int = 0, sliderPoints:Array<Int>, position:Array<Int>)
	{
		this.noteType = noteType;
		this.time = time;
		this.sliderPoints = sliderPoints;
		alpha = 0;

		super(0, 0);

		loadGraphic(Paths.getFilePath('images/circle', PNG));
		setGraphicSize(Math.floor(Utils.percentFromHeight(0.15)), Math.floor(Utils.percentFromHeight(0.15)));
		updateHitbox();

		if (position[0] != 0 && position[1] != 0)
		{
			x = position[0];
			y = position[1];
		}
		else if (noteType < 6)
		{
			x = Utils.percentFromHeight(doorPosList[noteType][0] + 0.075);
			y = Utils.percentFromHeight(doorPosList[noteType][1] - 0.075);
		}
		else
		{
			x = 0;
			y = 0;
		}
	}
}
