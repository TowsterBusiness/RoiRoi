#ifndef INCLUDED_flixel_FlxG
#define INCLUDED_flixel_FlxG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxG)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxRenderMethod)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,effects,postprocess,PostProcess)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,FlxAccelerometer)
HX_DECLARE_CLASS2(flixel,input,FlxSwipe)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxVersion)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,BitmapFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,BitmapLogFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,CameraFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,ConsoleFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,LogFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,PluginFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,SignalFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,SoundFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,VCRFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,WatchFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxG_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxG_obj OBJ_;
		FlxG_obj();

	public:
		enum { _hx_ClassId = 0x192da091 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.FlxG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.FlxG"); }

		inline static ::hx::ObjectPtr< FlxG_obj > __new() {
			::hx::ObjectPtr< FlxG_obj > __this = new FlxG_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxG_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxG_obj *__this = (FlxG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxG_obj), false, "flixel.FlxG"));
			*(void **)__this = FlxG_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxG",b5,4b,97,2e); }

		static void __boot();
		static bool autoPause;
		static bool fixedTimestep;
		static Float timeScale;
		static int worldDivisions;
		static  ::flixel::FlxCamera camera;
		static  ::flixel::_hx_system::FlxVersion VERSION;
		static  ::flixel::FlxGame game;
		static int updateFramerate;
		static int drawFramerate;
		static  ::flixel::FlxRenderMethod renderMethod;
		static bool renderBlit;
		static bool renderTile;
		static Float elapsed;
		static Float maxElapsed;
		static int width;
		static int height;
		static  ::flixel::_hx_system::scaleModes::BaseScaleMode scaleMode;
		static  ::flixel::math::FlxRect worldBounds;
		static  ::flixel::util::FlxSave save;
		static  ::flixel::math::FlxRandom random;
		static  ::flixel::input::touch::FlxTouchManager touches;
		static ::Array< ::Dynamic> swipes;
		static  ::flixel::input::gamepad::FlxGamepadManager gamepads;
		static  ::flixel::input::FlxAccelerometer accelerometer;
		static  ::flixel::_hx_system::frontEnds::InputFrontEnd inputs;
		static  ::flixel::_hx_system::frontEnds::ConsoleFrontEnd console;
		static  ::flixel::_hx_system::frontEnds::LogFrontEnd log;
		static  ::flixel::_hx_system::frontEnds::BitmapLogFrontEnd bitmapLog;
		static  ::flixel::_hx_system::frontEnds::WatchFrontEnd watch;
		static  ::flixel::_hx_system::frontEnds::DebuggerFrontEnd debugger;
		static  ::flixel::_hx_system::frontEnds::VCRFrontEnd vcr;
		static  ::flixel::_hx_system::frontEnds::BitmapFrontEnd bitmap;
		static  ::flixel::_hx_system::frontEnds::CameraFrontEnd cameras;
		static  ::flixel::_hx_system::frontEnds::PluginFrontEnd plugins;
		static int initialWidth;
		static int initialHeight;
		static Float initialZoom;
		static  ::flixel::_hx_system::frontEnds::SoundFrontEnd sound;
		static  ::flixel::_hx_system::frontEnds::SignalFrontEnd signals;
		static void resizeGame(int Width,int Height);
		static ::Dynamic resizeGame_dyn();

		static void resizeWindow(int Width,int Height);
		static ::Dynamic resizeWindow_dyn();

		static void resetGame();
		static ::Dynamic resetGame_dyn();

		static void switchState( ::flixel::FlxState nextState);
		static ::Dynamic switchState_dyn();

		static void resetState();
		static ::Dynamic resetState_dyn();

		static bool overlap( ::flixel::FlxBasic ObjectOrGroup1, ::flixel::FlxBasic ObjectOrGroup2, ::Dynamic NotifyCallback, ::Dynamic ProcessCallback);
		static ::Dynamic overlap_dyn();

		static bool pixelPerfectOverlap( ::flixel::FlxSprite Sprite1, ::flixel::FlxSprite Sprite2,::hx::Null< int >  AlphaTolerance, ::flixel::FlxCamera Camera);
		static ::Dynamic pixelPerfectOverlap_dyn();

		static bool collide( ::flixel::FlxBasic ObjectOrGroup1, ::flixel::FlxBasic ObjectOrGroup2, ::Dynamic NotifyCallback);
		static ::Dynamic collide_dyn();

		static  ::Dynamic addChildBelowMouse( ::Dynamic Child,::hx::Null< int >  IndexModifier);
		static ::Dynamic addChildBelowMouse_dyn();

		static  ::Dynamic removeChild( ::Dynamic Child);
		static ::Dynamic removeChild_dyn();

		static  ::flixel::effects::postprocess::PostProcess addPostProcess( ::flixel::effects::postprocess::PostProcess postProcess);
		static ::Dynamic addPostProcess_dyn();

		static void removePostProcess( ::flixel::effects::postprocess::PostProcess postProcess);
		static ::Dynamic removePostProcess_dyn();

		static void openURL(::String URL,::String Target);
		static ::Dynamic openURL_dyn();

		static void init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom);
		static ::Dynamic init_dyn();

		static void initRenderMethod();
		static ::Dynamic initRenderMethod_dyn();

		static void reset();
		static ::Dynamic reset_dyn();

		static  ::flixel::_hx_system::scaleModes::BaseScaleMode set_scaleMode( ::flixel::_hx_system::scaleModes::BaseScaleMode ScaleMode);
		static ::Dynamic set_scaleMode_dyn();

		static int set_updateFramerate(int Framerate);
		static ::Dynamic set_updateFramerate_dyn();

		static int set_drawFramerate(int Framerate);
		static ::Dynamic set_drawFramerate_dyn();

		static bool get_fullscreen();
		static ::Dynamic get_fullscreen_dyn();

		static bool set_fullscreen(bool Value);
		static ::Dynamic set_fullscreen_dyn();

		static  ::openfl::display::Stage get_stage();
		static ::Dynamic get_stage_dyn();

		static  ::flixel::FlxState get_state();
		static ::Dynamic get_state_dyn();

		static bool get_onMobile();
		static ::Dynamic get_onMobile_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxG */ 