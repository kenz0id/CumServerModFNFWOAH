#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeApplication
#include <lime/_internal/backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseButton_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseWheelMode_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseWheelMode_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Float_Void
#include <lime/app/_Event_Int_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Void
#include <lime/app/_Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/_Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Int_Int_Void
#include <lime/app/_Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Joystick_Void
#include <lime/app/_Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Touch_Void
#include <lime/app/_Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Window_Void
#include <lime/app/_Event_lime_ui_Window_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_MouseWheelMode
#include <lime/ui/MouseWheelMode.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_Preloader
#include <lime/utils/Preloader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da4fb7bee4c62773_30_new,"lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",30,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_aca430172aa84436_81___init__,"::lime::app::Application_obj","__init__",0x5d7d4402,"::lime::app::Application_obj.__init__","lime/app/Application.hx",81,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_124_addModule,"lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",124,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_134_createWindow,"lime.app.Application","createWindow",0xb3683e70,"lime.app.Application.createWindow","lime/app/Application.hx",134,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_147_exec,"lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",147,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_159_onGamepadAxisMove,"lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",159,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_166_onGamepadButtonDown,"lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",166,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_173_onGamepadButtonUp,"lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",173,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_179_onGamepadConnect,"lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",179,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_185_onGamepadDisconnect,"lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",185,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_193_onJoystickAxisMove,"lime.app.Application","onJoystickAxisMove",0x646941d1,"lime.app.Application.onJoystickAxisMove","lime/app/Application.hx",193,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_200_onJoystickButtonDown,"lime.app.Application","onJoystickButtonDown",0x0c87b6b3,"lime.app.Application.onJoystickButtonDown","lime/app/Application.hx",200,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_207_onJoystickButtonUp,"lime.app.Application","onJoystickButtonUp",0x30a73e6c,"lime.app.Application.onJoystickButtonUp","lime/app/Application.hx",207,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_213_onJoystickConnect,"lime.app.Application","onJoystickConnect",0x26867f4b,"lime.app.Application.onJoystickConnect","lime/app/Application.hx",213,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_219_onJoystickDisconnect,"lime.app.Application","onJoystickDisconnect",0xc967b39b,"lime.app.Application.onJoystickDisconnect","lime/app/Application.hx",219,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_227_onJoystickHatMove,"lime.app.Application","onJoystickHatMove",0xbc11db6d,"lime.app.Application.onJoystickHatMove","lime/app/Application.hx",227,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_236_onJoystickTrackballMove,"lime.app.Application","onJoystickTrackballMove",0xefab705c,"lime.app.Application.onJoystickTrackballMove","lime/app/Application.hx",236,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_243_onKeyDown,"lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",243,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_250_onKeyUp,"lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",250,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_255_onModuleExit,"lime.app.Application","onModuleExit",0x4a2a2a4d,"lime.app.Application.onModuleExit","lime/app/Application.hx",255,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_263_onMouseDown,"lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",263,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_270_onMouseMove,"lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",270,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_277_onMouseMoveRelative,"lime.app.Application","onMouseMoveRelative",0xf3ee70bf,"lime.app.Application.onMouseMoveRelative","lime/app/Application.hx",277,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_285_onMouseUp,"lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",285,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_293_onMouseWheel,"lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",293,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_298_onPreloadComplete,"lime.app.Application","onPreloadComplete",0x8806a25f,"lime.app.Application.onPreloadComplete","lime/app/Application.hx",298,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_305_onPreloadProgress,"lime.app.Application","onPreloadProgress",0x8e699953,"lime.app.Application.onPreloadProgress","lime/app/Application.hx",305,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_310_onRenderContextLost,"lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",310,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_316_onRenderContextRestored,"lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",316,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_324_onTextEdit,"lime.app.Application","onTextEdit",0xa9173afa,"lime.app.Application.onTextEdit","lime/app/Application.hx",324,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_330_onTextInput,"lime.app.Application","onTextInput",0x9f78251a,"lime.app.Application.onTextInput","lime/app/Application.hx",330,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_336_onTouchCancel,"lime.app.Application","onTouchCancel",0xf76b1cd6,"lime.app.Application.onTouchCancel","lime/app/Application.hx",336,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_342_onTouchEnd,"lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",342,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_348_onTouchMove,"lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",348,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_354_onTouchStart,"lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",354,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_359_onWindowActivate,"lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",359,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_364_onWindowClose,"lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",364,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_369_onWindowCreate,"lime.app.Application","onWindowCreate",0x2a302e2f,"lime.app.Application.onWindowCreate","lime/app/Application.hx",369,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_374_onWindowDeactivate,"lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",374,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_379_onWindowDropFile,"lime.app.Application","onWindowDropFile",0xf69db03e,"lime.app.Application.onWindowDropFile","lime/app/Application.hx",379,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_384_onWindowEnter,"lime.app.Application","onWindowEnter",0x3b59cd45,"lime.app.Application.onWindowEnter","lime/app/Application.hx",384,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_389_onWindowExpose,"lime.app.Application","onWindowExpose",0x729e5977,"lime.app.Application.onWindowExpose","lime/app/Application.hx",389,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_394_onWindowFocusIn,"lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",394,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_399_onWindowFocusOut,"lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",399,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_404_onWindowFullscreen,"lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",404,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_409_onWindowLeave,"lime.app.Application","onWindowLeave",0x3d269524,"lime.app.Application.onWindowLeave","lime/app/Application.hx",409,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_416_onWindowMove,"lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",416,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_421_onWindowMinimize,"lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",421,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_428_onWindowResize,"lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",428,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_433_onWindowRestore,"lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",433,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_441_removeModule,"lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",441,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_452_render,"lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",452,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_458_update,"lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",458,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_462___addWindow,"lime.app.Application","__addWindow",0x5f06ffed,"lime.app.Application.__addWindow","lime/app/Application.hx",462,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_467___addWindow,"lime.app.Application","__addWindow",0x5f06ffed,"lime.app.Application.__addWindow","lime/app/Application.hx",467,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_507___createWindow,"lime.app.Application","__createWindow",0x52632290,"lime.app.Application.__createWindow","lime/app/Application.hx",507,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_514___registerLimeModule,"lime.app.Application","__registerLimeModule",0x3f696b68,"lime.app.Application.__registerLimeModule","lime/app/Application.hx",514,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_541___removeWindow,"lime.app.Application","__removeWindow",0x9f3b7dd8,"lime.app.Application.__removeWindow","lime/app/Application.hx",541,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_565___onGamepadConnect,"lime.app.Application","__onGamepadConnect",0x60fc374c,"lime.app.Application.__onGamepadConnect","lime/app/Application.hx",565,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_566___onGamepadConnect,"lime.app.Application","__onGamepadConnect",0x60fc374c,"lime.app.Application.__onGamepadConnect","lime/app/Application.hx",566,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_567___onGamepadConnect,"lime.app.Application","__onGamepadConnect",0x60fc374c,"lime.app.Application.__onGamepadConnect","lime/app/Application.hx",567,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_568___onGamepadConnect,"lime.app.Application","__onGamepadConnect",0x60fc374c,"lime.app.Application.__onGamepadConnect","lime/app/Application.hx",568,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_562___onGamepadConnect,"lime.app.Application","__onGamepadConnect",0x60fc374c,"lime.app.Application.__onGamepadConnect","lime/app/Application.hx",562,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_575___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",575,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_576___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",576,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_577___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",577,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_578___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",578,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_579___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",579,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_580___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",580,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_572___onJoystickConnect,"lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",572,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_585___onModuleExit,"lime.app.Application","__onModuleExit",0xe9250e6d,"lime.app.Application.__onModuleExit","lime/app/Application.hx",585,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_589___onWindowClose,"lime.app.Application","__onWindowClose",0x8fc32fc5,"lime.app.Application.__onWindowClose","lime/app/Application.hx",589,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_599___unregisterLimeModule,"lime.app.Application","__unregisterLimeModule",0xe07fc501,"lime.app.Application.__unregisterLimeModule","lime/app/Application.hx",599,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_617_get_preloader,"lime.app.Application","get_preloader",0xbaf66569,"lime.app.Application.get_preloader","lime/app/Application.hx",617,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_622_get_window,"lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",622,0x8bc55476)
HX_LOCAL_STACK_FRAME(_hx_pos_da4fb7bee4c62773_627_get_windows,"lime.app.Application","get_windows",0x94992cb6,"lime.app.Application.get_windows","lime/app/Application.hx",627,0x8bc55476)
namespace lime{
namespace app{

void Application_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_da4fb7bee4c62773_30_new)
HXLINE(  55)		this->onCreateWindow =  ::lime::app::_Event_lime_ui_Window_Void_obj::__alloc( HX_CTX );
HXLINE(  50)		this->onUpdate =  ::lime::app::_Event_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  98)		super::__construct();
HXLINE( 100)		if (::hx::IsNull( ::lime::app::Application_obj::current )) {
HXLINE( 102)			::lime::app::Application_obj::current = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 105)		this->meta =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 106)		this->modules = ::Array_obj< ::Dynamic>::__new();
HXLINE( 107)		this->_hx___windowByID =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 108)		this->_hx___windows = ::Array_obj< ::Dynamic>::__new();
HXLINE( 110)		this->_hx___backend =  ::lime::_internal::backend::native::NativeApplication_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 112)		this->_hx___registerLimeModule(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 114)		this->_hx___preloader =  ::lime::utils::Preloader_obj::__alloc( HX_CTX );
HXLINE( 115)		this->_hx___preloader->onProgress->add(this->onPreloadProgress_dyn(),null(),null());
HXLINE( 116)		this->_hx___preloader->onComplete->add(this->onPreloadComplete_dyn(),null(),null());
            	}

Dynamic Application_obj::__CreateEmpty() { return new Application_obj; }

void *Application_obj::_hx_vtable = 0;

Dynamic Application_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Application_obj > _hx_result = new Application_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Application_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x431bf104) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x431bf104;
	} else {
		return inClassId==(int)0x7f8386d8;
	}
}

void Application_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_aca430172aa84436_81___init__)
HXDLIN(  81)		 ::Dynamic _init = ::hx::ClassOf< ::lime::_internal::backend::native::NativeApplication >();
            	}


void Application_obj::addModule(::Dynamic module){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_124_addModule)
HXLINE( 125)		::lime::app::IModule_obj::_hx___registerLimeModule(module,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 126)		this->modules->push(module);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

 ::lime::ui::Window Application_obj::createWindow( ::Dynamic attributes){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_134_createWindow)
HXLINE( 135)		 ::lime::ui::Window window = this->_hx___createWindow(attributes);
HXLINE( 136)		this->_hx___addWindow(window);
HXLINE( 137)		return window;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,createWindow,return )

int Application_obj::exec(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_147_exec)
HXLINE( 148)		::lime::app::Application_obj::current = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 150)		return this->_hx___backend->exec();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_159_onGamepadAxisMove)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onGamepadAxisMove,(void))

void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_166_onGamepadButtonDown)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onGamepadButtonDown,(void))

void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_173_onGamepadButtonUp)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onGamepadButtonUp,(void))

void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_179_onGamepadConnect)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onGamepadConnect,(void))

void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_185_onGamepadDisconnect)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onGamepadDisconnect,(void))

void Application_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_193_onJoystickAxisMove)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onJoystickAxisMove,(void))

void Application_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_200_onJoystickButtonDown)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onJoystickButtonDown,(void))

void Application_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_207_onJoystickButtonUp)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onJoystickButtonUp,(void))

void Application_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_213_onJoystickConnect)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onJoystickConnect,(void))

void Application_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_219_onJoystickDisconnect)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onJoystickDisconnect,(void))

void Application_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_227_onJoystickHatMove)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onJoystickHatMove,(void))

void Application_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_236_onJoystickTrackballMove)
            	}


HX_DEFINE_DYNAMIC_FUNC4(Application_obj,onJoystickTrackballMove,(void))

void Application_obj::onKeyDown(int keyCode,int modifier){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_243_onKeyDown)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onKeyDown,(void))

void Application_obj::onKeyUp(int keyCode,int modifier){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_250_onKeyUp)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onKeyUp,(void))

void Application_obj::onModuleExit(int code){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_255_onModuleExit)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onModuleExit,(void))

void Application_obj::onMouseDown(Float x,Float y,int button){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_263_onMouseDown)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onMouseDown,(void))

void Application_obj::onMouseMove(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_270_onMouseMove)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onMouseMove,(void))

void Application_obj::onMouseMoveRelative(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_277_onMouseMoveRelative)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onMouseMoveRelative,(void))

void Application_obj::onMouseUp(Float x,Float y,int button){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_285_onMouseUp)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onMouseUp,(void))

void Application_obj::onMouseWheel(Float deltaX,Float deltaY, ::lime::ui::MouseWheelMode deltaMode){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_293_onMouseWheel)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onMouseWheel,(void))

void Application_obj::onPreloadComplete(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_298_onPreloadComplete)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onPreloadComplete,(void))

void Application_obj::onPreloadProgress(int loaded,int total){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_305_onPreloadProgress)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onPreloadProgress,(void))

void Application_obj::onRenderContextLost(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_310_onRenderContextLost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onRenderContextLost,(void))

void Application_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_316_onRenderContextRestored)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onRenderContextRestored,(void))

void Application_obj::onTextEdit(::String text,int start,int length){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_324_onTextEdit)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onTextEdit,(void))

void Application_obj::onTextInput(::String text){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_330_onTextInput)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onTextInput,(void))

void Application_obj::onTouchCancel( ::lime::ui::Touch touch){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_336_onTouchCancel)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onTouchCancel,(void))

void Application_obj::onTouchEnd( ::lime::ui::Touch touch){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_342_onTouchEnd)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onTouchEnd,(void))

void Application_obj::onTouchMove( ::lime::ui::Touch touch){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_348_onTouchMove)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onTouchMove,(void))

void Application_obj::onTouchStart( ::lime::ui::Touch touch){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_354_onTouchStart)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onTouchStart,(void))

void Application_obj::onWindowActivate(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_359_onWindowActivate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowActivate,(void))

void Application_obj::onWindowClose(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_364_onWindowClose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowClose,(void))

void Application_obj::onWindowCreate(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_369_onWindowCreate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowCreate,(void))

void Application_obj::onWindowDeactivate(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_374_onWindowDeactivate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowDeactivate,(void))

void Application_obj::onWindowDropFile(::String file){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_379_onWindowDropFile)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onWindowDropFile,(void))

void Application_obj::onWindowEnter(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_384_onWindowEnter)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowEnter,(void))

void Application_obj::onWindowExpose(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_389_onWindowExpose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowExpose,(void))

void Application_obj::onWindowFocusIn(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_394_onWindowFocusIn)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowFocusIn,(void))

void Application_obj::onWindowFocusOut(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_399_onWindowFocusOut)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowFocusOut,(void))

void Application_obj::onWindowFullscreen(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_404_onWindowFullscreen)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowFullscreen,(void))

void Application_obj::onWindowLeave(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_409_onWindowLeave)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowLeave,(void))

void Application_obj::onWindowMove(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_416_onWindowMove)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onWindowMove,(void))

void Application_obj::onWindowMinimize(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_421_onWindowMinimize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowMinimize,(void))

void Application_obj::onWindowResize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_428_onWindowResize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onWindowResize,(void))

void Application_obj::onWindowRestore(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_433_onWindowRestore)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowRestore,(void))

void Application_obj::removeModule(::Dynamic module){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_441_removeModule)
HXDLIN( 441)		if (::hx::IsNotNull( module )) {
HXLINE( 443)			::lime::app::IModule_obj::_hx___unregisterLimeModule(module,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 444)			this->modules->remove(module);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

void Application_obj::render( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_452_render)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,render,(void))

void Application_obj::update(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_458_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,update,(void))

void Application_obj::_hx___addWindow( ::lime::ui::Window window){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_462___addWindow)
HXDLIN( 462)		if (::hx::IsNotNull( window )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::ui::Window,window1, ::Dynamic,_g) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_467___addWindow)
HXLINE( 467)				_g(window1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 464)			this->_hx___windows->push(window);
HXLINE( 465)			this->_hx___windowByID->set(window->id,window);
HXLINE( 467)			 ::Dynamic _g = this->_hx___onWindowClose_dyn();
HXDLIN( 467)			 ::lime::ui::Window window1 = window;
HXDLIN( 467)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(window1,_g));
HXDLIN( 467)			window->onClose->add(_hx_tmp,false,-10000);
HXLINE( 469)			if (::hx::IsNull( this->_hx___window )) {
HXLINE( 471)				this->_hx___window = window;
HXLINE( 473)				window->onActivate->add(this->onWindowActivate_dyn(),null(),null());
HXLINE( 474)				window->onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
HXLINE( 475)				window->onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
HXLINE( 476)				window->onDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
HXLINE( 477)				window->onDropFile->add(this->onWindowDropFile_dyn(),null(),null());
HXLINE( 478)				window->onEnter->add(this->onWindowEnter_dyn(),null(),null());
HXLINE( 479)				window->onExpose->add(this->onWindowExpose_dyn(),null(),null());
HXLINE( 480)				window->onFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
HXLINE( 481)				window->onFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
HXLINE( 482)				window->onFullscreen->add(this->onWindowFullscreen_dyn(),null(),null());
HXLINE( 483)				window->onKeyDown->add(this->onKeyDown_dyn(),null(),null());
HXLINE( 484)				window->onKeyUp->add(this->onKeyUp_dyn(),null(),null());
HXLINE( 485)				window->onLeave->add(this->onWindowLeave_dyn(),null(),null());
HXLINE( 486)				window->onMinimize->add(this->onWindowMinimize_dyn(),null(),null());
HXLINE( 487)				window->onMouseDown->add(this->onMouseDown_dyn(),null(),null());
HXLINE( 488)				window->onMouseMove->add(this->onMouseMove_dyn(),null(),null());
HXLINE( 489)				window->onMouseMoveRelative->add(this->onMouseMoveRelative_dyn(),null(),null());
HXLINE( 490)				window->onMouseUp->add(this->onMouseUp_dyn(),null(),null());
HXLINE( 491)				window->onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
HXLINE( 492)				window->onMove->add(this->onWindowMove_dyn(),null(),null());
HXLINE( 493)				window->onRender->add(this->render_dyn(),null(),null());
HXLINE( 494)				window->onResize->add(this->onWindowResize_dyn(),null(),null());
HXLINE( 495)				window->onRestore->add(this->onWindowRestore_dyn(),null(),null());
HXLINE( 496)				window->onTextEdit->add(this->onTextEdit_dyn(),null(),null());
HXLINE( 497)				window->onTextInput->add(this->onTextInput_dyn(),null(),null());
HXLINE( 499)				this->onWindowCreate();
            			}
HXLINE( 502)			this->onCreateWindow->dispatch(window);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___addWindow,(void))

 ::lime::ui::Window Application_obj::_hx___createWindow( ::Dynamic attributes){
            	HX_GC_STACKFRAME(&_hx_pos_da4fb7bee4c62773_507___createWindow)
HXLINE( 508)		 ::lime::ui::Window window =  ::lime::ui::Window_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),attributes);
HXLINE( 509)		if ((window->id == -1)) {
HXLINE( 509)			return null();
            		}
HXLINE( 510)		return window;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___createWindow,return )

void Application_obj::_hx___registerLimeModule( ::lime::app::Application application){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_514___registerLimeModule)
HXLINE( 515)		application->onUpdate->add(this->update_dyn(),null(),null());
HXLINE( 516)		application->onExit->add(this->onModuleExit_dyn(),false,0);
HXLINE( 517)		application->onExit->add(this->_hx___onModuleExit_dyn(),false,0);
HXLINE( 519)		{
HXLINE( 519)			 ::Dynamic gamepad = ::lime::ui::Gamepad_obj::devices->iterator();
HXDLIN( 519)			while(( (bool)(gamepad->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 519)				 ::lime::ui::Gamepad gamepad1 = ( ( ::lime::ui::Gamepad)(gamepad->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 521)				this->_hx___onGamepadConnect(gamepad1);
            			}
            		}
HXLINE( 524)		::lime::ui::Gamepad_obj::onConnect->add(this->_hx___onGamepadConnect_dyn(),null(),null());
HXLINE( 526)		{
HXLINE( 526)			 ::Dynamic joystick = ::lime::ui::Joystick_obj::devices->iterator();
HXDLIN( 526)			while(( (bool)(joystick->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 526)				 ::lime::ui::Joystick joystick1 = ( ( ::lime::ui::Joystick)(joystick->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 528)				this->_hx___onJoystickConnect(joystick1);
            			}
            		}
HXLINE( 531)		::lime::ui::Joystick_obj::onConnect->add(this->_hx___onJoystickConnect_dyn(),null(),null());
HXLINE( 533)		::lime::ui::Touch_obj::onCancel->add(this->onTouchCancel_dyn(),null(),null());
HXLINE( 534)		::lime::ui::Touch_obj::onStart->add(this->onTouchStart_dyn(),null(),null());
HXLINE( 535)		::lime::ui::Touch_obj::onMove->add(this->onTouchMove_dyn(),null(),null());
HXLINE( 536)		::lime::ui::Touch_obj::onEnd->add(this->onTouchEnd_dyn(),null(),null());
            	}


void Application_obj::_hx___removeWindow( ::lime::ui::Window window){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_541___removeWindow)
HXDLIN( 541)		bool _hx_tmp;
HXDLIN( 541)		if (::hx::IsNotNull( window )) {
HXDLIN( 541)			_hx_tmp = this->_hx___windowByID->exists(window->id);
            		}
            		else {
HXDLIN( 541)			_hx_tmp = false;
            		}
HXDLIN( 541)		if (_hx_tmp) {
HXLINE( 543)			if (::hx::IsInstanceEq( this->_hx___window,window )) {
HXLINE( 545)				this->_hx___window = null();
            			}
HXLINE( 548)			this->_hx___windows->remove(window);
HXLINE( 549)			this->_hx___windowByID->remove(window->id);
HXLINE( 550)			window->close();
HXLINE( 552)			if ((this->_hx___windows->length == 0)) {
HXLINE( 555)				::lime::_hx_system::System_obj::exit(0);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___removeWindow,(void))

void Application_obj::_hx___onGamepadConnect( ::lime::ui::Gamepad gamepad){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::ui::Gamepad,gamepad1, ::Dynamic,_g) HXARGC(2)
            		void _hx_run(int axis,Float value){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_565___onGamepadConnect)
HXLINE( 565)			_g(gamepad1,axis,value);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::ui::Gamepad,gamepad2, ::Dynamic,_g1) HXARGC(1)
            		void _hx_run(int button){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_566___onGamepadConnect)
HXLINE( 566)			_g1(gamepad2,button);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,_g2, ::lime::ui::Gamepad,gamepad3) HXARGC(1)
            		void _hx_run(int button){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_567___onGamepadConnect)
HXLINE( 567)			_g2(gamepad3,button);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,_g3, ::lime::ui::Gamepad,gamepad4) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_568___onGamepadConnect)
HXLINE( 568)			_g3(gamepad4);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_562___onGamepadConnect)
HXLINE( 563)		this->onGamepadConnect(gamepad);
HXLINE( 565)		 ::Dynamic _g = this->onGamepadAxisMove_dyn();
HXDLIN( 565)		 ::lime::ui::Gamepad gamepad1 = gamepad;
HXDLIN( 565)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(gamepad1,_g));
HXDLIN( 565)		gamepad->onAxisMove->add(_hx_tmp,null(),null());
HXLINE( 566)		 ::Dynamic _g1 = this->onGamepadButtonDown_dyn();
HXDLIN( 566)		 ::lime::ui::Gamepad gamepad2 = gamepad;
HXDLIN( 566)		 ::Dynamic _hx_tmp1 =  ::Dynamic(new _hx_Closure_1(gamepad2,_g1));
HXDLIN( 566)		gamepad->onButtonDown->add(_hx_tmp1,null(),null());
HXLINE( 567)		 ::Dynamic _g2 = this->onGamepadButtonUp_dyn();
HXDLIN( 567)		 ::lime::ui::Gamepad gamepad3 = gamepad;
HXDLIN( 567)		 ::Dynamic _hx_tmp2 =  ::Dynamic(new _hx_Closure_2(_g2,gamepad3));
HXDLIN( 567)		gamepad->onButtonUp->add(_hx_tmp2,null(),null());
HXLINE( 568)		 ::Dynamic _g3 = this->onGamepadDisconnect_dyn();
HXDLIN( 568)		 ::lime::ui::Gamepad gamepad4 = gamepad;
HXDLIN( 568)		 ::Dynamic _hx_tmp3 =  ::Dynamic(new _hx_Closure_3(_g3,gamepad4));
HXDLIN( 568)		gamepad->onDisconnect->add(_hx_tmp3,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___onGamepadConnect,(void))

void Application_obj::_hx___onJoystickConnect( ::lime::ui::Joystick joystick){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,_g, ::lime::ui::Joystick,joystick1) HXARGC(2)
            		void _hx_run(int axis,Float value){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_575___onJoystickConnect)
HXLINE( 575)			_g(joystick1,axis,value);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::ui::Joystick,joystick2, ::Dynamic,_g1) HXARGC(1)
            		void _hx_run(int button){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_576___onJoystickConnect)
HXLINE( 576)			_g1(joystick2,button);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,_g2, ::lime::ui::Joystick,joystick3) HXARGC(1)
            		void _hx_run(int button){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_577___onJoystickConnect)
HXLINE( 577)			_g2(joystick3,button);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,_g3, ::lime::ui::Joystick,joystick4) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_578___onJoystickConnect)
HXLINE( 578)			_g3(joystick4);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4, ::Dynamic,_g4, ::lime::ui::Joystick,joystick5) HXARGC(2)
            		void _hx_run(int hat,int position){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_579___onJoystickConnect)
HXLINE( 579)			_g4(joystick5,hat,position);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_5, ::lime::ui::Joystick,joystick6, ::Dynamic,_g5) HXARGC(3)
            		void _hx_run(int trackball,Float x,Float y){
            			HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_580___onJoystickConnect)
HXLINE( 580)			_g5(joystick6,trackball,x,y);
            		}
            		HX_END_LOCAL_FUNC3((void))

            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_572___onJoystickConnect)
HXLINE( 573)		this->onJoystickConnect(joystick);
HXLINE( 575)		 ::Dynamic _g = this->onJoystickAxisMove_dyn();
HXDLIN( 575)		 ::lime::ui::Joystick joystick1 = joystick;
HXDLIN( 575)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(_g,joystick1));
HXDLIN( 575)		joystick->onAxisMove->add(_hx_tmp,null(),null());
HXLINE( 576)		 ::Dynamic _g1 = this->onJoystickButtonDown_dyn();
HXDLIN( 576)		 ::lime::ui::Joystick joystick2 = joystick;
HXDLIN( 576)		 ::Dynamic _hx_tmp1 =  ::Dynamic(new _hx_Closure_1(joystick2,_g1));
HXDLIN( 576)		joystick->onButtonDown->add(_hx_tmp1,null(),null());
HXLINE( 577)		 ::Dynamic _g2 = this->onJoystickButtonUp_dyn();
HXDLIN( 577)		 ::lime::ui::Joystick joystick3 = joystick;
HXDLIN( 577)		 ::Dynamic _hx_tmp2 =  ::Dynamic(new _hx_Closure_2(_g2,joystick3));
HXDLIN( 577)		joystick->onButtonUp->add(_hx_tmp2,null(),null());
HXLINE( 578)		 ::Dynamic _g3 = this->onJoystickDisconnect_dyn();
HXDLIN( 578)		 ::lime::ui::Joystick joystick4 = joystick;
HXDLIN( 578)		 ::Dynamic _hx_tmp3 =  ::Dynamic(new _hx_Closure_3(_g3,joystick4));
HXDLIN( 578)		joystick->onDisconnect->add(_hx_tmp3,null(),null());
HXLINE( 579)		 ::Dynamic _g4 = this->onJoystickHatMove_dyn();
HXDLIN( 579)		 ::lime::ui::Joystick joystick5 = joystick;
HXDLIN( 579)		 ::Dynamic _hx_tmp4 =  ::Dynamic(new _hx_Closure_4(_g4,joystick5));
HXDLIN( 579)		joystick->onHatMove->add(_hx_tmp4,null(),null());
HXLINE( 580)		 ::Dynamic _g5 = this->onJoystickTrackballMove_dyn();
HXDLIN( 580)		 ::lime::ui::Joystick joystick6 = joystick;
HXDLIN( 580)		 ::Dynamic _hx_tmp5 =  ::Dynamic(new _hx_Closure_5(joystick6,_g5));
HXDLIN( 580)		joystick->onTrackballMove->add(_hx_tmp5,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___onJoystickConnect,(void))

void Application_obj::_hx___onModuleExit(int code){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_585___onModuleExit)
HXDLIN( 585)		this->_hx___backend->exit();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___onModuleExit,(void))

void Application_obj::_hx___onWindowClose( ::lime::ui::Window window){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_589___onWindowClose)
HXLINE( 590)		if (::hx::IsInstanceEq( this->_hx___window,window )) {
HXLINE( 592)			this->onWindowClose();
            		}
HXLINE( 595)		this->_hx___removeWindow(window);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,_hx___onWindowClose,(void))

void Application_obj::_hx___unregisterLimeModule( ::lime::app::Application application){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_599___unregisterLimeModule)
HXLINE( 600)		application->onUpdate->remove(this->update_dyn());
HXLINE( 601)		application->onExit->remove(this->_hx___onModuleExit_dyn());
HXLINE( 602)		application->onExit->remove(this->onModuleExit_dyn());
HXLINE( 604)		::lime::ui::Gamepad_obj::onConnect->remove(this->_hx___onGamepadConnect_dyn());
HXLINE( 605)		::lime::ui::Joystick_obj::onConnect->remove(this->_hx___onJoystickConnect_dyn());
HXLINE( 606)		::lime::ui::Touch_obj::onCancel->remove(this->onTouchCancel_dyn());
HXLINE( 607)		::lime::ui::Touch_obj::onStart->remove(this->onTouchStart_dyn());
HXLINE( 608)		::lime::ui::Touch_obj::onMove->remove(this->onTouchMove_dyn());
HXLINE( 609)		::lime::ui::Touch_obj::onEnd->remove(this->onTouchEnd_dyn());
HXLINE( 611)		this->onModuleExit(0);
            	}


 ::lime::utils::Preloader Application_obj::get_preloader(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_617_get_preloader)
HXDLIN( 617)		return this->_hx___preloader;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_preloader,return )

 ::lime::ui::Window Application_obj::get_window(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_622_get_window)
HXDLIN( 622)		return this->_hx___window;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::Array< ::Dynamic> Application_obj::get_windows(){
            	HX_STACKFRAME(&_hx_pos_da4fb7bee4c62773_627_get_windows)
HXDLIN( 627)		return this->_hx___windows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_windows,return )

 ::lime::app::Application Application_obj::current;


