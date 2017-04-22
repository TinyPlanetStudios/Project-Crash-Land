package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxSubState;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author Grimmr (Tiny Planet Studios)
 */
class WrenchPickup extends FlxSubState 
{	
	public var wrench:FlxSpriteButton;
	public var tape:FlxSpriteButton;
	
	public var wrenchGot:Bool = false;
	public var tapeGot:Bool = false;
	
	public var Parent:FlxState;
	
	public function new(parent:FlxState) 
	{
		super(FlxColor.fromRGB(148,148,148));
		
		Parent = parent;
		parent.persistentUpdate = false;
		
		wrench = new FlxSpriteButton(252, 88, new FlxSprite(0, 0, AssetPaths.wrench__png), function(){
			wrenchGot = true;
			remove(wrench);
			if (tapeGot && wrenchGot)
			{
				Parent.persistentUpdate = true;
				close();
			}
		});
		wrench.loadGraphic(AssetPaths.wrench__png);
		add(wrench);
		
		tape = new FlxSpriteButton(500, 88, new FlxSprite(0, 0, AssetPaths.tape__png), function(){
			tapeGot = true;
			remove(tape);
			if (tapeGot && wrenchGot)
			{
				Parent.persistentUpdate = true;
				close();
			}
		});
		tape.loadGraphic(AssetPaths.tape__png);
		add(tape);
	}
	
}