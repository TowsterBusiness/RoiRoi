#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_HoldLines
#include <HoldLines.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4dcc82c1d039419b_9_new,"HoldLines","new",0x4680b112,"HoldLines.new","HoldLines.hx",9,0x5c27969e)
HX_LOCAL_STACK_FRAME(_hx_pos_4dcc82c1d039419b_33_onPointSet,"HoldLines","onPointSet",0x8a527eff,"HoldLines.onPointSet","HoldLines.hx",33,0x5c27969e)
HX_LOCAL_STACK_FRAME(_hx_pos_4dcc82c1d039419b_39_updateLine,"HoldLines","updateLine",0x00aa7c2b,"HoldLines.updateLine","HoldLines.hx",39,0x5c27969e)
HX_LOCAL_STACK_FRAME(_hx_pos_4dcc82c1d039419b_60_update,"HoldLines","update",0xe9cca097,"HoldLines.update","HoldLines.hx",60,0x5c27969e)

void HoldLines_obj::__construct( ::flixel::math::FlxPoint point, ::flixel::math::FlxPoint point2, ::flixel::FlxSprite sectionSprite, ::Dynamic __o_space){
            		 ::Dynamic space = __o_space;
            		if (::hx::IsNull(__o_space)) space = 0;
            	HX_GC_STACKFRAME(&_hx_pos_4dcc82c1d039419b_9_new)
HXLINE(  36)		this->ofts = 0;
HXLINE(  19)		super::__construct(0,0,999);
HXLINE(  21)		this->sectionSprite = sectionSprite;
HXLINE(  22)		this->space = ( (Float)(space) );
HXLINE(  24)		this->point =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->onPointSet_dyn(),null(),null());
HXLINE(  25)		this->point2 =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->onPointSet_dyn(),null(),null());
HXLINE(  27)		{
HXLINE(  27)			 ::flixel::math::FlxPoint _this = this->point;
HXDLIN(  27)			_this->set_x(point->x);
HXDLIN(  27)			_this->set_y(point->y);
HXDLIN(  27)			if (point->_weak) {
HXLINE(  27)				point->put();
            			}
            		}
HXLINE(  28)		{
HXLINE(  28)			 ::flixel::math::FlxPoint _this1 = this->point2;
HXDLIN(  28)			_this1->set_x(point2->x);
HXDLIN(  28)			_this1->set_y(point2->y);
HXDLIN(  28)			if (point2->_weak) {
HXLINE(  28)				point2->put();
            			}
            		}
            	}

Dynamic HoldLines_obj::__CreateEmpty() { return new HoldLines_obj; }

void *HoldLines_obj::_hx_vtable = 0;

Dynamic HoldLines_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HoldLines_obj > _hx_result = new HoldLines_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool HoldLines_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x72f5f560) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x72f5f560;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HoldLines_obj::onPointSet( ::flixel::math::FlxPoint x){
            	HX_STACKFRAME(&_hx_pos_4dcc82c1d039419b_33_onPointSet)
HXDLIN(  33)		this->updateLine();
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoldLines_obj,onPointSet,(void))

void HoldLines_obj::updateLine(){
            	HX_GC_STACKFRAME(&_hx_pos_4dcc82c1d039419b_39_updateLine)
HXLINE(  40)		this->group->clear();
HXLINE(  42)		Float spritesNeeded = this->point->distanceTo(this->point2);
HXDLIN(  42)		int spritesNeeded1 = ::Math_obj::ceil((spritesNeeded / this->space));
HXLINE(  43)		Float moveAngle = (((this->point->angleBetween(this->point2) + 180) * ((Float)3.1415)) / ( (Float)(-180) ));
HXLINE(  44)		Float moveX = (this->space * ::Math_obj::sin(moveAngle));
HXLINE(  45)		Float moveY = (this->space * ::Math_obj::cos(moveAngle));
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			int _g1 = spritesNeeded1;
HXDLIN(  47)			while((_g < _g1)){
HXLINE(  47)				_g = (_g + 1);
HXDLIN(  47)				int i = (_g - 1);
HXLINE(  49)				Float sectionSpriteClone = ((moveX * ( (Float)(i) )) + this->point->x);
HXDLIN(  49)				Float sectionSpriteClone1 = (sectionSpriteClone - (this->sectionSprite->get_width() / ( (Float)(2) )));
HXLINE(  50)				Float sectionSpriteClone2 = ((moveY * ( (Float)(i) )) + this->point->y);
HXDLIN(  50)				Float sectionSpriteClone3 = (sectionSpriteClone2 - (this->sectionSprite->get_height() / ( (Float)(2) )));
HXLINE(  49)				 ::flixel::FlxSprite sectionSpriteClone4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,sectionSpriteClone1,sectionSpriteClone3,null())->loadGraphic(this->sectionSprite->graphic,null(),null(),null(),null(),null());
HXLINE(  51)				int _hx_tmp = ::Math_obj::floor(this->sectionSprite->get_width());
HXDLIN(  51)				sectionSpriteClone4->setGraphicSize(_hx_tmp,::Math_obj::floor(this->sectionSprite->get_height()));
HXLINE(  52)				sectionSpriteClone4->updateHitbox();
HXLINE(  53)				sectionSpriteClone4->set_angle(moveAngle);
HXLINE(  54)				this->add(sectionSpriteClone4);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoldLines_obj,updateLine,(void))

