#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CharterState
#include <CharterState.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeLine
#include <flixel/addons/display/shapes/FlxShapeLine.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_towsterFlxUtil_FileTypes
#include <towsterFlxUtil/FileTypes.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Paths
#include <towsterFlxUtil/Paths.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Utils
#include <towsterFlxUtil/Utils.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c741773da4e20ce_15_new,"CharterState","new",0x773c5558,"CharterState.new","CharterState.hx",15,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_43_create,"CharterState","create",0x2a3e4d04,"CharterState.create","CharterState.hx",43,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_89_update,"CharterState","update",0x35346c11,"CharterState.update","CharterState.hx",89,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_103_update,"CharterState","update",0x35346c11,"CharterState.update","CharterState.hx",103,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_107_update,"CharterState","update",0x35346c11,"CharterState.update","CharterState.hx",107,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_111_update,"CharterState","update",0x35346c11,"CharterState.update","CharterState.hx",111,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_115_update,"CharterState","update",0x35346c11,"CharterState.update","CharterState.hx",115,0x34319d18)
static const int _hx_array_data_59e90966_8[] = {
	(int)0,(int)0,
};
static const int _hx_array_data_59e90966_9[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_195_organizeNotes,"CharterState","organizeNotes",0x6ac17c16,"CharterState.organizeNotes","CharterState.hx",195,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_226_reloadBeatBars,"CharterState","reloadBeatBars",0x03e4a657,"CharterState.reloadBeatBars","CharterState.hx",226,0x34319d18)
static const bool _hx_array_data_59e90966_16[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_282_reloadBeatBars,"CharterState","reloadBeatBars",0x03e4a657,"CharterState.reloadBeatBars","CharterState.hx",282,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_296_noteSnap,"CharterState","noteSnap",0x1fc4f364,"CharterState.noteSnap","CharterState.hx",296,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_310_timeToYPos,"CharterState","timeToYPos",0x458923ab,"CharterState.timeToYPos","CharterState.hx",310,0x34319d18)
HX_LOCAL_STACK_FRAME(_hx_pos_2c741773da4e20ce_315_yPosToTime,"CharterState","yPosToTime",0x22c0822b,"CharterState.yPosToTime","CharterState.hx",315,0x34319d18)

void CharterState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_15_new)
HXLINE( 192)		this->renderRange = 1000;
HXLINE(  40)		this->isHeld = false;
HXLINE(  39)		this->selectedNoteJson = null();
HXLINE(  37)		this->wheelScrollSpd = ((Float)3);
HXLINE(  36)		this->isWheelMoving = false;
HXLINE(  34)		this->spaceBtwInputs = 10;
HXLINE(  33)		this->inputSize = 60;
HXLINE(  31)		this->zoom = ((Float)1);
HXLINE(  30)		this->mil = ((Float)0);
HXLINE(  28)		this->barDivisions = 4;
HXLINE(  15)		super::__construct(MaxSize);
            	}

Dynamic CharterState_obj::__CreateEmpty() { return new CharterState_obj; }

void *CharterState_obj::_hx_vtable = 0;

Dynamic CharterState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharterState_obj > _hx_result = new CharterState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CharterState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x42ca5c26) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x42ca5c26;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void CharterState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_2c741773da4e20ce_43_create)
HXLINE(  48)		::towsterFlxUtil::Utils_obj::windowWidth = ( (Float)(::openfl::Lib_obj::get_application()->_hx___window->_hx___width) );
HXLINE(  49)		::towsterFlxUtil::Utils_obj::windowHeight = ( (Float)(::openfl::Lib_obj::get_application()->_hx___window->_hx___height) );
HXLINE(  51)		::haxe::Log_obj::trace(HX_("fix this soon",b2,13,2c,c8),::hx::SourceInfo(HX_("source/CharterState.hx",a4,80,2f,d1),51,HX_("CharterState",66,09,e9,59),HX_("create",fc,66,0f,7c)));
HXLINE(  53)		this->super::create();
HXLINE(  54)		this->songJson = ::towsterFlxUtil::Paths_obj::getFile(HX_("data/songs/Plus-Danshi/chart-easy",e0,8d,01,79),::towsterFlxUtil::FileTypes_obj::JSON_dyn());
HXLINE(  56)		this->inputCircles =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,30,500,7);
HXLINE(  57)		this->add(this->inputCircles);
HXLINE(  58)		{
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(0 * (this->inputSize + this->spaceBtwInputs)),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->inputSize + this->spaceBtwInputs),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle1->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle1->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle1).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(2 * (this->inputSize + this->spaceBtwInputs)),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle2->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle2->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle2).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(3 * (this->inputSize + this->spaceBtwInputs)),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle3->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle3->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle3).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(4 * (this->inputSize + this->spaceBtwInputs)),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle4->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle4->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle4).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(5 * (this->inputSize + this->spaceBtwInputs)),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle5->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle5->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle5).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  59)			{
HXLINE(  60)				 ::flixel::FlxSprite circle6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(6 * (this->inputSize + this->spaceBtwInputs)),0,null())->loadGraphic(HX_("assets/images/circle.png",b6,92,b0,13),null(),null(),null(),null(),null());
HXLINE(  61)				circle6->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  62)				circle6->updateHitbox();
HXLINE(  63)				this->inputCircles->add(circle6).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  66)		this->beatBars =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,30,0,30);
HXLINE(  67)		this->add(this->beatBars);
HXLINE(  69)		this->activeNoteLines =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,30,0,99999);
HXLINE(  70)		this->add(this->activeNoteLines);
HXLINE(  72)		this->activeNotes =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,30,0,99999);
HXLINE(  73)		this->add(this->activeNotes);
HXLINE(  75)		this->activeNoteEnds =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,30,0,99999);
HXLINE(  76)		this->add(this->activeNoteEnds);
HXLINE(  78)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  78)		this->ghostNote = _hx_tmp->loadGraphic(::towsterFlxUtil::Paths_obj::getFilePath(HX_("images/circle",c7,f5,17,b0),::towsterFlxUtil::FileTypes_obj::PNG_dyn()),null(),null(),null(),null(),null());
HXLINE(  79)		this->ghostNote->set_alpha(((Float)0.7));
HXLINE(  80)		this->ghostNote->setGraphicSize(this->inputSize,this->inputSize);
HXLINE(  81)		this->ghostNote->updateHitbox();
HXLINE(  82)		this->add(this->ghostNote);
HXLINE(  84)		this->organizeNotes();
HXLINE(  85)		this->reloadBeatBars();
            	}


void CharterState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_89_update)
HXDLIN(  89)		 ::CharterState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		this->super::update(elapsed);
HXLINE(  92)		int typeOnMouse = ::Math_obj::floor((((( (Float)(::flixel::FlxG_obj::mouse->x) ) - this->inputCircles->x) + (( (Float)(this->spaceBtwInputs) ) / ( (Float)(2) ))) / ( (Float)((this->inputSize + this->spaceBtwInputs)) )));
HXLINE(  93)		int timeOnMouse = ::Math_obj::floor(this->yPosToTime(( (Float)(::flixel::FlxG_obj::mouse->y) )));
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		if ((::flixel::FlxG_obj::mouse->wheel != 0)) {
HXLINE(  95)			_hx_tmp = (this->mil >= 0);
            		}
            		else {
HXLINE(  95)			_hx_tmp = false;
            		}
HXDLIN(  95)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CharterState,_gthis) HXARGC(1)
            			void _hx_run( ::Note note){
            				HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_103_update)
HXLINE( 103)				note->set_y((note->y + (( (Float)(::flixel::FlxG_obj::mouse->wheel) ) * _gthis->wheelScrollSpd)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::CharterState,_gthis) HXARGC(1)
            			void _hx_run( ::Note note){
            				HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_107_update)
HXLINE( 107)				note->set_y((note->y + (( (Float)(::flixel::FlxG_obj::mouse->wheel) ) * _gthis->wheelScrollSpd)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::CharterState,_gthis) HXARGC(1)
            			void _hx_run( ::HoldLines line){
            				HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_111_update)
HXLINE( 111)				line->set_y((line->y + (( (Float)(::flixel::FlxG_obj::mouse->wheel) ) * _gthis->wheelScrollSpd)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::CharterState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::addons::display::shapes::FlxShapeLine bar){
            				HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_115_update)
HXLINE( 115)				bar->set_y((bar->y + (( (Float)(::flixel::FlxG_obj::mouse->wheel) ) * _gthis->wheelScrollSpd)));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  97)			this->isWheelMoving = true;
HXLINE(  98)			 ::CharterState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)			_hx_tmp->mil = (_hx_tmp->mil + (( (Float)(::flixel::FlxG_obj::mouse->wheel) ) * this->wheelScrollSpd));
HXLINE( 101)			this->activeNotes->group->forEachAlive( ::Dynamic(new _hx_Closure_0(_gthis)),false);
HXLINE( 105)			this->activeNoteEnds->group->forEachAlive( ::Dynamic(new _hx_Closure_1(_gthis)),false);
HXLINE( 109)			this->activeNoteLines->group->forEachAlive( ::Dynamic(new _hx_Closure_2(_gthis)),false);
HXLINE( 113)			this->beatBars->group->forEachAlive( ::Dynamic(new _hx_Closure_3(_gthis)),false);
            		}
HXLINE( 119)		if ((this->mil < 0)) {
HXLINE( 121)			this->mil = ( (Float)(0) );
            		}
HXLINE( 124)		bool _hx_tmp1;
HXDLIN( 124)		if ((::flixel::FlxG_obj::mouse->wheel == 0)) {
HXLINE( 124)			_hx_tmp1 = this->isWheelMoving;
            		}
            		else {
HXLINE( 124)			_hx_tmp1 = false;
            		}
