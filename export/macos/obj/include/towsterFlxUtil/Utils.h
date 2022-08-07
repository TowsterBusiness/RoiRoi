#ifndef INCLUDED_towsterFlxUtil_Utils
#define INCLUDED_towsterFlxUtil_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(towsterFlxUtil,Utils)

namespace towsterFlxUtil{


class HXCPP_CLASS_ATTRIBUTES Utils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();

	public:
		enum { _hx_ClassId = 0x33e29b07 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="towsterFlxUtil.Utils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"towsterFlxUtil.Utils"); }

		inline static ::hx::ObjectPtr< Utils_obj > __new() {
			::hx::ObjectPtr< Utils_obj > __this = new Utils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Utils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Utils_obj *__this = (Utils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Utils_obj), false, "towsterFlxUtil.Utils"));
			*(void **)__this = Utils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Utils",11,1a,0c,3e); }

		static void __boot();
		static Float windowWidth;
		static Float windowHeight;
		static int traceTextNum;
		static  ::flixel::text::FlxText traceText(::String message);
		static ::Dynamic traceText_dyn();

		static Float percentFromHeight(Float percent, ::Dynamic doesRoundToInt);
		static ::Dynamic percentFromHeight_dyn();

		static Float percentFromWidth(Float percent, ::Dynamic doesRoundToInt);
		static ::Dynamic percentFromWidth_dyn();

};

} // end namespace towsterFlxUtil

#endif /* INCLUDED_towsterFlxUtil_Utils */ 
