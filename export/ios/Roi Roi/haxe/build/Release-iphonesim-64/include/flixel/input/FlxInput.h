#ifndef INCLUDED_flixel_input_FlxInput
#define INCLUDED_flixel_input_FlxInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxInput_obj OBJ_;
		FlxInput_obj();

	public:
		enum { _hx_ClassId = 0x6f581646 };

		void __construct( ::Dynamic ID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.FlxInput"); }
		static ::hx::ObjectPtr< FlxInput_obj > __new( ::Dynamic ID);
		static ::hx::ObjectPtr< FlxInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic ID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxInput",58,ce,f7,7a); }

		 ::Dynamic ID;
		int current;
		int last;
		void press();
		::Dynamic press_dyn();

		void release();
		::Dynamic release_dyn();

		void update();
		::Dynamic update_dyn();

		void reset();
		::Dynamic reset_dyn();

		bool hasState(int state);
		::Dynamic hasState_dyn();

		bool get_justReleased();
		::Dynamic get_justReleased_dyn();

		bool get_released();
		::Dynamic get_released_dyn();

		bool get_pressed();
		::Dynamic get_pressed_dyn();

		bool get_justPressed();
		::Dynamic get_justPressed_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxInput */ 
