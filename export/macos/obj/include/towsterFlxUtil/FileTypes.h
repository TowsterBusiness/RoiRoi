#ifndef INCLUDED_towsterFlxUtil_FileTypes
#define INCLUDED_towsterFlxUtil_FileTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(towsterFlxUtil,FileTypes)
namespace towsterFlxUtil{


class FileTypes_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileTypes_obj OBJ_;

	public:
		FileTypes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("towsterFlxUtil.FileTypes",99,11,78,d3); }
		::String __ToString() const { return HX_("FileTypes.",51,45,6c,2e) + _hx_tag; }

		static ::towsterFlxUtil::FileTypes JSON;
		static inline ::towsterFlxUtil::FileTypes JSON_dyn() { return JSON; }
		static ::towsterFlxUtil::FileTypes MP3;
		static inline ::towsterFlxUtil::FileTypes MP3_dyn() { return MP3; }
		static ::towsterFlxUtil::FileTypes MP4;
		static inline ::towsterFlxUtil::FileTypes MP4_dyn() { return MP4; }
		static ::towsterFlxUtil::FileTypes OGG;
		static inline ::towsterFlxUtil::FileTypes OGG_dyn() { return OGG; }
		static ::towsterFlxUtil::FileTypes PNG;
		static inline ::towsterFlxUtil::FileTypes PNG_dyn() { return PNG; }
		static ::towsterFlxUtil::FileTypes TXT;
		static inline ::towsterFlxUtil::FileTypes TXT_dyn() { return TXT; }
		static ::towsterFlxUtil::FileTypes XML;
		static inline ::towsterFlxUtil::FileTypes XML_dyn() { return XML; }
};

} // end namespace towsterFlxUtil

#endif /* INCLUDED_towsterFlxUtil_FileTypes */ 
