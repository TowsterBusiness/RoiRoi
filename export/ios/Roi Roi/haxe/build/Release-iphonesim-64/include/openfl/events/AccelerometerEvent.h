#ifndef INCLUDED_openfl_events_AccelerometerEvent
#define INCLUDED_openfl_events_AccelerometerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES AccelerometerEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef AccelerometerEvent_obj OBJ_;
		AccelerometerEvent_obj();

	public:
		enum { _hx_ClassId = 0x5f3e8454 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_timestamp,::hx::Null< Float >  __o_accelerationX,::hx::Null< Float >  __o_accelerationY,::hx::Null< Float >  __o_accelerationZ);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.AccelerometerEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.AccelerometerEvent"); }
		static ::hx::ObjectPtr< AccelerometerEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_timestamp,::hx::Null< Float >  __o_accelerationX,::hx::Null< Float >  __o_accelerationY,::hx::Null< Float >  __o_accelerationZ);
		static ::hx::ObjectPtr< AccelerometerEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_timestamp,::hx::Null< Float >  __o_accelerationX,::hx::Null< Float >  __o_accelerationY,::hx::Null< Float >  __o_accelerationZ);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AccelerometerEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AccelerometerEvent",eb,2e,b8,f5); }

		static void __boot();
		static ::String UPDATE;
		Float accelerationX;
		Float accelerationY;
		Float accelerationZ;
		Float timestamp;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_AccelerometerEvent */ 
