#include <hxcpp.h>

#ifndef INCLUDED_towsterFlxUtil_FileTypes
#include <towsterFlxUtil/FileTypes.h>
#endif
namespace towsterFlxUtil{

::towsterFlxUtil::FileTypes FileTypes_obj::JSON;

::towsterFlxUtil::FileTypes FileTypes_obj::MP3;

::towsterFlxUtil::FileTypes FileTypes_obj::MP4;

::towsterFlxUtil::FileTypes FileTypes_obj::OGG;

::towsterFlxUtil::FileTypes FileTypes_obj::PNG;

::towsterFlxUtil::FileTypes FileTypes_obj::TXT;

::towsterFlxUtil::FileTypes FileTypes_obj::XML;

bool FileTypes_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("JSON",28,0a,29,31)) { outValue = FileTypes_obj::JSON; return true; }
	if (inName==HX_("MP3",70,b3,3a,00)) { outValue = FileTypes_obj::MP3; return true; }
	if (inName==HX_("MP4",71,b3,3a,00)) { outValue = FileTypes_obj::MP4; return true; }
	if (inName==HX_("OGG",2f,30,3c,00)) { outValue = FileTypes_obj::OGG; return true; }
	if (inName==HX_("PNG",89,f8,3c,00)) { outValue = FileTypes_obj::PNG; return true; }
	if (inName==HX_("TXT",50,0a,40,00)) { outValue = FileTypes_obj::TXT; return true; }
	if (inName==HX_("XML",b7,09,43,00)) { outValue = FileTypes_obj::XML; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileTypes_obj)

int FileTypes_obj::__FindIndex(::String inName)
{
	if (inName==HX_("JSON",28,0a,29,31)) return 1;
	if (inName==HX_("MP3",70,b3,3a,00)) return 3;
	if (inName==HX_("MP4",71,b3,3a,00)) return 2;
	if (inName==HX_("OGG",2f,30,3c,00)) return 4;
	if (inName==HX_("PNG",89,f8,3c,00)) return 0;
	if (inName==HX_("TXT",50,0a,40,00)) return 5;
	if (inName==HX_("XML",b7,09,43,00)) return 6;
	return super::__FindIndex(inName);
}

int FileTypes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("JSON",28,0a,29,31)) return 0;
	if (inName==HX_("MP3",70,b3,3a,00)) return 0;
	if (inName==HX_("MP4",71,b3,3a,00)) return 0;
	if (inName==HX_("OGG",2f,30,3c,00)) return 0;
	if (inName==HX_("PNG",89,f8,3c,00)) return 0;
	if (inName==HX_("TXT",50,0a,40,00)) return 0;
	if (inName==HX_("XML",b7,09,43,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileTypes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("JSON",28,0a,29,31)) return JSON;
	if (inName==HX_("MP3",70,b3,3a,00)) return MP3;
	if (inName==HX_("MP4",71,b3,3a,00)) return MP4;
	if (inName==HX_("OGG",2f,30,3c,00)) return OGG;
	if (inName==HX_("PNG",89,f8,3c,00)) return PNG;
	if (inName==HX_("TXT",50,0a,40,00)) return TXT;
	if (inName==HX_("XML",b7,09,43,00)) return XML;
	return super::__Field(inName,inCallProp);
}

static ::String FileTypes_obj_sStaticFields[] = {
	HX_("PNG",89,f8,3c,00),
	HX_("JSON",28,0a,29,31),
	HX_("MP4",71,b3,3a,00),
	HX_("MP3",70,b3,3a,00),
	HX_("OGG",2f,30,3c,00),
	HX_("TXT",50,0a,40,00),
	HX_("XML",b7,09,43,00),
	::String(null())
};

::hx::Class FileTypes_obj::__mClass;

Dynamic __Create_FileTypes_obj() { return new FileTypes_obj; }

void FileTypes_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("towsterFlxUtil.FileTypes",99,11,78,d3), ::hx::TCanCast< FileTypes_obj >,FileTypes_obj_sStaticFields,0,
	&__Create_FileTypes_obj, &__Create,
	&super::__SGetClass(), &CreateFileTypes_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileTypes_obj::__GetStatic;
}

void FileTypes_obj::__boot()
{
JSON = ::hx::CreateConstEnum< FileTypes_obj >(HX_("JSON",28,0a,29,31),1);
MP3 = ::hx::CreateConstEnum< FileTypes_obj >(HX_("MP3",70,b3,3a,00),3);
MP4 = ::hx::CreateConstEnum< FileTypes_obj >(HX_("MP4",71,b3,3a,00),2);
OGG = ::hx::CreateConstEnum< FileTypes_obj >(HX_("OGG",2f,30,3c,00),4);
PNG = ::hx::CreateConstEnum< FileTypes_obj >(HX_("PNG",89,f8,3c,00),0);
TXT = ::hx::CreateConstEnum< FileTypes_obj >(HX_("TXT",50,0a,40,00),5);
XML = ::hx::CreateConstEnum< FileTypes_obj >(HX_("XML",b7,09,43,00),6);
}


} // end namespace towsterFlxUtil
