#ifndef INCLUDED_flixel_input_FlxAccelerometer
#define INCLUDED_flixel_input_FlxAccelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxAccelerometer)
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,sensors,Accelerometer)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxAccelerometer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAccelerometer_obj OBJ_;
		FlxAccelerometer_obj();

	public:
		enum { _hx_ClassId = 0x48800d0b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxAccelerometer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.FlxAccelerometer"); }
		static ::hx::ObjectPtr< FlxAccelerometer_obj > __new();
		static ::hx::ObjectPtr< FlxAccelerometer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAccelerometer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAccelerometer",1d,27,91,e3); }

		Float x;
		Float y;
		Float z;
		 ::openfl::sensors::Accelerometer _sensor;
		bool get_isSupported();
		::Dynamic get_isSupported_dyn();

		void update( ::openfl::events::AccelerometerEvent Event);
		::Dynamic update_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxAccelerometer */ 
