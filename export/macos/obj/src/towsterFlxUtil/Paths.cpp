#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_FileTypes
#include <towsterFlxUtil/FileTypes.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Paths
#include <towsterFlxUtil/Paths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_edff8a5cc0c72d4c_29_getAnimation,"towsterFlxUtil.Paths","getAnimation",0xf5ec2012,"towsterFlxUtil.Paths.getAnimation","towsterFlxUtil/Paths.hx",29,0x12944b95)
HX_LOCAL_STACK_FRAME(_hx_pos_edff8a5cc0c72d4c_38_getFile,"towsterFlxUtil.Paths","getFile",0xe02e382e,"towsterFlxUtil.Paths.getFile","towsterFlxUtil/Paths.hx",38,0x12944b95)
HX_LOCAL_STACK_FRAME(_hx_pos_edff8a5cc0c72d4c_68_getFilePath,"towsterFlxUtil.Paths","getFilePath",0xb143f8f3,"towsterFlxUtil.Paths.getFilePath","towsterFlxUtil/Paths.hx",68,0x12944b95)
HX_LOCAL_STACK_FRAME(_hx_pos_edff8a5cc0c72d4c_73_fileTypeToString,"towsterFlxUtil.Paths","fileTypeToString",0x2078d4a6,"towsterFlxUtil.Paths.fileTypeToString","towsterFlxUtil/Paths.hx",73,0x12944b95)
namespace towsterFlxUtil{

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x465afc04;
}

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getAnimation(::String path){
            	HX_STACKFRAME(&_hx_pos_edff8a5cc0c72d4c_29_getAnimation)
HXDLIN(  29)		::String _hx_tmp = ::towsterFlxUtil::Paths_obj::getFilePath((HX_("images/",77,50,74,c1) + path),::towsterFlxUtil::FileTypes_obj::PNG_dyn());
HXDLIN(  29)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::towsterFlxUtil::Paths_obj::getFilePath((HX_("images",b8,50,92,fe) + path),::towsterFlxUtil::FileTypes_obj::XML_dyn()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getAnimation,return )

 ::Dynamic Paths_obj::getFile(::String filePath, ::towsterFlxUtil::FileTypes fileType){
            	HX_GC_STACKFRAME(&_hx_pos_edff8a5cc0c72d4c_38_getFile)
HXLINE(  39)		::String path = ::towsterFlxUtil::Paths_obj::getFilePath(filePath,fileType);
HXLINE(  40)		switch((int)(fileType->_hx_getIndex())){
            			case (int)1: {
HXLINE(  43)				return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText(path))->doParse();
            			}
            			break;
            			case (int)3: {
HXLINE(  45)				return ::openfl::utils::Assets_obj::getSound(path,null());
            			}
            			break;
            			case (int)4: {
HXLINE(  47)				return ::openfl::utils::Assets_obj::getSound(path,null());
            			}
            			break;
            			case (int)5: {
HXLINE(  49)				return ::openfl::utils::Assets_obj::getText(path);
            			}
            			break;
            			case (int)6: {
HXLINE(  51)				return ::Xml_obj::parse(::openfl::utils::Assets_obj::getText(path));
            			}
            			break;
            			default:{
HXLINE(  53)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  53)				::String _hx_tmp1 = ((HX_("Yeah no I'm not doing ",79,0e,0d,5d) + ::towsterFlxUtil::Paths_obj::fileTypeToString(fileType)) + HX_(" rn.",d2,b4,7d,15));
HXDLIN(  53)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/towsterFlxUtil/Paths.hx",21,9b,b2,e0),53,HX_("towsterFlxUtil.Paths",6a,be,fb,0b),HX_("getFile",32,7e,3e,16)));
            			}
            		}
HXLINE(  55)		::haxe::Log_obj::trace(HX_("Oh No! Something Went Wrong! - Trying to get a file",51,08,80,3a),::hx::SourceInfo(HX_("source/towsterFlxUtil/Paths.hx",21,9b,b2,e0),55,HX_("towsterFlxUtil.Paths",6a,be,fb,0b),HX_("getFile",32,7e,3e,16)));
HXLINE(  56)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getFile,return )

::String Paths_obj::getFilePath(::String filePath, ::towsterFlxUtil::FileTypes fileType){
            	HX_STACKFRAME(&_hx_pos_edff8a5cc0c72d4c_68_getFilePath)
HXDLIN(  68)		return (((HX_("assets/",4c,2a,dc,36) + filePath) + HX_(".",2e,00,00,00)) + ::towsterFlxUtil::Paths_obj::fileTypeToString(fileType));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getFilePath,return )

::String Paths_obj::fileTypeToString( ::towsterFlxUtil::FileTypes fileType){
            	HX_STACKFRAME(&_hx_pos_edff8a5cc0c72d4c_73_fileTypeToString)
HXDLIN(  73)		switch((int)(fileType->_hx_getIndex())){
            			case (int)0: {
HXLINE(  76)				return HX_("png",a9,5c,55,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  78)				return HX_("json",28,42,68,46);
            			}
            			break;
            			case (int)2: {
HXLINE(  80)				return HX_("mp4",71,17,53,00);
            			}
            			break;
            			case (int)3: {
HXLINE(  82)				return HX_("mp3",70,17,53,00);
            			}
            			break;
            			case (int)4: {
HXLINE(  84)				return HX_("ogg",4f,94,54,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  86)				return HX_("txt",70,6e,58,00);
            			}
            			break;
            			case (int)6: {
HXLINE(  88)				return HX_("xml",d7,6d,5b,00);
            			}
            			break;
            		}
HXLINE(  73)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,fileTypeToString,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFile") ) { outValue = getFile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { outValue = getFilePath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { outValue = getAnimation_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fileTypeToString") ) { outValue = fileTypeToString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Paths_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("getAnimation",8e,8b,8b,5a),
	HX_("getFile",32,7e,3e,16),
	HX_("getFilePath",f7,90,89,89),
	HX_("fileTypeToString",22,ae,59,06),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("towsterFlxUtil.Paths",6a,be,fb,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace towsterFlxUtil