void HoldLines_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4dcc82c1d039419b_60_update)
HXDLIN(  60)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< HoldLines_obj > HoldLines_obj::__new( ::flixel::math::FlxPoint point, ::flixel::math::FlxPoint point2, ::flixel::FlxSprite sectionSprite, ::Dynamic __o_space) {
	::hx::ObjectPtr< HoldLines_obj > __this = new HoldLines_obj();
	__this->__construct(point,point2,sectionSprite,__o_space);
	return __this;
}

::hx::ObjectPtr< HoldLines_obj > HoldLines_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::math::FlxPoint point, ::flixel::math::FlxPoint point2, ::flixel::FlxSprite sectionSprite, ::Dynamic __o_space) {
	HoldLines_obj *__this = (HoldLines_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HoldLines_obj), true, "HoldLines"));
	*(void **)__this = HoldLines_obj::_hx_vtable;
	__this->__construct(point,point2,sectionSprite,__o_space);
	return __this;
}

HoldLines_obj::HoldLines_obj()
{
}

void HoldLines_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HoldLines);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(sectionSprite,"sectionSprite");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(ofts,"ofts");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HoldLines_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(sectionSprite,"sectionSprite");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(ofts,"ofts");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HoldLines_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ofts") ) { return ::hx::Val( ofts ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return ::hx::Val( space ); }
		if (HX_FIELD_EQ(inName,"point") ) { return ::hx::Val( point ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point2") ) { return ::hx::Val( point2 ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onPointSet") ) { return ::hx::Val( onPointSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateLine") ) { return ::hx::Val( updateLine_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sectionSprite") ) { return ::hx::Val( sectionSprite ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HoldLines_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ofts") ) { ofts=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sectionSprite") ) { sectionSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HoldLines_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("space",c6,8c,66,81));
	outFields->push(HX_("sectionSprite",ca,4f,07,66));
	outFields->push(HX_("point",50,b4,8f,c6));
	outFields->push(HX_("point2",e2,11,2e,f7));
	outFields->push(HX_("ofts",56,7a,ac,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HoldLines_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HoldLines_obj,space),HX_("space",c6,8c,66,81)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HoldLines_obj,sectionSprite),HX_("sectionSprite",ca,4f,07,66)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(HoldLines_obj,point),HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(HoldLines_obj,point2),HX_("point2",e2,11,2e,f7)},
	{::hx::fsInt,(int)offsetof(HoldLines_obj,ofts),HX_("ofts",56,7a,ac,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HoldLines_obj_sStaticStorageInfo = 0;
#endif

static ::String HoldLines_obj_sMemberFields[] = {
	HX_("space",c6,8c,66,81),
	HX_("sectionSprite",ca,4f,07,66),
	HX_("point",50,b4,8f,c6),
	HX_("point2",e2,11,2e,f7),
	HX_("onPointSet",71,05,10,8a),
	HX_("ofts",56,7a,ac,49),
	HX_("updateLine",9d,02,68,00),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HoldLines_obj::__mClass;

void HoldLines_obj::__register()
{
	HoldLines_obj _hx_dummy;
	HoldLines_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HoldLines",20,80,b2,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HoldLines_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HoldLines_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HoldLines_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HoldLines_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

