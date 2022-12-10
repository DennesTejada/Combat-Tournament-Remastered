#ifndef INCLUDED_openfl_net_Socket
#define INCLUDED_openfl_net_Socket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,Socket)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES Socket_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Socket_obj OBJ_;
		Socket_obj();

	public:
		enum { _hx_ClassId = 0x5e5831fc };

		void __construct(::String host,::hx::Null< int >  __o_port);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.Socket")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.Socket"); }
		static ::hx::ObjectPtr< Socket_obj > __new(::String host,::hx::Null< int >  __o_port);
		static ::hx::ObjectPtr< Socket_obj > __alloc(::hx::Ctx *_hx_ctx,::String host,::hx::Null< int >  __o_port);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Socket_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Socket",d3,ff,da,5a); }

		static void __boot();
		static  ::Dynamic __meta__;
		int objectEncoding;
		bool secure;
		int timeout;
		 ::haxe::io::Bytes _hx___buffer;
		bool _hx___connected;
		 ::Dynamic _hx___endian;
		::String _hx___host;
		 ::openfl::utils::ByteArrayData _hx___input;
		 ::openfl::utils::ByteArrayData _hx___output;
		int _hx___port;
		 ::sys::net::Socket _hx___socket;
		Float _hx___timestamp;
		void close();
		::Dynamic close_dyn();

		void connect(::String host,::hx::Null< int >  port);
		::Dynamic connect_dyn();

		void flush();
		::Dynamic flush_dyn();

		bool readBoolean();
		::Dynamic readBoolean_dyn();

		int readByte();
		::Dynamic readByte_dyn();

		void readBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length);
		::Dynamic readBytes_dyn();

		Float readDouble();
		::Dynamic readDouble_dyn();

		Float readFloat();
		::Dynamic readFloat_dyn();

		int readInt();
		::Dynamic readInt_dyn();

		::String readMultiByte(int length,::String charSet);
		::Dynamic readMultiByte_dyn();

		 ::Dynamic readObject();
		::Dynamic readObject_dyn();

		int readShort();
		::Dynamic readShort_dyn();

		int readUnsignedByte();
		::Dynamic readUnsignedByte_dyn();

		int readUnsignedInt();
		::Dynamic readUnsignedInt_dyn();

		int readUnsignedShort();
		::Dynamic readUnsignedShort_dyn();

		::String readUTF();
		::Dynamic readUTF_dyn();

		::String readUTFBytes(int length);
		::Dynamic readUTFBytes_dyn();

		void writeBoolean(bool value);
		::Dynamic writeBoolean_dyn();

		void writeByte(int value);
		::Dynamic writeByte_dyn();

		void writeBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length);
		::Dynamic writeBytes_dyn();

		void writeDouble(Float value);
		::Dynamic writeDouble_dyn();

		void writeFloat(Float value);
		::Dynamic writeFloat_dyn();

		void writeInt(int value);
		::Dynamic writeInt_dyn();

		void writeMultiByte(::String value,::String charSet);
		::Dynamic writeMultiByte_dyn();

		void writeObject( ::Dynamic object);
		::Dynamic writeObject_dyn();

		void writeShort(int value);
		::Dynamic writeShort_dyn();

		void writeUnsignedInt(int value);
		::Dynamic writeUnsignedInt_dyn();

		void writeUTF(::String value);
		::Dynamic writeUTF_dyn();

		void writeUTFBytes(::String value);
		::Dynamic writeUTFBytes_dyn();

		void _hx___cleanSocket();
		::Dynamic _hx___cleanSocket_dyn();

		void socket_onClose( ::Dynamic _);
		::Dynamic socket_onClose_dyn();

		void socket_onError( ::Dynamic e);
		::Dynamic socket_onError_dyn();

		void socket_onMessage( ::Dynamic msg);
		::Dynamic socket_onMessage_dyn();

		void socket_onOpen( ::Dynamic _);
		::Dynamic socket_onOpen_dyn();

		void this_onEnterFrame( ::openfl::events::Event event);
		::Dynamic this_onEnterFrame_dyn();

		int get_bytesAvailable();
		::Dynamic get_bytesAvailable_dyn();

		int get_bytesPending();
		::Dynamic get_bytesPending_dyn();

		bool get_connected();
		::Dynamic get_connected_dyn();

		 ::Dynamic get_endian();
		::Dynamic get_endian_dyn();

		 ::Dynamic set_endian( ::Dynamic value);
		::Dynamic set_endian_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_Socket */ 