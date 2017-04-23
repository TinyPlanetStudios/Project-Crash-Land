#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new flixel.system.FlxPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/data/data-goes-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/images/Bedroom.xcf");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/BedroomCover.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/BedroomInterior.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/boombox.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/codedoor.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/cover90T1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/cover90T2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/coverwrench2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/coverWrenchT1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/empty.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/fin.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/fuelCell.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/FUELCELLBG.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/images-go-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/images/keydoor.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/keypad.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/keypad.xcf");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/mineCover1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MineCover2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/minecover3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/minecover4.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MineEntrance.xcf");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/MineEntranceCover.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MineEntranceInterior.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MineEntranceInteriorPostDoor.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/nosecap.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/openeing.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/planet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/planet.xcf");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/planetpuppet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/player.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/rocket.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/rocketPuppet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/rockWall.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/rung.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/table.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/tape.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/trapdoorbg.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/use.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/wrench.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/music/music-goes-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/music/music.ogg");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/get.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/gj.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/gj2.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/gj2.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/hit.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/kaboom.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/kaboom.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/song_20170423_095337_718.mid");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/sounds/sounds-go-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/sounds/takeoff.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/takeoff.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sounds/tk1.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("flixel/sounds/beep.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("flixel/sounds/flixel.ogg");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("Nokia Cellphone FC Small");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("Monsterrat");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("flixel/images/ui/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "642",
			company: "Grimmr (Tiny Planet Studios)",
			file: "Projectcrashland",
			fps: 60,
			name: "Project crash land",
			orientation: "",
			packageName: "com.example.myapp",
			version: "0.0.1",
			windows: [
				
				{
					antialiasing: 0,
					background: 0,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: false,
					height: 720,
					parameters: "{}",
					resizable: false,
					stencilBuffer: true,
					title: "Project crash land",
					vsync: true,
					width: 1280,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 1280, 720, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		#if !flash
		if (openfl.Lib.current.stage.window.fullscreen) {
			
			openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		#end
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
