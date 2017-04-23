// Generated by Haxe 3.3.0
#ifndef INCLUDED_TrapDoorCode
#define INCLUDED_TrapDoorCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(TrapDoorCode)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TrapDoorCode_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef TrapDoorCode_obj OBJ_;
		TrapDoorCode_obj();

	public:
		void __construct( ::flixel::FlxState parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TrapDoorCode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"TrapDoorCode"); }
		static hx::ObjectPtr< TrapDoorCode_obj > __new( ::flixel::FlxState parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TrapDoorCode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TrapDoorCode","\xe8","\xf0","\xce","\x86"); }

		 ::flixel::FlxState Parent;
		 ::flixel::ui::FlxButton button1;
		 ::flixel::ui::FlxButton button2;
		 ::flixel::ui::FlxButton button3;
		 ::flixel::ui::FlxButton button4;
		 ::flixel::ui::FlxButton button5;
		 ::flixel::ui::FlxButton confirmButton;
		 ::flixel::ui::FlxButton closeButton;
		 ::flixel::FlxSprite Background;
		void buttonCycle( ::flixel::ui::FlxButton button);
		::Dynamic buttonCycle_dyn();

};


#endif /* INCLUDED_TrapDoorCode */ 
