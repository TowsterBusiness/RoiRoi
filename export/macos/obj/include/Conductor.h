#ifndef INCLUDED_Conductor
#define INCLUDED_Conductor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Conductor)



class HXCPP_CLASS_ATTRIBUTES Conductor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Conductor_obj OBJ_;
		Conductor_obj();

	public:
		enum { _hx_ClassId = 0x3ee4ed07 };

		void __construct(::Array< ::Dynamic> bpmList);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Conductor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Conductor"); }
		static ::hx::ObjectPtr< Conductor_obj > __new(::Array< ::Dynamic> bpmList);
		static ::hx::ObjectPtr< Conductor_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> bpmList);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Conductor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Conductor",c7,77,a1,7b); }

		::Array< ::Dynamic> BPMList;
		Float currentBPM;
		int currentBPM_Time;
		int lastBPMCheck;
		int startTime;
		int pauseTime;
		int pauseStart;
		bool paused;
		int getMil();
		::Dynamic getMil_dyn();

		bool isPastLastBPMChange();
		::Dynamic isPastLastBPMChange_dyn();

		void pause();
		::Dynamic pause_dyn();

		void start();
		::Dynamic start_dyn();

};


#endif /* INCLUDED_Conductor */ 
