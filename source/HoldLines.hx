package;

import towsterFlxUtil.Paths;
import flixel.math.FlxPoint;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import flixel.FlxG;

class HoldLines extends FlxTypedSpriteGroup<FlxSprite>
{
	public var space:Float;
	public var sectionSprite:FlxSprite;

	public var point:FlxPoint;
	public var point2:FlxPoint;

	public function new(point:FlxPoint, point2:FlxPoint, sectionSprite:FlxSprite, ?space:Float = 0)
	{
		super(0, 0, 999);

		this.sectionSprite = sectionSprite;
		this.space = space;

		this.point = new FlxCallbackPoint(onPointSet);
		this.point2 = new FlxCallbackPoint(onPointSet);

		this.point.copyFrom(point);
		this.point2.copyFrom(point2);
	}

	function onPointSet(x:FlxPoint)
	{
		updateLine();
	}

	var ofts = 0;

	function updateLine()
	{
		clear();

		var spritesNeeded = Math.ceil(point.distanceTo(point2) / space);
		var moveAngle = ((point.angleBetween(point2) + 180) * 3.1415) / -180;
		var moveX = space * Math.sin(moveAngle);
		var moveY = space * Math.cos(moveAngle);

		for (i in 0...spritesNeeded)
		{
			var sectionSpriteClone = new FlxSprite(moveX * i + point.x - (sectionSprite.width / 2),
				moveY * i + point.y - (sectionSprite.height / 2)).loadGraphic(sectionSprite.graphic);
			sectionSpriteClone.setGraphicSize(Math.floor(sectionSprite.width), Math.floor(sectionSprite.height));
			sectionSpriteClone.updateHitbox();
			sectionSpriteClone.angle = moveAngle;
			add(sectionSpriteClone);
		}
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
