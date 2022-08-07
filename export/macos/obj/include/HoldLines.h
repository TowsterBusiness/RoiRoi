#ifndef INCLUDED_HoldLines
#define INCLUDED_HoldLines

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(HoldLines)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES HoldLines_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef HoldLines_obj OBJ_;
		HoldLines_obj();

	public:
		enum { _hx_ClassId = 0x72f5f560 };

		void __construct( ::flixel::math::FlxPoint point, ::flixel::math::FlxPoint point2, ::flixel::FlxSprite sectionSprite, ::Dynamic __o_space);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HoldLines")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HoldLines"); }
		static ::hx::ObjectPtr< HoldLines_obj > __new( ::flixel::math::FlxPoint point, ::flixel::math::FlxPoint point2, ::flixel::FlxSprite sectionSprite, ::Dynamic __o_space);
		static ::hx::ObjectPtr< HoldLines_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::math::FlxPoint point, ::flixel::math::FlxPoint point2, ::flixel::FlxSprite sectionSprite, ::Dynamic __o_space);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HoldLines_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HoldLines",20,80,b2,af); }

		Float space;
		 ::flixel::FlxSprite sectionSprite;
		 ::flixel::math::FlxPoint point;
		 ::flixel::math::FlxPoint point2;
		void onPointSet( ::flixel::math::FlxPoint x);
		::Dynamic onPointSet_dyn();

		int ofts;
		void updateLine();
		::Dynamic updateLine_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_HoldLines */ 
