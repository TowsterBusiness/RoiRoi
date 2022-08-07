#ifndef INCLUDED_towsterFlxUtil_Paths
#define INCLUDED_towsterFlxUtil_Paths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(towsterFlxUtil,FileTypes)
HX_DECLARE_CLASS1(towsterFlxUtil,Paths)

namespace towsterFlxUtil{


class HXCPP_CLASS_ATTRIBUTES Paths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Paths_obj OBJ_;
		Paths_obj();

	public:
		enum { _hx_ClassId = 0x465afc04 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="towsterFlxUtil.Paths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"towsterFlxUtil.Paths"); }

		inline static ::hx::ObjectPtr< Paths_obj > __new() {
			::hx::ObjectPtr< Paths_obj > __this = new Paths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Paths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Paths_obj *__this = (Paths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Paths_obj), false, "towsterFlxUtil.Paths"));
			*(void **)__this = Paths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Paths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Paths",0e,7b,84,50); }

		static  ::flixel::graphics::frames::FlxAtlasFrames getAnimation(::String path);
		static ::Dynamic getAnimation_dyn();

		static  ::Dynamic getFile(::String filePath, ::towsterFlxUtil::FileTypes fileType);
		static ::Dynamic getFile_dyn();

		static ::String getFilePath(::String filePath, ::towsterFlxUtil::FileTypes fileType);
		static ::Dynamic getFilePath_dyn();

		static ::String fileTypeToString( ::towsterFlxUtil::FileTypes fileType);
		static ::Dynamic fileTypeToString_dyn();

};

} // end namespace towsterFlxUtil

#endif /* INCLUDED_towsterFlxUtil_Paths */ 
