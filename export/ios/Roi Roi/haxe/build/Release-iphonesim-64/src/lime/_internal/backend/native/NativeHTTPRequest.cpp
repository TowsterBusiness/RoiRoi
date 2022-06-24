#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeHTTPRequest
#include <lime/_internal/backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_String
#include <lime/app/Promise_String.h>
#endif
#ifndef INCLUDED_lime_app_Promise_haxe_io_Bytes
#include <lime/app/Promise_haxe_io_Bytes.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURL
#include <lime/net/curl/CURL.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMulti
#include <lime/net/curl/CURLMulti.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMultiMessage
#include <lime/net/curl/CURLMultiMessage.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11449fe5de606ab4_57_new,"lime._internal.backend.native.NativeHTTPRequest","new",0x75342a10,"lime._internal.backend.native.NativeHTTPRequest.new","lime/_internal/backend/native/NativeHTTPRequest.hx",57,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_63_cancel,"lime._internal.backend.native.NativeHTTPRequest","cancel",0xd7a6c1ca,"lime._internal.backend.native.NativeHTTPRequest.cancel","lime/_internal/backend/native/NativeHTTPRequest.hx",63,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_85_init,"lime._internal.backend.native.NativeHTTPRequest","init",0x15295b60,"lime._internal.backend.native.NativeHTTPRequest.init","lime/_internal/backend/native/NativeHTTPRequest.hx",85,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_89_initRequest,"lime._internal.backend.native.NativeHTTPRequest","initRequest",0x4548d7cf,"lime._internal.backend.native.NativeHTTPRequest.initRequest","lime/_internal/backend/native/NativeHTTPRequest.hx",89,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_260_loadData,"lime._internal.backend.native.NativeHTTPRequest","loadData",0xb40fafc0,"lime._internal.backend.native.NativeHTTPRequest.loadData","lime/_internal/backend/native/NativeHTTPRequest.hx",260,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_343_loadText,"lime._internal.backend.native.NativeHTTPRequest","loadText",0xbea62643,"lime._internal.backend.native.NativeHTTPRequest.loadText","lime/_internal/backend/native/NativeHTTPRequest.hx",343,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_334_loadText,"lime._internal.backend.native.NativeHTTPRequest","loadText",0xbea62643,"lime._internal.backend.native.NativeHTTPRequest.loadText","lime/_internal/backend/native/NativeHTTPRequest.hx",334,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_358_growBuffer,"lime._internal.backend.native.NativeHTTPRequest","growBuffer",0x377519c3,"lime._internal.backend.native.NativeHTTPRequest.growBuffer","lime/_internal/backend/native/NativeHTTPRequest.hx",358,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_368_curl_onHeader,"lime._internal.backend.native.NativeHTTPRequest","curl_onHeader",0xe5ba44af,"lime._internal.backend.native.NativeHTTPRequest.curl_onHeader","lime/_internal/backend/native/NativeHTTPRequest.hx",368,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_379_curl_onProgress,"lime._internal.backend.native.NativeHTTPRequest","curl_onProgress",0xbe43bf4f,"lime._internal.backend.native.NativeHTTPRequest.curl_onProgress","lime/_internal/backend/native/NativeHTTPRequest.hx",379,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_392_curl_onWrite,"lime._internal.backend.native.NativeHTTPRequest","curl_onWrite",0x97fe6bfd,"lime._internal.backend.native.NativeHTTPRequest.curl_onWrite","lime/_internal/backend/native/NativeHTTPRequest.hx",392,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_402_localThreadPool_doWork,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_doWork",0x0add4afa,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_doWork","lime/_internal/backend/native/NativeHTTPRequest.hx",402,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_447_localThreadPool_onComplete,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_onComplete",0xf7b04ff6,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_onComplete","lime/_internal/backend/native/NativeHTTPRequest.hx",447,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_465_localThreadPool_onError,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_onError",0x7e9a446b,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_onError","lime/_internal/backend/native/NativeHTTPRequest.hx",465,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_488_localThreadPool_onProgress,"lime._internal.backend.native.NativeHTTPRequest","localThreadPool_onProgress",0xfe1346ea,"lime._internal.backend.native.NativeHTTPRequest.localThreadPool_onProgress","lime/_internal/backend/native/NativeHTTPRequest.hx",488,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_496_multiThreadPool_doWork,"lime._internal.backend.native.NativeHTTPRequest","multiThreadPool_doWork",0x3b867a2c,"lime._internal.backend.native.NativeHTTPRequest.multiThreadPool_doWork","lime/_internal/backend/native/NativeHTTPRequest.hx",496,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_532_multiThreadPool_onComplete,"lime._internal.backend.native.NativeHTTPRequest","multiThreadPool_onComplete",0xd0260028,"lime._internal.backend.native.NativeHTTPRequest.multiThreadPool_onComplete","lime/_internal/backend/native/NativeHTTPRequest.hx",532,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_555_multiThreadPool_onProgress,"lime._internal.backend.native.NativeHTTPRequest","multiThreadPool_onProgress",0xd688f71c,"lime._internal.backend.native.NativeHTTPRequest.multiThreadPool_onProgress","lime/_internal/backend/native/NativeHTTPRequest.hx",555,0xfe6a4b7e)
HX_LOCAL_STACK_FRAME(_hx_pos_11449fe5de606ab4_602_multiProgressTimer_onRun,"lime._internal.backend.native.NativeHTTPRequest","multiProgressTimer_onRun",0x7d995edc,"lime._internal.backend.native.NativeHTTPRequest.multiProgressTimer_onRun","lime/_internal/backend/native/NativeHTTPRequest.hx",602,0xfe6a4b7e)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void NativeHTTPRequest_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_57_new)
HXLINE(  58)		this->curl = null();
HXLINE(  59)		this->timeout = null();
            	}

Dynamic NativeHTTPRequest_obj::__CreateEmpty() { return new NativeHTTPRequest_obj; }

void *NativeHTTPRequest_obj::_hx_vtable = 0;

Dynamic NativeHTTPRequest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeHTTPRequest_obj > _hx_result = new NativeHTTPRequest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeHTTPRequest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x203f6a6c;
}

void NativeHTTPRequest_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_63_cancel)
HXLINE(  64)		this->canceled = true;
HXLINE(  66)		bool _hx_tmp = ::hx::IsNotNull( this->curl );
HXLINE(  76)		if (::hx::IsNotNull( this->timeout )) {
HXLINE(  78)			this->timeout->stop();
HXLINE(  79)			this->timeout = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,cancel,(void))

void NativeHTTPRequest_obj::init(::Dynamic parent){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_85_init)
HXDLIN(  85)		this->parent = parent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,init,(void))

void NativeHTTPRequest_obj::initRequest(::String uri,bool binary){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_89_initRequest)
HXLINE(  90)		this->bytes = ::haxe::io::Bytes_obj::alloc(0);
HXLINE(  92)		this->bytesLoaded = 0;
HXLINE(  93)		this->bytesTotal = 0;
HXLINE(  94)		this->writeBytesLoaded = 0;
HXLINE(  95)		this->writeBytesTotal = 0;
HXLINE(  96)		this->writePosition = 0;
HXLINE(  98)		if (::hx::IsNull( this->curl )) {
HXLINE( 100)			this->curl =  ::lime::net::curl::CURL_obj::__alloc( HX_CTX ,null());
            		}
            		else {
HXLINE( 104)			this->curl->reset();
            		}
HXLINE( 107)		 ::haxe::io::Bytes data = ( ( ::haxe::io::Bytes)(this->parent->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE( 108)		::String query = HX_("",00,00,00,00);
HXLINE( 110)		if (::hx::IsNull( data )) {
HXLINE( 112)			{
HXLINE( 112)				 ::Dynamic key = ( ( ::haxe::ds::StringMap)( ::Dynamic(this->parent->__Field(HX_("formData",8e,d5,80,56),::hx::paccDynamic))) )->keys();
HXDLIN( 112)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 112)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 114)					if ((query.length > 0)) {
HXLINE( 114)						query = (query + HX_("&",26,00,00,00));
            					}
HXLINE( 115)					::String query1 = (::StringTools_obj::urlEncode(key1) + HX_("=",3d,00,00,00));
HXDLIN( 115)					query = (query + (query1 + ::StringTools_obj::urlEncode(::Std_obj::string(( ( ::haxe::ds::StringMap)( ::Dynamic(this->parent->__Field(HX_("formData",8e,d5,80,56),::hx::paccDynamic))) )->get(key1)))));
            				}
            			}
HXLINE( 118)			if ((query != HX_("",00,00,00,00))) {
HXLINE( 120)				if (::hx::IsEq( this->parent->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic),HX_("GET",76,1c,36,00) )) {
HXLINE( 122)					if ((uri.indexOf(HX_("?",3f,00,00,00),null()) > -1)) {
HXLINE( 124)						uri = (uri + (HX_("&",26,00,00,00) + query));
            					}
            					else {
HXLINE( 128)						uri = (uri + (HX_("?",3f,00,00,00) + query));
            					}
HXLINE( 131)					query = HX_("",00,00,00,00);
            				}
            				else {
HXLINE( 135)					data = ::haxe::io::Bytes_obj::ofString(query,null());
            				}
            			}
HXLINE( 139)			bool _hx_tmp;
HXDLIN( 139)			if (::hx::IsNotNull( data )) {
HXLINE( 139)				_hx_tmp = (data->length == 0);
            			}
            			else {
HXLINE( 139)				_hx_tmp = false;
            			}
HXDLIN( 139)			if (_hx_tmp) {
HXLINE( 139)				data = null();
            			}
            		}
HXLINE( 142)		this->curl->setOption(10002,uri);
HXLINE( 144)		::String _hx_switch_0 = ( (::String)(this->parent->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("GET",76,1c,36,00)) ){
HXLINE( 150)			this->curl->setOption(80,true);
HXDLIN( 150)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("HEAD",20,f1,cb,2f)) ){
HXLINE( 147)			this->curl->setOption(44,true);
HXDLIN( 147)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("POST",60,4c,1d,35)) ){
HXLINE( 153)			this->curl->setOption(47,true);
HXLINE( 155)			if (::hx::IsNotNull( data )) {
HXLINE( 157)				this->curl->setOption(10009,data);
HXLINE( 158)				this->curl->setOption(14,data->length);
HXLINE( 159)				this->curl->setOption(60,data->length);
            			}
            			else {
HXLINE( 163)				this->curl->setOption(60,0);
            			}
HXLINE( 152)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("PUT",af,fe,3c,00)) ){
HXLINE( 167)			this->curl->setOption(46,true);
HXLINE( 169)			if (::hx::IsNotNull( data )) {
HXLINE( 171)				this->curl->setOption(10009,data);
HXLINE( 172)				this->curl->setOption(14,data->length);
            			}
HXLINE( 166)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE( 176)			 ::lime::net::curl::CURL _hx_tmp = this->curl;
HXDLIN( 176)			_hx_tmp->setOption(10036,::Std_obj::string( ::Dynamic(this->parent->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic))));
HXLINE( 178)			if (::hx::IsNotNull( data )) {
HXLINE( 180)				this->curl->setOption(10009,data);
HXLINE( 181)				this->curl->setOption(14,data->length);
            			}
            		}
            		_hx_goto_4:;
HXLINE( 185)		this->curl->setOption(52, ::Dynamic(this->parent->__Field(HX_("followRedirects",26,5a,40,75),::hx::paccDynamic)));
HXLINE( 186)		this->curl->setOption(58,true);
HXLINE( 188)		::Array< ::String > headers = ::Array_obj< ::String >::__new(0);
HXLINE( 189)		headers->push(HX_("Expect: ",df,c4,e1,19));
HXLINE( 191)		::String contentType = null();
HXLINE( 193)		{
HXLINE( 193)			int _g = 0;
HXDLIN( 193)			::cpp::VirtualArray _g1 = ::hx::TCast< ::cpp::VirtualArray >::cast(( (::Array< ::Dynamic>)(this->parent->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic)) ));
HXDLIN( 193)			while((_g < _g1->get_length())){
HXLINE( 193)				 ::Dynamic header = _g1->__get(_g);
HXDLIN( 193)				_g = (_g + 1);
HXLINE( 195)				if (::hx::IsEq( header->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),HX_("Content-Type",ce,69,5d,3c) )) {
HXLINE( 197)					contentType = ( (::String)(header->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 201)					::String _hx_tmp = ((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(header->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))) + HX_(": ",a6,32,00,00));
HXDLIN( 201)					headers->push((_hx_tmp + ::Std_obj::string( ::Dynamic(header->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)))));
            				}
            			}
            		}
HXLINE( 205)		if (::hx::IsNotNull( this->parent->__Field(HX_("contentType",93,3c,7b,2a),::hx::paccDynamic) )) {
HXLINE( 207)			contentType = ( (::String)(this->parent->__Field(HX_("contentType",93,3c,7b,2a),::hx::paccDynamic)) );
            		}
HXLINE( 210)		if (::hx::IsNull( contentType )) {
HXLINE( 212)			if (::hx::IsNotNull( this->parent->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) )) {
HXLINE( 214)				contentType = HX_("application/octet-stream",5d,f8,82,30);
            			}
            			else {
HXLINE( 216)				if ((query != HX_("",00,00,00,00))) {
HXLINE( 218)					contentType = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            				}
            			}
            		}
HXLINE( 222)		if (::hx::IsNotNull( contentType )) {
HXLINE( 224)			headers->push((HX_("Content-Type: ",f4,2b,e6,1d) + contentType));
            		}
HXLINE( 227)		this->curl->setOption(10023,headers);
HXLINE( 229)		this->curl->setOption(20056,this->curl_onProgress_dyn());
HXLINE( 230)		this->curl->setOption(20011,this->curl_onWrite_dyn());
HXLINE( 232)		if (( (bool)(this->parent->__Field(HX_("enableResponseHeaders",82,32,47,05),::hx::paccDynamic)) )) {
HXLINE( 234)			this->parent->__SetField(HX_("responseHeaders",c5,0d,ca,43),::Array_obj< ::Dynamic>::__new(0),::hx::paccDynamic);
HXLINE( 235)			this->curl->setOption(20079,this->curl_onHeader_dyn());
            		}
HXLINE( 240)		bool _hx_tmp = ( (bool)(this->parent->__Field(HX_("withCredentials",56,86,c4,ca),::hx::paccDynamic)) );
HXLINE( 245)		this->curl->setOption(64,false);
HXLINE( 246)		this->curl->setOption(81,0);
HXLINE( 247)		 ::Dynamic _hx_tmp1;
HXDLIN( 247)		if (::hx::IsNull( this->parent->__Field(HX_("userAgent",7a,f0,12,c8),::hx::paccDynamic) )) {
HXLINE( 247)			_hx_tmp1 = HX_("libcurl-agent/1.0",4d,41,cc,d3);
            		}
            		else {
HXLINE( 247)			_hx_tmp1 =  ::Dynamic(this->parent->__Field(HX_("userAgent",7a,f0,12,c8),::hx::paccDynamic));
            		}
HXDLIN( 247)		this->curl->setOption(10018,_hx_tmp1);
HXLINE( 250)		this->curl->setOption(99,true);
HXLINE( 252)		this->curl->setOption(53,!(binary));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,initRequest,(void))

 ::lime::app::Future NativeHTTPRequest_obj::loadData(::String uri,::hx::Null< bool >  __o_binary){
            		bool binary = __o_binary.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_260_loadData)
HXLINE( 261)		if (::hx::IsNull( uri )) {
HXLINE( 263)			return ::lime::app::Future_obj::withError(HX_("The URI must not be null",e3,4c,b6,a7));
            		}
HXLINE( 266)		 ::lime::app::Promise_haxe_io_Bytes promise =  ::lime::app::Promise_haxe_io_Bytes_obj::__alloc( HX_CTX );
HXLINE( 267)		this->promise = promise;
HXLINE( 269)		this->canceled = false;
HXLINE( 271)		bool _hx_tmp;
HXDLIN( 271)		if ((uri.indexOf(HX_("http://",52,75,cd,5a),null()) == -1)) {
HXLINE( 271)			_hx_tmp = (uri.indexOf(HX_("https://",cf,b4,ae,3e),null()) == -1);
            		}
            		else {
HXLINE( 271)			_hx_tmp = false;
            		}
HXDLIN( 271)		if (_hx_tmp) {
HXLINE( 273)			if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool )) {
HXLINE( 275)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,0,1);
HXLINE( 276)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->doWork->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_doWork_dyn(),null(),null());
HXLINE( 277)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->onProgress->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_onProgress_dyn(),null(),null());
HXLINE( 278)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->onComplete->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_onComplete_dyn(),null(),null());
HXLINE( 279)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->onError->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool_onError_dyn(),null(),null());
            			}
HXLINE( 282)			::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->queue( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("uri",6c,2b,59,00),uri)
            				->setFixed(1,HX_("instance",95,1f,e1,59),::hx::ObjectPtr<OBJ_>(this))));
            		}
            		else {
HXLINE( 286)			if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multi )) {
HXLINE( 288)				::lime::net::curl::CURL_obj::globalInit(3);
HXLINE( 290)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multi =  ::lime::net::curl::CURLMulti_obj::__alloc( HX_CTX ,null());
HXLINE( 291)				::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances = ::Array_obj< ::Dynamic>::__new();
HXLINE( 292)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 295)			this->initRequest(uri,binary);
HXLINE( 297)			if (::hx::IsNotNull( this->curl )) {
HXLINE( 299)				::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 300)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->set(this->curl,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 303)				if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle )) {
HXLINE( 303)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
            				}
HXLINE( 304)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->add(this->curl);
HXLINE( 307)				if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool )) {
HXLINE( 309)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,0,1);
HXLINE( 310)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->doWork->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_doWork_dyn(),null(),null());
HXLINE( 311)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->onProgress->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_onProgress_dyn(),null(),null());
HXLINE( 312)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->onComplete->add(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool_onComplete_dyn(),null(),null());
            				}
HXLINE( 315)				if (!(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPoolRunning)) {
HXLINE( 317)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPoolRunning = true;
HXLINE( 318)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->queue(null());
            				}
HXLINE( 321)				if (::hx::IsNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer )) {
HXLINE( 323)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(8) ));
HXLINE( 324)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer->run = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer_onRun_dyn();
HXLINE( 325)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer_onRun();
            				}
            			}
            		}
HXLINE( 330)		return promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,loadData,return )

 ::lime::app::Future NativeHTTPRequest_obj::loadText(::String uri){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise_String,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_343_loadText)
HXLINE( 343)			if (::hx::IsNull( bytes )) {
HXLINE( 345)				promise->complete(null());
            			}
            			else {
HXLINE( 349)				 ::lime::app::Promise_String promise1 = promise;
HXDLIN( 349)				promise1->complete(bytes->getString(0,bytes->length,null()));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_334_loadText)
HXLINE( 335)		 ::lime::app::Promise_String promise =  ::lime::app::Promise_String_obj::__alloc( HX_CTX );
HXLINE( 336)		 ::lime::app::Future future = this->loadData(uri,false);
HXLINE( 338)		future->onProgress(promise->progress_dyn());
HXLINE( 339)		future->onError(promise->error_dyn());
HXLINE( 341)		future->onComplete( ::Dynamic(new _hx_Closure_0(promise)));
HXLINE( 353)		return promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,loadText,return )

void NativeHTTPRequest_obj::growBuffer(int length){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_358_growBuffer)
HXDLIN( 358)		if ((length > this->bytes->length)) {
HXLINE( 360)			 ::haxe::io::Bytes cacheBytes = this->bytes;
HXLINE( 361)			this->bytes = ::haxe::io::Bytes_obj::alloc(length);
HXLINE( 362)			this->bytes->blit(0,cacheBytes,0,cacheBytes->length);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,growBuffer,(void))

void NativeHTTPRequest_obj::curl_onHeader( ::lime::net::curl::CURL curl,::String header){
            	HX_GC_STACKFRAME(&_hx_pos_11449fe5de606ab4_368_curl_onHeader)
HXLINE( 369)		::Array< ::String > parts = header.split(HX_(": ",a6,32,00,00));
HXLINE( 371)		if ((parts->length == 2)) {
HXLINE( 373)			::Array< ::Dynamic> _hx_tmp = ( (::Array< ::Dynamic>)(this->parent->__Field(HX_("responseHeaders",c5,0d,ca,43),::hx::paccDynamic)) );
HXDLIN( 373)			::String _hx_tmp1 = ::StringTools_obj::trim(parts->__get(0));
HXDLIN( 373)			_hx_tmp->push( ::lime::net::HTTPRequestHeader_obj::__alloc( HX_CTX ,_hx_tmp1,::StringTools_obj::trim(parts->__get(1))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,curl_onHeader,(void))

void NativeHTTPRequest_obj::curl_onProgress( ::lime::net::curl::CURL curl,Float dltotal,Float dlnow,Float uptotal,Float upnow){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_379_curl_onProgress)
HXDLIN( 379)		bool _hx_tmp;
HXDLIN( 379)		bool _hx_tmp1;
HXDLIN( 379)		bool _hx_tmp2;
HXDLIN( 379)		if (!((upnow > this->writeBytesLoaded))) {
HXDLIN( 379)			_hx_tmp2 = (dlnow > this->writeBytesLoaded);
            		}
            		else {
HXDLIN( 379)			_hx_tmp2 = true;
            		}
HXDLIN( 379)		if (!(_hx_tmp2)) {
HXDLIN( 379)			_hx_tmp1 = (uptotal > this->writeBytesTotal);
            		}
            		else {
HXDLIN( 379)			_hx_tmp1 = true;
            		}
HXDLIN( 379)		if (!(_hx_tmp1)) {
HXDLIN( 379)			_hx_tmp = (dltotal > this->writeBytesTotal);
            		}
            		else {
HXDLIN( 379)			_hx_tmp = true;
            		}
HXDLIN( 379)		if (_hx_tmp) {
HXLINE( 381)			if ((upnow > this->writeBytesLoaded)) {
HXLINE( 381)				this->writeBytesLoaded = ::Std_obj::_hx_int(upnow);
            			}
HXLINE( 382)			if ((dlnow > this->writeBytesLoaded)) {
HXLINE( 382)				this->writeBytesLoaded = ::Std_obj::_hx_int(dlnow);
            			}
HXLINE( 383)			if ((uptotal > this->writeBytesTotal)) {
HXLINE( 383)				this->writeBytesTotal = ::Std_obj::_hx_int(uptotal);
            			}
HXLINE( 384)			if ((dltotal > this->writeBytesTotal)) {
HXLINE( 384)				this->writeBytesTotal = ::Std_obj::_hx_int(dltotal);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(NativeHTTPRequest_obj,curl_onProgress,(void))

int NativeHTTPRequest_obj::curl_onWrite( ::lime::net::curl::CURL curl, ::haxe::io::Bytes output){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_392_curl_onWrite)
HXLINE( 393)		this->growBuffer((this->writePosition + output->length));
HXLINE( 394)		this->bytes->blit(this->writePosition,output,0,output->length);
HXLINE( 396)		 ::lime::_internal::backend::native::NativeHTTPRequest _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 396)		_hx_tmp->writePosition = (_hx_tmp->writePosition + output->length);
HXLINE( 398)		return output->length;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeHTTPRequest_obj,curl_onWrite,return )

::Array< ::Dynamic> NativeHTTPRequest_obj::activeInstances;

 ::lime::_hx_system::ThreadPool NativeHTTPRequest_obj::localThreadPool;

 ::lime::net::curl::CURLMulti NativeHTTPRequest_obj::multi;

 ::haxe::ds::ObjectMap NativeHTTPRequest_obj::multiInstances;

 ::haxe::Timer NativeHTTPRequest_obj::multiProgressTimer;

 ::lime::_hx_system::ThreadPool NativeHTTPRequest_obj::multiThreadPool;

bool NativeHTTPRequest_obj::multiThreadPoolRunning;

 ::sys::thread::Deque NativeHTTPRequest_obj::multiAddHandle;

void NativeHTTPRequest_obj::localThreadPool_doWork( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_402_localThreadPool_doWork)
HXLINE( 403)		 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
HXLINE( 404)		::String path = ( (::String)(state->__Field(HX_("uri",6c,2b,59,00),::hx::paccDynamic)) );
HXLINE( 406)		int index = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 408)		if ((index > -1)) {
HXLINE( 410)			path = path.substring(0,index);
            		}
HXLINE( 414)		if (::StringTools_obj::startsWith(path,HX_("~/",f1,6d,00,00))) {
HXLINE( 416)			::String path1 = (::Sys_obj::getEnv(HX_("HOME",1f,92,d3,2f)) + HX_("/",2f,00,00,00));
HXDLIN( 416)			path = (path1 + path.substr(2,null()));
            		}
HXLINE( 420)		bool _hx_tmp;
HXDLIN( 420)		if (::hx::IsNotNull( path )) {
HXLINE( 420)			_hx_tmp = !(::sys::FileSystem_obj::exists(path));
            		}
            		else {
HXLINE( 420)			_hx_tmp = true;
            		}
HXDLIN( 420)		if (_hx_tmp) {
HXLINE( 422)			::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->sendError( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7),instance->promise)
            				->setFixed(1,HX_("instance",95,1f,e1,59),instance)
            				->setFixed(2,HX_("error",c8,cb,29,73),(HX_("Cannot load file: ",5f,26,cd,00) + path))));
            		}
            		else {
HXLINE( 426)			instance->bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path);
HXLINE( 428)			if (::hx::IsNotNull( instance->bytes )) {
HXLINE( 430)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->sendProgress( ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("bytesLoaded",d0,66,ca,99),instance->bytes->length)
            					->setFixed(1,HX_("promise",9b,cd,e9,f7),instance->promise)
            					->setFixed(2,HX_("bytesTotal",59,57,da,45),instance->bytes->length)
            					->setFixed(3,HX_("instance",95,1f,e1,59),instance)));
HXLINE( 437)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->sendComplete( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),instance->promise)
            					->setFixed(1,HX_("result",dd,68,84,08),instance->bytes)
            					->setFixed(2,HX_("instance",95,1f,e1,59),instance)));
            			}
            			else {
HXLINE( 441)				::lime::_internal::backend::native::NativeHTTPRequest_obj::localThreadPool->sendError( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),instance->promise)
            					->setFixed(1,HX_("instance",95,1f,e1,59),instance)
            					->setFixed(2,HX_("error",c8,cb,29,73),(HX_("Cannot load file: ",5f,26,cd,00) + path))));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_doWork,(void))

void NativeHTTPRequest_obj::localThreadPool_onComplete( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_447_localThreadPool_onComplete)
HXLINE( 448)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)) );
HXLINE( 449)		if (promise->get_isError()) {
HXLINE( 449)			return;
            		}
HXLINE( 450)		promise->complete(( ( ::haxe::io::Bytes)(state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic)) ));
HXLINE( 452)		 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
HXLINE( 454)		if (::hx::IsNotNull( instance->timeout )) {
HXLINE( 456)			instance->timeout->stop();
HXLINE( 457)			instance->timeout = null();
            		}
HXLINE( 460)		instance->bytes = null();
HXLINE( 461)		instance->promise = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_onComplete,(void))

void NativeHTTPRequest_obj::localThreadPool_onError( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_465_localThreadPool_onError)
HXLINE( 466)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)) );
HXLINE( 467)		promise->error( ::Dynamic(state->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)));
HXLINE( 469)		 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(state->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) );
HXLINE( 471)		if (::hx::IsNotNull( instance->timeout )) {
HXLINE( 473)			instance->timeout->stop();
HXLINE( 474)			instance->timeout = null();
            		}
HXLINE( 477)		instance->bytes = null();
HXLINE( 478)		instance->promise = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_onError,(void))

void NativeHTTPRequest_obj::localThreadPool_onProgress( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_488_localThreadPool_onProgress)
HXLINE( 489)		 ::lime::app::Promise_haxe_io_Bytes promise = ( ( ::lime::app::Promise_haxe_io_Bytes)(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)) );
HXLINE( 490)		bool _hx_tmp;
HXDLIN( 490)		if (!(promise->get_isComplete())) {
HXLINE( 490)			_hx_tmp = promise->get_isError();
            		}
            		else {
HXLINE( 490)			_hx_tmp = true;
            		}
HXDLIN( 490)		if (_hx_tmp) {
HXLINE( 490)			return;
            		}
HXLINE( 491)		promise->progress(( (int)(state->__Field(HX_("bytesLoaded",d0,66,ca,99),::hx::paccDynamic)) ),( (int)(state->__Field(HX_("bytesTotal",59,57,da,45),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,localThreadPool_onProgress,(void))

void NativeHTTPRequest_obj::multiThreadPool_doWork( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_496_multiThreadPool_doWork)
HXDLIN( 496)		while(true){
HXLINE( 499)			 ::lime::net::curl::CURL curl = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->pop(false).StaticCast<  ::lime::net::curl::CURL >();
HXLINE( 500)			if (::hx::IsNotNull( curl )) {
HXLINE( 500)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->addHandle(curl);
            			}
HXLINE( 503)			int code = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->wait(1000);
HXLINE( 505)			if ((code == 0)) {
HXLINE( 507)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->perform();
HXLINE( 508)				 ::lime::net::curl::CURLMultiMessage message = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->infoRead();
HXLINE( 510)				bool _hx_tmp;
HXDLIN( 510)				if (::hx::IsNull( message )) {
HXLINE( 510)					_hx_tmp = (::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->get_runningHandles() == 0);
            				}
            				else {
HXLINE( 510)					_hx_tmp = false;
            				}
HXDLIN( 510)				if (_hx_tmp) {
HXLINE( 512)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->sendComplete(null());
HXLINE( 513)					goto _hx_goto_18;
            				}
HXLINE( 516)				while(::hx::IsNotNull( message )){
HXLINE( 518)					 ::lime::net::curl::CURL curl = message->curl;
HXLINE( 519)					 ::Dynamic status = curl->getInfo(2097154);
HXLINE( 521)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->removeHandle(curl);
HXLINE( 522)					curl->cleanup();
HXLINE( 524)					::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->sendProgress( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("status",32,e7,fb,05),status)
            						->setFixed(1,HX_("result",dd,68,84,08),message->result)
            						->setFixed(2,HX_("curl",ec,4a,c9,41),curl)));
HXLINE( 525)					message = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multi->infoRead();
            				}
            			}
            		}
            		_hx_goto_18:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,multiThreadPool_doWork,(void))

void NativeHTTPRequest_obj::multiThreadPool_onComplete( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_532_multiThreadPool_onComplete)
HXLINE( 534)		 ::lime::net::curl::CURL curl = ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->pop(false).StaticCast<  ::lime::net::curl::CURL >();
HXLINE( 536)		if (::hx::IsNotNull( curl )) {
HXLINE( 538)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiAddHandle->push(curl);
HXLINE( 539)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPool->queue(null());
            		}
            		else {
HXLINE( 543)			if (::hx::IsNotNull( ::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer )) {
HXLINE( 545)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer->stop();
HXLINE( 546)				::lime::_internal::backend::native::NativeHTTPRequest_obj::multiProgressTimer = null();
            			}
HXLINE( 549)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiThreadPoolRunning = false;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,multiThreadPool_onComplete,(void))

void NativeHTTPRequest_obj::multiThreadPool_onProgress( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_555_multiThreadPool_onProgress)
HXLINE( 556)		if (::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->exists( ::Dynamic(state->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)))) {
HXLINE( 558)			 ::lime::_internal::backend::native::NativeHTTPRequest instance = ( ( ::lime::_internal::backend::native::NativeHTTPRequest)(::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->get( ::Dynamic(state->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)))) );
HXLINE( 559)			::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances->remove(instance);
HXLINE( 560)			::lime::_internal::backend::native::NativeHTTPRequest_obj::multiInstances->remove( ::Dynamic(state->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)));
HXLINE( 562)			instance->parent->__SetField(HX_("responseStatus",93,60,a4,78),state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 564)			if (::hx::IsEq( state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic),0 )) {
HXLINE( 566)				bool _hx_tmp;
HXDLIN( 566)				bool _hx_tmp1;
HXDLIN( 566)				if (::hx::IsGreaterEq( state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),200 )) {
HXLINE( 566)					_hx_tmp1 = ::hx::IsLess( state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),400 );
            				}
            				else {
HXLINE( 566)					_hx_tmp1 = false;
            				}
HXDLIN( 566)				if (!(_hx_tmp1)) {
HXLINE( 566)					_hx_tmp = ::hx::IsEq( state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic),0 );
            				}
            				else {
HXLINE( 566)					_hx_tmp = true;
            				}
HXDLIN( 566)				if (_hx_tmp) {
HXLINE( 568)					if (!(instance->promise->get_isError())) {
HXLINE( 570)						instance->promise->complete(instance->bytes);
            					}
            				}
            				else {
HXLINE( 573)					if (::hx::IsNotNull( instance->bytes )) {
HXLINE( 575)						 ::lime::app::Promise_haxe_io_Bytes instance1 = instance->promise;
HXDLIN( 575)						instance1->error(instance->bytes->getString(0,instance->bytes->length,null()));
            					}
            					else {
HXLINE( 579)						instance->promise->error( ::Dynamic((HX_("Status ",8e,8c,bf,03) + state->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic))));
            					}
            				}
            			}
            			else {
HXLINE( 584)				 ::lime::app::Promise_haxe_io_Bytes instance1 = instance->promise;
HXDLIN( 584)				instance1->error(::lime::net::curl::CURL_obj::strerror(( (int)(state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic)) )));
            			}
HXLINE( 587)			if (::hx::IsNotNull( instance->timeout )) {
HXLINE( 589)				instance->timeout->stop();
HXLINE( 590)				instance->timeout = null();
            			}
HXLINE( 593)			instance->bytes = null();
HXLINE( 594)			instance->promise = null();
            		}
HXLINE( 597)		state->__SetField(HX_("curl",ec,4a,c9,41),null(),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeHTTPRequest_obj,multiThreadPool_onProgress,(void))

void NativeHTTPRequest_obj::multiProgressTimer_onRun(){
            	HX_STACKFRAME(&_hx_pos_11449fe5de606ab4_602_multiProgressTimer_onRun)
HXDLIN( 602)		int _g = 0;
HXDLIN( 602)		::Array< ::Dynamic> _g1 = ::lime::_internal::backend::native::NativeHTTPRequest_obj::activeInstances;
HXDLIN( 602)		while((_g < _g1->length)){
HXDLIN( 602)			 ::lime::_internal::backend::native::NativeHTTPRequest instance = _g1->__get(_g).StaticCast<  ::lime::_internal::backend::native::NativeHTTPRequest >();
HXDLIN( 602)			_g = (_g + 1);
HXLINE( 604)			bool _hx_tmp;
HXDLIN( 604)			if ((instance->bytesLoaded == instance->writeBytesLoaded)) {
HXLINE( 604)				_hx_tmp = (instance->bytesTotal != instance->writeBytesTotal);
            			}
            			else {
HXLINE( 604)				_hx_tmp = true;
            			}
HXDLIN( 604)			if (_hx_tmp) {
HXLINE( 606)				instance->bytesLoaded = instance->writeBytesLoaded;
HXLINE( 607)				instance->bytesTotal = instance->writeBytesTotal;
HXLINE( 608)				instance->promise->progress(instance->bytesLoaded,instance->bytesTotal);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeHTTPRequest_obj,multiProgressTimer_onRun,(void))


::hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__new() {
	::hx::ObjectPtr< NativeHTTPRequest_obj > __this = new NativeHTTPRequest_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NativeHTTPRequest_obj > NativeHTTPRequest_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NativeHTTPRequest_obj *__this = (NativeHTTPRequest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeHTTPRequest_obj), true, "lime._internal.backend.native.NativeHTTPRequest"));
	*(void **)__this = NativeHTTPRequest_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NativeHTTPRequest_obj::NativeHTTPRequest_obj()
{
}

void NativeHTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeHTTPRequest);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(curl,"curl");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_MEMBER_NAME(writeBytesLoaded,"writeBytesLoaded");
	HX_MARK_MEMBER_NAME(writeBytesTotal,"writeBytesTotal");
	HX_MARK_MEMBER_NAME(writePosition,"writePosition");
	HX_MARK_MEMBER_NAME(timeout,"timeout");
	HX_MARK_END_CLASS();
}

void NativeHTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(curl,"curl");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(promise,"promise");
	HX_VISIT_MEMBER_NAME(writeBytesLoaded,"writeBytesLoaded");
	HX_VISIT_MEMBER_NAME(writeBytesTotal,"writeBytesTotal");
	HX_VISIT_MEMBER_NAME(writePosition,"writePosition");
	HX_VISIT_MEMBER_NAME(timeout,"timeout");
}

::hx::Val NativeHTTPRequest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { return ::hx::Val( curl ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { return ::hx::Val( promise ); }
		if (HX_FIELD_EQ(inName,"timeout") ) { return ::hx::Val( timeout ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return ::hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"loadData") ) { return ::hx::Val( loadData_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"growBuffer") ) { return ::hx::Val( growBuffer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"initRequest") ) { return ::hx::Val( initRequest_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curl_onWrite") ) { return ::hx::Val( curl_onWrite_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writePosition") ) { return ::hx::Val( writePosition ); }
		if (HX_FIELD_EQ(inName,"curl_onHeader") ) { return ::hx::Val( curl_onHeader_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"writeBytesTotal") ) { return ::hx::Val( writeBytesTotal ); }
		if (HX_FIELD_EQ(inName,"curl_onProgress") ) { return ::hx::Val( curl_onProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeBytesLoaded") ) { return ::hx::Val( writeBytesLoaded ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeHTTPRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"multi") ) { outValue = ( multi ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiInstances") ) { outValue = ( multiInstances ); return true; }
		if (HX_FIELD_EQ(inName,"multiAddHandle") ) { outValue = ( multiAddHandle ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeInstances") ) { outValue = ( activeInstances ); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool") ) { outValue = ( localThreadPool ); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool") ) { outValue = ( multiThreadPool ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"multiProgressTimer") ) { outValue = ( multiProgressTimer ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"multiThreadPoolRunning") ) { outValue = ( multiThreadPoolRunning ); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool_doWork") ) { outValue = localThreadPool_doWork_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool_doWork") ) { outValue = multiThreadPool_doWork_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"localThreadPool_onError") ) { outValue = localThreadPool_onError_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"multiProgressTimer_onRun") ) { outValue = multiProgressTimer_onRun_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"localThreadPool_onComplete") ) { outValue = localThreadPool_onComplete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool_onProgress") ) { outValue = localThreadPool_onProgress_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool_onComplete") ) { outValue = multiThreadPool_onComplete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool_onProgress") ) { outValue = multiThreadPool_onProgress_dyn(); return true; }
	}
	return false;
}

