#ifndef INCLUDED_openfl_sensors_Accelerometer
#define INCLUDED_openfl_sensors_Accelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,sensors,Accelerometer)

namespace openfl{
namespace sensors{


class HXCPP_CLASS_ATTRIBUTES Accelerometer_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Accelerometer_obj OBJ_;
		Accelerometer_obj();

	public:
		enum { _hx_ClassId = 0x5bea9c26 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.sensors.Accelerometer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.sensors.Accelerometer"); }
		static ::hx::ObjectPtr< Accelerometer_obj > __new();
		static ::hx::ObjectPtr< Accelerometer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Accelerometer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Accelerometer",af,6e,ff,50); }

		static void __boot();
		static Float currentX;
		static Float currentY;
		static Float currentZ;
		static int defaultInterval;
		static bool initialized;
		static bool supported;
		static void initialize();
		static ::Dynamic initialize_dyn();

		static void accelerometer_onUpdate(Float x,Float y,Float z);
		static ::Dynamic accelerometer_onUpdate_dyn();

		static bool get_isSupported();
		static ::Dynamic get_isSupported_dyn();

		int _hx___interval;
		bool _hx___muted;
		 ::haxe::Timer _hx___timer;
		void addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		void setRequestedUpdateInterval(int interval);
		::Dynamic setRequestedUpdateInterval_dyn();

		void update();
		::Dynamic update_dyn();

		bool get_muted();
		::Dynamic get_muted_dyn();

		bool set_muted(bool value);
		::Dynamic set_muted_dyn();

};

} // end namespace openfl
} // end namespace sensors

#endif /* INCLUDED_openfl_sensors_Accelerometer */ 