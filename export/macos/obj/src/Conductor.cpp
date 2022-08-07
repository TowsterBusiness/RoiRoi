#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9bd24c9adde08dff_6_new,"Conductor","new",0xc2a20839,"Conductor.new","Conductor.hx",6,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_26_getMil,"Conductor","getMil",0xafbfc061,"Conductor.getMil","Conductor.hx",26,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_34_isPastLastBPMChange,"Conductor","isPastLastBPMChange",0x53b15ad6,"Conductor.isPastLastBPMChange","Conductor.hx",34,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_55_pause,"Conductor","pause",0x5986770f,"Conductor.pause","Conductor.hx",55,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_63_start,"Conductor","start",0x203a147b,"Conductor.start","Conductor.hx",63,0xeb0fa157)

void Conductor_obj::__construct(::Array< ::Dynamic> bpmList){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_6_new)
HXLINE(  17)		this->paused = false;
HXLINE(  11)		this->lastBPMCheck = 0;
HXLINE(  21)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  21)		Float _hx_tmp;
HXDLIN(  21)		if ((timer > 0)) {
HXLINE(  21)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  21)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  21)		this->startTime = ::Math_obj::floor((_hx_tmp * ( (Float)(1000) )));
HXLINE(  22)		this->currentBPM = ( (Float)(bpmList->__get(0)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
            	}

Dynamic Conductor_obj::__CreateEmpty() { return new Conductor_obj; }

void *Conductor_obj::_hx_vtable = 0;

Dynamic Conductor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Conductor_obj > _hx_result = new Conductor_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Conductor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ee4ed07;
}

int Conductor_obj::getMil(){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_26_getMil)
HXLINE(  27)		if (this->paused) {
HXLINE(  28)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  28)			Float _hx_tmp;
HXDLIN(  28)			if ((timer > 0)) {
HXLINE(  28)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(  28)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN(  28)			int _hx_tmp1 = ::Math_obj::floor((_hx_tmp * ( (Float)(1000) )));
HXDLIN(  28)			int _hx_tmp2 = (this->startTime + this->pauseTime);
HXDLIN(  28)			int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  28)			Float _hx_tmp3;
HXDLIN(  28)			if ((timer1 > 0)) {
HXLINE(  28)				_hx_tmp3 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(  28)				_hx_tmp3 = ( (Float)(0) );
            			}
HXDLIN(  28)			return (_hx_tmp1 - (_hx_tmp2 + (::Math_obj::floor((_hx_tmp3 * ( (Float)(1000) ))) - this->pauseStart)));
            		}
HXLINE(  30)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  30)		Float _hx_tmp;
HXDLIN(  30)		if ((timer > 0)) {
HXLINE(  30)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  30)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  30)		return (::Math_obj::floor((_hx_tmp * ( (Float)(1000) ))) - (this->startTime + this->pauseTime));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Conductor_obj,getMil,return )

bool Conductor_obj::isPastLastBPMChange(){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_34_isPastLastBPMChange)
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			int _g1 = this->BPMList->length;
HXDLIN(  35)			while((_g < _g1)){
HXLINE(  35)				_g = (_g + 1);
HXDLIN(  35)				int i = (_g - 1);
HXLINE(  37)				int pointer = (this->BPMList->length - i);
HXLINE(  38)				int _hx_tmp = ( (int)(this->BPMList->__get(pointer)->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXDLIN(  38)				if ((_hx_tmp < this->getMil())) {
HXLINE(  40)					this->currentBPM = ( (Float)(this->BPMList->__get(pointer)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE(  41)					this->currentBPM_Time = ( (int)(this->BPMList->__get(pointer)->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXLINE(  42)					this->lastBPMCheck = ( (int)(this->BPMList->__get(pointer)->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
            				}
            			}
            		}
HXLINE(  46)		int _hx_tmp = this->getMil();
HXDLIN(  46)		if ((_hx_tmp > (this->lastBPMCheck + (this->currentBPM * ( (Float)(60000) ))))) {
HXLINE(  48)			this->lastBPMCheck = this->getMil();
HXLINE(  49)			return true;
            		}
HXLINE(  51)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Conductor_obj,isPastLastBPMChange,return )

void Conductor_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_55_pause)
HXLINE(  56)		if (this->paused) {
HXLINE(  57)			return;
            		}
HXLINE(  58)		this->paused = true;
HXLINE(  59)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  59)		Float _hx_tmp;
HXDLIN(  59)		if ((timer > 0)) {
HXLINE(  59)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  59)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  59)		this->pauseStart = ::Math_obj::floor((_hx_tmp * ( (Float)(1000) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Conductor_obj,pause,(void))

void Conductor_obj::start(){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_63_start)
HXLINE(  64)		if (!(this->paused)) {
HXLINE(  65)			return;
            		}
HXLINE(  66)		this->paused = false;
HXLINE(  67)		 ::Conductor _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  67)		int _hx_tmp1 = _hx_tmp->pauseTime;
HXDLIN(  67)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  67)		Float _hx_tmp2;
HXDLIN(  67)		if ((timer > 0)) {
HXLINE(  67)			_hx_tmp2 = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  67)			_hx_tmp2 = ( (Float)(0) );
            		}
HXDLIN(  67)		_hx_tmp->pauseTime = (_hx_tmp1 + (::Math_obj::floor((_hx_tmp2 * ( (Float)(1000) ))) - this->pauseStart));
HXLINE(  68)		this->pauseStart = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Conductor_obj,start,(void))


::hx::ObjectPtr< Conductor_obj > Conductor_obj::__new(::Array< ::Dynamic> bpmList) {
	::hx::ObjectPtr< Conductor_obj > __this = new Conductor_obj();
	__this->__construct(bpmList);
	return __this;
}

::hx::ObjectPtr< Conductor_obj > Conductor_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> bpmList) {
	Conductor_obj *__this = (Conductor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Conductor_obj), true, "Conductor"));
	*(void **)__this = Conductor_obj::_hx_vtable;
	__this->__construct(bpmList);
	return __this;
}

Conductor_obj::Conductor_obj()
{
}

void Conductor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Conductor);
	HX_MARK_MEMBER_NAME(BPMList,"BPMList");
	HX_MARK_MEMBER_NAME(currentBPM,"currentBPM");
	HX_MARK_MEMBER_NAME(currentBPM_Time,"currentBPM_Time");
	HX_MARK_MEMBER_NAME(lastBPMCheck,"lastBPMCheck");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(pauseStart,"pauseStart");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void Conductor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(BPMList,"BPMList");
	HX_VISIT_MEMBER_NAME(currentBPM,"currentBPM");
	HX_VISIT_MEMBER_NAME(currentBPM_Time,"currentBPM_Time");
	HX_VISIT_MEMBER_NAME(lastBPMCheck,"lastBPMCheck");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(pauseStart,"pauseStart");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

::hx::Val Conductor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"getMil") ) { return ::hx::Val( getMil_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"BPMList") ) { return ::hx::Val( BPMList ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return ::hx::Val( pauseTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentBPM") ) { return ::hx::Val( currentBPM ); }
		if (HX_FIELD_EQ(inName,"pauseStart") ) { return ::hx::Val( pauseStart ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastBPMCheck") ) { return ::hx::Val( lastBPMCheck ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentBPM_Time") ) { return ::hx::Val( currentBPM_Time ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPastLastBPMChange") ) { return ::hx::Val( isPastLastBPMChange_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Conductor_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"BPMList") ) { BPMList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentBPM") ) { currentBPM=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseStart") ) { pauseStart=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastBPMCheck") ) { lastBPMCheck=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentBPM_Time") ) { currentBPM_Time=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Conductor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BPMList",bd,6e,7c,3d));
	outFields->push(HX_("currentBPM",26,68,25,c7));
	outFields->push(HX_("currentBPM_Time",26,62,b8,6c));
	outFields->push(HX_("lastBPMCheck",df,a9,f5,e7));
	outFields->push(HX_("startTime",8f,45,f0,05));
	outFields->push(HX_("pauseTime",23,82,63,51));
	outFields->push(HX_("pauseStart",8c,11,84,59));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Conductor_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Conductor_obj,BPMList),HX_("BPMList",bd,6e,7c,3d)},
	{::hx::fsFloat,(int)offsetof(Conductor_obj,currentBPM),HX_("currentBPM",26,68,25,c7)},
	{::hx::fsInt,(int)offsetof(Conductor_obj,currentBPM_Time),HX_("currentBPM_Time",26,62,b8,6c)},
	{::hx::fsInt,(int)offsetof(Conductor_obj,lastBPMCheck),HX_("lastBPMCheck",df,a9,f5,e7)},
	{::hx::fsInt,(int)offsetof(Conductor_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{::hx::fsInt,(int)offsetof(Conductor_obj,pauseTime),HX_("pauseTime",23,82,63,51)},
	{::hx::fsInt,(int)offsetof(Conductor_obj,pauseStart),HX_("pauseStart",8c,11,84,59)},
	{::hx::fsBool,(int)offsetof(Conductor_obj,paused),HX_("paused",ae,40,84,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Conductor_obj_sStaticStorageInfo = 0;
#endif

static ::String Conductor_obj_sMemberFields[] = {
	HX_("BPMList",bd,6e,7c,3d),
	HX_("currentBPM",26,68,25,c7),
	HX_("currentBPM_Time",26,62,b8,6c),
	HX_("lastBPMCheck",df,a9,f5,e7),
	HX_("startTime",8f,45,f0,05),
	HX_("pauseTime",23,82,63,51),
	HX_("pauseStart",8c,11,84,59),
	HX_("paused",ae,40,84,ef),
	HX_("getMil",9a,4a,22,a3),
	HX_("isPastLastBPMChange",fd,20,98,32),
	HX_("pause",f6,d6,57,bd),
	HX_("start",62,74,0b,84),
	::String(null()) };

::hx::Class Conductor_obj::__mClass;

void Conductor_obj::__register()
{
	Conductor_obj _hx_dummy;
	Conductor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Conductor",c7,77,a1,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Conductor_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Conductor_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Conductor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Conductor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

