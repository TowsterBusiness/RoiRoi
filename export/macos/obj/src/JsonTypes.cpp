#include <hxcpp.h>

#ifndef INCLUDED_JsonTypes
#include <JsonTypes.h>
#endif


void JsonTypes_obj::__construct() { }

Dynamic JsonTypes_obj::__CreateEmpty() { return new JsonTypes_obj; }

void *JsonTypes_obj::_hx_vtable = 0;

Dynamic JsonTypes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JsonTypes_obj > _hx_result = new JsonTypes_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JsonTypes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fbe2251;
}


JsonTypes_obj::JsonTypes_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JsonTypes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *JsonTypes_obj_sStaticStorageInfo = 0;
#endif

::hx::Class JsonTypes_obj::__mClass;

void JsonTypes_obj::__register()
{
	JsonTypes_obj _hx_dummy;
	JsonTypes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("JsonTypes",11,ad,7a,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JsonTypes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonTypes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonTypes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

