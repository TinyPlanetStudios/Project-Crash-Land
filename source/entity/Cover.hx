package entity;

import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class Cover extends FlxSprite 
{
	public var radialStart:Float;
	public var radialEnd:Float;
	
	public var angleStart:Float;
	public var angleEnd:Float;
	
	public function new(anglea:Float, angleb:Float, radiala:Float, radialb:Float, graphic:FlxGraphicAsset)
	{
		super(365, 85, graphic);
		radialStart = radiala;
		radialEnd = radialb;
		
		angleStart = anglea;
		angleEnd = angleb;
	}
	
}