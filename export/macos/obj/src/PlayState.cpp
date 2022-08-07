#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_HoldLines
#include <HoldLines.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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
#ifndef INCLUDED_towsterFlxUtil_Utils
#include <towsterFlxUtil/Utils.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_28_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",28,0xb30d7781)
static const int _hx_array_data_46c2835d_1[] = {
	(int)10,(int)20,(int)50,(int)180,(int)200,
};
static const Float _hx_array_data_46c2835d_2[] = {
	0.49,0.45,
};
static const Float _hx_array_data_46c2835d_3[] = {
	0.49,0.5,
};
static const Float _hx_array_data_46c2835d_4[] = {
	0.49,0.55,
};
static const Float _hx_array_data_46c2835d_5[] = {
	0.51,0.45,
};
static const Float _hx_array_data_46c2835d_6[] = {
	0.51,0.5,
};
static const Float _hx_array_data_46c2835d_7[] = {
	0.51,0.55,
};
static const Float _hx_array_data_46c2835d_8[] = {
	0.125,0.125,
};
static const Float _hx_array_data_46c2835d_9[] = {
	0.075,0.425,
};
static const Float _hx_array_data_46c2835d_10[] = {
	0.125,0.725,
};
static const Float _hx_array_data_46c2835d_11[] = {
	0.775,0.125,
};
static const Float _hx_array_data_46c2835d_12[] = {
	0.825,0.425,
};
static const Float _hx_array_data_46c2835d_13[] = {
	0.775,0.725,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_70_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",70,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_137_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",137,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_116_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",116,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_172_inputPressed,"PlayState","inputPressed",0xed489f69,"PlayState.inputPressed","PlayState.hx",172,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_168_inputPressed,"PlayState","inputPressed",0xed489f69,"PlayState.inputPressed","PlayState.hx",168,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_196_inputReleased,"PlayState","inputReleased",0xb918ea16,"PlayState.inputReleased","PlayState.hx",196,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_192_inputReleased,"PlayState","inputReleased",0xb918ea16,"PlayState.inputReleased","PlayState.hx",192,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_220_noteRater,"PlayState","noteRater",0x5e043fef,"PlayState.noteRater","PlayState.hx",220,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_232_raterActions,"PlayState","raterActions",0x3eada43c,"PlayState.raterActions","PlayState.hx",232,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_246_addCombo,"PlayState","addCombo",0x727dd59e,"PlayState.addCombo","PlayState.hx",246,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_256_killCombo,"PlayState","killCombo",0x740e1f7f,"PlayState.killCombo","PlayState.hx",256,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_266_addScore,"PlayState","addScore",0xa0fa20a2,"PlayState.addScore","PlayState.hx",266,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_277_reOrganizeNotes,"PlayState","reOrganizeNotes",0xb5e69a5a,"PlayState.reOrganizeNotes","PlayState.hx",277,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_272_reOrganizeNotes,"PlayState","reOrganizeNotes",0xb5e69a5a,"PlayState.reOrganizeNotes","PlayState.hx",272,0xb30d7781)
static const int _hx_array_data_46c2835d_32[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_309_moveNote,"PlayState","moveNote",0x9a850ad4,"PlayState.moveNote","PlayState.hx",309,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_320_onFocusLost,"PlayState","onFocusLost",0x4ad4322c,"PlayState.onFocusLost","PlayState.hx",320,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_326_onFocus,"PlayState","onFocus",0xe5082828,"PlayState.onFocus","PlayState.hx",326,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_28_new)
HXLINE( 217)		this->noteAccuracyList = ::Array_obj< int >::fromData( _hx_array_data_46c2835d_1,5);
HXLINE(  67)		int _hx_tmp;
HXDLIN(  67)		::String s = HX_("R",52,00,00,00);
HXDLIN(  67)		s = s.toUpperCase();
HXDLIN(  67)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s)) {
HXLINE(  67)			_hx_tmp = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s);
            		}
            		else {
HXLINE(  67)			_hx_tmp = -1;
            		}
HXDLIN(  67)		int _hx_tmp1;
HXDLIN(  67)		::String s1 = HX_("F",46,00,00,00);
HXDLIN(  67)		s1 = s1.toUpperCase();
HXDLIN(  67)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s1)) {
HXLINE(  67)			_hx_tmp1 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s1);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = -1;
            		}
HXDLIN(  67)		int _hx_tmp2;
HXDLIN(  67)		::String s2 = HX_("V",56,00,00,00);
HXDLIN(  67)		s2 = s2.toUpperCase();
HXDLIN(  67)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s2)) {
HXLINE(  67)			_hx_tmp2 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s2);
            		}
            		else {
HXLINE(  67)			_hx_tmp2 = -1;
            		}
