#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_134/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_134
#include "struct_converters.h"
#include "cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION.h"
void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Init( (const char *)params->pchAbsolutePathToControllerConfigVDF );
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Shutdown(  );
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame_params *params )
{
    ((ISteamController*)params->linux_side)->RunFrame(  );
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetControllerState( (uint32)params->unControllerIndex, (SteamControllerState001_t *)params->pState );
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerHapticPulse( (uint32)params->unControllerIndex, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec );
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode_params *params )
{
    ((ISteamController*)params->linux_side)->SetOverrideMode( (const char *)params->pchMode );
}

#ifdef __cplusplus
}
#endif
