#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters_DisplacementMapFilter
#include <openfl/filters/DisplacementMapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__DisplacementMapFilter_DisplacementMapShader
#include <openfl/filters/_DisplacementMapFilter/DisplacementMapShader.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_194_new,"openfl.filters.DisplacementMapFilter","new",0x989f0e1e,"openfl.filters.DisplacementMapFilter.new","openfl/filters/DisplacementMapFilter.hx",194,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_216_clone,"openfl.filters.DisplacementMapFilter","clone",0xf847bc9b,"openfl.filters.DisplacementMapFilter.clone","openfl/filters/DisplacementMapFilter.hx",216,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_221___applyFilter,"openfl.filters.DisplacementMapFilter","__applyFilter",0xb25537e4,"openfl.filters.DisplacementMapFilter.__applyFilter","openfl/filters/DisplacementMapFilter.hx",221,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_243___initShader,"openfl.filters.DisplacementMapFilter","__initShader",0x5623aff7,"openfl.filters.DisplacementMapFilter.__initShader","openfl/filters/DisplacementMapFilter.hx",243,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_261___updateMapMatrix,"openfl.filters.DisplacementMapFilter","__updateMapMatrix",0x5ee921d2,"openfl.filters.DisplacementMapFilter.__updateMapMatrix","openfl/filters/DisplacementMapFilter.hx",261,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_291_get_alpha,"openfl.filters.DisplacementMapFilter","get_alpha",0x420523f3,"openfl.filters.DisplacementMapFilter.get_alpha","openfl/filters/DisplacementMapFilter.hx",291,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_295_set_alpha,"openfl.filters.DisplacementMapFilter","set_alpha",0x25560fff,"openfl.filters.DisplacementMapFilter.set_alpha","openfl/filters/DisplacementMapFilter.hx",295,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_302_get_componentX,"openfl.filters.DisplacementMapFilter","get_componentX",0xbedb7c46,"openfl.filters.DisplacementMapFilter.get_componentX","openfl/filters/DisplacementMapFilter.hx",302,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_306_set_componentX,"openfl.filters.DisplacementMapFilter","set_componentX",0xdefb64ba,"openfl.filters.DisplacementMapFilter.set_componentX","openfl/filters/DisplacementMapFilter.hx",306,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_313_get_componentY,"openfl.filters.DisplacementMapFilter","get_componentY",0xbedb7c47,"openfl.filters.DisplacementMapFilter.get_componentY","openfl/filters/DisplacementMapFilter.hx",313,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_317_set_componentY,"openfl.filters.DisplacementMapFilter","set_componentY",0xdefb64bb,"openfl.filters.DisplacementMapFilter.set_componentY","openfl/filters/DisplacementMapFilter.hx",317,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_324_get_color,"openfl.filters.DisplacementMapFilter","get_color",0x6acaedf8,"openfl.filters.DisplacementMapFilter.get_color","openfl/filters/DisplacementMapFilter.hx",324,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_328_set_color,"openfl.filters.DisplacementMapFilter","set_color",0x4e1bda04,"openfl.filters.DisplacementMapFilter.set_color","openfl/filters/DisplacementMapFilter.hx",328,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_335_get_scaleX,"openfl.filters.DisplacementMapFilter","get_scaleX",0x7c647059,"openfl.filters.DisplacementMapFilter.get_scaleX","openfl/filters/DisplacementMapFilter.hx",335,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_339_set_scaleX,"openfl.filters.DisplacementMapFilter","set_scaleX",0x7fe20ecd,"openfl.filters.DisplacementMapFilter.set_scaleX","openfl/filters/DisplacementMapFilter.hx",339,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_346_get_scaleY,"openfl.filters.DisplacementMapFilter","get_scaleY",0x7c64705a,"openfl.filters.DisplacementMapFilter.get_scaleY","openfl/filters/DisplacementMapFilter.hx",346,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_350_set_scaleY,"openfl.filters.DisplacementMapFilter","set_scaleY",0x7fe20ece,"openfl.filters.DisplacementMapFilter.set_scaleY","openfl/filters/DisplacementMapFilter.hx",350,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_357_get_mapBitmap,"openfl.filters.DisplacementMapFilter","get_mapBitmap",0x3dfc56c0,"openfl.filters.DisplacementMapFilter.get_mapBitmap","openfl/filters/DisplacementMapFilter.hx",357,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_361_set_mapBitmap,"openfl.filters.DisplacementMapFilter","set_mapBitmap",0x830238cc,"openfl.filters.DisplacementMapFilter.set_mapBitmap","openfl/filters/DisplacementMapFilter.hx",361,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_368_get_mapPoint,"openfl.filters.DisplacementMapFilter","get_mapPoint",0xef15f29f,"openfl.filters.DisplacementMapFilter.get_mapPoint","openfl/filters/DisplacementMapFilter.hx",368,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_372_set_mapPoint,"openfl.filters.DisplacementMapFilter","set_mapPoint",0x040f1613,"openfl.filters.DisplacementMapFilter.set_mapPoint","openfl/filters/DisplacementMapFilter.hx",372,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_379_get_mode,"openfl.filters.DisplacementMapFilter","get_mode",0xfcc1c06e,"openfl.filters.DisplacementMapFilter.get_mode","openfl/filters/DisplacementMapFilter.hx",379,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_383_set_mode,"openfl.filters.DisplacementMapFilter","set_mode",0xab1f19e2,"openfl.filters.DisplacementMapFilter.set_mode","openfl/filters/DisplacementMapFilter.hx",383,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_65_boot,"openfl.filters.DisplacementMapFilter","boot",0xeaa64cb4,"openfl.filters.DisplacementMapFilter.boot","openfl/filters/DisplacementMapFilter.hx",65,0x81237e14)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_66_boot,"openfl.filters.DisplacementMapFilter","boot",0xeaa64cb4,"openfl.filters.DisplacementMapFilter.boot","openfl/filters/DisplacementMapFilter.hx",66,0x81237e14)
static const Float _hx_array_data_f582672c_25[] = {
	0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f9a37c6d22fed5f2_67_boot,"openfl.filters.DisplacementMapFilter","boot",0xeaa64cb4,"openfl.filters.DisplacementMapFilter.boot","openfl/filters/DisplacementMapFilter.hx",67,0x81237e14)
static const Float _hx_array_data_f582672c_27[] = {
	0.5,0.5,0.0,0.0,
};
namespace openfl{
namespace filters{

void DisplacementMapFilter_obj::__construct( ::openfl::display::BitmapData mapBitmap, ::openfl::geom::Point mapPoint,::hx::Null< int >  __o_componentX,::hx::Null< int >  __o_componentY,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::String __o_mode,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int componentX = __o_componentX.Default(0);
            		int componentY = __o_componentY.Default(0);
            		Float scaleX = __o_scaleX.Default(((Float)0.0));
            		Float scaleY = __o_scaleY.Default(((Float)0.0));
            		::String mode = __o_mode;
            		if (::hx::IsNull(__o_mode)) mode = HX_("wrap",ca,39,ff,4e);
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_194_new)
HXLINE( 195)		super::__construct();
HXLINE( 197)		this->_hx___mapBitmap = mapBitmap;
HXLINE( 198)		 ::openfl::geom::Point _hx_tmp;
HXDLIN( 198)		if (::hx::IsNotNull( mapPoint )) {
HXLINE( 198)			_hx_tmp = mapPoint;
            		}
            		else {
HXLINE( 198)			_hx_tmp =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXDLIN( 198)		this->_hx___mapPoint = _hx_tmp;
HXLINE( 199)		this->_hx___componentX = componentX;
HXLINE( 200)		this->_hx___componentY = componentY;
HXLINE( 201)		this->_hx___scaleX = scaleX;
HXLINE( 202)		this->_hx___scaleY = scaleY;
HXLINE( 203)		this->_hx___mode = mode;
HXLINE( 204)		this->_hx___color = color;
HXLINE( 205)		this->_hx___alpha = alpha;
HXLINE( 207)		this->_hx___needSecondBitmapData = true;
HXLINE( 208)		this->_hx___preserveObject = false;
HXLINE( 209)		this->_hx___renderDirty = true;
HXLINE( 211)		this->_hx___numShaderPasses = 1;
            	}

Dynamic DisplacementMapFilter_obj::__CreateEmpty() { return new DisplacementMapFilter_obj; }

void *DisplacementMapFilter_obj::_hx_vtable = 0;

Dynamic DisplacementMapFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplacementMapFilter_obj > _hx_result = new DisplacementMapFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool DisplacementMapFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26de6bd2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x26de6bd2;
	} else {
		return inClassId==(int)0x2c24c23a;
	}
}

 ::openfl::filters::BitmapFilter DisplacementMapFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_216_clone)
HXDLIN( 216)		 ::openfl::display::BitmapData _hx_tmp = this->_hx___mapBitmap;
HXDLIN( 216)		 ::openfl::geom::Point _hx_tmp1 = this->_hx___mapPoint->clone();
HXDLIN( 216)		return  ::openfl::filters::DisplacementMapFilter_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->_hx___componentX,this->_hx___componentY,this->_hx___scaleX,this->_hx___scaleY,this->_hx___mode,this->_hx___color,this->_hx___alpha);
            	}


 ::openfl::display::BitmapData DisplacementMapFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_221___applyFilter)
HXLINE( 223)		this->_hx___updateMapMatrix();
HXLINE( 231)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 231)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 231)		 ::lime::graphics::Image _hx_tmp = this->_hx___mapBitmap->image;
HXLINE( 233)		 ::lime::math::Vector2 _hx_tmp1 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,(this->_hx___mapPoint->x / ( (Float)(this->_hx___mapBitmap->width) )),(this->_hx___mapPoint->y / ( (Float)(this->_hx___mapBitmap->height) )));
HXLINE( 235)		 ::lime::math::Vector4 _hx_tmp2 =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(0),::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(4),::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(8),::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(12));
HXLINE( 231)		::lime::_internal::graphics::ImageDataUtil_obj::displaceMap(bitmapData1,sourceBitmapData1,_hx_tmp,_hx_tmp1,_hx_tmp2, ::lime::math::Vector4_obj::__alloc( HX_CTX ,::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(1),::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(5),::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(9),::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData->__get(13)),this->_hx___smooth);
HXLINE( 239)		return bitmapData;
            	}


 ::openfl::display::Shader DisplacementMapFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_243___initShader)
HXLINE( 247)		this->_hx___updateMapMatrix();
HXLINE( 249)		::openfl::filters::DisplacementMapFilter_obj::_hx___displacementMapShader->uOffsets->value = ::openfl::filters::DisplacementMapFilter_obj::_hx___offset;
HXLINE( 250)		::openfl::filters::DisplacementMapFilter_obj::_hx___displacementMapShader->uDisplacements->value = ::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData;
HXLINE( 252)		Float _hx_tmp = (this->get_mapPoint()->x / ( (Float)(this->_hx___mapBitmap->width) ));
HXDLIN( 252)		Float _hx_tmp1 = (this->get_mapPoint()->y / ( (Float)(this->_hx___mapBitmap->height) ));
HXDLIN( 252)		::openfl::filters::DisplacementMapFilter_obj::_hx___displacementMapShader->mapTextureCoordsOffset->value = ::Array_obj< Float >::__new(2)->init(0,_hx_tmp)->init(1,_hx_tmp1);
HXLINE( 254)		::openfl::filters::DisplacementMapFilter_obj::_hx___displacementMapShader->mapTexture->input = this->_hx___mapBitmap;
HXLINE( 257)		return ::openfl::filters::DisplacementMapFilter_obj::_hx___displacementMapShader;
            	}


void DisplacementMapFilter_obj::_hx___updateMapMatrix(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_261___updateMapMatrix)
HXLINE( 262)		int columnX;
HXDLIN( 262)		int columnY;
HXLINE( 263)		Float scale = ((Float)1.0);
HXLINE( 264)		Float textureWidth = ( (Float)(this->_hx___mapBitmap->width) );
HXLINE( 265)		Float textureHeight = ( (Float)(this->_hx___mapBitmap->height) );
HXLINE( 267)		{
HXLINE( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[0] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[1] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[2] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[3] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[4] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[5] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[6] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[7] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[8] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[9] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[10] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[11] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[12] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[13] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[14] = ( (Float)(0) );
HXDLIN( 269)			::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[15] = ( (Float)(0) );
            		}
HXLINE( 272)		if ((this->_hx___componentX == 1)) {
HXLINE( 272)			columnX = 0;
            		}
            		else {
HXLINE( 273)			if ((this->_hx___componentX == 2)) {
HXLINE( 273)				columnX = 1;
            			}
            			else {
HXLINE( 274)				if ((this->_hx___componentX == 4)) {
HXLINE( 274)					columnX = 2;
            				}
            				else {
HXLINE( 276)					columnX = 3;
            				}
            			}
            		}
HXLINE( 278)		if ((this->_hx___componentY == 1)) {
HXLINE( 278)			columnY = 0;
            		}
            		else {
HXLINE( 279)			if ((this->_hx___componentY == 2)) {
HXLINE( 279)				columnY = 1;
            			}
            			else {
HXLINE( 280)				if ((this->_hx___componentY == 4)) {
HXLINE( 280)					columnY = 2;
            				}
            				else {
HXLINE( 282)					columnY = 3;
            				}
            			}
            		}
HXLINE( 284)		::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[(columnX * 4)] = ((this->_hx___scaleX * scale) / textureWidth);
HXLINE( 285)		::openfl::filters::DisplacementMapFilter_obj::_hx___matrixData[((columnY * 4) + 1)] = ((this->_hx___scaleY * scale) / textureHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,_hx___updateMapMatrix,(void))

Float DisplacementMapFilter_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_291_get_alpha)
HXDLIN( 291)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_alpha,return )

Float DisplacementMapFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_295_set_alpha)
HXLINE( 296)		if ((value != this->_hx___alpha)) {
HXLINE( 296)			this->_hx___renderDirty = true;
            		}
HXLINE( 297)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_alpha,return )

int DisplacementMapFilter_obj::get_componentX(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_302_get_componentX)
HXDLIN( 302)		return this->_hx___componentX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_componentX,return )

int DisplacementMapFilter_obj::set_componentX(int value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_306_set_componentX)
HXLINE( 307)		if ((value != this->_hx___componentX)) {
HXLINE( 307)			this->_hx___renderDirty = true;
            		}
HXLINE( 308)		return (this->_hx___componentX = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_componentX,return )

int DisplacementMapFilter_obj::get_componentY(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_313_get_componentY)
HXDLIN( 313)		return this->_hx___componentY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_componentY,return )

int DisplacementMapFilter_obj::set_componentY(int value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_317_set_componentY)
HXLINE( 318)		if ((value != this->_hx___componentY)) {
HXLINE( 318)			this->_hx___renderDirty = true;
            		}
HXLINE( 319)		return (this->_hx___componentY = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_componentY,return )

int DisplacementMapFilter_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_324_get_color)
HXDLIN( 324)		return this->_hx___color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_color,return )

int DisplacementMapFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_328_set_color)
HXLINE( 329)		if ((value != this->_hx___color)) {
HXLINE( 329)			this->_hx___renderDirty = true;
            		}
HXLINE( 330)		return (this->_hx___color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_color,return )

Float DisplacementMapFilter_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_335_get_scaleX)
HXDLIN( 335)		return this->_hx___scaleX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_scaleX,return )

Float DisplacementMapFilter_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_339_set_scaleX)
HXLINE( 340)		if ((value != this->_hx___scaleX)) {
HXLINE( 340)			this->_hx___renderDirty = true;
            		}
HXLINE( 341)		return (this->_hx___scaleX = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_scaleX,return )

Float DisplacementMapFilter_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_346_get_scaleY)
HXDLIN( 346)		return this->_hx___scaleY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_scaleY,return )

Float DisplacementMapFilter_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_350_set_scaleY)
HXLINE( 351)		if ((value != this->_hx___scaleY)) {
HXLINE( 351)			this->_hx___renderDirty = true;
            		}
HXLINE( 352)		return (this->_hx___scaleY = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_scaleY,return )

 ::openfl::display::BitmapData DisplacementMapFilter_obj::get_mapBitmap(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_357_get_mapBitmap)
HXDLIN( 357)		return this->_hx___mapBitmap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_mapBitmap,return )

 ::openfl::display::BitmapData DisplacementMapFilter_obj::set_mapBitmap( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_361_set_mapBitmap)
HXLINE( 362)		if (::hx::IsInstanceNotEq( value,this->_hx___mapBitmap )) {
HXLINE( 362)			this->_hx___renderDirty = true;
            		}
HXLINE( 363)		return (this->_hx___mapBitmap = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_mapBitmap,return )

 ::openfl::geom::Point DisplacementMapFilter_obj::get_mapPoint(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_368_get_mapPoint)