HXDLIN(  67)		int _hx_tmp3;
HXDLIN(  67)		::String s3 = HX_("I",49,00,00,00);
HXDLIN(  67)		s3 = s3.toUpperCase();
HXDLIN(  67)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s3)) {
HXLINE(  67)			_hx_tmp3 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s3);
            		}
            		else {
HXLINE(  67)			_hx_tmp3 = -1;
            		}
HXDLIN(  67)		int _hx_tmp4;
HXDLIN(  67)		::String s4 = HX_("J",4a,00,00,00);
HXDLIN(  67)		s4 = s4.toUpperCase();
HXDLIN(  67)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s4)) {
HXLINE(  67)			_hx_tmp4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s4);
            		}
            		else {
HXLINE(  67)			_hx_tmp4 = -1;
            		}
HXDLIN(  67)		::String s5 = HX_("N",4e,00,00,00);
HXDLIN(  67)		s5 = s5.toUpperCase();
HXDLIN(  67)		int _hx_tmp5;
HXDLIN(  67)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s5)) {
HXLINE(  67)			_hx_tmp5 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s5);
            		}
            		else {
HXLINE(  67)			_hx_tmp5 = -1;
            		}
HXDLIN(  67)		this->keyBinds = ::Array_obj< int >::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,_hx_tmp5);
HXLINE(  58)		this->doorPosList = ::Array_obj< ::Dynamic>::__new(6)->init(0,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_2,2))->init(1,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_3,2))->init(2,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_4,2))->init(3,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_5,2))->init(4,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_6,2))->init(5,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_7,2));
HXLINE(  49)		this->inputCirclePosList = ::Array_obj< ::Dynamic>::__new(6)->init(0,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_8,2))->init(1,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_9,2))->init(2,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_10,2))->init(3,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_11,2))->init(4,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_12,2))->init(5,::Array_obj< Float >::fromData( _hx_array_data_46c2835d_13,2));
HXLINE(  46)		this->combo = 0;
HXLINE(  43)		this->score = 0;
HXLINE(  41)		this->noteLoadSpeed = 200;
HXLINE(  40)		this->scrollSpeed = 1000;
HXLINE(  28)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_70_create)
HXLINE(  75)		::towsterFlxUtil::Utils_obj::windowWidth = ( (Float)(::openfl::Lib_obj::get_application()->_hx___window->_hx___width) );
HXLINE(  76)		::towsterFlxUtil::Utils_obj::windowHeight = ( (Float)(::openfl::Lib_obj::get_application()->_hx___window->_hx___height) );
HXLINE(  79)		this->comboBoard =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("0x",48,2a,00,00),100,null());
HXLINE(  80)		this->comboBoard->set_font(HX_("assets/fonts/Nunito-VariableFont_wght.ttf",cf,22,31,02));
HXLINE(  81)		this->comboBoard->set_bold(true);
HXLINE(  82)		{
HXLINE(  82)			 ::flixel::text::FlxText _this = this->comboBoard;
HXDLIN(  82)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  82)			if (::hx::IsNull( axes )) {
HXLINE(  82)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  82)			bool _hx_tmp;
HXDLIN(  82)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  82)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  82)					_hx_tmp = false;
            				}
            			}
HXDLIN(  82)			if (_hx_tmp) {
HXLINE(  82)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  82)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  82)			bool _hx_tmp1;
HXDLIN(  82)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  82)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  82)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  82)			if (_hx_tmp1) {
HXLINE(  82)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  82)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  83)		{
HXLINE(  83)			 ::flixel::text::FlxText _this1 = this->comboBoard;
HXDLIN(  83)			_this1->origin->set((( (Float)(_this1->frameWidth) ) * ((Float)0.5)),(( (Float)(_this1->frameHeight) ) * ((Float)0.5)));
            		}
