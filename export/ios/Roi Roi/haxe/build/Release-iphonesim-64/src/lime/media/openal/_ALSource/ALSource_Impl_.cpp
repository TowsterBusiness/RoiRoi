#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALSource_ALSource_Impl_
#include <lime/media/openal/_ALSource/ALSource_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f35efe519e1d20f2_9__new,"lime.media.openal._ALSource.ALSource_Impl_","_new",0xa5dfa9aa,"lime.media.openal._ALSource.ALSource_Impl_._new","lime/media/openal/ALSource.hx",9,0x6c7b0443)
namespace lime{
namespace media{
namespace openal{
namespace _ALSource{

void ALSource_Impl__obj::__construct() { }

Dynamic ALSource_Impl__obj::__CreateEmpty() { return new ALSource_Impl__obj; }

void *ALSource_Impl__obj::_hx_vtable = 0;

Dynamic ALSource_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ALSource_Impl__obj > _hx_result = new ALSource_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALSource_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x027142d3;
}

 ::Dynamic ALSource_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f35efe519e1d20f2_9__new)
HXDLIN(   9)		 ::Dynamic this1 = handle;
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALSource_Impl__obj,_new,return )


ALSource_Impl__obj::ALSource_Impl__obj()
{
}

bool ALSource_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ALSource_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ALSource_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ALSource_Impl__obj::__mClass;

static ::String ALSource_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ALSource_Impl__obj::__register()
{
	ALSource_Impl__obj _hx_dummy;
	ALSource_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal._ALSource.ALSource_Impl_",c5,30,8e,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALSource_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ALSource_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ALSource_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALSource_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALSource_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALSource
