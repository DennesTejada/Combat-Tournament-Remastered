#ifndef INCLUDED_openfl_errors_SecurityError
#define INCLUDED_openfl_errors_SecurityError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,SecurityError)

namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES SecurityError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef SecurityError_obj OBJ_;
		SecurityError_obj();

	public:
		enum { _hx_ClassId = 0x570bdbad };

		void __construct(::String __o_message);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.errors.SecurityError")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.errors.SecurityError"); }
		static ::hx::ObjectPtr< SecurityError_obj > __new(::String __o_message);
		static ::hx::ObjectPtr< SecurityError_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SecurityError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SecurityError",c8,78,6c,ea); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_SecurityError */ 