package;

import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import towsterFlxUtil.Paths;
import flixel.FlxSprite;
import flixel.addons.display.shapes.FlxShapeCircle;
import flixel.FlxG;
import flixel.addons.display.shapes.FlxShapeLine;
import flixel.FlxState;
import flixel.math.FlxPoint;

class LineTest extends FlxState
{
	var testLine:HoldLines;

	var pointManipulation:Int = 0;

	override function create()
	{
		super.create();
		var sprite = new FlxSprite(0, 0).loadGraphic(Paths.getFilePath('images/circle', PNG));
		sprite.setGraphicSize(50, 50);
		sprite.updateHitbox();

		testLine = new HoldLines(new FlxPoint(0, 0), new FlxPoint(100, 100), sprite, 70);
		add(testLine);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
		switch (pointManipulation)
		{
			case 0:
				testLine.point.set(FlxG.mouse.x, FlxG.mouse.y);
			case 1:
				testLine.point2.set(FlxG.mouse.x, FlxG.mouse.y);
		}

		if (FlxG.mouse.justPressed)
		{
			pointManipulation++;
			pointManipulation %= 2;
		}

		if (FlxG.keys.justPressed.NINE)
		{
			FlxG.switchState(new LineTest());
		}
	}
}
