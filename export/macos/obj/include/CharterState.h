#ifndef INCLUDED_CharterState
#define INCLUDED_CharterState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(CharterState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES CharterState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef CharterState_obj OBJ_;
		CharterState_obj();

	public:
		enum { _hx_ClassId = 0x42ca5c26 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CharterState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CharterState"); }
		static ::hx::ObjectPtr< CharterState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< CharterState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharterState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharterState",66,09,e9,59); }

		 ::Dynamic songJson;
		 ::flixel::group::FlxTypedSpriteGroup activeNotes;
		 ::flixel::group::FlxTypedSpriteGroup activeNoteLines;
		 ::flixel::group::FlxTypedSpriteGroup activeNoteEnds;
		 ::flixel::FlxSprite ghostNote;
		 ::flixel::group::FlxTypedSpriteGroup inputCircles;
		 ::flixel::group::FlxTypedSpriteGroup beatBars;
		int barDivisions;
		Float mil;
		Float zoom;
		int inputSize;
		int spaceBtwInputs;
		bool isWheelMoving;
		Float wheelScrollSpd;
		 ::Dynamic selectedNoteJson;
		bool isHeld;
		void create();

		void update(Float elapsed);

		int renderRange;
		void organizeNotes();
		::Dynamic organizeNotes_dyn();

		void reloadBeatBars();
		::Dynamic reloadBeatBars_dyn();

		int noteSnap(Float time);
		::Dynamic noteSnap_dyn();

		Float timeToYPos(Float time);
		::Dynamic timeToYPos_dyn();

		Float yPosToTime(Float yPos);
		::Dynamic yPosToTime_dyn();

};


#endif /* INCLUDED_CharterState */ 