::hx::ObjectPtr< Application_obj > Application_obj::__new() {
	::hx::ObjectPtr< Application_obj > __this = new Application_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Application_obj > Application_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Application_obj *__this = (Application_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Application_obj), true, "lime.app.Application"));
	*(void **)__this = Application_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(meta,"meta");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(onCreateWindow,"onCreateWindow");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(_hx___backend,"__backend");
	HX_MARK_MEMBER_NAME(_hx___preloader,"__preloader");
	HX_MARK_MEMBER_NAME(_hx___window,"__window");
	HX_MARK_MEMBER_NAME(_hx___windowByID,"__windowByID");
	HX_MARK_MEMBER_NAME(_hx___windows,"__windows");
	 ::lime::app::Module_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(meta,"meta");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(onCreateWindow,"onCreateWindow");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(_hx___backend,"__backend");
	HX_VISIT_MEMBER_NAME(_hx___preloader,"__preloader");
	HX_VISIT_MEMBER_NAME(_hx___window,"__window");
	HX_VISIT_MEMBER_NAME(_hx___windowByID,"__windowByID");
	HX_VISIT_MEMBER_NAME(_hx___windows,"__windows");
	 ::lime::app::Module_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Application_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"meta") ) { return ::hx::Val( meta ); }
		if (HX_FIELD_EQ(inName,"exec") ) { return ::hx::Val( exec_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_window() : window ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { return ::hx::Val( modules ); }
		if (HX_FIELD_EQ(inName,"windows") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_windows() : windows ); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate ); }
		if (HX_FIELD_EQ(inName,"__window") ) { return ::hx::Val( _hx___window ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_preloader() : preloader ); }
		if (HX_FIELD_EQ(inName,"__backend") ) { return ::hx::Val( _hx___backend ); }
		if (HX_FIELD_EQ(inName,"__windows") ) { return ::hx::Val( _hx___windows ); }
		if (HX_FIELD_EQ(inName,"addModule") ) { return ::hx::Val( addModule_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return ::hx::Val( onTextEdit_dyn() ); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return ::hx::Val( onTouchEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return ::hx::Val( get_window_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__preloader") ) { return ::hx::Val( _hx___preloader ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return ::hx::Val( onTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return ::hx::Val( onTouchMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"__addWindow") ) { return ::hx::Val( _hx___addWindow_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_windows") ) { return ::hx::Val( get_windows_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__windowByID") ) { return ::hx::Val( _hx___windowByID ); }
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return ::hx::Val( onModuleExit_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return ::hx::Val( onTouchStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return ::hx::Val( onWindowMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return ::hx::Val( removeModule_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onTouchCancel") ) { return ::hx::Val( onTouchCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return ::hx::Val( onWindowClose_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return ::hx::Val( onWindowEnter_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return ::hx::Val( onWindowLeave_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_preloader") ) { return ::hx::Val( get_preloader_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onCreateWindow") ) { return ::hx::Val( onCreateWindow ); }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return ::hx::Val( onWindowCreate_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowExpose") ) { return ::hx::Val( onWindowExpose_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return ::hx::Val( onWindowResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"__createWindow") ) { return ::hx::Val( _hx___createWindow_dyn() ); }
		if (HX_FIELD_EQ(inName,"__removeWindow") ) { return ::hx::Val( _hx___removeWindow_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onModuleExit") ) { return ::hx::Val( _hx___onModuleExit_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return ::hx::Val( onWindowFocusIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return ::hx::Val( onWindowRestore_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onWindowClose") ) { return ::hx::Val( _hx___onWindowClose_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return ::hx::Val( onGamepadConnect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return ::hx::Val( onWindowActivate_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return ::hx::Val( onWindowDropFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return ::hx::Val( onWindowFocusOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return ::hx::Val( onWindowMinimize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return ::hx::Val( onGamepadAxisMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return ::hx::Val( onGamepadButtonUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"onJoystickConnect") ) { return ::hx::Val( onJoystickConnect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onJoystickHatMove") ) { return ::hx::Val( onJoystickHatMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return ::hx::Val( onPreloadComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return ::hx::Val( onPreloadProgress_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onJoystickAxisMove") ) { return ::hx::Val( onJoystickAxisMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onJoystickButtonUp") ) { return ::hx::Val( onJoystickButtonUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return ::hx::Val( onWindowDeactivate_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return ::hx::Val( onWindowFullscreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { return ::hx::Val( _hx___onGamepadConnect_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return ::hx::Val( onGamepadButtonDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return ::hx::Val( onGamepadDisconnect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return ::hx::Val( onMouseMoveRelative_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return ::hx::Val( onRenderContextLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onJoystickConnect") ) { return ::hx::Val( _hx___onJoystickConnect_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return ::hx::Val( onJoystickButtonDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return ::hx::Val( onJoystickDisconnect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__registerLimeModule") ) { return ::hx::Val( _hx___registerLimeModule_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__unregisterLimeModule") ) { return ::hx::Val( _hx___unregisterLimeModule_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return ::hx::Val( onJoystickTrackballMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return ::hx::Val( onRenderContextRestored_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = ( current ); return true; }
	}
	return false;
}

::hx::Val Application_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"meta") ) { meta=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast<  ::lime::app::_Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__window") ) { _hx___window=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast<  ::lime::utils::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__backend") ) { _hx___backend=inValue.Cast<  ::lime::_internal::backend::native::NativeApplication >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__windows") ) { _hx___windows=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__preloader") ) { _hx___preloader=inValue.Cast<  ::lime::utils::Preloader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__windowByID") ) { _hx___windowByID=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onCreateWindow") ) { onCreateWindow=inValue.Cast<  ::lime::app::_Event_lime_ui_Window_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast<  ::lime::app::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("meta",c5,4a,59,48));
	outFields->push(HX_("modules",47,e2,fa,f7));
	outFields->push(HX_("onUpdate",88,7c,b2,66));
	outFields->push(HX_("onCreateWindow",cb,33,d1,9e));
	outFields->push(HX_("preloader",76,e4,7b,82));
	outFields->push(HX_("window",f0,93,8c,52));
	outFields->push(HX_("windows",83,de,74,e8));
	outFields->push(HX_("__backend",f4,0c,d6,7c));
	outFields->push(HX_("__preloader",56,2d,a8,b0));
	outFields->push(HX_("__window",10,ff,bb,fa));
	outFields->push(HX_("__windowByID",a2,ec,8c,04));
	outFields->push(HX_("__windows",63,2f,c3,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Application_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Application_obj,meta),HX_("meta",c5,4a,59,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Application_obj,modules),HX_("modules",47,e2,fa,f7)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Void */ ,(int)offsetof(Application_obj,onUpdate),HX_("onUpdate",88,7c,b2,66)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Window_Void */ ,(int)offsetof(Application_obj,onCreateWindow),HX_("onCreateWindow",cb,33,d1,9e)},
	{::hx::fsObject /*  ::lime::utils::Preloader */ ,(int)offsetof(Application_obj,preloader),HX_("preloader",76,e4,7b,82)},
	{::hx::fsObject /*  ::lime::ui::Window */ ,(int)offsetof(Application_obj,window),HX_("window",f0,93,8c,52)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Application_obj,windows),HX_("windows",83,de,74,e8)},
	{::hx::fsObject /*  ::lime::_internal::backend::native::NativeApplication */ ,(int)offsetof(Application_obj,_hx___backend),HX_("__backend",f4,0c,d6,7c)},
	{::hx::fsObject /*  ::lime::utils::Preloader */ ,(int)offsetof(Application_obj,_hx___preloader),HX_("__preloader",56,2d,a8,b0)},
	{::hx::fsObject /*  ::lime::ui::Window */ ,(int)offsetof(Application_obj,_hx___window),HX_("__window",10,ff,bb,fa)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Application_obj,_hx___windowByID),HX_("__windowByID",a2,ec,8c,04)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Application_obj,_hx___windows),HX_("__windows",63,2f,c3,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Application_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::Application */ ,(void *) &Application_obj::current,HX_("current",39,9c,e3,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Application_obj_sMemberFields[] = {
	HX_("meta",c5,4a,59,48),
	HX_("modules",47,e2,fa,f7),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onCreateWindow",cb,33,d1,9e),
	HX_("preloader",76,e4,7b,82),
	HX_("window",f0,93,8c,52),
	HX_("windows",83,de,74,e8),
	HX_("__backend",f4,0c,d6,7c),
	HX_("__preloader",56,2d,a8,b0),
	HX_("__window",10,ff,bb,fa),
	HX_("__windowByID",a2,ec,8c,04),
	HX_("__windows",63,2f,c3,69),
	HX_("addModule",ad,69,f7,78),
	HX_("createWindow",0c,d4,e1,74),
	HX_("exec",91,f3,1d,43),
	HX_("onGamepadAxisMove",b4,f7,d4,24),
	HX_("onGamepadButtonDown",56,eb,b6,87),
	HX_("onGamepadButtonUp",4f,f4,12,f1),
	HX_("onGamepadConnect",c8,56,d7,ec),
	HX_("onGamepadDisconnect",3e,e8,96,44),
	HX_("onJoystickAxisMove",6d,f4,d4,5b),
	HX_("onJoystickButtonDown",4f,48,3a,7c),
	HX_("onJoystickButtonUp",08,f1,12,28),
	HX_("onJoystickConnect",2f,14,dd,fa),
	HX_("onJoystickDisconnect",37,45,1a,39),
	HX_("onJoystickHatMove",51,70,68,90),
	HX_("onJoystickTrackballMove",40,c8,46,1a),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("onModuleExit",e9,bf,a3,0b),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("onMouseMoveRelative",a3,06,bf,7a),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onPreloadComplete",43,37,5d,5c),
	HX_("onPreloadProgress",37,2e,c0,62),
	HX_("onRenderContextLost",9e,9b,a7,84),
	HX_("onRenderContextRestored",10,54,6e,7a),
	HX_("onTextEdit",96,f1,c0,23),
	HX_("onTextInput",fe,36,4e,79),
	HX_("onTouchCancel",ba,6f,54,80),
	HX_("onTouchEnd",9b,99,c0,dd),
	HX_("onTouchMove",51,55,10,30),
	HX_("onTouchStart",22,fa,df,55),
	HX_("onWindowActivate",42,e9,dd,eb),
	HX_("onWindowClose",c9,ca,1f,9c),
	HX_("onWindowCreate",cb,62,6f,6d),
	HX_("onWindowDeactivate",83,eb,6c,8c),
	HX_("onWindowDropFile",da,43,88,ef),
	HX_("onWindowEnter",29,20,43,c4),
	HX_("onWindowExpose",13,8e,dd,b5),
	HX_("onWindowFocusIn",2e,9f,1f,84),
	HX_("onWindowFocusOut",25,3d,90,17),
	HX_("onWindowFullscreen",8a,c9,1f,4a),
	HX_("onWindowLeave",08,e8,0f,c6),
	HX_("onWindowMove",20,fd,7a,ab),
	HX_("onWindowMinimize",ad,0c,ab,27),
	HX_("onWindowResize",c3,55,db,f9),
	HX_("onWindowRestore",9f,c0,4c,ad),
	HX_("removeModule",10,d0,00,30),
	HX_("render",56,6b,29,05),
	HX_("update",09,86,05,87),
	HX_("__addWindow",d1,11,dd,38),
	HX_("__createWindow",2c,57,a2,95),
	HX_("__registerLimeModule",04,fd,1b,af),
	HX_("__removeWindow",74,b2,7a,e2),
	HX_("__onGamepadConnect",e8,e9,67,58),
	HX_("__onJoystickConnect",0f,3d,cd,ad),
	HX_("__onModuleExit",09,43,64,2c),
	HX_("__onWindowClose",a9,03,d2,23),
	HX_("__unregisterLimeModule",9d,f5,2e,8f),
	HX_("get_preloader",4d,b8,df,43),
	HX_("get_window",b9,03,14,43),
	HX_("get_windows",9a,3e,6f,6e),
	::String(null()) };

static void Application_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Application_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

::hx::Class Application_obj::__mClass;

static ::String Application_obj_sStaticFields[] = {
	HX_("current",39,9c,e3,cb),
	::String(null())
};

void Application_obj::__register()
{
	Application_obj _hx_dummy;
	Application_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app.Application",8a,94,72,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = Application_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Application_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Application_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Application_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Application_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Application_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Application_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Application_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
