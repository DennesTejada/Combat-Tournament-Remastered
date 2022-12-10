#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
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
#ifndef INCLUDED_openfl_filters_ConvolutionFilter
#include <openfl/filters/ConvolutionFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__ConvolutionFilter_ConvolutionShader
#include <openfl/filters/_ConvolutionFilter/ConvolutionShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c37e03b5548415e_217_new,"openfl.filters.ConvolutionFilter","new",0xfeba0f71,"openfl.filters.ConvolutionFilter.new","openfl/filters/ConvolutionFilter.hx",217,0x8cb91f21)
HX_LOCAL_STACK_FRAME(_hx_pos_1c37e03b5548415e_235_clone,"openfl.filters.ConvolutionFilter","clone",0x5c23f8ae,"openfl.filters.ConvolutionFilter.clone","openfl/filters/ConvolutionFilter.hx",235,0x8cb91f21)
HX_LOCAL_STACK_FRAME(_hx_pos_1c37e03b5548415e_239___initShader,"openfl.filters.ConvolutionFilter","__initShader",0x77456c44,"openfl.filters.ConvolutionFilter.__initShader","openfl/filters/ConvolutionFilter.hx",239,0x8cb91f21)
HX_LOCAL_STACK_FRAME(_hx_pos_1c37e03b5548415e_253_get_matrix,"openfl.filters.ConvolutionFilter","get_matrix",0x1d18db19,"openfl.filters.ConvolutionFilter.get_matrix","openfl/filters/ConvolutionFilter.hx",253,0x8cb91f21)
HX_LOCAL_STACK_FRAME(_hx_pos_1c37e03b5548415e_257_set_matrix,"openfl.filters.ConvolutionFilter","set_matrix",0x2096798d,"openfl.filters.ConvolutionFilter.set_matrix","openfl/filters/ConvolutionFilter.hx",257,0x8cb91f21)
static const Float _hx_array_data_75e782ff_5[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1c37e03b5548415e_48_boot,"openfl.filters.ConvolutionFilter","boot",0xdc2c7401,"openfl.filters.ConvolutionFilter.boot","openfl/filters/ConvolutionFilter.hx",48,0x8cb91f21)
namespace openfl{
namespace filters{

void ConvolutionFilter_obj::__construct(::hx::Null< int >  __o_matrixX,::hx::Null< int >  __o_matrixY,::Array< Float > matrix,::hx::Null< Float >  __o_divisor,::hx::Null< Float >  __o_bias,::hx::Null< bool >  __o_preserveAlpha,::hx::Null< bool >  __o_clamp,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int matrixX = __o_matrixX.Default(0);
            		int matrixY = __o_matrixY.Default(0);
            		Float divisor = __o_divisor.Default(((Float)1.0));
            		Float bias = __o_bias.Default(((Float)0.0));
            		bool preserveAlpha = __o_preserveAlpha.Default(true);
            		bool clamp = __o_clamp.Default(true);
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_1c37e03b5548415e_217_new)
HXLINE( 218)		super::__construct();
HXLINE( 220)		this->matrixX = matrixX;
HXLINE( 221)		this->matrixY = matrixY;
HXLINE( 222)		this->_hx___matrix = matrix;
HXLINE( 223)		this->divisor = divisor;
HXLINE( 224)		this->bias = bias;
HXLINE( 225)		this->preserveAlpha = preserveAlpha;
HXLINE( 226)		this->clamp = clamp;
HXLINE( 227)		this->color = color;
HXLINE( 228)		this->alpha = alpha;
HXLINE( 230)		this->_hx___numShaderPasses = 1;
            	}

Dynamic ConvolutionFilter_obj::__CreateEmpty() { return new ConvolutionFilter_obj; }

void *ConvolutionFilter_obj::_hx_vtable = 0;

Dynamic ConvolutionFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvolutionFilter_obj > _hx_result = new ConvolutionFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool ConvolutionFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x161fbf0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x161fbf0d;
	} else {
		return inClassId==(int)0x26de6bd2;
	}
}

 ::openfl::filters::BitmapFilter ConvolutionFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_1c37e03b5548415e_235_clone)
HXDLIN( 235)		return  ::openfl::filters::ConvolutionFilter_obj::__alloc( HX_CTX ,this->matrixX,this->matrixY,this->_hx___matrix,this->divisor,this->bias,this->preserveAlpha,this->clamp,this->color,this->alpha);
            	}


 ::openfl::display::Shader ConvolutionFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_1c37e03b5548415e_239___initShader)
HXLINE( 241)		::openfl::filters::ConvolutionFilter_obj::_hx___convolutionShader->uConvoMatrix->value = this->get_matrix();
HXLINE( 242)		::openfl::filters::ConvolutionFilter_obj::_hx___convolutionShader->uDivisor->value[0] = this->divisor;
HXLINE( 243)		::openfl::filters::ConvolutionFilter_obj::_hx___convolutionShader->uBias->value[0] = this->bias;
HXLINE( 244)		::openfl::filters::ConvolutionFilter_obj::_hx___convolutionShader->uPreserveAlpha->value[0] = this->preserveAlpha;
HXLINE( 247)		return ::openfl::filters::ConvolutionFilter_obj::_hx___convolutionShader;
            	}


::Array< Float > ConvolutionFilter_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_1c37e03b5548415e_253_get_matrix)
HXDLIN( 253)		return this->_hx___matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConvolutionFilter_obj,get_matrix,return )

::Array< Float > ConvolutionFilter_obj::set_matrix(::Array< Float > v){
            	HX_STACKFRAME(&_hx_pos_1c37e03b5548415e_257_set_matrix)
HXLINE( 258)		if (::hx::IsNull( v )) {
HXLINE( 260)			v = ::Array_obj< Float >::fromData( _hx_array_data_75e782ff_5,9);
            		}
HXLINE( 263)		if ((v->length != 9)) {
HXLINE( 265)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Only a 3x3 matrix is supported",f2,31,34,62)));
            		}
HXLINE( 268)		return (this->_hx___matrix = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConvolutionFilter_obj,set_matrix,return )

 ::openfl::filters::_ConvolutionFilter::ConvolutionShader ConvolutionFilter_obj::_hx___convolutionShader;


::hx::ObjectPtr< ConvolutionFilter_obj > ConvolutionFilter_obj::__new(::hx::Null< int >  __o_matrixX,::hx::Null< int >  __o_matrixY,::Array< Float > matrix,::hx::Null< Float >  __o_divisor,::hx::Null< Float >  __o_bias,::hx::Null< bool >  __o_preserveAlpha,::hx::Null< bool >  __o_clamp,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha) {
	::hx::ObjectPtr< ConvolutionFilter_obj > __this = new ConvolutionFilter_obj();
	__this->__construct(__o_matrixX,__o_matrixY,matrix,__o_divisor,__o_bias,__o_preserveAlpha,__o_clamp,__o_color,__o_alpha);
	return __this;
}

::hx::ObjectPtr< ConvolutionFilter_obj > ConvolutionFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_matrixX,::hx::Null< int >  __o_matrixY,::Array< Float > matrix,::hx::Null< Float >  __o_divisor,::hx::Null< Float >  __o_bias,::hx::Null< bool >  __o_preserveAlpha,::hx::Null< bool >  __o_clamp,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha) {
	ConvolutionFilter_obj *__this = (ConvolutionFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvolutionFilter_obj), true, "openfl.filters.ConvolutionFilter"));
	*(void **)__this = ConvolutionFilter_obj::_hx_vtable;
	__this->__construct(__o_matrixX,__o_matrixY,matrix,__o_divisor,__o_bias,__o_preserveAlpha,__o_clamp,__o_color,__o_alpha);
	return __this;
}

ConvolutionFilter_obj::ConvolutionFilter_obj()
{
}

void ConvolutionFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvolutionFilter);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(clamp,"clamp");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(divisor,"divisor");
	HX_MARK_MEMBER_NAME(matrixX,"matrixX");
	HX_MARK_MEMBER_NAME(matrixY,"matrixY");
	HX_MARK_MEMBER_NAME(preserveAlpha,"preserveAlpha");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	 ::openfl::filters::BitmapFilter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConvolutionFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(clamp,"clamp");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(divisor,"divisor");
	HX_VISIT_MEMBER_NAME(matrixX,"matrixX");
	HX_VISIT_MEMBER_NAME(matrixY,"matrixY");
	HX_VISIT_MEMBER_NAME(preserveAlpha,"preserveAlpha");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	 ::openfl::filters::BitmapFilter_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ConvolutionFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bias") ) { return ::hx::Val( bias ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return ::hx::Val( clamp ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"divisor") ) { return ::hx::Val( divisor ); }
		if (HX_FIELD_EQ(inName,"matrixX") ) { return ::hx::Val( matrixX ); }
		if (HX_FIELD_EQ(inName,"matrixY") ) { return ::hx::Val( matrixY ); }
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
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { return ::hx::Val( preserveAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConvolutionFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__convolutionShader") ) { outValue = ( _hx___convolutionShader ); return true; }
	}
	return false;
}

::hx::Val ConvolutionFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clamp") ) { clamp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix(inValue.Cast< ::Array< Float > >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"divisor") ) { divisor=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixX") ) { matrixX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixY") ) { matrixY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { preserveAlpha=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConvolutionFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__convolutionShader") ) { _hx___convolutionShader=ioValue.Cast<  ::openfl::filters::_ConvolutionFilter::ConvolutionShader >(); return true; }
	}
	return false;
}

void ConvolutionFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("bias",79,ea,16,41));
	outFields->push(HX_("clamp",fb,72,58,48));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("divisor",5e,c5,e2,70));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("matrixX",f7,42,67,93));
	outFields->push(HX_("matrixY",f8,42,67,93));
	outFields->push(HX_("preserveAlpha",f2,67,13,f8));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConvolutionFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ConvolutionFilter_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(ConvolutionFilter_obj,bias),HX_("bias",79,ea,16,41)},
	{::hx::fsBool,(int)offsetof(ConvolutionFilter_obj,clamp),HX_("clamp",fb,72,58,48)},
	{::hx::fsInt,(int)offsetof(ConvolutionFilter_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(ConvolutionFilter_obj,divisor),HX_("divisor",5e,c5,e2,70)},
	{::hx::fsInt,(int)offsetof(ConvolutionFilter_obj,matrixX),HX_("matrixX",f7,42,67,93)},
	{::hx::fsInt,(int)offsetof(ConvolutionFilter_obj,matrixY),HX_("matrixY",f8,42,67,93)},
	{::hx::fsBool,(int)offsetof(ConvolutionFilter_obj,preserveAlpha),HX_("preserveAlpha",f2,67,13,f8)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(ConvolutionFilter_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ConvolutionFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::_ConvolutionFilter::ConvolutionShader */ ,(void *) &ConvolutionFilter_obj::_hx___convolutionShader,HX_("__convolutionShader",3d,0d,8f,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvolutionFilter_obj_sMemberFields[] = {
	HX_("alpha",5e,a7,96,21),
	HX_("bias",79,ea,16,41),
	HX_("clamp",fb,72,58,48),
	HX_("color",63,71,5c,4a),
	HX_("divisor",5e,c5,e2,70),
	HX_("matrixX",f7,42,67,93),
	HX_("matrixY",f8,42,67,93),
	HX_("preserveAlpha",f2,67,13,f8),
	HX_("__matrix",61,a1,f7,63),
	HX_("clone",5d,13,63,48),
	HX_("__initShader",75,95,f9,59),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	::String(null()) };

static void ConvolutionFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvolutionFilter_obj::_hx___convolutionShader,"__convolutionShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvolutionFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvolutionFilter_obj::_hx___convolutionShader,"__convolutionShader");
};

#endif

::hx::Class ConvolutionFilter_obj::__mClass;

static ::String ConvolutionFilter_obj_sStaticFields[] = {
	HX_("__convolutionShader",3d,0d,8f,f9),
	::String(null())
};

void ConvolutionFilter_obj::__register()
{
	ConvolutionFilter_obj _hx_dummy;
	ConvolutionFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.ConvolutionFilter",ff,82,e7,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvolutionFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvolutionFilter_obj::__SetStatic;
	__mClass->mMarkFunc = ConvolutionFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvolutionFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConvolutionFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConvolutionFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvolutionFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvolutionFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvolutionFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvolutionFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1c37e03b5548415e_48_boot)
HXDLIN(  48)		_hx___convolutionShader =  ::openfl::filters::_ConvolutionFilter::ConvolutionShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters