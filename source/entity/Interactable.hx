package entity;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class Interactable extends FlxSprite
{
	
	public var radialStart:Float;
	public var radialEnd:Float;
	
	public var angleStart:Float;
	public var angleEnd:Float;
	
	public var Callback:Void->Void;
	
	public function new(X:Float=0, Y:Float=0, SimpleGraphic:FlxGraphicAsset, anglea:Float, angleb:Float, radiala:Float, radialb:Float, callback:Void->Void) 
	{
		super(Global.PlanetPos.x + X, Global.PlanetPos.y + Y, SimpleGraphic);
		radialStart = radiala;
		radialEnd = radialb;
		
		angleStart = anglea;
		angleEnd = angleb;
		
		Callback = callback;
		
		FlxG.state.add(this);
	}
	
}