#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math__RGBA_RGBA_Impl_
#include <lime/math/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#include <openfl/filters/_ColorMatrixFilter/ColorMatrixShader.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7545faed7dab6ee1_136_new,"openfl.filters.ColorMatrixFilter","new",0x2c3a675d,"openfl.filters.ColorMatrixFilter.new","openfl/filters/ColorMatrixFilter.hx",136,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_147_clone,"openfl.filters.ColorMatrixFilter","clone",0x2c5b239a,"openfl.filters.ColorMatrixFilter.clone","openfl/filters/ColorMatrixFilter.hx",147,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_152___applyFilter,"openfl.filters.ColorMatrixFilter","__applyFilter",0xffb635e3,"openfl.filters.ColorMatrixFilter.__applyFilter","openfl/filters/ColorMatrixFilter.hx",152,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_221___initShader,"openfl.filters.ColorMatrixFilter","__initShader",0x2d28b6d8,"openfl.filters.ColorMatrixFilter.__initShader","openfl/filters/ColorMatrixFilter.hx",221,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_229_get_matrix,"openfl.filters.ColorMatrixFilter","get_matrix",0x7ee298ad,"openfl.filters.ColorMatrixFilter.get_matrix","openfl/filters/ColorMatrixFilter.hx",229,0xb64128b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_233_set_matrix,"openfl.filters.ColorMatrixFilter","set_matrix",0x82603721,"openfl.filters.ColorMatrixFilter.set_matrix","openfl/filters/ColorMatrixFilter.hx",233,0xb64128b5)
static const Float _hx_array_data_760a74eb_8[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7545faed7dab6ee1_59_boot,"openfl.filters.ColorMatrixFilter","boot",0x7ef90a95,"openfl.filters.ColorMatrixFilter.boot","openfl/filters/ColorMatrixFilter.hx",59,0xb64128b5)
namespace openfl{
namespace filters{

void ColorMatrixFilter_obj::__construct(::Array< Float > matrix){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_136_new)
HXLINE( 137)		super::__construct();
HXLINE( 139)		this->set_matrix(matrix);
HXLINE( 141)		this->_hx___numShaderPasses = 1;
HXLINE( 142)		this->_hx___needSecondBitmapData = false;
            	}

Dynamic ColorMatrixFilter_obj::__CreateEmpty() { return new ColorMatrixFilter_obj; }

void *ColorMatrixFilter_obj::_hx_vtable = 0;

Dynamic ColorMatrixFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorMatrixFilter_obj > _hx_result = new ColorMatrixFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColorMatrixFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1642b0f9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1642b0f9;
	} else {
		return inClassId==(int)0x26de6bd2;
	}
}

 ::openfl::filters::BitmapFilter ColorMatrixFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7545faed7dab6ee1_147_clone)
HXDLIN( 147)		return  ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,this->_hx___matrix);
            	}


 ::openfl::display::BitmapData ColorMatrixFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData destBitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_152___applyFilter)
