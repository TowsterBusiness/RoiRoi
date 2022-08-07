#ifndef INCLUDED_towsterFlxUtil_Sprite
#define INCLUDED_towsterFlxUtil_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(towsterFlxUtil,Sprite)

namespace towsterFlxUtil{


class HXCPP_CLASS_ATTRIBUTES Sprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();

	public:
		enum { _hx_ClassId = 0x1e04a66f };

		void __construct(Float x,Float y,::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="towsterFlxUtil.Sprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"towsterFlxUtil.Sprite"); }
		static ::hx::ObjectPtr< Sprite_obj > __new(Float x,Float y,::String path);
		static ::hx::ObjectPtr< Sprite_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sprite",25,50,2a,f8); }

		 ::haxe::ds::StringMap offsetMap;
		void addOffset(::String name,Float x,Float y);
		::Dynamic addOffset_dyn();

		void playAnim(::String name);
		::Dynamic playAnim_dyn();

};

} // end namespace towsterFlxUtil

#endif /* INCLUDED_towsterFlxUtil_Sprite */ 
