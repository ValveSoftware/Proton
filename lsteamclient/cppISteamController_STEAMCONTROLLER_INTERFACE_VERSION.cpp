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
bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(void *linux_side, const char *pchAbsolutePathToControllerConfigVDF)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->Init((const char *)pchAbsolutePathToControllerConfigVDF);
    return (_ret);
}

bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->Shutdown();
    return (_ret);
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(void *linux_side, uint32 unControllerIndex, SteamControllerState001_t *pState)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->GetControllerState((uint32)unControllerIndex, (SteamControllerState001_t *)pState);
    return (_ret);
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(void *linux_side, uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((uint32)unControllerIndex, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(void *linux_side, const char *pchMode)
{
    ((ISteamController*)linux_side)->SetOverrideMode((const char *)pchMode);
}

#ifdef __cplusplus
}
#endif
