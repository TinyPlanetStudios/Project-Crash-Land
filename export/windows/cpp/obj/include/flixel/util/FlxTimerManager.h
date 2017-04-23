// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util_FlxTimerManager
#define INCLUDED_flixel_util_FlxTimerManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,FlxTimerManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxTimerManager_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxTimerManager_obj OBJ_;
		FlxTimerManager_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxTimerManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.util.FlxTimerManager"); }
		static hx::ObjectPtr< FlxTimerManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTimerManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTimerManager","\x9a","\xa8","\xae","\x70"); }

		::Array< ::Dynamic> _timers;
		void destroy();

		void update(Float elapsed);

		void add( ::flixel::util::FlxTimer Timer);
		::Dynamic add_dyn();

		void remove( ::flixel::util::FlxTimer Timer);
		::Dynamic remove_dyn();

		void clear();
		::Dynamic clear_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxTimerManager */ 