::hx::Val NativeHTTPRequest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { curl=inValue.Cast<  ::lime::net::curl::CURL >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast<  ::lime::app::Promise_haxe_io_Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeout") ) { timeout=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writePosition") ) { writePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"writeBytesTotal") ) { writeBytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeBytesLoaded") ) { writeBytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeHTTPRequest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"multi") ) { multi=ioValue.Cast<  ::lime::net::curl::CURLMulti >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiInstances") ) { multiInstances=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		if (HX_FIELD_EQ(inName,"multiAddHandle") ) { multiAddHandle=ioValue.Cast<  ::sys::thread::Deque >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeInstances") ) { activeInstances=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"localThreadPool") ) { localThreadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
		if (HX_FIELD_EQ(inName,"multiThreadPool") ) { multiThreadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"multiProgressTimer") ) { multiProgressTimer=ioValue.Cast<  ::haxe::Timer >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"multiThreadPoolRunning") ) { multiThreadPoolRunning=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void NativeHTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("canceled",59,18,26,1f));
	outFields->push(HX_("curl",ec,4a,c9,41));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("promise",9b,cd,e9,f7));
	outFields->push(HX_("writeBytesLoaded",31,90,43,d2));
	outFields->push(HX_("writeBytesTotal",18,35,23,6d));
	outFields->push(HX_("writePosition",a8,40,9c,8e));
	outFields->push(HX_("timeout",a1,1a,f7,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeHTTPRequest_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(NativeHTTPRequest_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsBool,(int)offsetof(NativeHTTPRequest_obj,canceled),HX_("canceled",59,18,26,1f)},
	{::hx::fsObject /*  ::lime::net::curl::CURL */ ,(int)offsetof(NativeHTTPRequest_obj,curl),HX_("curl",ec,4a,c9,41)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(NativeHTTPRequest_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::lime::app::Promise_haxe_io_Bytes */ ,(int)offsetof(NativeHTTPRequest_obj,promise),HX_("promise",9b,cd,e9,f7)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,writeBytesLoaded),HX_("writeBytesLoaded",31,90,43,d2)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,writeBytesTotal),HX_("writeBytesTotal",18,35,23,6d)},
	{::hx::fsInt,(int)offsetof(NativeHTTPRequest_obj,writePosition),HX_("writePosition",a8,40,9c,8e)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NativeHTTPRequest_obj,timeout),HX_("timeout",a1,1a,f7,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeHTTPRequest_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &NativeHTTPRequest_obj::activeInstances,HX_("activeInstances",98,b8,ef,7f)},
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(void *) &NativeHTTPRequest_obj::localThreadPool,HX_("localThreadPool",11,36,f3,c0)},
	{::hx::fsObject /*  ::lime::net::curl::CURLMulti */ ,(void *) &NativeHTTPRequest_obj::multi,HX_("multi",79,8a,55,10)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &NativeHTTPRequest_obj::multiInstances,HX_("multiInstances",85,41,c9,b1)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(void *) &NativeHTTPRequest_obj::multiProgressTimer,HX_("multiProgressTimer",9f,32,2f,30)},
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(void *) &NativeHTTPRequest_obj::multiThreadPool,HX_("multiThreadPool",9f,14,5d,b8)},
	{::hx::fsBool,(void *) &NativeHTTPRequest_obj::multiThreadPoolRunning,HX_("multiThreadPoolRunning",20,e3,3c,ed)},
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(void *) &NativeHTTPRequest_obj::multiAddHandle,HX_("multiAddHandle",f0,76,d0,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeHTTPRequest_obj_sMemberFields[] = {
	HX_("bytes",6b,08,98,bd),
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesTotal",59,57,da,45),
	HX_("canceled",59,18,26,1f),
	HX_("curl",ec,4a,c9,41),
	HX_("parent",2a,05,7e,ed),
	HX_("promise",9b,cd,e9,f7),
	HX_("writeBytesLoaded",31,90,43,d2),
	HX_("writeBytesTotal",18,35,23,6d),
	HX_("writePosition",a8,40,9c,8e),
	HX_("timeout",a1,1a,f7,d8),
	HX_("cancel",7a,ed,33,b8),
	HX_("init",10,3b,bb,45),
	HX_("initRequest",1f,4e,ef,fc),
	HX_("loadData",70,27,03,b3),
	HX_("loadText",f3,9d,99,bd),
	HX_("growBuffer",73,dd,f9,73),
	HX_("curl_onHeader",ff,ee,a6,ac),
	HX_("curl_onProgress",9f,9d,6b,99),
	HX_("curl_onWrite",ad,7b,ff,91),
	::String(null()) };

static void NativeHTTPRequest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::activeInstances,"activeInstances");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::localThreadPool,"localThreadPool");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multi,"multi");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiInstances,"multiInstances");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiProgressTimer,"multiProgressTimer");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPool,"multiThreadPool");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPoolRunning,"multiThreadPoolRunning");
	HX_MARK_MEMBER_NAME(NativeHTTPRequest_obj::multiAddHandle,"multiAddHandle");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeHTTPRequest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::activeInstances,"activeInstances");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::localThreadPool,"localThreadPool");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multi,"multi");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiInstances,"multiInstances");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiProgressTimer,"multiProgressTimer");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPool,"multiThreadPool");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiThreadPoolRunning,"multiThreadPoolRunning");
	HX_VISIT_MEMBER_NAME(NativeHTTPRequest_obj::multiAddHandle,"multiAddHandle");
};

#endif

::hx::Class NativeHTTPRequest_obj::__mClass;

static ::String NativeHTTPRequest_obj_sStaticFields[] = {
	HX_("activeInstances",98,b8,ef,7f),
	HX_("localThreadPool",11,36,f3,c0),
	HX_("multi",79,8a,55,10),
	HX_("multiInstances",85,41,c9,b1),
	HX_("multiProgressTimer",9f,32,2f,30),
	HX_("multiThreadPool",9f,14,5d,b8),
	HX_("multiThreadPoolRunning",20,e3,3c,ed),
	HX_("multiAddHandle",f0,76,d0,d6),
	HX_("localThreadPool_doWork",aa,d6,50,91),
	HX_("localThreadPool_onComplete",a6,73,cb,3c),
	HX_("localThreadPool_onError",bb,f2,40,9d),
	HX_("localThreadPool_onProgress",9a,6a,2e,43),
	HX_("multiThreadPool_doWork",dc,05,fa,c1),
	HX_("multiThreadPool_onComplete",d8,23,41,15),
	HX_("multiThreadPool_onProgress",cc,1a,a4,1b),
	HX_("multiProgressTimer_onRun",8c,36,cb,30),
	::String(null())
};

void NativeHTTPRequest_obj::__register()
{
	NativeHTTPRequest_obj _hx_dummy;
	NativeHTTPRequest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.NativeHTTPRequest",1e,22,ba,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeHTTPRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeHTTPRequest_obj::__SetStatic;
	__mClass->mMarkFunc = NativeHTTPRequest_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeHTTPRequest_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeHTTPRequest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeHTTPRequest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeHTTPRequest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeHTTPRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeHTTPRequest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
