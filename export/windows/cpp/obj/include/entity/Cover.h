// Generated by Haxe 3.3.0
#ifndef INCLUDED_entity_Cover
#define INCLUDED_entity_Cover

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(entity,Cover)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace entity{


class HXCPP_CLASS_ATTRIBUTES Cover_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Cover_obj OBJ_;
		Cover_obj();

	public:
		void __construct(Float anglea,Float angleb,Float radiala,Float radialb, ::Dynamic graphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entity.Cover")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entity.Cover"); }
		static hx::ObjectPtr< Cover_obj > __new(Float anglea,Float angleb,Float radiala,Float radialb, ::Dynamic graphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cover_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Cover","\x17","\x6f","\x91","\xdd"); }

		Float radialStart;
		Float radialEnd;
		Float angleStart;
		Float angleEnd;
		 ::flixel::tweens::FlxTween tween;
};

} // end namespace entity

#endif /* INCLUDED_entity_Cover */ 
