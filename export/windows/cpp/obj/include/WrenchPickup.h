// Generated by Haxe 3.3.0
#ifndef INCLUDED_WrenchPickup
#define INCLUDED_WrenchPickup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(WrenchPickup)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxSpriteButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES WrenchPickup_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef WrenchPickup_obj OBJ_;
		WrenchPickup_obj();

	public:
		void __construct( ::flixel::FlxState parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WrenchPickup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"WrenchPickup"); }
		static hx::ObjectPtr< WrenchPickup_obj > __new( ::flixel::FlxState parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WrenchPickup_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WrenchPickup","\x65","\x4b","\xd2","\xf2"); }

		 ::flixel::ui::FlxSpriteButton wrench;
		 ::flixel::ui::FlxSpriteButton tape;
		Bool wrenchGot;
		Bool tapeGot;
		 ::flixel::FlxState Parent;
};


#endif /* INCLUDED_WrenchPickup */ 
