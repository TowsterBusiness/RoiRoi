#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Conductor)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		 ::flixel::group::FlxTypedSpriteGroup activeNotes;
		 ::flixel::group::FlxTypedSpriteGroup inputCircles;
		 ::flixel::group::FlxTypedSpriteGroup noteHoldEnds;
		 ::flixel::group::FlxTypedSpriteGroup noteHoldLines;
		 ::Dynamic songJson;
		 ::Conductor conductor;
		int scrollSpeed;
		int noteLoadSpeed;
		int score;
		 ::flixel::text::FlxText scoreBoard;
		int combo;
		 ::flixel::text::FlxText comboBoard;
		::Array< ::Dynamic> inputCirclePosList;
		::Array< ::Dynamic> doorPosList;
		::Array< int > keyBinds;
		void create();

		void update(Float elapsed);

		void inputPressed(int keyNum);
		::Dynamic inputPressed_dyn();

		void inputReleased(int keyNum);
		::Dynamic inputReleased_dyn();

		::Array< int > noteAccuracyList;
		int noteRater( ::Note note);
		::Dynamic noteRater_dyn();

		void raterActions(int rating,::hx::Null< bool >  killCombos);
		::Dynamic raterActions_dyn();

		void addCombo();
		::Dynamic addCombo_dyn();

		void killCombo();
		::Dynamic killCombo_dyn();

		void addScore(int amount);
		::Dynamic addScore_dyn();

		void reOrganizeNotes();
		::Dynamic reOrganizeNotes_dyn();

		void moveNote( ::Note note, ::Dynamic visualOffset);
		::Dynamic moveNote_dyn();

		void onFocusLost();

		void onFocus();

};


#endif /* INCLUDED_PlayState */ 
