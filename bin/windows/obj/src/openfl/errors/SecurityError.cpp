#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_SecurityError
#include <openfl/errors/SecurityError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dfcc81f7f9e06402_11_new,"openfl.errors.SecurityError","new",0x60f5f8d5,"openfl.errors.SecurityError.new","openfl/errors/SecurityError.hx",11,0x04006a5b)
namespace openfl{
namespace errors{

void SecurityError_obj::__construct(::String __o_message){
            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_dfcc81f7f9e06402_11_new)
HXLINE(  12)		super::__construct(message,0);
HXLINE(  14)		this->name = HX_("SecurityError",c8,78,6c,ea);
            	}

Dynamic SecurityError_obj::__CreateEmpty() { return new SecurityError_obj; }

void *SecurityError_obj::_hx_vtable = 0;

Dynamic SecurityError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SecurityError_obj > _hx_result = new SecurityError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SecurityError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x570bdbad) {
		if (inClassId<=(int)0x3495c9c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3495c9c5;
		} else {
			return inClassId==(int)0x570bdbad;
		}
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


::hx::ObjectPtr< SecurityError_obj > SecurityError_obj::__new(::String __o_message) {
	::hx::ObjectPtr< SecurityError_obj > __this = new SecurityError_obj();
	__this->__construct(__o_message);
	return __this;
}

::hx::ObjectPtr< SecurityError_obj > SecurityError_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_message) {
	SecurityError_obj *__this = (SecurityError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SecurityError_obj), true, "openfl.errors.SecurityError"));
	*(void **)__this = SecurityError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

SecurityError_obj::SecurityError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SecurityError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SecurityError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SecurityError_obj::__mClass;

void SecurityError_obj::__register()
{
	SecurityError_obj _hx_dummy;
	SecurityError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.SecurityError",63,ea,51,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SecurityError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SecurityError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SecurityError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors