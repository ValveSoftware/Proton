#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_141/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_141
#include "struct_converters.h"
#include "cppISteamController_SteamController005.h"
bool cppISteamController_SteamController005_Init(void *linux_side)
{
    return ((ISteamController*)linux_side)->Init();
}

bool cppISteamController_SteamController005_Shutdown(void *linux_side)
{
    return ((ISteamController*)linux_side)->Shutdown();
}

void cppISteamController_SteamController005_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

int cppISteamController_SteamController005_GetConnectedControllers(void *linux_side, ControllerHandle_t * handlesOut)
{
    return ((ISteamController*)linux_side)->GetConnectedControllers((ControllerHandle_t *)handlesOut);
}

bool cppISteamController_SteamController005_ShowBindingPanel(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->ShowBindingPanel((ControllerHandle_t)controllerHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController005_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamController*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamController_SteamController005_ActivateActionSet(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSet((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController005_GetCurrentActionSet(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetCurrentActionSet((ControllerHandle_t)controllerHandle);
}

ControllerDigitalActionHandle_t cppISteamController_SteamController005_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

ControllerDigitalActionData_t cppISteamController_SteamController005_GetDigitalActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamController*)linux_side)->GetDigitalActionData((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamController_SteamController005_GetDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (EControllerActionOrigin *)originsOut);
}

ControllerAnalogActionHandle_t cppISteamController_SteamController005_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

ControllerAnalogActionData_t cppISteamController_SteamController005_GetAnalogActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamController*)linux_side)->GetAnalogActionData((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle);
}

int cppISteamController_SteamController005_GetAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (EControllerActionOrigin *)originsOut);
}

void cppISteamController_SteamController005_StopAnalogActionMomentum(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    ((ISteamController*)linux_side)->StopAnalogActionMomentum((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)eAction);
}

void cppISteamController_SteamController005_TriggerHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_SteamController005_TriggerRepeatedHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->TriggerRepeatedHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

void cppISteamController_SteamController005_TriggerVibration(void *linux_side, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamController*)linux_side)->TriggerVibration((ControllerHandle_t)controllerHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamController_SteamController005_SetLEDColor(void *linux_side, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->SetLEDColor((ControllerHandle_t)controllerHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

int cppISteamController_SteamController005_GetGamepadIndexForController(void *linux_side, ControllerHandle_t ulControllerHandle)
{
    return ((ISteamController*)linux_side)->GetGamepadIndexForController((ControllerHandle_t)ulControllerHandle);
}

ControllerHandle_t cppISteamController_SteamController005_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    return ((ISteamController*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
}

ControllerMotionData_t cppISteamController_SteamController005_GetMotionData(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetMotionData((ControllerHandle_t)controllerHandle);
}

bool cppISteamController_SteamController005_ShowDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    return ((ISteamController*)linux_side)->ShowDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (float)flScale, (float)flXPosition, (float)flYPosition);
}

bool cppISteamController_SteamController005_ShowAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    return ((ISteamController*)linux_side)->ShowAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (float)flScale, (float)flXPosition, (float)flYPosition);
}

const char * cppISteamController_SteamController005_GetStringForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    return ((ISteamController*)linux_side)->GetStringForActionOrigin((EControllerActionOrigin)eOrigin);
}

#ifdef __cplusplus
}
#endif
