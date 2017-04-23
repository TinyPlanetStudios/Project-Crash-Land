// Generated by Haxe 3.3.0
#ifndef INCLUDED_entity_Ladder
#define INCLUDED_entity_Ladder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(entity,Ladder)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace entity{


class HXCPP_CLASS_ATTRIBUTES Ladder_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef Ladder_obj OBJ_;
		Ladder_obj();

	public:
		void __construct(Float angleInp,Float radiala,Float radialb);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="entity.Ladder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"entity.Ladder"); }
		static hx::ObjectPtr< Ladder_obj > __new(Float angleInp,Float radiala,Float radialb);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ladder_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Ladder","\x02","\x41","\x63","\x7f"); }

		Float radialStart;
		Float radialEnd;
		Float Angle;
};

} // end namespace entity

#endif /* INCLUDED_entity_Ladder */ 
