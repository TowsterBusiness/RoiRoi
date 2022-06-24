#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_439e5e3230d0e146_94_new,"openfl.events.AccelerometerEvent","new",0x41c806b4,"openfl.events.AccelerometerEvent.new","openfl/events/AccelerometerEvent.hx",94,0xf933e51c)
HX_LOCAL_STACK_FRAME(_hx_pos_439e5e3230d0e146_104_clone,"openfl.events.AccelerometerEvent","clone",0xf81086b1,"openfl.events.AccelerometerEvent.clone","openfl/events/AccelerometerEvent.hx",104,0xf933e51c)
HX_LOCAL_STACK_FRAME(_hx_pos_439e5e3230d0e146_114_toString,"openfl.events.AccelerometerEvent","toString",0x0df129d8,"openfl.events.AccelerometerEvent.toString","openfl/events/AccelerometerEvent.hx",114,0xf933e51c)
static const ::String _hx_array_data_5b31dcc2_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("timestamp",d6,d4,ce,a5),HX_("accelerationX",18,38,7f,7a),HX_("accelerationY",19,38,7f,7a),HX_("accelerationZ",1a,38,7f,7a),
};
HX_LOCAL_STACK_FRAME(_hx_pos_439e5e3230d0e146_126___init,"openfl.events.AccelerometerEvent","__init",0xfccb145c,"openfl.events.AccelerometerEvent.__init","openfl/events/AccelerometerEvent.hx",126,0xf933e51c)
HX_LOCAL_STACK_FRAME(_hx_pos_439e5e3230d0e146_32_boot,"openfl.events.AccelerometerEvent","boot",0x4556d75e,"openfl.events.AccelerometerEvent.boot","openfl/events/AccelerometerEvent.hx",32,0xf933e51c)
namespace openfl{
namespace events{

void AccelerometerEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_timestamp,::hx::Null< Float >  __o_accelerationX,::hx::Null< Float >  __o_accelerationY,::hx::Null< Float >  __o_accelerationZ){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		Float timestamp = __o_timestamp.Default(0);
            		Float accelerationX = __o_accelerationX.Default(0);
            		Float accelerationY = __o_accelerationY.Default(0);
            		Float accelerationZ = __o_accelerationZ.Default(0);
            	HX_STACKFRAME(&_hx_pos_439e5e3230d0e146_94_new)
HXLINE(  95)		super::__construct(type,bubbles,cancelable);
HXLINE(  97)		this->timestamp = timestamp;
HXLINE(  98)		this->accelerationX = accelerationX;
HXLINE(  99)		this->accelerationY = accelerationY;
HXLINE( 100)		this->accelerationZ = accelerationZ;
            	}

Dynamic AccelerometerEvent_obj::__CreateEmpty() { return new AccelerometerEvent_obj; }

void *AccelerometerEvent_obj::_hx_vtable = 0;

Dynamic AccelerometerEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AccelerometerEvent_obj > _hx_result = new AccelerometerEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool AccelerometerEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x5f3e8454;
	}
}

 ::openfl::events::Event AccelerometerEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_439e5e3230d0e146_104_clone)
HXLINE( 105)		 ::openfl::events::AccelerometerEvent event =  ::openfl::events::AccelerometerEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->timestamp,this->accelerationX,this->accelerationY,this->accelerationZ);
HXLINE( 106)		event->target = this->target;
HXLINE( 107)		event->currentTarget = this->currentTarget;
HXLINE( 108)		event->eventPhase = this->eventPhase;
HXLINE( 109)		return event;
            	}


::String AccelerometerEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_439e5e3230d0e146_114_toString)
HXDLIN( 114)		return this->_hx___formatToString(HX_("AccelerometerEvent",eb,2e,b8,f5),::Array_obj< ::String >::fromData( _hx_array_data_5b31dcc2_3,7));
            	}


void AccelerometerEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_439e5e3230d0e146_126___init)
HXLINE( 127)		this->super::_hx___init();
HXLINE( 128)		this->timestamp = ( (Float)(0) );
HXLINE( 129)		this->accelerationX = ( (Float)(0) );
HXLINE( 130)		this->accelerationY = ( (Float)(0) );
HXLINE( 131)		this->accelerationZ = ( (Float)(0) );
            	}


::String AccelerometerEvent_obj::UPDATE;


::hx::ObjectPtr< AccelerometerEvent_obj > AccelerometerEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_timestamp,::hx::Null< Float >  __o_accelerationX,::hx::Null< Float >  __o_accelerationY,::hx::Null< Float >  __o_accelerationZ) {
	::hx::ObjectPtr< AccelerometerEvent_obj > __this = new AccelerometerEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_timestamp,__o_accelerationX,__o_accelerationY,__o_accelerationZ);
	return __this;
}

::hx::ObjectPtr< AccelerometerEvent_obj > AccelerometerEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_timestamp,::hx::Null< Float >  __o_accelerationX,::hx::Null< Float >  __o_accelerationY,::hx::Null< Float >  __o_accelerationZ) {
	AccelerometerEvent_obj *__this = (AccelerometerEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AccelerometerEvent_obj), true, "openfl.events.AccelerometerEvent"));
	*(void **)__this = AccelerometerEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_timestamp,__o_accelerationX,__o_accelerationY,__o_accelerationZ);
	return __this;
}

AccelerometerEvent_obj::AccelerometerEvent_obj()
{
}

::hx::Val AccelerometerEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return ::hx::Val( timestamp ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerationX") ) { return ::hx::Val( accelerationX ); }
		if (HX_FIELD_EQ(inName,"accelerationY") ) { return ::hx::Val( accelerationY ); }
		if (HX_FIELD_EQ(inName,"accelerationZ") ) { return ::hx::Val( accelerationZ ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AccelerometerEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerationX") ) { accelerationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationY") ) { accelerationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationZ") ) { accelerationZ=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AccelerometerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("accelerationX",18,38,7f,7a));
	outFields->push(HX_("accelerationY",19,38,7f,7a));
	outFields->push(HX_("accelerationZ",1a,38,7f,7a));
	outFields->push(HX_("timestamp",d6,d4,ce,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AccelerometerEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationX),HX_("accelerationX",18,38,7f,7a)},
	{::hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationY),HX_("accelerationY",19,38,7f,7a)},
	{::hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationZ),HX_("accelerationZ",1a,38,7f,7a)},
	{::hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,timestamp),HX_("timestamp",d6,d4,ce,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AccelerometerEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AccelerometerEvent_obj::UPDATE,HX_("UPDATE",09,32,88,39)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AccelerometerEvent_obj_sMemberFields[] = {
	HX_("accelerationX",18,38,7f,7a),
	HX_("accelerationY",19,38,7f,7a),
	HX_("accelerationZ",1a,38,7f,7a),
	HX_("timestamp",d6,d4,ce,a5),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void AccelerometerEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AccelerometerEvent_obj::UPDATE,"UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AccelerometerEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AccelerometerEvent_obj::UPDATE,"UPDATE");
};

#endif

::hx::Class AccelerometerEvent_obj::__mClass;

static ::String AccelerometerEvent_obj_sStaticFields[] = {
	HX_("UPDATE",09,32,88,39),
	::String(null())
};

void AccelerometerEvent_obj::__register()
{
	AccelerometerEvent_obj _hx_dummy;
	AccelerometerEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.AccelerometerEvent",c2,dc,31,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AccelerometerEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AccelerometerEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AccelerometerEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AccelerometerEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AccelerometerEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AccelerometerEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AccelerometerEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AccelerometerEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_439e5e3230d0e146_32_boot)
HXDLIN(  32)		UPDATE = HX_("update",09,86,05,87);
            	}
}

} // end namespace openfl
} // end namespace events