HXLINE( 154)		 ::lime::graphics::Image sourceImage = sourceBitmapData->image;
HXLINE( 155)		 ::lime::graphics::Image image = destBitmapData->image;
HXLINE( 162)		 ::lime::utils::ArrayBufferView sourceData = sourceImage->get_data();
HXLINE( 163)		 ::lime::utils::ArrayBufferView destData = image->get_data();
HXLINE( 165)		int offsetX = ::Std_obj::_hx_int((destPoint->x - sourceRect->x));
HXLINE( 166)		int offsetY = ::Std_obj::_hx_int((destPoint->y - sourceRect->y));
HXLINE( 167)		int sourceStride = (sourceBitmapData->width * 4);
HXLINE( 168)		int destStride = (destBitmapData->width * 4);
HXLINE( 170)		int sourceFormat = sourceImage->buffer->format;
HXLINE( 171)		int destFormat = image->buffer->format;
HXLINE( 172)		bool sourcePremultiplied = sourceImage->buffer->premultiplied;
HXLINE( 173)		bool destPremultiplied = image->buffer->premultiplied;
HXLINE( 175)		int sourcePixel = 0;
HXDLIN( 175)		int destPixel = 0;
HXLINE( 176)		int sourceOffset;
HXDLIN( 176)		int destOffset;
HXLINE( 178)		{
HXLINE( 178)			int _g = ::Std_obj::_hx_int(sourceRect->y);
HXDLIN( 178)			int _g1 = ::Std_obj::_hx_int(sourceRect->height);
HXDLIN( 178)			while((_g < _g1)){
HXLINE( 178)				_g = (_g + 1);
HXDLIN( 178)				int row = (_g - 1);
HXLINE( 180)				{
HXLINE( 180)					int _g1 = ::Std_obj::_hx_int(sourceRect->x);
HXDLIN( 180)					int _g2 = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN( 180)					while((_g1 < _g2)){
HXLINE( 180)						_g1 = (_g1 + 1);
HXDLIN( 180)						int column = (_g1 - 1);
HXLINE( 182)						sourceOffset = ((row * sourceStride) + (column * 4));
HXLINE( 183)						destOffset = (((row + offsetX) * destStride) + ((column + offsetY) * 4));
HXLINE( 185)						{
HXLINE( 185)							switch((int)(sourceFormat)){
            								case (int)0: {
HXLINE( 185)									int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourceOffset)) & 255)) );
HXDLIN( 185)									int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 1))) & 255)) );
HXDLIN( 185)									int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 2))) & 255)) );
HXDLIN( 185)									sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 3))) & 255)) ) & 255));
            								}
            								break;
            								case (int)1: {
HXLINE( 185)									int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 1))) & 255)) );
HXDLIN( 185)									int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 2))) & 255)) );
HXDLIN( 185)									int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 3))) & 255)) );
HXDLIN( 185)									sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourceOffset)) & 255)) ) & 255));
            								}
            								break;
            								case (int)2: {
HXLINE( 185)									int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 2))) & 255)) );
HXDLIN( 185)									int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 1))) & 255)) );
HXDLIN( 185)									int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourceOffset)) & 255)) );
HXDLIN( 185)									sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourceOffset + 3))) & 255)) ) & 255));
            								}
            								break;
            							}
HXDLIN( 185)							if (sourcePremultiplied) {
HXLINE( 185)								bool _hx_tmp;
HXDLIN( 185)								if (((sourcePixel & 255) != 0)) {
HXLINE( 185)									_hx_tmp = ((sourcePixel & 255) != 255);
            								}
            								else {
HXLINE( 185)									_hx_tmp = false;
            								}
HXDLIN( 185)								if (_hx_tmp) {
HXLINE( 185)									::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 185)									{
HXLINE( 185)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 185)										int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 185)										 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 185)										int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 185)										 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 185)										sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            									}
            								}
            							}
            						}
