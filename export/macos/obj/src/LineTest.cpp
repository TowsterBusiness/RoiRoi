#include <hxcpp.h>

#ifndef INCLUDED_HoldLines
#include <HoldLines.h>
#endif
#ifndef INCLUDED_LineTest
#include <LineTest.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_FileTypes
#include <towsterFlxUtil/FileTypes.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Paths
#include <towsterFlxUtil/Paths.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb05b15d6f2a0bdd_12_new,"LineTest","new",0x4a132e78,"LineTest.new","LineTest.hx",12,0xe03047f8)
HX_LOCAL_STACK_FRAME(_hx_pos_bb05b15d6f2a0bdd_19_create,"LineTest","create",0xc59be7e4,"LineTest.create","LineTest.hx",19,0xe03047f8)
HX_LOCAL_STACK_FRAME(_hx_pos_bb05b15d6f2a0bdd_30_update,"LineTest","update",0xd09206f1,"LineTest.update","LineTest.hx",30,0xe03047f8)

void LineTest_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_bb05b15d6f2a0bdd_12_new)
HXLINE(  16)		this->pointManipulation = 0;
HXLINE(  12)		super::__construct(MaxSize);
            	}

Dynamic LineTest_obj::__CreateEmpty() { return new LineTest_obj; }

void *LineTest_obj::_hx_vtable = 0;

Dynamic LineTest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineTest_obj > _hx_result = new LineTest_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LineTest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x1647aaaa) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1647aaaa;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void LineTest_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bb05b15d6f2a0bdd_19_create)
HXLINE(  20)		this->super::create();
HXLINE(  21)		 ::flixel::FlxSprite sprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  21)		 ::flixel::FlxSprite sprite1 = sprite->loadGraphic(::towsterFlxUtil::Paths_obj::getFilePath(HX_("images/circle",c7,f5,17,b0),::towsterFlxUtil::FileTypes_obj::PNG_dyn()),null(),null(),null(),null(),null());
HXLINE(  22)		sprite1->setGraphicSize(50,50);
HXLINE(  23)		sprite1->updateHitbox();
HXLINE(  25)		 ::flixel::math::FlxPoint _hx_tmp =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN(  25)		this->testLine =  ::HoldLines_obj::__alloc( HX_CTX ,_hx_tmp, ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,100,100),sprite1,70);
HXLINE(  26)		this->add(this->testLine);
            	}


void LineTest_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bb05b15d6f2a0bdd_30_update)
HXLINE(  31)		this->super::update(elapsed);
HXLINE(  32)		switch((int)(this->pointManipulation)){
            			case (int)0: {
HXLINE(  35)				this->testLine->point->set(::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y);
            			}
            			break;
            			case (int)1: {
HXLINE(  37)				this->testLine->point2->set(::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y);
            			}
            			break;
            		}
HXLINE(  40)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  42)			this->pointManipulation++;
HXLINE(  43)			 ::LineTest _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  43)			_hx_tmp->pointManipulation = ::hx::Mod(_hx_tmp->pointManipulation,2);
            		}
HXLINE(  46)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  46)		if (_this->keyManager->checkStatusUnsafe(57,_this->status)) {
HXLINE(  48)			 ::flixel::FlxState nextState =  ::LineTest_obj::__alloc( HX_CTX ,null());
HXDLIN(  48)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  48)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}



::hx::ObjectPtr< LineTest_obj > LineTest_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< LineTest_obj > __this = new LineTest_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< LineTest_obj > LineTest_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	LineTest_obj *__this = (LineTest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineTest_obj), true, "LineTest"));
	*(void **)__this = LineTest_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

LineTest_obj::LineTest_obj()
{
}

void LineTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineTest);
	HX_MARK_MEMBER_NAME(testLine,"testLine");
	HX_MARK_MEMBER_NAME(pointManipulation,"pointManipulation");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testLine,"testLine");
	HX_VISIT_MEMBER_NAME(pointManipulation,"pointManipulation");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LineTest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testLine") ) { return ::hx::Val( testLine ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pointManipulation") ) { return ::hx::Val( pointManipulation ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LineTest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"testLine") ) { testLine=inValue.Cast<  ::HoldLines >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pointManipulation") ) { pointManipulation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("testLine",66,9d,e5,4a));
	outFields->push(HX_("pointManipulation",8d,5a,1a,22));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LineTest_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::HoldLines */ ,(int)offsetof(LineTest_obj,testLine),HX_("testLine",66,9d,e5,4a)},
	{::hx::fsInt,(int)offsetof(LineTest_obj,pointManipulation),HX_("pointManipulation",8d,5a,1a,22)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LineTest_obj_sStaticStorageInfo = 0;
#endif

static ::String LineTest_obj_sMemberFields[] = {
	HX_("testLine",66,9d,e5,4a),
	HX_("pointManipulation",8d,5a,1a,22),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class LineTest_obj::__mClass;

void LineTest_obj::__register()
{
	LineTest_obj _hx_dummy;
	LineTest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LineTest",86,d2,d4,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LineTest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LineTest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineTest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineTest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

