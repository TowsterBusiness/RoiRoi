package;

import flixel.FlxSprite;
import flixel.FlxState;

class PlayState extends FlxState
{
	var circle1:FlxSprite;

	override public function create()
	{
		circle1 = new FlxSprite(0, 0)
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