HXDLIN( 124)		if (_hx_tmp1) {
HXLINE( 126)			this->organizeNotes();
HXLINE( 127)			this->reloadBeatBars();
HXLINE( 128)			this->isWheelMoving = false;
            		}
HXLINE( 131)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 133)			this->isHeld = true;
HXLINE( 135)			 ::Dynamic clickedNoteJson = null();
HXLINE( 137)			{
HXLINE( 137)				int _g = 0;
HXDLIN( 137)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("chart",de,9c,b3,45),::hx::paccDynamic)) );
HXDLIN( 137)				while((_g < _g1->length)){
HXLINE( 137)					 ::Dynamic noteJson = _g1->__get(_g);
HXDLIN( 137)					_g = (_g + 1);
HXLINE( 139)					int noteEndTime = ( (int)((noteJson->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic) + noteJson->__Field(HX_("holdLength",85,cb,33,c8),::hx::paccDynamic))) );
HXLINE( 140)					bool _hx_tmp;
HXDLIN( 140)					bool _hx_tmp1;
HXDLIN( 140)					bool _hx_tmp2;
HXDLIN( 140)					if (::hx::IsGreater( noteJson->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),timeOnMouse )) {
HXLINE( 140)						int noteJson1 = ( (int)(noteJson->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXDLIN( 140)						_hx_tmp2 = (noteJson1 < this->yPosToTime(( (Float)((::flixel::FlxG_obj::mouse->y - this->inputSize)) )));
            					}
            					else {
HXLINE( 140)						_hx_tmp2 = false;
            					}
HXDLIN( 140)					if (_hx_tmp2) {
HXLINE( 140)						_hx_tmp1 = ::hx::IsEq( noteJson->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),typeOnMouse );
            					}
            					else {
HXLINE( 140)						_hx_tmp1 = false;
            					}
HXDLIN( 140)					if (!(_hx_tmp1)) {
HXLINE( 141)						bool _hx_tmp1;
HXDLIN( 141)						if ((noteEndTime > timeOnMouse)) {
HXLINE( 141)							_hx_tmp1 = (noteEndTime < this->yPosToTime(( (Float)((::flixel::FlxG_obj::mouse->y - this->inputSize)) )));
            						}
            						else {
HXLINE( 141)							_hx_tmp1 = false;
            						}
HXDLIN( 141)						if (_hx_tmp1) {
HXLINE( 140)							_hx_tmp = ::hx::IsEq( noteJson->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),typeOnMouse );
            						}
            						else {
HXLINE( 140)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 140)						_hx_tmp = true;
            					}
HXDLIN( 140)					if (_hx_tmp) {
HXLINE( 142)						clickedNoteJson = noteJson;
            					}
            				}
            			}
HXLINE( 145)			this->selectedNoteJson = clickedNoteJson;
HXLINE( 147)			if (::hx::IsNull( this->selectedNoteJson )) {
HXLINE( 149)				 ::Dynamic quickNoteJson =  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("holdLength",85,cb,33,c8),0)
            					->setFixed(1,HX_("position",a9,a0,fa,ca),::Array_obj< int >::fromData( _hx_array_data_59e90966_8,2))
            					->setFixed(2,HX_("time",0d,cc,fc,4c),0)
            					->setFixed(3,HX_("type",ba,f2,08,4d),0)
            					->setFixed(4,HX_("sliderPoints",24,1b,e4,6c),::Array_obj< int >::fromData( _hx_array_data_59e90966_9,1)));
HXLINE( 157)				quickNoteJson->__SetField(HX_("type",ba,f2,08,4d),typeOnMouse,::hx::paccDynamic);
HXLINE( 158)				int _hx_tmp;
HXDLIN( 158)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 158)				if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE( 158)					_hx_tmp = timeOnMouse;
            				}
            				else {
HXLINE( 158)					_hx_tmp = this->noteSnap(( (Float)(timeOnMouse) ));
            				}
HXDLIN( 158)				quickNoteJson->__SetField(HX_("time",0d,cc,fc,4c),_hx_tmp,::hx::paccDynamic);
HXLINE( 160)				( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("chart",de,9c,b3,45),::hx::paccDynamic)) )->push(quickNoteJson);
HXLINE( 161)				this->selectedNoteJson = quickNoteJson;
HXLINE( 162)				this->organizeNotes();
            			}
            		}
HXLINE( 166)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE( 168)			this->isHeld = false;
            		}
HXLINE( 171)		 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 171)		bool _hx_tmp2;
HXDLIN( 171)		if ((_this->_prevX == _this->x)) {
HXLINE( 171)			_hx_tmp2 = (_this->_prevY != _this->y);
            		}
            		else {
HXLINE( 171)			_hx_tmp2 = true;
            		}
HXDLIN( 171)		if (_hx_tmp2) {
HXLINE( 173)			bool _hx_tmp;
HXDLIN( 173)			if (this->isHeld) {
HXLINE( 173)				_hx_tmp = ::hx::IsNotNull( this->selectedNoteJson );
            			}
            			else {
HXLINE( 173)				_hx_tmp = false;
            			}
HXDLIN( 173)			if (_hx_tmp) {
HXLINE( 175)				Float _hx_tmp;
HXDLIN( 175)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 175)				if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE( 175)					_hx_tmp = ( (Float)((timeOnMouse - ( (int)(this->selectedNoteJson->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) ))) );
            				}
            				else {
HXLINE( 175)					int _hx_tmp1 = this->noteSnap(( (Float)(timeOnMouse) ));
HXDLIN( 175)					_hx_tmp = ( (Float)((_hx_tmp1 - ( (int)(this->selectedNoteJson->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) ))) );
            				}
HXDLIN( 175)				this->selectedNoteJson->__SetField(HX_("holdLength",85,cb,33,c8),::Math_obj::floor(::Math_obj::abs(_hx_tmp)),::hx::paccDynamic);
HXLINE( 177)				this->organizeNotes();
            			}
HXLINE( 180)			this->ghostNote->set_x((this->inputCircles->x + (typeOnMouse * (this->inputSize + this->spaceBtwInputs))));
HXLINE( 181)			 ::flixel::FlxSprite _hx_tmp1 = this->ghostNote;
HXDLIN( 181)			Float _hx_tmp2;
HXDLIN( 181)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 181)			if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE( 181)				_hx_tmp2 = ((-(timeOnMouse) + this->inputCircles->y) - ( (Float)(this->inputSize) ));
            			}
            			else {
HXLINE( 181)				_hx_tmp2 = ( (Float)(this->noteSnap(((-(timeOnMouse) + this->inputCircles->y) - ( (Float)(this->inputSize) )))) );
            			}
HXDLIN( 181)			_hx_tmp1->set_y(_hx_tmp2);
            		}
HXLINE( 184)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 184)		if (_this1->keyManager->checkStatusUnsafe(46,_this1->status)) {
HXLINE( 186)			this->selectedNoteJson = null();
HXLINE( 187)			this->organizeNotes();
HXLINE( 188)			::haxe::Log_obj::trace(123,::hx::SourceInfo(HX_("source/CharterState.hx",a4,80,2f,d1),188,HX_("CharterState",66,09,e9,59),HX_("update",09,86,05,87)));
            		}
            	}


void CharterState_obj::organizeNotes(){
            	HX_GC_STACKFRAME(&_hx_pos_2c741773da4e20ce_195_organizeNotes)
HXLINE( 196)		this->activeNotes->group->clear();
HXLINE( 197)		this->activeNoteLines->group->clear();
HXLINE( 198)		this->activeNoteEnds->group->clear();
HXLINE( 200)		{
HXLINE( 200)			int _g = 0;
HXDLIN( 200)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("chart",de,9c,b3,45),::hx::paccDynamic)) );
HXDLIN( 200)			while((_g < _g1->length)){
HXLINE( 200)				 ::Dynamic note = _g1->__get(_g);
HXDLIN( 200)				_g = (_g + 1);
HXLINE( 202)				bool _hx_tmp;
HXDLIN( 202)				if (::hx::IsLess( note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),(this->mil + this->renderRange) )) {
HXLINE( 202)					_hx_tmp = ::hx::IsGreater( note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),(this->mil - ( (Float)(this->renderRange) )) );
            				}
            				else {
HXLINE( 202)					_hx_tmp = false;
            				}
HXDLIN( 202)				if (_hx_tmp) {
HXLINE( 204)					 ::Note modifiedNote =  ::Note_obj::__alloc( HX_CTX ,note,false,::Math_obj::floor((( (Float)(this->inputSize) ) / ( (Float)(2) ))));
HXLINE( 205)					modifiedNote->setGraphicSize(this->inputSize,this->inputSize);
HXLINE( 206)					modifiedNote->updateHitbox();
HXLINE( 207)					modifiedNote->set_x(( (Float)((( (int)(note->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) ) * (this->inputSize + this->spaceBtwInputs))) ));
HXLINE( 208)					modifiedNote->set_y(this->timeToYPos(( (Float)(note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) )));
HXLINE( 209)					if ((modifiedNote->holdLength > 0)) {
HXLINE( 211)						modifiedNote->holdEndPointer->setGraphicSize(this->inputSize,this->inputSize);
HXLINE( 212)						modifiedNote->holdEndPointer->updateHitbox();
HXLINE( 213)						modifiedNote->holdEndPointer->set_x(( (Float)((( (int)(note->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) ) * (this->inputSize + this->spaceBtwInputs))) ));
HXLINE( 214)						 ::Note modifiedNote1 = modifiedNote->holdEndPointer;
HXDLIN( 214)						modifiedNote1->set_y(this->timeToYPos(( (Float)((note->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic) + note->__Field(HX_("holdLength",85,cb,33,c8),::hx::paccDynamic))) )));
HXLINE( 215)						this->activeNoteLines->add(modifiedNote->holdLinePointer).StaticCast<  ::HoldLines >();
HXLINE( 216)						this->activeNoteEnds->add(modifiedNote->holdEndPointer).StaticCast<  ::Note >();
HXLINE( 218)						modifiedNote->updateLine();
            					}
HXLINE( 220)					this->activeNotes->add(modifiedNote).StaticCast<  ::Note >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharterState_obj,organizeNotes,(void))

void CharterState_obj::reloadBeatBars(){
            	HX_GC_STACKFRAME(&_hx_pos_2c741773da4e20ce_226_reloadBeatBars)
HXLINE( 227)		this->beatBars->group->clear();
HXLINE( 229)		::Array< ::Dynamic> inFrameBPM = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 230)		 ::Dynamic replacementBPM =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("bpm",df,be,4a,00),( (Float)(120) ))
            			->setFixed(1,HX_("time",0d,cc,fc,4c),-1));
HXLINE( 232)		{
HXLINE( 232)			int _g_current = 0;
HXDLIN( 232)			::Array< ::Dynamic> _g_array = ( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("bpmList",dd,62,69,a8),::hx::paccDynamic)) );
HXDLIN( 232)			while((_g_current < _g_array->length)){
HXLINE( 232)				 ::Dynamic _g1_value = _g_array->__get(_g_current);
HXDLIN( 232)				_g_current = (_g_current + 1);
HXDLIN( 232)				int _g1_key = (_g_current - 1);
HXDLIN( 232)				int index = _g1_key;
HXDLIN( 232)				 ::Dynamic bpmObj = _g1_value;
HXLINE( 233)				{
HXLINE( 234)					Float yPos = this->yPosToTime(( (Float)(bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) ));
HXLINE( 235)					bool _hx_tmp;
HXDLIN( 235)					if ((yPos >= 0)) {
HXLINE( 235)						_hx_tmp = (yPos <= ::towsterFlxUtil::Utils_obj::windowHeight);
            					}
            					else {
HXLINE( 235)						_hx_tmp = false;
            					}
HXDLIN( 235)					if (_hx_tmp) {
HXLINE( 237)						bool _hx_tmp;
HXDLIN( 237)						if ((inFrameBPM->length == 0)) {
HXLINE( 237)							_hx_tmp = (index != 0);
            						}
            						else {
HXLINE( 237)							_hx_tmp = false;
            						}
HXDLIN( 237)						if (_hx_tmp) {
HXLINE( 239)							inFrameBPM->push( ::Dynamic(this->songJson->__Field(HX_("bpmList",dd,62,69,a8),::hx::paccDynamic))->__GetItem((index - 1)));
            						}
HXLINE( 241)						inFrameBPM->push(bpmObj);
            					}
HXLINE( 244)					bool _hx_tmp1;
HXDLIN( 244)					int bpmObj1 = ( (int)(bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) );
HXDLIN( 244)					if ((bpmObj1 < this->yPosToTime(::towsterFlxUtil::Utils_obj::windowHeight))) {
HXLINE( 244)						_hx_tmp1 = ::hx::IsGreater( bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),replacementBPM->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic) );
            					}
            					else {
HXLINE( 244)						_hx_tmp1 = false;
            					}
HXDLIN( 244)					if (_hx_tmp1) {
HXLINE( 245)						replacementBPM = bpmObj;
            					}
            				}
            			}
            		}
HXLINE( 248)		if ((inFrameBPM->length == 0)) {
HXLINE( 250)			if (::hx::IsLess( replacementBPM->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),0 )) {
HXLINE( 252)				inFrameBPM->push(replacementBPM);
            			}
            			else {
HXLINE( 256)				inFrameBPM->push( ::Dynamic(this->songJson->__Field(HX_("bpmList",dd,62,69,a8),::hx::paccDynamic))->__GetItem((( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("bpmList",dd,62,69,a8),::hx::paccDynamic)) )->length - 1)));
            			}
            		}
