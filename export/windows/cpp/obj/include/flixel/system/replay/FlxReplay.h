// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_replay_FlxReplay
#define INCLUDED_flixel_system_replay_FlxReplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,replay,FlxReplay)
HX_DECLARE_CLASS3(flixel,_hx_system,replay,FrameRecord)

namespace flixel{
namespace _hx_system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES FlxReplay_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxReplay_obj OBJ_;
		FlxReplay_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.replay.FlxReplay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.replay.FlxReplay"); }
		static hx::ObjectPtr< FlxReplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxReplay_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxReplay","\x19","\xe1","\x70","\x88"); }

		Int seed;
		Int frame;
		Int frameCount;
		Bool finished;
		::Array< ::Dynamic> _frames;
		Int _capacity;
		Int _marker;
		void destroy();
		::Dynamic destroy_dyn();

		void create(Int Seed);
		::Dynamic create_dyn();

		void load(::String FileContents);
		::Dynamic load_dyn();

		::String save();
		::Dynamic save_dyn();

		void recordFrame();
		::Dynamic recordFrame_dyn();

		void playNextFrame();
		::Dynamic playNextFrame_dyn();

		void rewind();
		::Dynamic rewind_dyn();

		void init();
		::Dynamic init_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_FlxReplay */ 
