#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeLine
#include <flixel/addons/display/shapes/FlxShapeLine.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeType
#include <flixel/addons/display/shapes/FlxShapeType.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_07e04da69506d1a1_26_new,"flixel.addons.display.shapes.FlxShapeLine","new",0x42cf895c,"flixel.addons.display.shapes.FlxShapeLine.new","flixel/addons/display/shapes/FlxShapeLine.hx",26,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_45_destroy,"flixel.addons.display.shapes.FlxShapeLine","destroy",0x943813f6,"flixel.addons.display.shapes.FlxShapeLine.destroy","flixel/addons/display/shapes/FlxShapeLine.hx",45,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_53_drawSpecificShape,"flixel.addons.display.shapes.FlxShapeLine","drawSpecificShape",0x6a983867,"flixel.addons.display.shapes.FlxShapeLine.drawSpecificShape","flixel/addons/display/shapes/FlxShapeLine.hx",53,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_58_onSetPoint,"flixel.addons.display.shapes.FlxShapeLine","onSetPoint",0x150e9011,"flixel.addons.display.shapes.FlxShapeLine.onSetPoint","flixel/addons/display/shapes/FlxShapeLine.hx",58,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_62_updatePoint,"flixel.addons.display.shapes.FlxShapeLine","updatePoint",0x8abf3283,"flixel.addons.display.shapes.FlxShapeLine.updatePoint","flixel/addons/display/shapes/FlxShapeLine.hx",62,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_74_get_strokeBuffer,"flixel.addons.display.shapes.FlxShapeLine","get_strokeBuffer",0x22a1c4e5,"flixel.addons.display.shapes.FlxShapeLine.get_strokeBuffer","flixel/addons/display/shapes/FlxShapeLine.hx",74,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_79_getStrokeOffsetX,"flixel.addons.display.shapes.FlxShapeLine","getStrokeOffsetX",0x715fe79b,"flixel.addons.display.shapes.FlxShapeLine.getStrokeOffsetX","flixel/addons/display/shapes/FlxShapeLine.hx",79,0xaa2af194)
HX_LOCAL_STACK_FRAME(_hx_pos_07e04da69506d1a1_84_getStrokeOffsetY,"flixel.addons.display.shapes.FlxShapeLine","getStrokeOffsetY",0x715fe79c,"flixel.addons.display.shapes.FlxShapeLine.getStrokeOffsetY","flixel/addons/display/shapes/FlxShapeLine.hx",84,0xaa2af194)
namespace flixel{
namespace addons{
namespace display{
namespace shapes{

void FlxShapeLine_obj::__construct(Float X,Float Y, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::Dynamic LineStyle_){
            	HX_GC_STACKFRAME(&_hx_pos_07e04da69506d1a1_26_new)
HXLINE(  27)		Float trueWidth = ::Math_obj::abs((a->x - b->x));
HXLINE(  28)		Float trueHeight = ::Math_obj::abs((a->y - b->y));
HXLINE(  30)		super::__construct(X,Y,0,0,LineStyle_,0,trueWidth,trueHeight);
HXLINE(  32)		this->point =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->onSetPoint_dyn(),null(),null());
HXLINE(  33)		this->point2 =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->onSetPoint_dyn(),null(),null());
HXLINE(  35)		{
HXLINE(  35)			 ::flixel::math::FlxPoint _this = this->point;
HXDLIN(  35)			_this->set_x(a->x);
HXDLIN(  35)			_this->set_y(a->y);
HXDLIN(  35)			if (a->_weak) {
HXLINE(  35)				a->put();
            			}
            		}
HXLINE(  36)		{
HXLINE(  36)			 ::flixel::math::FlxPoint _this1 = this->point2;
HXDLIN(  36)			_this1->set_x(b->x);
HXDLIN(  36)			_this1->set_y(b->y);
HXDLIN(  36)			if (b->_weak) {
HXLINE(  36)				b->put();
            			}
            		}
HXLINE(  38)		if (a->_weak) {
HXLINE(  38)			a->put();
            		}
HXLINE(  39)		if (b->_weak) {
HXLINE(  39)			b->put();
            		}
HXLINE(  41)		this->shape_id = ::flixel::addons::display::shapes::FlxShapeType_obj::LINE_dyn();
            	}

Dynamic FlxShapeLine_obj::__CreateEmpty() { return new FlxShapeLine_obj; }

void *FlxShapeLine_obj::_hx_vtable = 0;

Dynamic FlxShapeLine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxShapeLine_obj > _hx_result = new FlxShapeLine_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxShapeLine_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x159bd734) {
			if (inClassId<=(int)0x0ab7c59c) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ab7c59c;
			} else {
				return inClassId==(int)0x159bd734;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxShapeLine_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_45_destroy)
HXLINE(  46)		this->point = null();
HXLINE(  47)		this->point2 = null();
HXLINE(  48)		this->super::destroy();
            	}