HXLINE( 260)		{
HXLINE( 260)			int _g_current1 = 0;
HXDLIN( 260)			::Array< ::Dynamic> _g_array1 = inFrameBPM;
HXDLIN( 260)			while((_g_current1 < _g_array1->length)){
HXLINE( 260)				 ::Dynamic _g1_value = _g_array1->__get(_g_current1);
HXDLIN( 260)				_g_current1 = (_g_current1 + 1);
HXDLIN( 260)				int _g1_key = (_g_current1 - 1);
HXDLIN( 260)				int i = _g1_key;
HXDLIN( 260)				 ::Dynamic bpmObj = _g1_value;
HXLINE( 261)				{
HXLINE( 262)					int bpmPointerLength;
HXLINE( 264)					if (::hx::IsNull( inFrameBPM->__get((i + 1)) )) {
HXLINE( 266)						Float bpmPointerLength1 = this->yPosToTime(( (Float)(0) ));
HXDLIN( 266)						bpmPointerLength = ::Math_obj::ceil(((bpmPointerLength1 - ( (Float)(bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) )) * (( (Float)(bpmObj->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ) / ( (Float)(6000) ))));
            					}
            					else {
HXLINE( 270)						bpmPointerLength = ::Math_obj::floor((( (Float)((( (int)(inFrameBPM->__get((i + 1))->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) ) - ( (int)(bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) ))) ) * (( (Float)(bpmObj->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ) / ( (Float)(6000) ))));
            					}
HXLINE( 273)					{
HXLINE( 273)						int _g = 0;
HXDLIN( 273)						int _g1 = bpmPointerLength;
HXDLIN( 273)						while((_g < _g1)){
HXLINE( 273)							_g = (_g + 1);
HXDLIN( 273)							int e = (_g - 1);
HXLINE( 275)							Float newBarY = this->timeToYPos(( (Float)(bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) ));
HXDLIN( 275)							Float newBarY1 = (newBarY - ((( (Float)(e) ) * (( (Float)(6000) ) / ( (Float)(bpmObj->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ))) * this->zoom));
HXLINE( 277)							::Array< bool > isAdd = ::Array_obj< bool >::fromData( _hx_array_data_59e90966_16,1);
HXLINE( 278)							if ((newBarY1 < ::towsterFlxUtil::Utils_obj::windowHeight)) {
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,isAdd,Float,newBarY1) HXARGC(1)
            								void _hx_run( ::flixel::addons::display::shapes::FlxShapeLine bar){
            									HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_282_reloadBeatBars)
HXLINE( 282)									if ((bar->y == newBarY1)) {
HXLINE( 283)										isAdd[0] = false;
            									}
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 280)								this->beatBars->group->forEachAlive( ::Dynamic(new _hx_Closure_0(isAdd,newBarY1)),false);
HXLINE( 285)								if (isAdd->__get(0)) {
HXLINE( 286)									 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->beatBars;
HXDLIN( 286)									Float newBarY = newBarY1;
HXDLIN( 286)									 ::flixel::math::FlxPoint _hx_tmp1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(this->inputCircles->x - ( (Float)(this->spaceBtwInputs) )),0);
HXDLIN( 286)									_hx_tmp->add( ::flixel::addons::display::shapes::FlxShapeLine_obj::__alloc( HX_CTX ,( (Float)(0) ),newBarY,_hx_tmp1, ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,((this->inputCircles->x + ((this->inputSize + this->spaceBtwInputs) * 6)) + this->spaceBtwInputs),0), ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("thickness",74,f1,66,5a),5)))).StaticCast<  ::flixel::addons::display::shapes::FlxShapeLine >();
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CharterState_obj,reloadBeatBars,(void))

int CharterState_obj::noteSnap(Float time){
            	HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_296_noteSnap)
HXLINE( 297)		 ::Dynamic bpmForTime =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("bpm",df,be,4a,00),( (Float)(120) ))
            			->setFixed(1,HX_("time",0d,cc,fc,4c),-1));
HXLINE( 298)		{
HXLINE( 298)			int _g = 0;
HXDLIN( 298)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->songJson->__Field(HX_("bpmList",dd,62,69,a8),::hx::paccDynamic)) );
HXDLIN( 298)			while((_g < _g1->length)){
HXLINE( 298)				 ::Dynamic bpmObj = _g1->__get(_g);
HXDLIN( 298)				_g = (_g + 1);
HXLINE( 300)				bool _hx_tmp;
HXDLIN( 300)				if (::hx::IsGreater( bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),bpmForTime->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic) )) {
HXLINE( 300)					_hx_tmp = ::hx::IsLess( bpmObj->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic),time );
            				}
            				else {
HXLINE( 300)					_hx_tmp = false;
            				}
HXDLIN( 300)				if (_hx_tmp) {
HXLINE( 301)					bpmForTime = bpmObj;
            				}
            			}
            		}
HXLINE( 304)		return ::Math_obj::floor(( (Float)((bpmForTime->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic) + (( (Float)(::Math_obj::floor((((time - ( (Float)(bpmForTime->__Field(HX_("time",0d,cc,fc,4c),::hx::paccDynamic)) )) / (( (Float)(6000) ) / ( (Float)(bpmForTime->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ))) + 1))) ) * (( (Float)(6000) ) / ( (Float)(bpmForTime->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ))))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharterState_obj,noteSnap,return )

Float CharterState_obj::timeToYPos(Float time){
            	HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_310_timeToYPos)
HXDLIN( 310)		return (this->inputCircles->y - ((time - this->mil) * this->zoom));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharterState_obj,timeToYPos,return )

Float CharterState_obj::yPosToTime(Float yPos){
            	HX_STACKFRAME(&_hx_pos_2c741773da4e20ce_315_yPosToTime)
HXDLIN( 315)		return (-(((yPos - this->inputCircles->y) / this->zoom)) + this->mil);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CharterState_obj,yPosToTime,return )


::hx::ObjectPtr< CharterState_obj > CharterState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< CharterState_obj > __this = new CharterState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< CharterState_obj > CharterState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	CharterState_obj *__this = (CharterState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharterState_obj), true, "CharterState"));
	*(void **)__this = CharterState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

CharterState_obj::CharterState_obj()
{
}

void CharterState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharterState);
	HX_MARK_MEMBER_NAME(songJson,"songJson");
	HX_MARK_MEMBER_NAME(activeNotes,"activeNotes");
	HX_MARK_MEMBER_NAME(activeNoteLines,"activeNoteLines");
	HX_MARK_MEMBER_NAME(activeNoteEnds,"activeNoteEnds");
	HX_MARK_MEMBER_NAME(ghostNote,"ghostNote");
	HX_MARK_MEMBER_NAME(inputCircles,"inputCircles");
	HX_MARK_MEMBER_NAME(beatBars,"beatBars");
	HX_MARK_MEMBER_NAME(barDivisions,"barDivisions");
	HX_MARK_MEMBER_NAME(mil,"mil");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(inputSize,"inputSize");
	HX_MARK_MEMBER_NAME(spaceBtwInputs,"spaceBtwInputs");
	HX_MARK_MEMBER_NAME(isWheelMoving,"isWheelMoving");
	HX_MARK_MEMBER_NAME(wheelScrollSpd,"wheelScrollSpd");
	HX_MARK_MEMBER_NAME(selectedNoteJson,"selectedNoteJson");
	HX_MARK_MEMBER_NAME(isHeld,"isHeld");
	HX_MARK_MEMBER_NAME(renderRange,"renderRange");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharterState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songJson,"songJson");
	HX_VISIT_MEMBER_NAME(activeNotes,"activeNotes");
	HX_VISIT_MEMBER_NAME(activeNoteLines,"activeNoteLines");
	HX_VISIT_MEMBER_NAME(activeNoteEnds,"activeNoteEnds");
	HX_VISIT_MEMBER_NAME(ghostNote,"ghostNote");
	HX_VISIT_MEMBER_NAME(inputCircles,"inputCircles");
	HX_VISIT_MEMBER_NAME(beatBars,"beatBars");
	HX_VISIT_MEMBER_NAME(barDivisions,"barDivisions");
	HX_VISIT_MEMBER_NAME(mil,"mil");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(inputSize,"inputSize");
	HX_VISIT_MEMBER_NAME(spaceBtwInputs,"spaceBtwInputs");
	HX_VISIT_MEMBER_NAME(isWheelMoving,"isWheelMoving");
	HX_VISIT_MEMBER_NAME(wheelScrollSpd,"wheelScrollSpd");
	HX_VISIT_MEMBER_NAME(selectedNoteJson,"selectedNoteJson");
	HX_VISIT_MEMBER_NAME(isHeld,"isHeld");
	HX_VISIT_MEMBER_NAME(renderRange,"renderRange");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CharterState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mil") ) { return ::hx::Val( mil ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isHeld") ) { return ::hx::Val( isHeld ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songJson") ) { return ::hx::Val( songJson ); }
		if (HX_FIELD_EQ(inName,"beatBars") ) { return ::hx::Val( beatBars ); }
		if (HX_FIELD_EQ(inName,"noteSnap") ) { return ::hx::Val( noteSnap_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ghostNote") ) { return ::hx::Val( ghostNote ); }
		if (HX_FIELD_EQ(inName,"inputSize") ) { return ::hx::Val( inputSize ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeToYPos") ) { return ::hx::Val( timeToYPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"yPosToTime") ) { return ::hx::Val( yPosToTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeNotes") ) { return ::hx::Val( activeNotes ); }
		if (HX_FIELD_EQ(inName,"renderRange") ) { return ::hx::Val( renderRange ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inputCircles") ) { return ::hx::Val( inputCircles ); }
		if (HX_FIELD_EQ(inName,"barDivisions") ) { return ::hx::Val( barDivisions ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isWheelMoving") ) { return ::hx::Val( isWheelMoving ); }
		if (HX_FIELD_EQ(inName,"organizeNotes") ) { return ::hx::Val( organizeNotes_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"activeNoteEnds") ) { return ::hx::Val( activeNoteEnds ); }
		if (HX_FIELD_EQ(inName,"spaceBtwInputs") ) { return ::hx::Val( spaceBtwInputs ); }
		if (HX_FIELD_EQ(inName,"wheelScrollSpd") ) { return ::hx::Val( wheelScrollSpd ); }
		if (HX_FIELD_EQ(inName,"reloadBeatBars") ) { return ::hx::Val( reloadBeatBars_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeNoteLines") ) { return ::hx::Val( activeNoteLines ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedNoteJson") ) { return ::hx::Val( selectedNoteJson ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharterState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mil") ) { mil=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isHeld") ) { isHeld=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songJson") ) { songJson=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beatBars") ) { beatBars=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ghostNote") ) { ghostNote=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputSize") ) { inputSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeNotes") ) { activeNotes=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderRange") ) { renderRange=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inputCircles") ) { inputCircles=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barDivisions") ) { barDivisions=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isWheelMoving") ) { isWheelMoving=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"activeNoteEnds") ) { activeNoteEnds=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spaceBtwInputs") ) { spaceBtwInputs=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wheelScrollSpd") ) { wheelScrollSpd=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeNoteLines") ) { activeNoteLines=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedNoteJson") ) { selectedNoteJson=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharterState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songJson",9d,a0,40,34));
	outFields->push(HX_("activeNotes",9b,dc,0f,fc));
	outFields->push(HX_("activeNoteLines",07,5e,64,e7));
	outFields->push(HX_("activeNoteEnds",30,b5,a1,6a));
	outFields->push(HX_("ghostNote",e1,26,d7,1c));
	outFields->push(HX_("inputCircles",79,b5,e2,8d));
	outFields->push(HX_("beatBars",d6,e7,4a,0c));
	outFields->push(HX_("barDivisions",53,06,b7,c1));
	outFields->push(HX_("mil",90,11,53,00));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("inputSize",eb,5d,7e,13));
	outFields->push(HX_("spaceBtwInputs",c8,df,15,07));
	outFields->push(HX_("isWheelMoving",bf,d1,40,65));
	outFields->push(HX_("wheelScrollSpd",ff,0a,52,9c));
	outFields->push(HX_("selectedNoteJson",b5,a0,c4,2c));
	outFields->push(HX_("isHeld",bf,f7,71,62));
	outFields->push(HX_("renderRange",87,d2,d0,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharterState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CharterState_obj,songJson),HX_("songJson",9d,a0,40,34)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(CharterState_obj,activeNotes),HX_("activeNotes",9b,dc,0f,fc)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(CharterState_obj,activeNoteLines),HX_("activeNoteLines",07,5e,64,e7)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(CharterState_obj,activeNoteEnds),HX_("activeNoteEnds",30,b5,a1,6a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CharterState_obj,ghostNote),HX_("ghostNote",e1,26,d7,1c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(CharterState_obj,inputCircles),HX_("inputCircles",79,b5,e2,8d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(CharterState_obj,beatBars),HX_("beatBars",d6,e7,4a,0c)},
	{::hx::fsInt,(int)offsetof(CharterState_obj,barDivisions),HX_("barDivisions",53,06,b7,c1)},
	{::hx::fsFloat,(int)offsetof(CharterState_obj,mil),HX_("mil",90,11,53,00)},
	{::hx::fsFloat,(int)offsetof(CharterState_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsInt,(int)offsetof(CharterState_obj,inputSize),HX_("inputSize",eb,5d,7e,13)},
	{::hx::fsInt,(int)offsetof(CharterState_obj,spaceBtwInputs),HX_("spaceBtwInputs",c8,df,15,07)},
	{::hx::fsBool,(int)offsetof(CharterState_obj,isWheelMoving),HX_("isWheelMoving",bf,d1,40,65)},
	{::hx::fsFloat,(int)offsetof(CharterState_obj,wheelScrollSpd),HX_("wheelScrollSpd",ff,0a,52,9c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CharterState_obj,selectedNoteJson),HX_("selectedNoteJson",b5,a0,c4,2c)},
	{::hx::fsBool,(int)offsetof(CharterState_obj,isHeld),HX_("isHeld",bf,f7,71,62)},
	{::hx::fsInt,(int)offsetof(CharterState_obj,renderRange),HX_("renderRange",87,d2,d0,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharterState_obj_sStaticStorageInfo = 0;
#endif

static ::String CharterState_obj_sMemberFields[] = {
	HX_("songJson",9d,a0,40,34),
	HX_("activeNotes",9b,dc,0f,fc),
	HX_("activeNoteLines",07,5e,64,e7),
	HX_("activeNoteEnds",30,b5,a1,6a),
	HX_("ghostNote",e1,26,d7,1c),
	HX_("inputCircles",79,b5,e2,8d),
	HX_("beatBars",d6,e7,4a,0c),
	HX_("barDivisions",53,06,b7,c1),
	HX_("mil",90,11,53,00),
	HX_("zoom",13,a3,f8,50),
	HX_("inputSize",eb,5d,7e,13),
	HX_("spaceBtwInputs",c8,df,15,07),
	HX_("isWheelMoving",bf,d1,40,65),
	HX_("wheelScrollSpd",ff,0a,52,9c),
	HX_("selectedNoteJson",b5,a0,c4,2c),
	HX_("isHeld",bf,f7,71,62),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("renderRange",87,d2,d0,af),
	HX_("organizeNotes",1e,11,14,bb),
	HX_("reloadBeatBars",4f,78,d4,fb),
	HX_("noteSnap",5c,7b,8a,5b),
	HX_("timeToYPos",a3,99,ba,23),
	HX_("yPosToTime",23,f8,f1,00),
	::String(null()) };

::hx::Class CharterState_obj::__mClass;

void CharterState_obj::__register()
{
	CharterState_obj _hx_dummy;
	CharterState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CharterState",66,09,e9,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharterState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharterState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharterState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharterState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

