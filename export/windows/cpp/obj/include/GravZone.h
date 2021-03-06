// Generated by Haxe 3.3.0
#ifndef INCLUDED_GravZone
#define INCLUDED_GravZone

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GravZone)



class HXCPP_CLASS_ATTRIBUTES GravZone_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GravZone_obj OBJ_;
		GravZone_obj();

	public:
		void __construct(Float anglea,Float angleb,Float radiala,Float radialb,Bool dropThrough,Bool lwall,Bool rwall,Bool ceil);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="GravZone")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"GravZone"); }
		static hx::ObjectPtr< GravZone_obj > __new(Float anglea,Float angleb,Float radiala,Float radialb,Bool dropThrough,Bool lwall,Bool rwall,Bool ceil);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GravZone_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GravZone","\x4c","\xca","\x44","\x57"); }

		Float radialStart;
		Float radialEnd;
		Float angleStart;
		Float angleEnd;
		Bool DropThrough;
		Bool LeftWall;
		Bool RightWall;
		Bool Ceiling;
};


#endif /* INCLUDED_GravZone */ 
