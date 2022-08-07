#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Utils
#include <towsterFlxUtil/Utils.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3928aecef99f9ce9_13_traceText,"towsterFlxUtil.Utils","traceText",0x186b7f91,"towsterFlxUtil.Utils.traceText","towsterFlxUtil/Utils.hx",13,0x2e55b072)
HX_LOCAL_STACK_FRAME(_hx_pos_3928aecef99f9ce9_24_percentFromHeight,"towsterFlxUtil.Utils","percentFromHeight",0xb321ecd5,"towsterFlxUtil.Utils.percentFromHeight","towsterFlxUtil/Utils.hx",24,0x2e55b072)
HX_LOCAL_STACK_FRAME(_hx_pos_3928aecef99f9ce9_29_percentFromWidth,"towsterFlxUtil.Utils","percentFromWidth",0xf6cd48d8,"towsterFlxUtil.Utils.percentFromWidth","towsterFlxUtil/Utils.hx",29,0x2e55b072)
HX_LOCAL_STACK_FRAME(_hx_pos_3928aecef99f9ce9_7_boot,"towsterFlxUtil.Utils","boot",0x2e9c0ad3,"towsterFlxUtil.Utils.boot","towsterFlxUtil/Utils.hx",7,0x2e55b072)
HX_LOCAL_STACK_FRAME(_hx_pos_3928aecef99f9ce9_8_boot,"towsterFlxUtil.Utils","boot",0x2e9c0ad3,"towsterFlxUtil.Utils.boot","towsterFlxUtil/Utils.hx",8,0x2e55b072)
HX_LOCAL_STACK_FRAME(_hx_pos_3928aecef99f9ce9_10_boot,"towsterFlxUtil.Utils","boot",0x2e9c0ad3,"towsterFlxUtil.Utils.boot","towsterFlxUtil/Utils.hx",10,0x2e55b072)
namespace towsterFlxUtil{

void Utils_obj::__construct() { }

Dynamic Utils_obj::__CreateEmpty() { return new Utils_obj; }

void *Utils_obj::_hx_vtable = 0;

Dynamic Utils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Utils_obj > _hx_result = new Utils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33e29b07;
}

Float Utils_obj::windowWidth;

Float Utils_obj::windowHeight;

int Utils_obj::traceTextNum;

 ::flixel::text::FlxText Utils_obj::traceText(::String message){
            	HX_GC_STACKFRAME(&_hx_pos_3928aecef99f9ce9_13_traceText)
HXLINE(  14)		::towsterFlxUtil::Utils_obj::traceTextNum++;
HXLINE(  15)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,(15 * ::towsterFlxUtil::Utils_obj::traceTextNum),-1,message,null(),null());
HXLINE(  16)		return text;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,traceText,return )

Float Utils_obj::percentFromHeight(Float percent, ::Dynamic __o_doesRoundToInt){
            		 ::Dynamic doesRoundToInt = __o_doesRoundToInt;
            		if (::hx::IsNull(__o_doesRoundToInt)) doesRoundToInt = false;
            	HX_STACKFRAME(&_hx_pos_3928aecef99f9ce9_24_percentFromHeight)
HXDLIN(  24)		return (percent * ::towsterFlxUtil::Utils_obj::windowHeight);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,percentFromHeight,return )

Float Utils_obj::percentFromWidth(Float percent, ::Dynamic __o_doesRoundToInt){
            		 ::Dynamic doesRoundToInt = __o_doesRoundToInt;
            		if (::hx::IsNull(__o_doesRoundToInt)) doesRoundToInt = false;
            	HX_STACKFRAME(&_hx_pos_3928aecef99f9ce9_29_percentFromWidth)
HXDLIN(  29)		return (percent * ::towsterFlxUtil::Utils_obj::windowWidth);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,percentFromWidth,return )


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"traceText") ) { outValue = traceText_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { outValue = ( windowWidth ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { outValue = ( windowHeight ); return true; }
		if (HX_FIELD_EQ(inName,"traceTextNum") ) { outValue = ( traceTextNum ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"percentFromWidth") ) { outValue = percentFromWidth_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"percentFromHeight") ) { outValue = percentFromHeight_dyn(); return true; }
	}
	return false;
}

bool Utils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"traceTextNum") ) { traceTextNum=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Utils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Utils_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Utils_obj::windowWidth,HX_("windowWidth",f6,4b,35,bb)},
	{::hx::fsFloat,(void *) &Utils_obj::windowHeight,HX_("windowHeight",f7,a3,bc,c9)},
	{::hx::fsInt,(void *) &Utils_obj::traceTextNum,HX_("traceTextNum",94,d7,57,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Utils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(Utils_obj::windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(Utils_obj::traceTextNum,"traceTextNum");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(Utils_obj::windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(Utils_obj::traceTextNum,"traceTextNum");
};

#endif

::hx::Class Utils_obj::__mClass;

static ::String Utils_obj_sStaticFields[] = {
	HX_("windowWidth",f6,4b,35,bb),
	HX_("windowHeight",f7,a3,bc,c9),
	HX_("traceTextNum",94,d7,57,9a),
	HX_("traceText",d2,ad,1c,c4),
	HX_("percentFromHeight",16,c4,fc,e7),
	HX_("percentFromWidth",b7,d4,8c,29),
	::String(null())
};

void Utils_obj::__register()
{
	Utils_obj _hx_dummy;
	Utils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("towsterFlxUtil.Utils",6d,5d,83,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &Utils_obj::__SetStatic;
	__mClass->mMarkFunc = Utils_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Utils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Utils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Utils_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3928aecef99f9ce9_7_boot)
HXDLIN(   7)		windowWidth = ((Float)640);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3928aecef99f9ce9_8_boot)
HXDLIN(   8)		windowHeight = ((Float)480);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3928aecef99f9ce9_10_boot)
HXDLIN(  10)		traceTextNum = 0;
            	}
}

} // end namespace towsterFlxUtil
