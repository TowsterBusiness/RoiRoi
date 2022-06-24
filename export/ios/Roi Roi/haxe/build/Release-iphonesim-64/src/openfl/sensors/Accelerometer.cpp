#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Float_Void
#include <lime/app/_Event_Float_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_system_Sensor
#include <lime/system/Sensor.h>
#endif
#ifndef INCLUDED_lime_system_SensorType
#include <lime/system/SensorType.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_111_new,"openfl.sensors.Accelerometer","new",0xc90bd80e,"openfl.sensors.Accelerometer.new","openfl/sensors/Accelerometer.hx",111,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_124_addEventListener,"openfl.sensors.Accelerometer","addEventListener",0x24c24f5f,"openfl.sensors.Accelerometer.addEventListener","openfl/sensors/Accelerometer.hx",124,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_164_setRequestedUpdateInterval,"openfl.sensors.Accelerometer","setRequestedUpdateInterval",0x3228fd0c,"openfl.sensors.Accelerometer.setRequestedUpdateInterval","openfl/sensors/Accelerometer.hx",164,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_190_update,"openfl.sensors.Accelerometer","update",0x14ceff1b,"openfl.sensors.Accelerometer.update","openfl/sensors/Accelerometer.hx",190,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_219_get_muted,"openfl.sensors.Accelerometer","get_muted",0xd092e9f0,"openfl.sensors.Accelerometer.get_muted","openfl/sensors/Accelerometer.hx",219,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_223_set_muted,"openfl.sensors.Accelerometer","set_muted",0xb3e3d5fc,"openfl.sensors.Accelerometer.set_muted","openfl/sensors/Accelerometer.hx",223,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_131_initialize,"openfl.sensors.Accelerometer","initialize",0x6c6b9b62,"openfl.sensors.Accelerometer.initialize","openfl/sensors/Accelerometer.hx",131,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_203_accelerometer_onUpdate,"openfl.sensors.Accelerometer","accelerometer_onUpdate",0xa4ccc04a,"openfl.sensors.Accelerometer.accelerometer_onUpdate","openfl/sensors/Accelerometer.hx",203,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_211_get_isSupported,"openfl.sensors.Accelerometer","get_isSupported",0x5d680929,"openfl.sensors.Accelerometer.get_isSupported","openfl/sensors/Accelerometer.hx",211,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_73_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",73,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_74_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",74,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_75_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",75,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_76_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",76,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_77_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",77,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_78_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",78,0x246a7024)
namespace openfl{
namespace sensors{

void Accelerometer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_111_new)
HXLINE( 112)		super::__construct(null());
HXLINE( 114)		::openfl::sensors::Accelerometer_obj::initialize();
HXLINE( 116)		this->_hx___interval = 0;
HXLINE( 117)		this->_hx___muted = false;
HXLINE( 119)		this->setRequestedUpdateInterval(::openfl::sensors::Accelerometer_obj::defaultInterval);
            	}

Dynamic Accelerometer_obj::__CreateEmpty() { return new Accelerometer_obj; }

void *Accelerometer_obj::_hx_vtable = 0;

Dynamic Accelerometer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Accelerometer_obj > _hx_result = new Accelerometer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Accelerometer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x5bea9c26;
	}
}

void Accelerometer_obj::addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_124_addEventListener)
HXLINE( 125)		::String type = _tmp_type;
HXDLIN( 125)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 125)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 126)		this->update();
            	}


void Accelerometer_obj::setRequestedUpdateInterval(int interval){
            	HX_GC_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_164_setRequestedUpdateInterval)
HXLINE( 165)		this->_hx___interval = interval;
HXLINE( 167)		if ((this->_hx___interval < 0)) {
HXLINE( 169)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,null())));
            		}
            		else {
HXLINE( 171)			if ((this->_hx___interval == 0)) {
HXLINE( 173)				this->_hx___interval = ::openfl::sensors::Accelerometer_obj::defaultInterval;
            			}
            		}
HXLINE( 176)		if (::hx::IsNotNull( this->_hx___timer )) {
HXLINE( 178)			this->_hx___timer->stop();
HXLINE( 179)			this->_hx___timer = null();
            		}
HXLINE( 182)		bool _hx_tmp;
HXDLIN( 182)		if (::openfl::sensors::Accelerometer_obj::supported) {
HXLINE( 182)			_hx_tmp = !(this->get_muted());
            		}
            		else {
HXLINE( 182)			_hx_tmp = false;
            		}