HXLINE( 187)						if (((sourcePixel & 255) == 0)) {
HXLINE( 189)							destPixel = 0;
            						}
            						else {
HXLINE( 193)							{
HXLINE( 193)								int value = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(0) ),::Math_obj::min((((((this->_hx___matrix->__get(0) * ( (Float)((::hx::UShr(sourcePixel,24) & 255)) )) + (this->_hx___matrix->__get(1) * ( (Float)((::hx::UShr(sourcePixel,16) & 255)) ))) + (this->_hx___matrix->__get(2) * ( (Float)((::hx::UShr(sourcePixel,8) & 255)) ))) + (this->_hx___matrix->__get(3) * ( (Float)((sourcePixel & 255)) ))) + this->_hx___matrix->__get(4)),( (Float)(255) ))));
HXDLIN( 193)								destPixel = (((((value & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            							}
HXLINE( 197)							{
HXLINE( 197)								int value1 = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(0) ),::Math_obj::min((((((this->_hx___matrix->__get(5) * ( (Float)((::hx::UShr(sourcePixel,24) & 255)) )) + (this->_hx___matrix->__get(6) * ( (Float)((::hx::UShr(sourcePixel,16) & 255)) ))) + (this->_hx___matrix->__get(7) * ( (Float)((::hx::UShr(sourcePixel,8) & 255)) ))) + (this->_hx___matrix->__get(8) * ( (Float)((sourcePixel & 255)) ))) + this->_hx___matrix->__get(9)),( (Float)(255) ))));
HXDLIN( 197)								destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | ((value1 & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            							}
HXLINE( 201)							{
HXLINE( 201)								int value2 = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(0) ),::Math_obj::min((((((this->_hx___matrix->__get(10) * ( (Float)((::hx::UShr(sourcePixel,24) & 255)) )) + (this->_hx___matrix->__get(11) * ( (Float)((::hx::UShr(sourcePixel,16) & 255)) ))) + (this->_hx___matrix->__get(12) * ( (Float)((::hx::UShr(sourcePixel,8) & 255)) ))) + (this->_hx___matrix->__get(13) * ( (Float)((sourcePixel & 255)) ))) + this->_hx___matrix->__get(14)),( (Float)(255) ))));
HXDLIN( 201)								destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | ((value2 & 255) << 8)) | ((destPixel & 255) & 255));
            							}
HXLINE( 205)							{
HXLINE( 205)								int value3 = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(0) ),::Math_obj::min((((((this->_hx___matrix->__get(15) * ( (Float)((::hx::UShr(sourcePixel,24) & 255)) )) + (this->_hx___matrix->__get(16) * ( (Float)((::hx::UShr(sourcePixel,16) & 255)) ))) + (this->_hx___matrix->__get(17) * ( (Float)((::hx::UShr(sourcePixel,8) & 255)) ))) + (this->_hx___matrix->__get(18) * ( (Float)((sourcePixel & 255)) ))) + this->_hx___matrix->__get(19)),( (Float)(255) ))));
HXDLIN( 205)								destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | (value3 & 255));
            							}
            						}
HXLINE( 211)						{
HXLINE( 211)							if (destPremultiplied) {
HXLINE( 211)								if (((destPixel & 255) == 0)) {
HXLINE( 211)									if ((destPixel != 0)) {
HXLINE( 211)										destPixel = 0;
            									}
            								}
            								else {
HXLINE( 211)									if (((destPixel & 255) != 255)) {
HXLINE( 211)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 211)										::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((destPixel & 255) * 4)))) );
HXDLIN( 211)										destPixel = ((((((((::hx::UShr(destPixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(destPixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(destPixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((destPixel & 255) & 255));
            									}
            								}
            							}
HXDLIN( 211)							switch((int)(destFormat)){
            								case (int)0: {
HXLINE( 211)									{
HXLINE( 211)										int val = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destOffset),val);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 1)),val1);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val2 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 2)),val2);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val3 = (destPixel & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 3)),val3);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 211)									{
HXLINE( 211)										int val = (destPixel & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destOffset),val);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val1 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 1)),val1);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val2 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 2)),val2);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val3 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 3)),val3);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 211)									{
HXLINE( 211)										int val = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destOffset),val);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 1)),val1);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val2 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 2)),val2);
            									}
HXDLIN( 211)									{
HXLINE( 211)										int val3 = (destPixel & 255);
HXDLIN( 211)										 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destOffset + 3)),val3);
            									}
            								}
            								break;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 215)		destBitmapData->image->dirty = true;
HXLINE( 217)		return destBitmapData;
            	}


 ::openfl::display::Shader ColorMatrixFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_221___initShader)
HXLINE( 222)		 ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader _hx_tmp = ::openfl::filters::ColorMatrixFilter_obj::_hx___colorMatrixShader;
HXDLIN( 222)		_hx_tmp->init(this->get_matrix());
HXLINE( 223)		return ::openfl::filters::ColorMatrixFilter_obj::_hx___colorMatrixShader;
            	}


