#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#define INCLUDED_flixel_addons_display_shapes_FlxShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShape)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeType)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES FlxShape_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxShape_obj OBJ_;
		FlxShape_obj();

	public:
		enum { _hx_ClassId = 0x159bd734 };

		void __construct(Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,::hx::Null< Float >  __o_TrueWidth,::hx::Null< Float >  __o_TrueHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.shapes.FlxShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.shapes.FlxShape"); }
		static ::hx::ObjectPtr< FlxShape_obj > __new(Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,::hx::Null< Float >  __o_TrueWidth,::hx::Null< Float >  __o_TrueHeight);
		static ::hx::ObjectPtr< FlxShape_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,::hx::Null< Float >  __o_TrueWidth,::hx::Null< Float >  __o_TrueHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxShape_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxShape",6f,ed,f6,38); }

		 ::Dynamic lineStyle;
		int fillColor;
		Float shapeWidth;
		Float shapeHeight;
		 ::flixel::addons::display::shapes::FlxShapeType shape_id;
		bool shapeDirty;
		virtual void destroy();

		virtual void drawSpecificShape( ::openfl::geom::Matrix matrix);
		::Dynamic drawSpecificShape_dyn();

		void redrawShape();
		::Dynamic redrawShape_dyn();

		void draw();

		 ::Dynamic _drawStyle;
		void fixBoundaries(Float trueWidth,Float trueHeight);
		::Dynamic fixBoundaries_dyn();

		virtual Float getStrokeOffsetX();
		::Dynamic getStrokeOffsetX_dyn();

		virtual Float getStrokeOffsetY();
		::Dynamic getStrokeOffsetY_dyn();

		virtual Float get_strokeBuffer();
		::Dynamic get_strokeBuffer_dyn();

		 ::openfl::geom::Matrix getStrokeOffsetMatrix( ::openfl::geom::Matrix matrix);
		::Dynamic getStrokeOffsetMatrix_dyn();

		int set_fillColor(int fc);
		::Dynamic set_fillColor_dyn();

		 ::Dynamic set_lineStyle( ::Dynamic ls);
		::Dynamic set_lineStyle_dyn();

		Float set_shapeWidth(Float f);
		::Dynamic set_shapeWidth_dyn();

		Float set_shapeHeight(Float f);
		::Dynamic set_shapeHeight_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_FlxShape */ 