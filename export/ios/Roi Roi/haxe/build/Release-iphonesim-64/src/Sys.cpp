#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_28_print,"Sys","print",0x483745ec,"Sys.print","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",28,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_32_println,"Sys","println",0x3905f76e,"Sys.println","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",32,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_56_args,"Sys","args",0xeaeddc7e,"Sys.args","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",56,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_59_getEnv,"Sys","getEnv",0xd9e05658,"Sys.getEnv","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",59,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_71_sleep,"Sys","sleep",0xfe70aad6,"Sys.sleep","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",71,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_79_getCwd,"Sys","getCwd",0xd9ded99b,"Sys.getCwd","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",79,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_83_setCwd,"Sys","setCwd",0xa6272e0f,"Sys.setCwd","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",83,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_109_exit,"Sys","exit",0xed97463f,"Sys.exit","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",109,0xd23c22f3)
HX_LOCAL_STACK_FRAME(_hx_pos_39f5eab4124248fe_113_time,"Sys","time",0xf7761b2e,"Sys.time","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",113,0xd23c22f3)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee3a981;
}

void Sys_obj::print( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_28_print)
HXDLIN(  28)		 ::__hxcpp_print(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

void Sys_obj::println( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_32_println)
HXDLIN(  32)		 ::__hxcpp_println(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

::Array< ::String > Sys_obj::args(){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_56_args)
HXDLIN(  56)		return  ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::getEnv(::String s){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_59_getEnv)
HXLINE(  60)		::String v = _hx_std_get_env(s);
HXLINE(  61)		if (::hx::IsNull( v )) {
HXLINE(  62)			return null();
            		}
HXLINE(  63)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getEnv,return )

void Sys_obj::sleep(Float seconds){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_71_sleep)
HXDLIN(  71)		_hx_std_sys_sleep(seconds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

::String Sys_obj::getCwd(){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_79_getCwd)
HXDLIN(  79)		return _hx_std_get_cwd();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getCwd,return )

void Sys_obj::setCwd(::String s){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_83_setCwd)
HXDLIN(  83)		_hx_std_set_cwd(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

void Sys_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_109_exit)
HXDLIN( 109)		 ::__hxcpp_exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))

Float Sys_obj::time(){
            	HX_STACKFRAME(&_hx_pos_39f5eab4124248fe_113_time)
HXDLIN( 113)		return _hx_std_sys_time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,time,return )


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCwd") ) { outValue = getCwd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCwd") ) { outValue = setCwd_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_("print",2d,58,8b,c8),
	HX_("println",ef,db,33,84),
	HX_("args",5d,8d,74,40),
	HX_("getEnv",f7,3c,1c,a3),
	HX_("sleep",17,bd,c4,7e),
	HX_("getCwd",3a,c0,1a,a3),
	HX_("setCwd",ae,14,63,6f),
	HX_("exit",1e,f7,1d,43),
	HX_("time",0d,cc,fc,4c),
	::String(null())
};

void Sys_obj::__register()
{
	Sys_obj _hx_dummy;
	Sys_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Sys",ed,64,3f,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Sys_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