HXLINE(  84)		this->add(this->comboBoard);
HXLINE(  86)		this->scoreBoard =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("0",30,00,00,00),30,null());
HXLINE(  87)		this->scoreBoard->set_font(HX_("assets/fonts/Nunito-VariableFont_wght.ttf",cf,22,31,02));
HXLINE(  88)		this->add(this->scoreBoard);
HXLINE(  90)		this->songJson = ::towsterFlxUtil::Paths_obj::getFile(HX_("data/songs/Plus-Danshi/chart-easy",e0,8d,01,79),::towsterFlxUtil::FileTypes_obj::JSON_dyn());
HXLINE(  91)		this->conductor =  ::Conductor_obj::__alloc( HX_CTX ,( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("bpmList",dd,62,69,a8),::hx::paccDynamic)) ));
HXLINE(  93)		this->inputCircles =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,0,0,this->inputCirclePosList->length);
HXLINE(  94)		this->add(this->inputCircles);
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			::Array< ::Dynamic> _g1 = this->inputCirclePosList;
HXDLIN(  95)			while((_g < _g1->length)){
HXLINE(  95)				::Array< Float > pos = _g1->__get(_g).StaticCast< ::Array< Float > >();
HXDLIN(  95)				_g = (_g + 1);
HXLINE(  97)				Float circle = ::towsterFlxUtil::Utils_obj::percentFromWidth(pos->__get(0),null());
HXDLIN(  97)				 ::flixel::FlxSprite circle1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,circle,::towsterFlxUtil::Utils_obj::percentFromHeight(pos->__get(1),null()),null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  98)				int _hx_tmp = ::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.15),null()));
HXDLIN(  98)				circle1->setGraphicSize(_hx_tmp,::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.15),null())));
HXLINE(  99)				circle1->updateHitbox();
HXLINE( 100)				this->inputCircles->add(circle1).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 103)		this->noteHoldEnds =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,0,0,999);
HXLINE( 104)		this->add(this->noteHoldEnds);
HXLINE( 106)		this->activeNotes =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,0,0,99999);
HXLINE( 107)		this->add(this->activeNotes);
HXLINE( 109)		this->noteHoldLines =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,0,0,999);
HXLINE( 110)		this->add(this->noteHoldLines);
HXLINE( 112)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis) HXARGC(1)
            		void _hx_run( ::Note activeNote){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_137_update)
HXLINE( 138)			if ((activeNote->holdLength == 0)) {
HXLINE( 140)				_gthis->moveNote(activeNote,null());
            			}
            			else {
HXLINE( 144)				if ((activeNote->holdFailed != 0)) {
HXLINE( 145)					_gthis->moveNote(activeNote,(activeNote->holdFailed - activeNote->time));
            				}
            				else {
HXLINE( 147)					_gthis->moveNote(activeNote,null());
            				}
HXLINE( 149)				_gthis->moveNote(activeNote->holdEndPointer,null());
HXLINE( 150)				 ::flixel::math::FlxPoint activeNote1 = activeNote->holdLinePointer->point;
HXDLIN( 150)				Float activeNote2 = activeNote->x;
HXDLIN( 150)				Float _hx_tmp = (activeNote2 + (activeNote->get_width() / ( (Float)(2) )));
HXDLIN( 150)				Float activeNote3 = activeNote->y;
HXDLIN( 150)				activeNote1->set(_hx_tmp,(activeNote3 + (activeNote->get_width() / ( (Float)(2) ))));
HXLINE( 151)				 ::flixel::math::FlxPoint activeNote4 = activeNote->holdLinePointer->point2;
HXDLIN( 151)				Float activeNote5 = activeNote->holdEndPointer->x;
HXDLIN( 151)				Float _hx_tmp1 = (activeNote5 + (activeNote->holdEndPointer->get_width() / ( (Float)(2) )));
HXLINE( 152)				Float activeNote6 = activeNote->holdEndPointer->y;
HXLINE( 151)				activeNote4->set(_hx_tmp1,(activeNote6 + (activeNote->holdEndPointer->get_height() / ( (Float)(2) ))));
            			}
HXLINE( 155)			bool _hx_tmp;
HXDLIN( 155)			bool _hx_tmp1;
HXDLIN( 155)			int _hx_tmp2 = _gthis->conductor->getMil();
HXDLIN( 155)			if (((_hx_tmp2 - _gthis->noteAccuracyList->__get((_gthis->noteAccuracyList->length - 1))) > activeNote->time)) {
HXLINE( 155)				_hx_tmp1 = !(activeNote->dead);
            			}
            			else {
HXLINE( 155)				_hx_tmp1 = false;
            			}
HXDLIN( 155)			if (_hx_tmp1) {
HXLINE( 155)				_hx_tmp = !(activeNote->isHeld);
            			}
            			else {
HXLINE( 155)				_hx_tmp = false;
            			}
HXDLIN( 155)			if (_hx_tmp) {
HXLINE( 159)				_gthis->killCombo();
HXLINE( 160)				activeNote->dead = true;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_116_update)
HXDLIN( 116)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 117)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 117)		if (_this->keyManager->checkStatusUnsafe(57,_this->status)) {
HXLINE( 119)			 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN( 119)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 119)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 122)		this->reOrganizeNotes();
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			int _g1 = this->keyBinds->length;
HXDLIN( 124)			while((_g < _g1)){
HXLINE( 124)				_g = (_g + 1);
HXDLIN( 124)				int keyIndex = (_g - 1);
HXLINE( 126)				if (::flixel::FlxG_obj::keys->checkStatus(this->keyBinds->__get(keyIndex),2)) {
HXLINE( 128)					this->inputPressed(keyIndex);
            				}
HXLINE( 130)				if (::flixel::FlxG_obj::keys->checkStatus(this->keyBinds->__get(keyIndex),-1)) {
HXLINE( 132)					this->inputReleased(keyIndex);
            				}
            			}
            		}
HXLINE( 136)		this->activeNotes->group->forEachAlive( ::Dynamic(new _hx_Closure_0(_gthis)),false);
HXLINE( 164)		this->super::update(elapsed);
            	}


void PlayState_obj::inputPressed(int keyNum){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis,int,keyNum) HXARGC(1)
            		void _hx_run( ::Note activeNote){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_172_inputPressed)
HXLINE( 173)			int noteAcc = _gthis->noteRater(activeNote);
HXLINE( 175)			bool _hx_tmp;
HXDLIN( 175)			if ((activeNote->type == keyNum)) {
HXLINE( 175)				_hx_tmp = (noteAcc == _gthis->noteAccuracyList->length);
            			}
            			else {
HXLINE( 175)				_hx_tmp = true;
            			}
HXDLIN( 175)			if (_hx_tmp) {
HXLINE( 176)				return;
            			}
HXLINE( 178)			_gthis->raterActions(noteAcc,null());
HXLINE( 179)			if ((activeNote->holdLength == 0)) {
HXLINE( 181)				activeNote->kill();
            			}
            			else {
HXLINE( 183)				if ((activeNote->holdFailed == 0)) {
HXLINE( 185)					activeNote->isHeld = true;
HXLINE( 186)					activeNote->dead = true;
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_168_inputPressed)
HXDLIN( 168)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 169)		 ::flixel::FlxSprite _hx_tmp = Dynamic( this->inputCircles->group->members->__get(keyNum)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 169)		int _hx_tmp1 = ::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.16),null()));
HXDLIN( 169)		_hx_tmp->setGraphicSize(_hx_tmp1,::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.16),null())));
HXLINE( 171)		this->activeNotes->group->forEachAlive( ::Dynamic(new _hx_Closure_0(_gthis,keyNum)),false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,inputPressed,(void))

void PlayState_obj::inputReleased(int keyNum){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis,int,keyNum) HXARGC(1)
            		void _hx_run( ::Note activeNote){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_196_inputReleased)
HXLINE( 197)			bool _hx_tmp;
HXDLIN( 197)			bool _hx_tmp1;
HXDLIN( 197)			if ((activeNote->holdLength != 0)) {
HXLINE( 197)				_hx_tmp1 = (keyNum != activeNote->type);
            			}
            			else {
HXLINE( 197)				_hx_tmp1 = true;
            			}
HXDLIN( 197)			if (!(_hx_tmp1)) {
HXLINE( 197)				_hx_tmp = !(activeNote->isHeld);
            			}
            			else {
HXLINE( 197)				_hx_tmp = true;
            			}
HXDLIN( 197)			if (_hx_tmp) {
HXLINE( 198)				return;
            			}
HXLINE( 200)			 ::Note endNote = activeNote->holdEndPointer;
HXLINE( 201)			int holdAcc = _gthis->noteRater(endNote);
HXLINE( 203)			if ((holdAcc == _gthis->noteAccuracyList->length)) {
HXLINE( 205)				activeNote->isHeld = false;
HXLINE( 206)				activeNote->holdFailed = _gthis->conductor->getMil();
            			}
            			else {
HXLINE( 210)				_gthis->raterActions(holdAcc,false);
HXLINE( 211)				activeNote->kill();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_192_inputReleased)
HXDLIN( 192)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 193)		 ::flixel::FlxSprite _hx_tmp = Dynamic( this->inputCircles->group->members->__get(keyNum)).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 193)		int _hx_tmp1 = ::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.15),null()));
HXDLIN( 193)		_hx_tmp->setGraphicSize(_hx_tmp1,::Math_obj::floor(::towsterFlxUtil::Utils_obj::percentFromHeight(((Float)0.15),null())));
HXLINE( 195)		this->activeNotes->group->forEachAlive( ::Dynamic(new _hx_Closure_0(_gthis,keyNum)),false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,inputReleased,(void))

int PlayState_obj::noteRater( ::Note note){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_220_noteRater)
HXLINE( 221)		int offset = this->conductor->getMil();
HXDLIN( 221)		Float offset1 = ::Math_obj::abs(( (Float)((offset - note->time)) ));
HXLINE( 222)		{
HXLINE( 222)			int _g = 0;
HXDLIN( 222)			int _g1 = this->noteAccuracyList->length;
HXDLIN( 222)			while((_g < _g1)){
HXLINE( 222)				_g = (_g + 1);
HXDLIN( 222)				int noteAccInx = (_g - 1);
HXLINE( 224)				if ((offset1 < this->noteAccuracyList->__get(noteAccInx))) {
HXLINE( 225)					return noteAccInx;
            				}
            			}
            		}
