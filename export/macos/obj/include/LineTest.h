#ifndef INCLUDED_LineTest
#define INCLUDED_LineTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(HoldLines)
HX_DECLARE_CLASS0(LineTest)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LineTest_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef LineTest_obj OBJ_;
		LineTest_obj();

	public:
		enum { _hx_ClassId = 0x1647aaaa };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LineTest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LineTest"); }
		static ::hx::ObjectPtr< LineTest_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< LineTest_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineTest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineTest",86,d2,d4,63); }

		 ::HoldLines testLine;
		int pointManipulation;
		void create();

		void update(Float elapsed);

};


#endif /* INCLUDED_LineTest */ 
