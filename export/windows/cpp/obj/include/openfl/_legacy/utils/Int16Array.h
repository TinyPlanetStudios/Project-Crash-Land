// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_utils_Int16Array
#define INCLUDED_openfl__legacy_utils_Int16Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Int16Array)

namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Int16Array_obj : public  ::openfl::_legacy::utils::ArrayBufferView_obj
{
	public:
		typedef  ::openfl::_legacy::utils::ArrayBufferView_obj super;
		typedef Int16Array_obj OBJ_;
		Int16Array_obj();

	public:
		void __construct( ::Dynamic bufferOrArray,hx::Null< Int >  __o_start, ::Dynamic elements);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.Int16Array")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.utils.Int16Array"); }
		static hx::ObjectPtr< Int16Array_obj > __new( ::Dynamic bufferOrArray,hx::Null< Int >  __o_start, ::Dynamic elements);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Int16Array_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Int16Array","\x85","\x17","\x71","\xa9"); }

		static void __boot();
		typedef int __array_access;
		static Int SBYTES_PER_ELEMENT;
		Int BYTES_PER_ELEMENT;
		Int length;
		virtual Int __get(Int index);
		::Dynamic __get_dyn();

		virtual void __set(Int index,Int value);
		::Dynamic __set_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_Int16Array */ 
