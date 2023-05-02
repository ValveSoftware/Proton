#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_137/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_137
#include "struct_converters.h"
#include "cppISteamController_SteamController003.h"
bool cppISteamController_SteamController003_Init(void *linux_side)
{
    return ((ISteamController*)linux_side)->Init();
}

bool cppISteamController_SteamController003_Shutdown(void *linux_side)
{
    return ((ISteamController*)linux_side)->Shutdown();
}

void cppISteamController_SteamController003_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

int cppISteamController_SteamController003_GetConnectedControllers(void *linux_side, ControllerHandle_t * handlesOut)
{
    return ((ISteamController*)linux_side)->GetConnectedControllers((ControllerHandle_t *)handlesOut);
}

bool cppISteamController_SteamController003_ShowBindingPanel(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->ShowBindingPanel((ControllerHandle_t)controllerHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController003_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamController*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamController_SteamController003_ActivateActionSet(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSet((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController003_GetCurrentActionSet(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetCurrentActionSet((ControllerHandle_t)controllerHandle);
}

ControllerDigitalActionHandle_t cppISteamController_SteamController003_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

ControllerDigitalActionData_t cppISteamController_SteamController003_GetDigitalActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamController*)linux_side)->GetDigitalActionData((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamController_SteamController003_GetDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (EControllerActionOrigin *)originsOut);
}

ControllerAnalogActionHandle_t cppISteamController_SteamController003_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

ControllerAnalogActionData_t cppISteamController_SteamController003_GetAnalogActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamController*)linux_side)->GetAnalogActionData((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle);
}

int cppISteamController_SteamController003_GetAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (EControllerActionOrigin *)originsOut);
}

void cppISteamController_SteamController003_StopAnalogActionMomentum(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    ((ISteamController*)linux_side)->StopAnalogActionMomentum((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)eAction);
}

void cppISteamController_SteamController003_TriggerHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_SteamController003_TriggerRepeatedHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->TriggerRepeatedHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

#ifdef __cplusplus
}
#endif