HXLINE( 228)		return this->noteAccuracyList->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,noteRater,return )

void PlayState_obj::raterActions(int rating,::hx::Null< bool >  __o_killCombos){
            		bool killCombos = __o_killCombos.Default(true);
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_232_raterActions)
HXLINE( 233)		::haxe::Log_obj::trace(rating,::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),233,HX_("PlayState",5d,83,c2,46),HX_("raterActions",8b,30,78,23)));
HXLINE( 234)		if ((rating == 4)) {
HXLINE( 237)			if (killCombos) {
HXLINE( 238)				this->killCombo();
            			}
            		}
            		else {
HXLINE( 240)			this->addCombo();
HXLINE( 241)			this->addScore(100);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,raterActions,(void))

void PlayState_obj::addCombo(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_246_addCombo)
HXLINE( 247)		this->combo++;
HXLINE( 248)		this->comboBoard->set_text((this->combo + HX_("x",78,00,00,00)));
HXLINE( 249)		{
HXLINE( 249)			 ::flixel::text::FlxText _this = this->comboBoard;
HXDLIN( 249)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN( 249)			if (::hx::IsNull( axes )) {
HXLINE( 249)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 249)			bool _hx_tmp;
HXDLIN( 249)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 249)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 249)					_hx_tmp = false;
            				}
            			}
HXDLIN( 249)			if (_hx_tmp) {
HXLINE( 249)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 249)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 249)			bool _hx_tmp1;
HXDLIN( 249)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 249)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE( 249)					_hx_tmp1 = false;
            				}
            			}
HXDLIN( 249)			if (_hx_tmp1) {
HXLINE( 249)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 249)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 250)		this->comboBoard->set_angle(((::Math_obj::random() * ( (Float)(20) )) - ( (Float)(10) )));
HXLINE( 251)		this->comboBoard->scale->set(((Float)1.3),((Float)1.3));
HXLINE( 252)		::flixel::tweens::FlxTween_obj::tween(this->comboBoard->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),1)
            			->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,addCombo,(void))

void PlayState_obj::killCombo(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_256_killCombo)
HXLINE( 257)		this->combo = 0;
HXLINE( 258)		this->comboBoard->set_text(HX_("0x",48,2a,00,00));
HXLINE( 259)		{
HXLINE( 259)			 ::flixel::text::FlxText _this = this->comboBoard;
HXDLIN( 259)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN( 259)			if (::hx::IsNull( axes )) {
HXLINE( 259)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 259)			bool _hx_tmp;
HXDLIN( 259)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 259)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 259)					_hx_tmp = false;
            				}
            			}
HXDLIN( 259)			if (_hx_tmp) {
HXLINE( 259)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 259)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 259)			bool _hx_tmp1;
HXDLIN( 259)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 259)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE( 259)					_hx_tmp1 = false;
            				}
            			}
HXDLIN( 259)			if (_hx_tmp1) {
HXLINE( 259)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 259)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 260)		this->comboBoard->set_angle(((::Math_obj::random() * ( (Float)(20) )) - ( (Float)(10) )));
HXLINE( 261)		this->comboBoard->scale->set(((Float)0.6),((Float)0.6));
HXLINE( 262)		::flixel::tweens::FlxTween_obj::tween(this->comboBoard->scale, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),1)
            			->setFixed(1,HX_("y",79,00,00,00),1)),((Float)0.2), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,killCombo,(void))

void PlayState_obj::addScore(int amount){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_266_addScore)
HXLINE( 267)		 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)		_hx_tmp->score = (_hx_tmp->score + (amount * this->combo));
HXLINE( 268)		this->scoreBoard->set_text((this->score + HX_("",00,00,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addScore,(void))

void PlayState_obj::reOrganizeNotes(){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< int >,lastNoteAdded_Time, ::PlayState,_gthis,int,milTillKill) HXARGC(1)
            		void _hx_run( ::Note a){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_277_reOrganizeNotes)
HXLINE( 278)			if ((a->time > lastNoteAdded_Time->__get(0))) {
HXLINE( 280)				lastNoteAdded_Time[0] = a->time;
            			}
HXLINE( 283)			bool _hx_tmp;
HXDLIN( 283)			bool _hx_tmp1;
HXDLIN( 283)			if ((a->holdLength == 0)) {
HXLINE( 283)				int a1 = a->time;
HXDLIN( 283)				int _hx_tmp = _gthis->conductor->getMil();
HXDLIN( 283)				_hx_tmp1 = (a1 < (_hx_tmp - milTillKill));
            			}
            			else {
HXLINE( 283)				_hx_tmp1 = false;
            			}
HXDLIN( 283)			if (!(_hx_tmp1)) {
HXLINE( 284)				if ((a->holdLength > 0)) {
HXLINE( 284)					int a1 = a->holdEndPointer->time;
HXDLIN( 284)					int _hx_tmp1 = _gthis->conductor->getMil();
HXLINE( 283)					_hx_tmp = (a1 < (_hx_tmp1 - milTillKill));
            				}
            				else {
HXLINE( 283)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 283)				_hx_tmp = true;
            			}
HXDLIN( 283)			if (_hx_tmp) {
HXLINE( 286)				a->kill();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_272_reOrganizeNotes)
HXDLIN( 272)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 273)		::Array< int > lastNoteAdded_Time = ::Array_obj< int >::fromData( _hx_array_data_46c2835d_32,1);
HXLINE( 275)		int milTillKill = 2000;
HXLINE( 276)		this->activeNotes->group->forEach( ::Dynamic(new _hx_Closure_0(lastNoteAdded_Time,_gthis,milTillKill)),false);
HXLINE( 290)		{
HXLINE( 290)			int _g = 0;
HXDLIN( 290)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("chart",de,9c,b3,45),::hx::paccDynamic)) );
HXDLIN( 290)			while((_g < _g1->length)){
HXLINE( 290)				 ::Dynamic note = _g1->__get(_g);
HXDLIN( 290)				_g = (_g + 1);
HXLINE( 292)				bool _hx_tmp;
HXDLIN( 292)				bool _hx_tmp1;
HXDLIN( 292)				int note1 = ( (int)(note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXDLIN( 292)				int _hx_tmp2 = this->conductor->getMil();
HXDLIN( 292)				if ((note1 < ((_hx_tmp2 + this->scrollSpeed) + 1000))) {
HXLINE( 293)					int note1 = ( (int)(note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXDLIN( 293)					int _hx_tmp = this->conductor->getMil();
HXLINE( 292)					_hx_tmp1 = (note1 > ((_hx_tmp - this->scrollSpeed) - 1000));
            				}
            				else {
HXLINE( 292)					_hx_tmp1 = false;
            				}
HXDLIN( 292)				if (_hx_tmp1) {
HXLINE( 292)					_hx_tmp = ::hx::IsGreater( note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),lastNoteAdded_Time->__get(0) );
            				}
            				else {
HXLINE( 292)					_hx_tmp = false;
            				}
HXDLIN( 292)				if (_hx_tmp) {
HXLINE( 296)					 ::Note noteToAdd =  ::Note_obj::__alloc( HX_CTX ,note,null());
HXLINE( 297)					this->activeNotes->add(noteToAdd).StaticCast<  ::Note >();
HXLINE( 299)					if (::hx::IsGreater( note->__Field(HX_("holdLength",85,cb,33,c8),::hx::paccDynamic),0 )) {
HXLINE( 301)						this->noteHoldEnds->add(noteToAdd->holdEndPointer).StaticCast<  ::Note >();
HXLINE( 302)						this->noteHoldLines->add(noteToAdd->holdLinePointer).StaticCast<  ::HoldLines >();
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,reOrganizeNotes,(void))

void PlayState_obj::moveNote( ::Note note, ::Dynamic visualOffset){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_309_moveNote)
HXLINE( 310)		int noteFromAlphaStart = this->conductor->getMil();
HXDLIN( 310)		int noteFromAlphaStart1 = (noteFromAlphaStart - (((note->time - this->noteLoadSpeed) - this->scrollSpeed) - ( (int)(visualOffset) )));
HXLINE( 311)		int noteFromMoveStart = this->conductor->getMil();
HXDLIN( 311)		int noteFromMoveStart1 = (noteFromMoveStart - ((note->time - this->scrollSpeed) - ( (int)(visualOffset) )));
HXLINE( 312)		note->set_alpha((( (Float)(noteFromAlphaStart1) ) / ( (Float)(this->noteLoadSpeed) )));
HXLINE( 313)		note->set_x(::towsterFlxUtil::Utils_obj::percentFromWidth((this->doorPosList->__get(note->type).StaticCast< ::Array< Float > >()->__get(0) + ((( (Float)(noteFromMoveStart1) ) / ( (Float)(this->scrollSpeed) )) * (this->inputCirclePosList->__get(note->type).StaticCast< ::Array< Float > >()->__get(0) - this->doorPosList->__get(note->type).StaticCast< ::Array< Float > >()->__get(0)))),null()));
HXLINE( 315)		note->set_y(::towsterFlxUtil::Utils_obj::percentFromHeight((this->doorPosList->__get(note->type).StaticCast< ::Array< Float > >()->__get(1) + ((( (Float)(noteFromMoveStart1) ) / ( (Float)(this->scrollSpeed) )) * (this->inputCirclePosList->__get(note->type).StaticCast< ::Array< Float > >()->__get(1) - this->doorPosList->__get(note->type).StaticCast< ::Array< Float > >()->__get(1)))),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,moveNote,(void))

void PlayState_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_320_onFocusLost)
HXLINE( 321)		this->super::onFocusLost();
HXLINE( 322)		this->conductor->pause();
            	}


void PlayState_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_326_onFocus)
HXLINE( 327)		this->super::onFocus();
HXLINE( 328)		this->conductor->start();
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(activeNotes,"activeNotes");
	HX_MARK_MEMBER_NAME(inputCircles,"inputCircles");
	HX_MARK_MEMBER_NAME(noteHoldEnds,"noteHoldEnds");
	HX_MARK_MEMBER_NAME(noteHoldLines,"noteHoldLines");
	HX_MARK_MEMBER_NAME(songJson,"songJson");
	HX_MARK_MEMBER_NAME(conductor,"conductor");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(noteLoadSpeed,"noteLoadSpeed");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(scoreBoard,"scoreBoard");
	HX_MARK_MEMBER_NAME(combo,"combo");
	HX_MARK_MEMBER_NAME(comboBoard,"comboBoard");
	HX_MARK_MEMBER_NAME(inputCirclePosList,"inputCirclePosList");
	HX_MARK_MEMBER_NAME(doorPosList,"doorPosList");
	HX_MARK_MEMBER_NAME(keyBinds,"keyBinds");
	HX_MARK_MEMBER_NAME(noteAccuracyList,"noteAccuracyList");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeNotes,"activeNotes");
	HX_VISIT_MEMBER_NAME(inputCircles,"inputCircles");
	HX_VISIT_MEMBER_NAME(noteHoldEnds,"noteHoldEnds");
	HX_VISIT_MEMBER_NAME(noteHoldLines,"noteHoldLines");
	HX_VISIT_MEMBER_NAME(songJson,"songJson");
	HX_VISIT_MEMBER_NAME(conductor,"conductor");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(noteLoadSpeed,"noteLoadSpeed");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(scoreBoard,"scoreBoard");
	HX_VISIT_MEMBER_NAME(combo,"combo");
	HX_VISIT_MEMBER_NAME(comboBoard,"comboBoard");
	HX_VISIT_MEMBER_NAME(inputCirclePosList,"inputCirclePosList");
	HX_VISIT_MEMBER_NAME(doorPosList,"doorPosList");
	HX_VISIT_MEMBER_NAME(keyBinds,"keyBinds");
	HX_VISIT_MEMBER_NAME(noteAccuracyList,"noteAccuracyList");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return ::hx::Val( score ); }
		if (HX_FIELD_EQ(inName,"combo") ) { return ::hx::Val( combo ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songJson") ) { return ::hx::Val( songJson ); }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { return ::hx::Val( keyBinds ); }
		if (HX_FIELD_EQ(inName,"addCombo") ) { return ::hx::Val( addCombo_dyn() ); }
		if (HX_FIELD_EQ(inName,"addScore") ) { return ::hx::Val( addScore_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveNote") ) { return ::hx::Val( moveNote_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"conductor") ) { return ::hx::Val( conductor ); }
		if (HX_FIELD_EQ(inName,"noteRater") ) { return ::hx::Val( noteRater_dyn() ); }
		if (HX_FIELD_EQ(inName,"killCombo") ) { return ::hx::Val( killCombo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreBoard") ) { return ::hx::Val( scoreBoard ); }
		if (HX_FIELD_EQ(inName,"comboBoard") ) { return ::hx::Val( comboBoard ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeNotes") ) { return ::hx::Val( activeNotes ); }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"doorPosList") ) { return ::hx::Val( doorPosList ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inputCircles") ) { return ::hx::Val( inputCircles ); }
		if (HX_FIELD_EQ(inName,"noteHoldEnds") ) { return ::hx::Val( noteHoldEnds ); }
		if (HX_FIELD_EQ(inName,"inputPressed") ) { return ::hx::Val( inputPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"raterActions") ) { return ::hx::Val( raterActions_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"noteHoldLines") ) { return ::hx::Val( noteHoldLines ); }
		if (HX_FIELD_EQ(inName,"noteLoadSpeed") ) { return ::hx::Val( noteLoadSpeed ); }
		if (HX_FIELD_EQ(inName,"inputReleased") ) { return ::hx::Val( inputReleased_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reOrganizeNotes") ) { return ::hx::Val( reOrganizeNotes_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"noteAccuracyList") ) { return ::hx::Val( noteAccuracyList ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inputCirclePosList") ) { return ::hx::Val( inputCirclePosList ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"combo") ) { combo=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songJson") ) { songJson=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { keyBinds=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"conductor") ) { conductor=inValue.Cast<  ::Conductor >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreBoard") ) { scoreBoard=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comboBoard") ) { comboBoard=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeNotes") ) { activeNotes=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doorPosList") ) { doorPosList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inputCircles") ) { inputCircles=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteHoldEnds") ) { noteHoldEnds=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"noteHoldLines") ) { noteHoldLines=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteLoadSpeed") ) { noteLoadSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"noteAccuracyList") ) { noteAccuracyList=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inputCirclePosList") ) { inputCirclePosList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("activeNotes",9b,dc,0f,fc));
	outFields->push(HX_("inputCircles",79,b5,e2,8d));
	outFields->push(HX_("noteHoldEnds",29,73,39,8a));
	outFields->push(HX_("noteHoldLines",ee,d9,92,6c));
	outFields->push(HX_("songJson",9d,a0,40,34));
	outFields->push(HX_("conductor",e7,97,ce,d9));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("noteLoadSpeed",2f,1d,54,fb));
	outFields->push(HX_("score",52,73,d9,78));
	outFields->push(HX_("scoreBoard",f4,39,64,f2));
	outFields->push(HX_("combo",4e,28,5d,4a));
	outFields->push(HX_("comboBoard",78,f3,e2,c4));
	outFields->push(HX_("inputCirclePosList",78,65,cc,93));
	outFields->push(HX_("doorPosList",44,60,42,70));
	outFields->push(HX_("keyBinds",f7,b5,69,f7));
	outFields->push(HX_("noteAccuracyList",49,e6,7c,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(PlayState_obj,activeNotes),HX_("activeNotes",9b,dc,0f,fc)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(PlayState_obj,inputCircles),HX_("inputCircles",79,b5,e2,8d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(PlayState_obj,noteHoldEnds),HX_("noteHoldEnds",29,73,39,8a)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(PlayState_obj,noteHoldLines),HX_("noteHoldLines",ee,d9,92,6c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PlayState_obj,songJson),HX_("songJson",9d,a0,40,34)},
	{::hx::fsObject /*  ::Conductor */ ,(int)offsetof(PlayState_obj,conductor),HX_("conductor",e7,97,ce,d9)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,noteLoadSpeed),HX_("noteLoadSpeed",2f,1d,54,fb)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,score),HX_("score",52,73,d9,78)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,scoreBoard),HX_("scoreBoard",f4,39,64,f2)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,combo),HX_("combo",4e,28,5d,4a)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,comboBoard),HX_("comboBoard",78,f3,e2,c4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PlayState_obj,inputCirclePosList),HX_("inputCirclePosList",78,65,cc,93)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PlayState_obj,doorPosList),HX_("doorPosList",44,60,42,70)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PlayState_obj,keyBinds),HX_("keyBinds",f7,b5,69,f7)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PlayState_obj,noteAccuracyList),HX_("noteAccuracyList",49,e6,7c,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("activeNotes",9b,dc,0f,fc),
	HX_("inputCircles",79,b5,e2,8d),
	HX_("noteHoldEnds",29,73,39,8a),
	HX_("noteHoldLines",ee,d9,92,6c),
	HX_("songJson",9d,a0,40,34),
	HX_("conductor",e7,97,ce,d9),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("noteLoadSpeed",2f,1d,54,fb),
	HX_("score",52,73,d9,78),
	HX_("scoreBoard",f4,39,64,f2),
	HX_("combo",4e,28,5d,4a),
	HX_("comboBoard",78,f3,e2,c4),
	HX_("inputCirclePosList",78,65,cc,93),
	HX_("doorPosList",44,60,42,70),
	HX_("keyBinds",f7,b5,69,f7),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("inputPressed",b8,2b,13,d2),
	HX_("inputReleased",e7,22,89,05),
	HX_("noteAccuracyList",49,e6,7c,e5),
	HX_("noteRater",40,7c,b1,21),
	HX_("raterActions",8b,30,78,23),
	HX_("addCombo",6d,4e,ba,c3),
	HX_("killCombo",d0,5b,bb,37),
	HX_("addScore",71,99,36,f2),
	HX_("reOrganizeNotes",6b,69,73,29),
	HX_("moveNote",a3,83,c1,eb),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onFocus",39,fe,c6,9a),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

