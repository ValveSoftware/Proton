#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamController_SteamController006.h"
bool cppISteamController_SteamController006_Init(void *linux_side)
{
    return ((ISteamController*)linux_side)->Init();
}

bool cppISteamController_SteamController006_Shutdown(void *linux_side)
{
    return ((ISteamController*)linux_side)->Shutdown();
}

void cppISteamController_SteamController006_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

int cppISteamController_SteamController006_GetConnectedControllers(void *linux_side, ControllerHandle_t * handlesOut)
{
    return ((ISteamController*)linux_side)->GetConnectedControllers((ControllerHandle_t *)handlesOut);
}

bool cppISteamController_SteamController006_ShowBindingPanel(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->ShowBindingPanel((ControllerHandle_t)controllerHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController006_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamController*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamController_SteamController006_ActivateActionSet(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSet((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController006_GetCurrentActionSet(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetCurrentActionSet((ControllerHandle_t)controllerHandle);
}

void cppISteamController_SteamController006_ActivateActionSetLayer(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSetLayer((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamController_SteamController006_DeactivateActionSetLayer(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamController*)linux_side)->DeactivateActionSetLayer((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamController_SteamController006_DeactivateAllActionSetLayers(void *linux_side, ControllerHandle_t controllerHandle)
{
    ((ISteamController*)linux_side)->DeactivateAllActionSetLayers((ControllerHandle_t)controllerHandle);
}

int cppISteamController_SteamController006_GetActiveActionSetLayers(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut)
{
    return ((ISteamController*)linux_side)->GetActiveActionSetLayers((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t *)handlesOut);
}

ControllerDigitalActionHandle_t cppISteamController_SteamController006_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

ControllerDigitalActionData_t cppISteamController_SteamController006_GetDigitalActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamController*)linux_side)->GetDigitalActionData((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamController_SteamController006_GetDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (EControllerActionOrigin *)originsOut);
}

ControllerAnalogActionHandle_t cppISteamController_SteamController006_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

ControllerAnalogActionData_t cppISteamController_SteamController006_GetAnalogActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamController*)linux_side)->GetAnalogActionData((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle);
}

int cppISteamController_SteamController006_GetAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (EControllerActionOrigin *)originsOut);
}

void cppISteamController_SteamController006_StopAnalogActionMomentum(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    ((ISteamController*)linux_side)->StopAnalogActionMomentum((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)eAction);
}

void cppISteamController_SteamController006_TriggerHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_SteamController006_TriggerRepeatedHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->TriggerRepeatedHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

void cppISteamController_SteamController006_TriggerVibration(void *linux_side, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamController*)linux_side)->TriggerVibration((ControllerHandle_t)controllerHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamController_SteamController006_SetLEDColor(void *linux_side, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->SetLEDColor((ControllerHandle_t)controllerHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

int cppISteamController_SteamController006_GetGamepadIndexForController(void *linux_side, ControllerHandle_t ulControllerHandle)
{
    return ((ISteamController*)linux_side)->GetGamepadIndexForController((ControllerHandle_t)ulControllerHandle);
}

ControllerHandle_t cppISteamController_SteamController006_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    return ((ISteamController*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
}

ControllerMotionData_t cppISteamController_SteamController006_GetMotionData(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetMotionData((ControllerHandle_t)controllerHandle);
}

bool cppISteamController_SteamController006_ShowDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    return ((ISteamController*)linux_side)->ShowDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (float)flScale, (float)flXPosition, (float)flYPosition);
}

bool cppISteamController_SteamController006_ShowAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    return ((ISteamController*)linux_side)->ShowAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (float)flScale, (float)flXPosition, (float)flYPosition);
}

const char * cppISteamController_SteamController006_GetStringForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    return ((ISteamController*)linux_side)->GetStringForActionOrigin((EControllerActionOrigin)eOrigin);
}

ESteamInputType cppISteamController_SteamController006_GetInputTypeForHandle(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetInputTypeForHandle((ControllerHandle_t)controllerHandle);
}

#ifdef __cplusplus
}
#endif
