#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoImageSurface,CairoImageSurface_Impl_)

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{


class HXCPP_CLASS_ATTRIBUTES CairoImageSurface_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoImageSurface_Impl__obj OBJ_;
		CairoImageSurface_Impl__obj();

	public:
		enum { _hx_ClassId = 0x75050757 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_"); }

		inline static ::hx::ObjectPtr< CairoImageSurface_Impl__obj > __new() {
			::hx::ObjectPtr< CairoImageSurface_Impl__obj > __this = new CairoImageSurface_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoImageSurface_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoImageSurface_Impl__obj *__this = (CairoImageSurface_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoImageSurface_Impl__obj), false, "lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_"));
			*(void **)__this = CairoImageSurface_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoImageSurface_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoImageSurface_Impl_",ba,74,06,3c); }

		static  ::Dynamic _new(int format,int width,int height);
		static ::Dynamic _new_dyn();

		static  ::Dynamic create(Float data,int format,int width,int height,int stride);
		static ::Dynamic create_dyn();

		static  ::Dynamic fromImage( ::lime::graphics::Image image);
		static ::Dynamic fromImage_dyn();

		static Float get_data( ::Dynamic this1);
		static ::Dynamic get_data_dyn();

		static int get_format( ::Dynamic this1);
		static ::Dynamic get_format_dyn();

		static int get_height( ::Dynamic this1);
		static ::Dynamic get_height_dyn();

		static int get_stride( ::Dynamic this1);
		static ::Dynamic get_stride_dyn();

		static int get_width( ::Dynamic this1);
		static ::Dynamic get_width_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_ */ 