HXDLIN( 182)		if (_hx_tmp) {
HXLINE( 184)			this->_hx___timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(this->_hx___interval) ));
HXLINE( 185)			this->_hx___timer->run = this->update_dyn();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,setRequestedUpdateInterval,(void))

void Accelerometer_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_190_update)
HXLINE( 191)		 ::openfl::events::AccelerometerEvent event =  ::openfl::events::AccelerometerEvent_obj::__alloc( HX_CTX ,HX_("update",09,86,05,87),null(),null(),null(),null(),null(),null());
HXLINE( 193)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 193)		Float _hx_tmp;
HXDLIN( 193)		if ((timer > 0)) {
HXLINE( 193)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 193)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 193)		event->timestamp = _hx_tmp;
HXLINE( 194)		event->accelerationX = ::openfl::sensors::Accelerometer_obj::currentX;
HXLINE( 195)		event->accelerationY = ::openfl::sensors::Accelerometer_obj::currentY;
HXLINE( 196)		event->accelerationZ = ::openfl::sensors::Accelerometer_obj::currentZ;
HXLINE( 198)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,update,(void))

bool Accelerometer_obj::get_muted(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_219_get_muted)
HXDLIN( 219)		return this->_hx___muted;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_muted,return )

bool Accelerometer_obj::set_muted(bool value){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_223_set_muted)
HXLINE( 224)		this->_hx___muted = value;
HXLINE( 225)		this->setRequestedUpdateInterval(this->_hx___interval);
HXLINE( 227)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,set_muted,return )

Float Accelerometer_obj::currentX;

Float Accelerometer_obj::currentY;

Float Accelerometer_obj::currentZ;

int Accelerometer_obj::defaultInterval;

bool Accelerometer_obj::initialized;

bool Accelerometer_obj::supported;

void Accelerometer_obj::initialize(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_131_initialize)
HXDLIN( 131)		if (!(::openfl::sensors::Accelerometer_obj::initialized)) {
HXLINE( 134)			::Array< ::Dynamic> sensors = ::lime::_hx_system::Sensor_obj::getSensors(::lime::_hx_system::SensorType_obj::ACCELEROMETER_dyn());
HXLINE( 136)			if ((sensors->length > 0)) {
HXLINE( 138)				sensors->__get(0).StaticCast<  ::lime::_hx_system::Sensor >()->onUpdate->add(::openfl::sensors::Accelerometer_obj::accelerometer_onUpdate_dyn(),null(),null());
HXLINE( 139)				::openfl::sensors::Accelerometer_obj::supported = true;
            			}
HXLINE( 143)			::openfl::sensors::Accelerometer_obj::initialized = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,initialize,(void))

void Accelerometer_obj::accelerometer_onUpdate(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_203_accelerometer_onUpdate)
HXLINE( 204)		::openfl::sensors::Accelerometer_obj::currentX = x;
HXLINE( 205)		::openfl::sensors::Accelerometer_obj::currentY = y;
HXLINE( 206)		::openfl::sensors::Accelerometer_obj::currentZ = z;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Accelerometer_obj,accelerometer_onUpdate,(void))

bool Accelerometer_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_211_get_isSupported)
HXLINE( 212)		::openfl::sensors::Accelerometer_obj::initialize();
HXLINE( 214)		return ::openfl::sensors::Accelerometer_obj::supported;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_isSupported,return )


::hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new() {
	::hx::ObjectPtr< Accelerometer_obj > __this = new Accelerometer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Accelerometer_obj *__this = (Accelerometer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Accelerometer_obj), true, "openfl.sensors.Accelerometer"));
	*(void **)__this = Accelerometer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_MEMBER_NAME(_hx___interval,"__interval");
	HX_MARK_MEMBER_NAME(_hx___muted,"__muted");
	HX_MARK_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___interval,"__interval");
	HX_VISIT_MEMBER_NAME(_hx___muted,"__muted");
	HX_VISIT_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Accelerometer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_muted() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__muted") ) { return ::hx::Val( _hx___muted ); }
		if (HX_FIELD_EQ(inName,"__timer") ) { return ::hx::Val( _hx___timer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_muted") ) { return ::hx::Val( get_muted_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_muted") ) { return ::hx::Val( set_muted_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__interval") ) { return ::hx::Val( _hx___interval ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setRequestedUpdateInterval") ) { return ::hx::Val( setRequestedUpdateInterval_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Accelerometer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"currentX") ) { outValue = ( currentX ); return true; }
		if (HX_FIELD_EQ(inName,"currentY") ) { outValue = ( currentY ); return true; }
		if (HX_FIELD_EQ(inName,"currentZ") ) { outValue = ( currentZ ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"supported") ) { outValue = ( supported ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_isSupported() ); return true; } }
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { outValue = ( defaultInterval ); return true; }
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerometer_onUpdate") ) { outValue = accelerometer_onUpdate_dyn(); return true; }
	}
	return false;
}

