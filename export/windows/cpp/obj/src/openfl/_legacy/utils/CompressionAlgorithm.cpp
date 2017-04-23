// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

::openfl::_legacy::utils::CompressionAlgorithm CompressionAlgorithm_obj::DEFLATE;

::openfl::_legacy::utils::CompressionAlgorithm CompressionAlgorithm_obj::GZIP;

::openfl::_legacy::utils::CompressionAlgorithm CompressionAlgorithm_obj::LZMA;

::openfl::_legacy::utils::CompressionAlgorithm CompressionAlgorithm_obj::ZLIB;

bool CompressionAlgorithm_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) { outValue = CompressionAlgorithm_obj::DEFLATE; return true; }
	if (inName==HX_("GZIP",da,b0,32,2f)) { outValue = CompressionAlgorithm_obj::GZIP; return true; }
	if (inName==HX_("LZMA",62,c5,80,32)) { outValue = CompressionAlgorithm_obj::LZMA; return true; }
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) { outValue = CompressionAlgorithm_obj::ZLIB; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(CompressionAlgorithm_obj)

int CompressionAlgorithm_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) return 0;
	if (inName==HX_("GZIP",da,b0,32,2f)) return 3;
	if (inName==HX_("LZMA",62,c5,80,32)) return 2;
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) return 1;
	return super::__FindIndex(inName);
}

int CompressionAlgorithm_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) return 0;
	if (inName==HX_("GZIP",da,b0,32,2f)) return 0;
	if (inName==HX_("LZMA",62,c5,80,32)) return 0;
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val CompressionAlgorithm_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEFLATE",4b,df,cd,22)) return DEFLATE;
	if (inName==HX_("GZIP",da,b0,32,2f)) return GZIP;
	if (inName==HX_("LZMA",62,c5,80,32)) return LZMA;
	if (inName==HX_("ZLIB",0b,1f,b7,3b)) return ZLIB;
	return super::__Field(inName,inCallProp);
}

static ::String CompressionAlgorithm_obj_sStaticFields[] = {
	HX_("DEFLATE",4b,df,cd,22),
	HX_("ZLIB",0b,1f,b7,3b),
	HX_("LZMA",62,c5,80,32),
	HX_("GZIP",da,b0,32,2f),
	::String(null())
};

static void CompressionAlgorithm_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::GZIP,"GZIP");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::ZLIB,"ZLIB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompressionAlgorithm_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::GZIP,"GZIP");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::ZLIB,"ZLIB");
};
#endif

hx::Class CompressionAlgorithm_obj::__mClass;

Dynamic __Create_CompressionAlgorithm_obj() { return new CompressionAlgorithm_obj; }

void CompressionAlgorithm_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.utils.CompressionAlgorithm","\x8a","\x96","\x15","\xf0"), hx::TCanCast< CompressionAlgorithm_obj >,CompressionAlgorithm_obj_sStaticFields,0,
	&__Create_CompressionAlgorithm_obj, &__Create,
	&super::__SGetClass(), &CreateCompressionAlgorithm_obj, CompressionAlgorithm_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , CompressionAlgorithm_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &CompressionAlgorithm_obj::__GetStatic;
}

void CompressionAlgorithm_obj::__boot()
{
DEFLATE = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22"),0,0);
GZIP = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("GZIP","\xda","\xb0","\x32","\x2f"),3,0);
LZMA = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"),2,0);
ZLIB = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b"),1,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
