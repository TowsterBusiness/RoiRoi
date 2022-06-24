#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#define INCLUDED_flixel_system_frontEnds_VCRFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9c3075758433de87_21_new)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,VCRFrontEnd)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES VCRFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VCRFrontEnd_obj OBJ_;
		VCRFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x0b9c7265 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.VCRFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.frontEnds.VCRFrontEnd"); }

		inline static ::hx::ObjectPtr< VCRFrontEnd_obj > __new() {
			::hx::ObjectPtr< VCRFrontEnd_obj > __this = new VCRFrontEnd_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< VCRFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx) {
			VCRFrontEnd_obj *__this = (VCRFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VCRFrontEnd_obj), false, "flixel.system.frontEnds.VCRFrontEnd"));
			*(void **)__this = VCRFrontEnd_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_9c3075758433de87_21_new)
HXLINE(  59)		( ( ::flixel::_hx_system::frontEnds::VCRFrontEnd)(__this) )->stepRequested = false;
HXLINE(  54)		( ( ::flixel::_hx_system::frontEnds::VCRFrontEnd)(__this) )->paused = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VCRFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VCRFrontEnd",57,78,75,5c); }

		bool paused;
		bool stepRequested;
		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_VCRFrontEnd */ 
