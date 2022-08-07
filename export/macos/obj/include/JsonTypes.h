#ifndef INCLUDED_JsonTypes
#define INCLUDED_JsonTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(JsonTypes)



class HXCPP_CLASS_ATTRIBUTES JsonTypes_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JsonTypes_obj OBJ_;
		JsonTypes_obj();

	public:
		enum { _hx_ClassId = 0x1fbe2251 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="JsonTypes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"JsonTypes"); }

		inline static ::hx::ObjectPtr< JsonTypes_obj > __new() {
			::hx::ObjectPtr< JsonTypes_obj > __this = new JsonTypes_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JsonTypes_obj > __alloc(::hx::Ctx *_hx_ctx) {
			JsonTypes_obj *__this = (JsonTypes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JsonTypes_obj), false, "JsonTypes"));
			*(void **)__this = JsonTypes_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JsonTypes_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JsonTypes",11,ad,7a,5c); }

};


#endif /* INCLUDED_JsonTypes */ 