::hx::Val Accelerometer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_muted(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__muted") ) { _hx___muted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__timer") ) { _hx___timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__interval") ) { _hx___interval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Accelerometer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"currentX") ) { currentX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"currentY") ) { currentY=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"currentZ") ) { currentZ=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"supported") ) { supported=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { defaultInterval=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("muted",6b,8f,5b,10));
	outFields->push(HX_("__interval",65,ec,b4,cb));
	outFields->push(HX_("__muted",4b,e8,b9,7a));
	outFields->push(HX_("__timer",a5,18,94,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Accelerometer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Accelerometer_obj,_hx___interval),HX_("__interval",65,ec,b4,cb)},
	{::hx::fsBool,(int)offsetof(Accelerometer_obj,_hx___muted),HX_("__muted",4b,e8,b9,7a)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(Accelerometer_obj,_hx___timer),HX_("__timer",a5,18,94,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Accelerometer_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Accelerometer_obj::currentX,HX_("currentX",ff,15,45,9b)},
	{::hx::fsFloat,(void *) &Accelerometer_obj::currentY,HX_("currentY",00,16,45,9b)},
	{::hx::fsFloat,(void *) &Accelerometer_obj::currentZ,HX_("currentZ",01,16,45,9b)},
	{::hx::fsInt,(void *) &Accelerometer_obj::defaultInterval,HX_("defaultInterval",26,37,8a,51)},
	{::hx::fsBool,(void *) &Accelerometer_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsBool,(void *) &Accelerometer_obj::supported,HX_("supported",2e,c6,09,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Accelerometer_obj_sMemberFields[] = {
	HX_("__interval",65,ec,b4,cb),
	HX_("__muted",4b,e8,b9,7a),
	HX_("__timer",a5,18,94,7a),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("setRequestedUpdateInterval",fa,ce,5f,28),
	HX_("update",09,86,05,87),
	HX_("get_muted",c2,eb,04,54),
	HX_("set_muted",ce,d7,55,37),
	::String(null()) };

static void Accelerometer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::currentX,"currentX");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::currentY,"currentY");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::currentZ,"currentZ");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::defaultInterval,"defaultInterval");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::supported,"supported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Accelerometer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::currentX,"currentX");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::currentY,"currentY");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::currentZ,"currentZ");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::defaultInterval,"defaultInterval");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::supported,"supported");
};

#endif

::hx::Class Accelerometer_obj::__mClass;

static ::String Accelerometer_obj_sStaticFields[] = {
	HX_("currentX",ff,15,45,9b),
	HX_("currentY",00,16,45,9b),
	HX_("currentZ",01,16,45,9b),
	HX_("defaultInterval",26,37,8a,51),
	HX_("initialized",14,f5,0f,37),
	HX_("supported",2e,c6,09,15),
	HX_("initialize",50,31,bb,ec),
	HX_("accelerometer_onUpdate",38,83,9c,c1),
	HX_("get_isSupported",7b,34,6c,b4),
	::String(null())
};

void Accelerometer_obj::__register()
{
	Accelerometer_obj _hx_dummy;
	Accelerometer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.sensors.Accelerometer",1c,79,67,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Accelerometer_obj::__GetStatic;
	__mClass->mSetStaticField = &Accelerometer_obj::__SetStatic;
	__mClass->mMarkFunc = Accelerometer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Accelerometer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Accelerometer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Accelerometer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Accelerometer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Accelerometer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Accelerometer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Accelerometer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_73_boot)
HXDLIN(  73)		currentX = ((Float)0.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_74_boot)
HXDLIN(  74)		currentY = ((Float)1.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_75_boot)
HXDLIN(  75)		currentZ = ((Float)0.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_76_boot)
HXDLIN(  76)		defaultInterval = 34;
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_77_boot)
HXDLIN(  77)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_78_boot)
HXDLIN(  78)		supported = false;
            	}
}

} // end namespace openfl
} // end namespace sensors
