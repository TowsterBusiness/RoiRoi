#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Paths
#include <towsterFlxUtil/Paths.h>
#endif
#ifndef INCLUDED_towsterFlxUtil_Sprite
#include <towsterFlxUtil/Sprite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bba135bcb7d4fe1_10_new,"towsterFlxUtil.Sprite","new",0xd74c76bb,"towsterFlxUtil.Sprite.new","towsterFlxUtil/Sprite.hx",10,0xccbc70f4)
HX_LOCAL_STACK_FRAME(_hx_pos_1bba135bcb7d4fe1_18_addOffset,"towsterFlxUtil.Sprite","addOffset",0x2c7e292f,"towsterFlxUtil.Sprite.addOffset","towsterFlxUtil/Sprite.hx",18,0xccbc70f4)
HX_LOCAL_STACK_FRAME(_hx_pos_1bba135bcb7d4fe1_22_playAnim,"towsterFlxUtil.Sprite","playAnim",0xb6ec59ea,"towsterFlxUtil.Sprite.playAnim","towsterFlxUtil/Sprite.hx",22,0xccbc70f4)
namespace towsterFlxUtil{

void Sprite_obj::__construct(Float x,Float y,::String path){
            	HX_GC_STACKFRAME(&_hx_pos_1bba135bcb7d4fe1_10_new)
HXLINE(  11)		this->offsetMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  12)		this->set_frames(::towsterFlxUtil::Paths_obj::getAnimation(path));
HXLINE(  13)		super::__construct(x,y,null());
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1e04a66f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1e04a66f;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Sprite_obj::addOffset(::String name,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_1bba135bcb7d4fe1_18_addOffset)
HXDLIN(  18)		this->offsetMap->set(name,::Array_obj< Float >::__new(2)->init(0,x)->init(1,y));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Sprite_obj,addOffset,(void))

void Sprite_obj::playAnim(::String name){
            	HX_STACKFRAME(&_hx_pos_1bba135bcb7d4fe1_22_playAnim)
HXLINE(  23)		this->animation->play(name,null(),null(),null());
HXLINE(  25)		if (!(this->offsetMap->exists(name))) {
HXLINE(  27)			this->offset->set(0,0);
HXLINE(  28)			return;
            		}
HXLINE(  31)		::Array< Float > animOffset = ( (::Array< Float >)(this->offsetMap->get(name)) );
HXLINE(  32)		this->offset->set(animOffset->__get(0),animOffset->__get(1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,playAnim,(void))


::hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(Float x,Float y,::String path) {
	::hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct(x,y,path);
	return __this;
}

::hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String path) {
	Sprite_obj *__this = (Sprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "towsterFlxUtil.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct(x,y,path);
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(offsetMap,"offsetMap");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offsetMap,"offsetMap");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetMap") ) { return ::hx::Val( offsetMap ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Sprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"offsetMap") ) { offsetMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offsetMap",c9,e8,bd,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Sprite_obj,offsetMap),HX_("offsetMap",c9,e8,bd,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite_obj_sMemberFields[] = {
	HX_("offsetMap",c9,e8,bd,41),
	HX_("addOffset",94,cc,63,18),
	HX_("playAnim",25,ea,84,30),
	::String(null()) };

::hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	Sprite_obj _hx_dummy;
	Sprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("towsterFlxUtil.Sprite",49,fd,0d,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace towsterFlxUtil
