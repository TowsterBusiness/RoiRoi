#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_HoldLines
#include <HoldLines.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_FileTypes
#include <towsterFlxUtil/FileTypes.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Paths
#include <towsterFlxUtil/Paths.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Utils
#include <towsterFlxUtil/Utils.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_9_new,"Note","new",0x1cc75604,"Note.new","Note.hx",9,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_59_updateLine,"Note","updateLine",0x81f03979,"Note.updateLine","Note.hx",59,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_70_kill,"Note","kill",0x0fab497a,"Note.kill","Note.hx",70,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_79_revive,"Note","revive",0x4dab9331,"Note.revive","Note.hx",79,0x1a8855ec)

void Note_obj::__construct( ::Dynamic noteJson, ::Dynamic __o_isHold, ::Dynamic __o_sectionGraphicSize){
            		 ::Dynamic isHold = __o_isHold;
            		if (::hx::IsNull(__o_isHold)) isHold = false;
            		 ::Dynamic sectionGraphicSize = __o_sectionGraphicSize;
            		if (::hx::IsNull(__o_sectionGraphicSize)) sectionGraphicSize = 50;
            	HX_GC_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_9_new)
HXLINE(  24)		this->holdFailed = 0;
HXLINE(  23)		this->isHeld = false;
HXLINE(  17)		this->dead = false;
HXLINE(  28)		this->type = ( (int)(noteJson->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
HXLINE(  29)		this->holdLength = ( (int)(noteJson->__Field(HX_("holdLength",85,cb,33,c8),::hx::paccDynamic)) );
HXLINE(  30)		this->time = ( (int)(noteJson->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXLINE(  31)		this->position = ( (::Array< int >)(noteJson->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXLINE(  32)		this->sliderPoints = ( (::Array< int >)(noteJson->__Field(HX_("sliderPoints",24,1b,e4,6c),::hx::paccDynamic)) );
HXLINE(  34)		this->isHold = ( (bool)(isHold) );
HXLINE(  36)		super::__construct(0,0,null());
HXLINE(  38)		this->loadGraphic(::towsterFlxUtil::Paths_obj::getFilePath(HX_("images/circle",c7,f5,17,b0),::towsterFlxUtil::FileTypes_obj::PNG_dyn()),null(),null(),null(),null(),null());
HXLINE(  39)		int _hx_tmp = ::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.15),null()));
HXDLIN(  39)		this->setGraphicSize(_hx_tmp,::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.15),null())));
HXLINE(  40)		this->updateHitbox();
HXLINE(  42)		bool _hx_tmp1;
HXDLIN(  42)		if (!(( (bool)(isHold) ))) {
HXLINE(  42)			_hx_tmp1 = (this->holdLength > 0);
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = false;
            		}
HXDLIN(  42)		if (_hx_tmp1) {
HXLINE(  44)			 ::Note tempNoteEnd =  ::Note_obj::__alloc( HX_CTX ,noteJson,true,null());
HXLINE(  45)			 ::Note tempNoteEnd1 = tempNoteEnd;
HXDLIN(  45)			tempNoteEnd1->time = ( (int)((tempNoteEnd1->time + noteJson->__Field(HX_("holdLength",85,cb,33,c8),::hx::paccDynamic))) );
HXLINE(  46)			tempNoteEnd->holdLength = 0;
HXLINE(  47)			this->holdEndPointer = tempNoteEnd;
HXLINE(  49)			 ::flixel::FlxSprite tempSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  49)			 ::flixel::FlxSprite tempSprite1 = tempSprite->loadGraphic(::towsterFlxUtil::Paths_obj::getFilePath(HX_("images/circle",c7,f5,17,b0),::towsterFlxUtil::FileTypes_obj::PNG_dyn()),null(),null(),null(),null(),null());
HXLINE(  50)			tempSprite1->setGraphicSize(sectionGraphicSize,sectionGraphicSize);
HXLINE(  51)			tempSprite1->updateHitbox();
HXLINE(  53)			 ::flixel::math::FlxPoint tempNoteLine =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN(  53)			 ::HoldLines tempNoteLine1 =  ::HoldLines_obj::__alloc( HX_CTX ,tempNoteLine, ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,0),tempSprite1,70);
HXLINE(  54)			this->holdLinePointer = tempNoteLine1;
            		}
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x08363a36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08363a36;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Note_obj::updateLine(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_59_updateLine)
HXLINE(  60)		if ((this->holdLength <= 0)) {
HXLINE(  62)			::haxe::Log_obj::trace(HX_("only update this when note it a long note please",61,af,e1,c8),::hx::SourceInfo(HX_("source/Note.hx",78,cd,b1,52),62,HX_("Note",12,44,e3,33),HX_("updateLine",9d,02,68,00)));
HXLINE(  63)			return;
            		}
HXLINE(  65)		 ::flixel::math::FlxPoint _hx_tmp = this->holdLinePointer->point;
HXDLIN(  65)		Float _hx_tmp1 = this->x;
HXDLIN(  65)		Float _hx_tmp2 = (_hx_tmp1 + (this->get_width() / ( (Float)(2) )));
HXDLIN(  65)		Float _hx_tmp3 = this->y;
HXDLIN(  65)		_hx_tmp->set(_hx_tmp2,(_hx_tmp3 + (this->get_height() / ( (Float)(2) ))));
HXLINE(  66)		 ::flixel::math::FlxPoint _hx_tmp4 = this->holdLinePointer->point2;
HXDLIN(  66)		Float _hx_tmp5 = (this->holdEndPointer->x - ( (Float)(30) ));
HXDLIN(  66)		Float _hx_tmp6 = (_hx_tmp5 + (this->holdEndPointer->get_width() / ( (Float)(2) )));
HXDLIN(  66)		Float _hx_tmp7 = this->holdEndPointer->y;
HXDLIN(  66)		_hx_tmp4->set(_hx_tmp6,(_hx_tmp7 + (this->holdEndPointer->get_height() / ( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,updateLine,(void))

void Note_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_70_kill)
HXLINE(  71)		this->super::kill();
HXLINE(  72)		bool _hx_tmp;
HXDLIN(  72)		if (!(this->isHold)) {
HXLINE(  72)			_hx_tmp = (this->holdLength == 0);
            		}
            		else {
HXLINE(  72)			_hx_tmp = true;
            		}
HXDLIN(  72)		if (_hx_tmp) {
HXLINE(  73)			return;
            		}
HXLINE(  74)		this->holdEndPointer->kill();
HXLINE(  75)		this->holdLinePointer->kill();
            	}


void Note_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_79_revive)
HXLINE(  80)		this->super::revive();
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (!(this->isHold)) {
HXLINE(  81)			_hx_tmp = (this->holdLength == 0);
            		}
            		else {
HXLINE(  81)			_hx_tmp = true;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			return;
            		}
HXLINE(  83)		this->holdEndPointer->revive();
HXLINE(  84)		this->holdLinePointer->revive();
            	}



::hx::ObjectPtr< Note_obj > Note_obj::__new( ::Dynamic noteJson, ::Dynamic __o_isHold, ::Dynamic __o_sectionGraphicSize) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(noteJson,__o_isHold,__o_sectionGraphicSize);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic noteJson, ::Dynamic __o_isHold, ::Dynamic __o_sectionGraphicSize) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(noteJson,__o_isHold,__o_sectionGraphicSize);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(holdLength,"holdLength");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(sliderPoints,"sliderPoints");
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_MEMBER_NAME(holdEndPointer,"holdEndPointer");
	HX_MARK_MEMBER_NAME(holdLinePointer,"holdLinePointer");
	HX_MARK_MEMBER_NAME(isHold,"isHold");
	HX_MARK_MEMBER_NAME(isHeld,"isHeld");
	HX_MARK_MEMBER_NAME(holdFailed,"holdFailed");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(holdLength,"holdLength");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(sliderPoints,"sliderPoints");
	HX_VISIT_MEMBER_NAME(dead,"dead");
	HX_VISIT_MEMBER_NAME(holdEndPointer,"holdEndPointer");
	HX_VISIT_MEMBER_NAME(holdLinePointer,"holdLinePointer");
	HX_VISIT_MEMBER_NAME(isHold,"isHold");
	HX_VISIT_MEMBER_NAME(isHeld,"isHeld");
	HX_VISIT_MEMBER_NAME(holdFailed,"holdFailed");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"dead") ) { return ::hx::Val( dead ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isHold") ) { return ::hx::Val( isHold ); }
		if (HX_FIELD_EQ(inName,"isHeld") ) { return ::hx::Val( isHeld ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"holdLength") ) { return ::hx::Val( holdLength ); }
		if (HX_FIELD_EQ(inName,"holdFailed") ) { return ::hx::Val( holdFailed ); }
		if (HX_FIELD_EQ(inName,"updateLine") ) { return ::hx::Val( updateLine_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sliderPoints") ) { return ::hx::Val( sliderPoints ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"holdEndPointer") ) { return ::hx::Val( holdEndPointer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"holdLinePointer") ) { return ::hx::Val( holdLinePointer ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isHold") ) { isHold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isHeld") ) { isHeld=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"holdLength") ) { holdLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdFailed") ) { holdFailed=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sliderPoints") ) { sliderPoints=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"holdEndPointer") ) { holdEndPointer=inValue.Cast<  ::Note >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"holdLinePointer") ) { holdLinePointer=inValue.Cast<  ::HoldLines >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("holdLength",85,cb,33,c8));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("sliderPoints",24,1b,e4,6c));
	outFields->push(HX_("dead",a4,4e,66,42));
	outFields->push(HX_("holdEndPointer",41,58,79,56));
	outFields->push(HX_("holdLinePointer",2a,e0,03,7f));
	outFields->push(HX_("isHold",49,8e,79,62));
	outFields->push(HX_("isHeld",bf,f7,71,62));
	outFields->push(HX_("holdFailed",5c,fc,2a,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Note_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(Note_obj,holdLength),HX_("holdLength",85,cb,33,c8)},
	{::hx::fsInt,(int)offsetof(Note_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Note_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Note_obj,sliderPoints),HX_("sliderPoints",24,1b,e4,6c)},
	{::hx::fsBool,(int)offsetof(Note_obj,dead),HX_("dead",a4,4e,66,42)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,holdEndPointer),HX_("holdEndPointer",41,58,79,56)},
	{::hx::fsObject /*  ::HoldLines */ ,(int)offsetof(Note_obj,holdLinePointer),HX_("holdLinePointer",2a,e0,03,7f)},
	{::hx::fsBool,(int)offsetof(Note_obj,isHold),HX_("isHold",49,8e,79,62)},
	{::hx::fsBool,(int)offsetof(Note_obj,isHeld),HX_("isHeld",bf,f7,71,62)},
	{::hx::fsInt,(int)offsetof(Note_obj,holdFailed),HX_("holdFailed",5c,fc,2a,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Note_obj_sStaticStorageInfo = 0;
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("holdLength",85,cb,33,c8),
	HX_("time",0d,cc,fc,4c),
	HX_("position",a9,a0,fa,ca),
	HX_("sliderPoints",24,1b,e4,6c),
	HX_("dead",a4,4e,66,42),
	HX_("holdEndPointer",41,58,79,56),
	HX_("holdLinePointer",2a,e0,03,7f),
	HX_("isHold",49,8e,79,62),
	HX_("isHeld",bf,f7,71,62),
	HX_("holdFailed",5c,fc,2a,11),
	HX_("updateLine",9d,02,68,00),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	::String(null()) };

::hx::Class Note_obj::__mClass;

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Note",12,44,e3,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

