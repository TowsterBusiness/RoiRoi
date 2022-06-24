#ifndef INCLUDED_flixel_math_FlxAngle
#define INCLUDED_flixel_math_FlxAngle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,math,FlxAngle)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxAngle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAngle_obj OBJ_;
		FlxAngle_obj();

	public:
		enum { _hx_ClassId = 0x356118e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxAngle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxAngle"); }

		inline static ::hx::ObjectPtr< FlxAngle_obj > __new() {
			::hx::ObjectPtr< FlxAngle_obj > __this = new FlxAngle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxAngle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxAngle_obj *__this = (FlxAngle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAngle_obj), false, "flixel.math.FlxAngle"));
			*(void **)__this = FlxAngle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAngle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAngle",21,4e,bc,df); }

		static Float wrapAngle(Float angle);
		static ::Dynamic wrapAngle_dyn();

		static Float asDegrees(Float radians);
		static ::Dynamic asDegrees_dyn();

		static Float asRadians(Float degrees);
		static ::Dynamic asRadians_dyn();

		static Float angleBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,::hx::Null< bool >  AsDegrees);
		static ::Dynamic angleBetween_dyn();

		static Float angleBetweenPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target,::hx::Null< bool >  AsDegrees);
		static ::Dynamic angleBetweenPoint_dyn();

		static Float angleBetweenTouch( ::flixel::FlxObject Object, ::flixel::input::touch::FlxTouch Touch,::hx::Null< bool >  AsDegrees);
		static ::Dynamic angleBetweenTouch_dyn();

		static Float angleFromFacing(int Facing,::hx::Null< bool >  AsDegrees);
		static ::Dynamic angleFromFacing_dyn();

		static  ::flixel::math::FlxPoint getCartesianCoords(Float Radius,Float Angle, ::flixel::math::FlxPoint point);
		static ::Dynamic getCartesianCoords_dyn();

		static  ::flixel::math::FlxPoint getPolarCoords(Float X,Float Y, ::flixel::math::FlxPoint point);
		static ::Dynamic getPolarCoords_dyn();

		static Float get_TO_DEG();
		static ::Dynamic get_TO_DEG_dyn();

		static Float get_TO_RAD();
		static ::Dynamic get_TO_RAD_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxAngle */ 
