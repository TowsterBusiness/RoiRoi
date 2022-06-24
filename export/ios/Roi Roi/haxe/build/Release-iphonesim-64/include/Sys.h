#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)



class HXCPP_CLASS_ATTRIBUTES Sys_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();

	public:
		enum { _hx_ClassId = 0x7ee3a981 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Sys")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Sys"); }

		inline static ::hx::ObjectPtr< Sys_obj > __new() {
			::hx::ObjectPtr< Sys_obj > __this = new Sys_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Sys_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Sys_obj *__this = (Sys_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sys_obj), false, "Sys"));
			*(void **)__this = Sys_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sys",ed,64,3f,00); }

		static void print( ::Dynamic v);
		static ::Dynamic print_dyn();

		static void println( ::Dynamic v);
		static ::Dynamic println_dyn();

		static ::Array< ::String > args();
		static ::Dynamic args_dyn();

		static ::String getEnv(::String s);
		static ::Dynamic getEnv_dyn();

		static void sleep(Float seconds);
		static ::Dynamic sleep_dyn();

		static ::String getCwd();
		static ::Dynamic getCwd_dyn();

		static void setCwd(::String s);
		static ::Dynamic setCwd_dyn();

		static void exit(int code);
		static ::Dynamic exit_dyn();

		static Float time();
		static ::Dynamic time_dyn();

};


#endif /* INCLUDED_Sys */ 