HXDLIN( 368)		return this->_hx___mapPoint;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_mapPoint,return )

 ::openfl::geom::Point DisplacementMapFilter_obj::set_mapPoint( ::openfl::geom::Point value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_372_set_mapPoint)
HXLINE( 373)		if (::hx::IsInstanceNotEq( value,this->_hx___mapPoint )) {
HXLINE( 373)			this->_hx___renderDirty = true;
            		}
HXLINE( 374)		return (this->_hx___mapPoint = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_mapPoint,return )

::String DisplacementMapFilter_obj::get_mode(){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_379_get_mode)
HXDLIN( 379)		return this->_hx___mode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplacementMapFilter_obj,get_mode,return )

::String DisplacementMapFilter_obj::set_mode(::String value){
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_383_set_mode)
HXLINE( 384)		if ((value != this->_hx___mode)) {
HXLINE( 384)			this->_hx___renderDirty = true;
            		}
HXLINE( 385)		return (this->_hx___mode = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplacementMapFilter_obj,set_mode,return )

 ::openfl::filters::_DisplacementMapFilter::DisplacementMapShader DisplacementMapFilter_obj::_hx___displacementMapShader;

::Array< Float > DisplacementMapFilter_obj::_hx___matrixData;

::Array< Float > DisplacementMapFilter_obj::_hx___offset;


::hx::ObjectPtr< DisplacementMapFilter_obj > DisplacementMapFilter_obj::__new( ::openfl::display::BitmapData mapBitmap, ::openfl::geom::Point mapPoint,::hx::Null< int >  __o_componentX,::hx::Null< int >  __o_componentY,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::String __o_mode,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha) {
	::hx::ObjectPtr< DisplacementMapFilter_obj > __this = new DisplacementMapFilter_obj();
	__this->__construct(mapBitmap,mapPoint,__o_componentX,__o_componentY,__o_scaleX,__o_scaleY,__o_mode,__o_color,__o_alpha);
	return __this;
}

::hx::ObjectPtr< DisplacementMapFilter_obj > DisplacementMapFilter_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData mapBitmap, ::openfl::geom::Point mapPoint,::hx::Null< int >  __o_componentX,::hx::Null< int >  __o_componentY,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::String __o_mode,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha) {
	DisplacementMapFilter_obj *__this = (DisplacementMapFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplacementMapFilter_obj), true, "openfl.filters.DisplacementMapFilter"));
	*(void **)__this = DisplacementMapFilter_obj::_hx_vtable;
	__this->__construct(mapBitmap,mapPoint,__o_componentX,__o_componentY,__o_scaleX,__o_scaleY,__o_mode,__o_color,__o_alpha);
	return __this;
}

DisplacementMapFilter_obj::DisplacementMapFilter_obj()
{
}

void DisplacementMapFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplacementMapFilter);
	HX_MARK_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_MARK_MEMBER_NAME(_hx___color,"__color");
	HX_MARK_MEMBER_NAME(_hx___componentX,"__componentX");
	HX_MARK_MEMBER_NAME(_hx___componentY,"__componentY");
	HX_MARK_MEMBER_NAME(_hx___mapBitmap,"__mapBitmap");
	HX_MARK_MEMBER_NAME(_hx___mapPoint,"__mapPoint");
	HX_MARK_MEMBER_NAME(_hx___mode,"__mode");
	HX_MARK_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(_hx___scaleY,"__scaleY");
	 ::openfl::filters::BitmapFilter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplacementMapFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(_hx___color,"__color");
	HX_VISIT_MEMBER_NAME(_hx___componentX,"__componentX");
	HX_VISIT_MEMBER_NAME(_hx___componentY,"__componentY");
	HX_VISIT_MEMBER_NAME(_hx___mapBitmap,"__mapBitmap");
	HX_VISIT_MEMBER_NAME(_hx___mapPoint,"__mapPoint");
	HX_VISIT_MEMBER_NAME(_hx___mode,"__mode");
	HX_VISIT_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(_hx___scaleY,"__scaleY");
	 ::openfl::filters::BitmapFilter_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplacementMapFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mode() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleX() ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleY() ); }
		if (HX_FIELD_EQ(inName,"__mode") ) { return ::hx::Val( _hx___mode ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__color") ) { return ::hx::Val( _hx___color ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapPoint") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mapPoint() ); }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return ::hx::Val( _hx___scaleX ); }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return ::hx::Val( _hx___scaleY ); }
		if (HX_FIELD_EQ(inName,"get_mode") ) { return ::hx::Val( get_mode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mode") ) { return ::hx::Val( set_mode_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapBitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mapBitmap() ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"componentX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentX() ); }
		if (HX_FIELD_EQ(inName,"componentY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentY() ); }
		if (HX_FIELD_EQ(inName,"__mapPoint") ) { return ::hx::Val( _hx___mapPoint ); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return ::hx::Val( get_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return ::hx::Val( get_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__mapBitmap") ) { return ::hx::Val( _hx___mapBitmap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__componentX") ) { return ::hx::Val( _hx___componentX ); }
		if (HX_FIELD_EQ(inName,"__componentY") ) { return ::hx::Val( _hx___componentY ); }
		if (HX_FIELD_EQ(inName,"__initShader") ) { return ::hx::Val( _hx___initShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mapPoint") ) { return ::hx::Val( get_mapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mapPoint") ) { return ::hx::Val( set_mapPoint_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return ::hx::Val( _hx___applyFilter_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mapBitmap") ) { return ::hx::Val( get_mapBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mapBitmap") ) { return ::hx::Val( set_mapBitmap_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_componentX") ) { return ::hx::Val( get_componentX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentX") ) { return ::hx::Val( set_componentX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentY") ) { return ::hx::Val( get_componentY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentY") ) { return ::hx::Val( set_componentY_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__updateMapMatrix") ) { return ::hx::Val( _hx___updateMapMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplacementMapFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__offset") ) { outValue = ( _hx___offset ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__matrixData") ) { outValue = ( _hx___matrixData ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__displacementMapShader") ) { outValue = ( _hx___displacementMapShader ); return true; }
	}
	return false;
}

::hx::Val DisplacementMapFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mode(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__mode") ) { _hx___mode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { _hx___color=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapPoint") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mapPoint(inValue.Cast<  ::openfl::geom::Point >()) ); }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { _hx___scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { _hx___scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapBitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mapBitmap(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"componentX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentX(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"componentY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentY(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__mapPoint") ) { _hx___mapPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__mapBitmap") ) { _hx___mapBitmap=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__componentX") ) { _hx___componentX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__componentY") ) { _hx___componentY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplacementMapFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__offset") ) { _hx___offset=ioValue.Cast< ::Array< Float > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__matrixData") ) { _hx___matrixData=ioValue.Cast< ::Array< Float > >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__displacementMapShader") ) { _hx___displacementMapShader=ioValue.Cast<  ::openfl::filters::_DisplacementMapFilter::DisplacementMapShader >(); return true; }
	}
	return false;
}

void DisplacementMapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("componentX",fb,b4,1e,5a));
	outFields->push(HX_("componentY",fc,b4,1e,5a));
	outFields->push(HX_("mapBitmap",ab,6b,eb,d3));
	outFields->push(HX_("mapPoint",14,24,d2,3d));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__color",43,ca,ba,b4));
	outFields->push(HX_("__componentX",1b,30,b2,92));
	outFields->push(HX_("__componentY",1c,30,b2,92));
	outFields->push(HX_("__mapBitmap",8b,b4,17,02));
	outFields->push(HX_("__mapPoint",34,97,0a,e1));
	outFields->push(HX_("__mode",83,36,59,f7));
	outFields->push(HX_("__scaleX",ae,55,55,e4));
	outFields->push(HX_("__scaleY",af,55,55,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplacementMapFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DisplacementMapFilter_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsInt,(int)offsetof(DisplacementMapFilter_obj,_hx___color),HX_("__color",43,ca,ba,b4)},
	{::hx::fsInt,(int)offsetof(DisplacementMapFilter_obj,_hx___componentX),HX_("__componentX",1b,30,b2,92)},
	{::hx::fsInt,(int)offsetof(DisplacementMapFilter_obj,_hx___componentY),HX_("__componentY",1c,30,b2,92)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(DisplacementMapFilter_obj,_hx___mapBitmap),HX_("__mapBitmap",8b,b4,17,02)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(DisplacementMapFilter_obj,_hx___mapPoint),HX_("__mapPoint",34,97,0a,e1)},
	{::hx::fsString,(int)offsetof(DisplacementMapFilter_obj,_hx___mode),HX_("__mode",83,36,59,f7)},
	{::hx::fsFloat,(int)offsetof(DisplacementMapFilter_obj,_hx___scaleX),HX_("__scaleX",ae,55,55,e4)},
	{::hx::fsFloat,(int)offsetof(DisplacementMapFilter_obj,_hx___scaleY),HX_("__scaleY",af,55,55,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DisplacementMapFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::_DisplacementMapFilter::DisplacementMapShader */ ,(void *) &DisplacementMapFilter_obj::_hx___displacementMapShader,HX_("__displacementMapShader",ea,2d,26,8d)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &DisplacementMapFilter_obj::_hx___matrixData,HX_("__matrixData",2b,e8,f6,b5)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &DisplacementMapFilter_obj::_hx___offset,HX_("__offset",b3,02,6f,08)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DisplacementMapFilter_obj_sMemberFields[] = {
	HX_("__alpha",3e,00,f5,8b),
	HX_("__color",43,ca,ba,b4),
	HX_("__componentX",1b,30,b2,92),
	HX_("__componentY",1c,30,b2,92),
	HX_("__mapBitmap",8b,b4,17,02),
	HX_("__mapPoint",34,97,0a,e1),
	HX_("__mode",83,36,59,f7),
	HX_("__scaleX",ae,55,55,e4),
	HX_("__scaleY",af,55,55,e4),
	HX_("clone",5d,13,63,48),
	HX_("__applyFilter",a6,20,a8,09),
	HX_("__initShader",75,95,f9,59),
	HX_("__updateMapMatrix",94,93,8c,71),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_componentX",44,3d,14,d0),
	HX_("set_componentX",b8,25,34,f0),
	HX_("get_componentY",45,3d,14,d0),
	HX_("set_componentY",b9,25,34,f0),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_scaleX",57,5a,ad,2c),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("get_scaleY",58,5a,ad,2c),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("get_mapBitmap",82,3f,4f,95),
	HX_("set_mapBitmap",8e,21,55,da),
	HX_("get_mapPoint",1d,d8,eb,f2),
	HX_("set_mapPoint",91,fb,e4,07),
	HX_("get_mode",ec,8e,1b,c8),
	HX_("set_mode",60,e8,78,76),
	::String(null()) };

static void DisplacementMapFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplacementMapFilter_obj::_hx___displacementMapShader,"__displacementMapShader");
	HX_MARK_MEMBER_NAME(DisplacementMapFilter_obj::_hx___matrixData,"__matrixData");
	HX_MARK_MEMBER_NAME(DisplacementMapFilter_obj::_hx___offset,"__offset");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DisplacementMapFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplacementMapFilter_obj::_hx___displacementMapShader,"__displacementMapShader");
	HX_VISIT_MEMBER_NAME(DisplacementMapFilter_obj::_hx___matrixData,"__matrixData");
	HX_VISIT_MEMBER_NAME(DisplacementMapFilter_obj::_hx___offset,"__offset");
};

#endif

::hx::Class DisplacementMapFilter_obj::__mClass;

static ::String DisplacementMapFilter_obj_sStaticFields[] = {
	HX_("__displacementMapShader",ea,2d,26,8d),
	HX_("__matrixData",2b,e8,f6,b5),
	HX_("__offset",b3,02,6f,08),
	::String(null())
};

void DisplacementMapFilter_obj::__register()
{
	DisplacementMapFilter_obj _hx_dummy;
	DisplacementMapFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.DisplacementMapFilter",2c,67,82,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplacementMapFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplacementMapFilter_obj::__SetStatic;
	__mClass->mMarkFunc = DisplacementMapFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DisplacementMapFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplacementMapFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplacementMapFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DisplacementMapFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplacementMapFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplacementMapFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DisplacementMapFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_65_boot)
HXDLIN(  65)		_hx___displacementMapShader =  ::openfl::filters::_DisplacementMapFilter::DisplacementMapShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_66_boot)
HXDLIN(  66)		_hx___matrixData = ::Array_obj< Float >::fromData( _hx_array_data_f582672c_25,16);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f9a37c6d22fed5f2_67_boot)
HXDLIN(  67)		_hx___offset = ::Array_obj< Float >::fromData( _hx_array_data_f582672c_27,4);
            	}
}

} // end namespace openfl
} // end namespace filters