::Array< Float > ColorMatrixFilter_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_229_get_matrix)
HXDLIN( 229)		return this->_hx___matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrixFilter_obj,get_matrix,return )

::Array< Float > ColorMatrixFilter_obj::set_matrix(::Array< Float > value){
            	HX_STACKFRAME(&_hx_pos_7545faed7dab6ee1_233_set_matrix)
HXLINE( 234)		if (::hx::IsNull( value )) {
HXLINE( 236)			value = ::Array_obj< Float >::fromData( _hx_array_data_760a74eb_8,20);
            		}
HXLINE( 239)		return (this->_hx___matrix = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrixFilter_obj,set_matrix,return )

 ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader ColorMatrixFilter_obj::_hx___colorMatrixShader;


::hx::ObjectPtr< ColorMatrixFilter_obj > ColorMatrixFilter_obj::__new(::Array< Float > matrix) {
	::hx::ObjectPtr< ColorMatrixFilter_obj > __this = new ColorMatrixFilter_obj();
	__this->__construct(matrix);
	return __this;
}

::hx::ObjectPtr< ColorMatrixFilter_obj > ColorMatrixFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< Float > matrix) {
	ColorMatrixFilter_obj *__this = (ColorMatrixFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorMatrixFilter_obj), true, "openfl.filters.ColorMatrixFilter"));
	*(void **)__this = ColorMatrixFilter_obj::_hx_vtable;
	__this->__construct(matrix);
	return __this;
}

ColorMatrixFilter_obj::ColorMatrixFilter_obj()
{
}

void ColorMatrixFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrixFilter);
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	 ::openfl::filters::BitmapFilter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMatrixFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	 ::openfl::filters::BitmapFilter_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorMatrixFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { return ::hx::Val( _hx___matrix ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return ::hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return ::hx::Val( set_matrix_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return ::hx::Val( _hx___initShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return ::hx::Val( _hx___applyFilter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorMatrixFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__colorMatrixShader") ) { outValue = ( _hx___colorMatrixShader ); return true; }
	}
	return false;
}

::hx::Val ColorMatrixFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix(inValue.Cast< ::Array< Float > >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorMatrixFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__colorMatrixShader") ) { _hx___colorMatrixShader=ioValue.Cast<  ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader >(); return true; }
	}
	return false;
}

void ColorMatrixFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorMatrixFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(ColorMatrixFilter_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ColorMatrixFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader */ ,(void *) &ColorMatrixFilter_obj::_hx___colorMatrixShader,HX_("__colorMatrixShader",29,ff,b1,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorMatrixFilter_obj_sMemberFields[] = {
	HX_("__matrix",61,a1,f7,63),
	HX_("clone",5d,13,63,48),
	HX_("__applyFilter",a6,20,a8,09),
	HX_("__initShader",75,95,f9,59),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	::String(null()) };

static void ColorMatrixFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrixFilter_obj::_hx___colorMatrixShader,"__colorMatrixShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorMatrixFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrixFilter_obj::_hx___colorMatrixShader,"__colorMatrixShader");
};

#endif

::hx::Class ColorMatrixFilter_obj::__mClass;

static ::String ColorMatrixFilter_obj_sStaticFields[] = {
	HX_("__colorMatrixShader",29,ff,b1,f9),
	::String(null())
};

void ColorMatrixFilter_obj::__register()
{
	ColorMatrixFilter_obj _hx_dummy;
	ColorMatrixFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.ColorMatrixFilter",eb,74,0a,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrixFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorMatrixFilter_obj::__SetStatic;
	__mClass->mMarkFunc = ColorMatrixFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorMatrixFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorMatrixFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorMatrixFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorMatrixFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrixFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrixFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorMatrixFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7545faed7dab6ee1_59_boot)
HXDLIN(  59)		_hx___colorMatrixShader =  ::openfl::filters::_ColorMatrixFilter::ColorMatrixShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters