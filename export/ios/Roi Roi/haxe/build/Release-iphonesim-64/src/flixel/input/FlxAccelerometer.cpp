#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxAccelerometer
#include <flixel/input/FlxAccelerometer.h>
#endif
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_sensors_Accelerometer
#include <openfl/sensors/Accelerometer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_71a0297f5aca26db_10_new,"flixel.input.FlxAccelerometer","new",0x0d021645,"flixel.input.FlxAccelerometer.new","flixel/input/FlxAccelerometer.hx",10,0x4bc92349)
HX_LOCAL_STACK_FRAME(_hx_pos_71a0297f5aca26db_48_get_isSupported,"flixel.input.FlxAccelerometer","get_isSupported",0x551e3de0,"flixel.input.FlxAccelerometer.get_isSupported","flixel/input/FlxAccelerometer.hx",48,0x4bc92349)
HX_LOCAL_STACK_FRAME(_hx_pos_71a0297f5aca26db_52_update,"flixel.input.FlxAccelerometer","update",0x4e2e3d44,"flixel.input.FlxAccelerometer.update","flixel/input/FlxAccelerometer.hx",52,0x4bc92349)
namespace flixel{
namespace input{

void FlxAccelerometer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_71a0297f5aca26db_10_new)
HXLINE(  28)		this->z = ((Float)0);
HXLINE(  22)		this->y = ((Float)0);
HXLINE(  16)		this->x = ((Float)0);
HXLINE(  39)		if (::openfl::sensors::Accelerometer_obj::get_isSupported()) {
HXLINE(  41)			this->_sensor =  ::openfl::sensors::Accelerometer_obj::__alloc( HX_CTX );
HXLINE(  42)			this->_sensor->addEventListener(HX_("update",09,86,05,87),this->update_dyn(),null(),null(),null());
            		}
            	}

Dynamic FlxAccelerometer_obj::__CreateEmpty() { return new FlxAccelerometer_obj; }

void *FlxAccelerometer_obj::_hx_vtable = 0;

Dynamic FlxAccelerometer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAccelerometer_obj > _hx_result = new FlxAccelerometer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAccelerometer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48800d0b;
}

bool FlxAccelerometer_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_71a0297f5aca26db_48_get_isSupported)
HXDLIN(  48)		return ::openfl::sensors::Accelerometer_obj::get_isSupported();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAccelerometer_obj,get_isSupported,return )

void FlxAccelerometer_obj::update( ::openfl::events::AccelerometerEvent Event){
            	HX_STACKFRAME(&_hx_pos_71a0297f5aca26db_52_update)
HXLINE(  58)		this->x = -(Event->accelerationX);
HXLINE(  59)		this->y = -(Event->accelerationY);
HXLINE(  60)		this->z = -(Event->accelerationZ);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAccelerometer_obj,update,(void))


::hx::ObjectPtr< FlxAccelerometer_obj > FlxAccelerometer_obj::__new() {
	::hx::ObjectPtr< FlxAccelerometer_obj > __this = new FlxAccelerometer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxAccelerometer_obj > FlxAccelerometer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxAccelerometer_obj *__this = (FlxAccelerometer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAccelerometer_obj), true, "flixel.input.FlxAccelerometer"));
	*(void **)__this = FlxAccelerometer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxAccelerometer_obj::FlxAccelerometer_obj()
{
}

void FlxAccelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAccelerometer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(_sensor,"_sensor");
	HX_MARK_END_CLASS();
}

void FlxAccelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(_sensor,"_sensor");
}

::hx::Val FlxAccelerometer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sensor") ) { return ::hx::Val( _sensor ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isSupported() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return ::hx::Val( get_isSupported_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAccelerometer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sensor") ) { _sensor=inValue.Cast<  ::openfl::sensors::Accelerometer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAccelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("isSupported",e4,7c,8a,f3));
	outFields->push(HX_("_sensor",d9,43,07,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAccelerometer_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsObject /*  ::openfl::sensors::Accelerometer */ ,(int)offsetof(FlxAccelerometer_obj,_sensor),HX_("_sensor",d9,43,07,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAccelerometer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAccelerometer_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("_sensor",d9,43,07,da),
	HX_("get_isSupported",7b,34,6c,b4),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxAccelerometer_obj::__mClass;

void FlxAccelerometer_obj::__register()
{
	FlxAccelerometer_obj _hx_dummy;
	FlxAccelerometer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxAccelerometer",d3,8f,c6,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAccelerometer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAccelerometer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAccelerometer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAccelerometer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