void FlxShapeLine_obj::drawSpecificShape( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_53_drawSpecificShape)
HXDLIN(  53)		::flixel::util::FlxSpriteUtil_obj::drawLine(::hx::ObjectPtr<OBJ_>(this),this->point->x,this->point->y,this->point2->x,this->point2->y,this->lineStyle, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("matrix",41,36,c8,bb),matrix)));
            	}


void FlxShapeLine_obj::onSetPoint( ::flixel::math::FlxPoint p){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_58_onSetPoint)
HXDLIN(  58)		this->updatePoint();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShapeLine_obj,onSetPoint,(void))

void FlxShapeLine_obj::updatePoint(){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_62_updatePoint)
HXLINE(  63)		{
HXLINE(  63)			this->shapeWidth = ::Math_obj::abs((this->point->x - this->point2->x));
HXDLIN(  63)			this->shapeDirty = true;
            		}
HXLINE(  64)		{
HXLINE(  64)			this->shapeHeight = ::Math_obj::abs((this->point->y - this->point2->y));
HXDLIN(  64)			this->shapeDirty = true;
            		}
HXLINE(  65)		if ((this->shapeWidth <= 0)) {
HXLINE(  66)			this->shapeWidth = ( (Float)(1) );
HXDLIN(  66)			this->shapeDirty = true;
            		}
HXLINE(  67)		if ((this->shapeHeight <= 0)) {
HXLINE(  68)			this->shapeHeight = ( (Float)(1) );
HXDLIN(  68)			this->shapeDirty = true;
            		}
HXLINE(  69)		this->shapeDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShapeLine_obj,updatePoint,(void))

Float FlxShapeLine_obj::get_strokeBuffer(){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_74_get_strokeBuffer)
HXDLIN(  74)		return (( (Float)(this->lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic)) ) * ((Float)2.0));
            	}


Float FlxShapeLine_obj::getStrokeOffsetX(){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_79_getStrokeOffsetX)
HXDLIN(  79)		return (this->get_strokeBuffer() / ( (Float)(2) ));
            	}


Float FlxShapeLine_obj::getStrokeOffsetY(){
            	HX_STACKFRAME(&_hx_pos_07e04da69506d1a1_84_getStrokeOffsetY)
HXDLIN(  84)		return (this->get_strokeBuffer() / ( (Float)(2) ));
            	}



::hx::ObjectPtr< FlxShapeLine_obj > FlxShapeLine_obj::__new(Float X,Float Y, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::Dynamic LineStyle_) {
	::hx::ObjectPtr< FlxShapeLine_obj > __this = new FlxShapeLine_obj();
	__this->__construct(X,Y,a,b,LineStyle_);
	return __this;
}

::hx::ObjectPtr< FlxShapeLine_obj > FlxShapeLine_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::Dynamic LineStyle_) {
	FlxShapeLine_obj *__this = (FlxShapeLine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxShapeLine_obj), true, "flixel.addons.display.shapes.FlxShapeLine"));
	*(void **)__this = FlxShapeLine_obj::_hx_vtable;
	__this->__construct(X,Y,a,b,LineStyle_);
	return __this;
}

FlxShapeLine_obj::FlxShapeLine_obj()
{
}

void FlxShapeLine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxShapeLine);
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(point2,"point2");
	 ::flixel::addons::display::shapes::FlxShape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxShapeLine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	 ::flixel::addons::display::shapes::FlxShape_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxShapeLine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return ::hx::Val( point ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point2") ) { return ::hx::Val( point2 ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onSetPoint") ) { return ::hx::Val( onSetPoint_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updatePoint") ) { return ::hx::Val( updatePoint_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_strokeBuffer") ) { return ::hx::Val( get_strokeBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrokeOffsetX") ) { return ::hx::Val( getStrokeOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrokeOffsetY") ) { return ::hx::Val( getStrokeOffsetY_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawSpecificShape") ) { return ::hx::Val( drawSpecificShape_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxShapeLine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxShapeLine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("point",50,b4,8f,c6));
	outFields->push(HX_("point2",e2,11,2e,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxShapeLine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxShapeLine_obj,point),HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxShapeLine_obj,point2),HX_("point2",e2,11,2e,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxShapeLine_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxShapeLine_obj_sMemberFields[] = {
	HX_("point",50,b4,8f,c6),
	HX_("point2",e2,11,2e,f7),
	HX_("destroy",fa,2c,86,24),
	HX_("drawSpecificShape",6b,3e,59,64),
	HX_("onSetPoint",8d,f1,7a,b2),
	HX_("updatePoint",87,1d,28,ac),
	HX_("get_strokeBuffer",61,6b,72,5f),
	HX_("getStrokeOffsetX",17,8e,30,ae),
	HX_("getStrokeOffsetY",18,8e,30,ae),
	::String(null()) };

::hx::Class FlxShapeLine_obj::__mClass;

void FlxShapeLine_obj::__register()
{
	FlxShapeLine_obj _hx_dummy;
	FlxShapeLine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.shapes.FlxShapeLine",6a,eb,48,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxShapeLine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxShapeLine_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxShapeLine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxShapeLine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes
