#ifndef INCLUDED_openfl_filters_DropShadowFilter
#define INCLUDED_openfl_filters_DropShadowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS2(openfl,filters,DropShadowFilter)
HX_DECLARE_CLASS3(openfl,filters,_DropShadowFilter,HideShader)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES DropShadowFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef DropShadowFilter_obj OBJ_;
		DropShadowFilter_obj();

	public:
		enum { _hx_ClassId = 0x2944c4ee };

		void __construct(::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.DropShadowFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters.DropShadowFilter"); }
		static ::hx::ObjectPtr< DropShadowFilter_obj > __new(::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject);
		static ::hx::ObjectPtr< DropShadowFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_angle,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout,::hx::Null< bool >  __o_hideObject);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropShadowFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DropShadowFilter",a7,ee,49,f7); }

		static void __boot();
		static  ::openfl::filters::_DropShadowFilter::HideShader _hx___hideShader;
		Float _hx___alpha;
		Float _hx___angle;
		Float _hx___blurX;
		Float _hx___blurY;
		int _hx___color;
		Float _hx___distance;
		bool _hx___hideObject;
		int _hx___horizontalPasses;
		bool _hx___inner;
		bool _hx___knockout;
		Float _hx___offsetX;
		Float _hx___offsetY;
		int _hx___quality;
		Float _hx___strength;
		int _hx___verticalPasses;
		 ::openfl::filters::BitmapFilter clone();

		 ::openfl::display::BitmapData _hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint);

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData);

		void _hx___updateSize();
		::Dynamic _hx___updateSize_dyn();

		void _hx___calculateNumShaderPasses();
		::Dynamic _hx___calculateNumShaderPasses_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		Float get_angle();
		::Dynamic get_angle_dyn();

		Float set_angle(Float value);
		::Dynamic set_angle_dyn();

		Float get_blurX();
		::Dynamic get_blurX_dyn();

		Float set_blurX(Float value);
		::Dynamic set_blurX_dyn();

		Float get_blurY();
		::Dynamic get_blurY_dyn();

		Float set_blurY(Float value);
		::Dynamic set_blurY_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		Float get_distance();
		::Dynamic get_distance_dyn();

		Float set_distance(Float value);
		::Dynamic set_distance_dyn();

		bool get_hideObject();
		::Dynamic get_hideObject_dyn();

		bool set_hideObject(bool value);
		::Dynamic set_hideObject_dyn();

		bool get_inner();
		::Dynamic get_inner_dyn();

		bool set_inner(bool value);
		::Dynamic set_inner_dyn();

		bool get_knockout();
		::Dynamic get_knockout_dyn();

		bool set_knockout(bool value);
		::Dynamic set_knockout_dyn();

		int get_quality();
		::Dynamic get_quality_dyn();

		int set_quality(int value);
		::Dynamic set_quality_dyn();

		Float get_strength();
		::Dynamic get_strength_dyn();

		Float set_strength(Float value);
		::Dynamic set_strength_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_DropShadowFilter */ 