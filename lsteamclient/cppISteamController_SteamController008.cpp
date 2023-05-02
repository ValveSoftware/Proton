#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamController_SteamController008.h"
bool cppISteamController_SteamController008_Init(void *linux_side)
{
    return ((ISteamController*)linux_side)->Init();
}

bool cppISteamController_SteamController008_Shutdown(void *linux_side)
{
    return ((ISteamController*)linux_side)->Shutdown();
}

void cppISteamController_SteamController008_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

int cppISteamController_SteamController008_GetConnectedControllers(void *linux_side, ControllerHandle_t * handlesOut)
{
    return ((ISteamController*)linux_side)->GetConnectedControllers((ControllerHandle_t *)handlesOut);
}

ControllerActionSetHandle_t cppISteamController_SteamController008_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamController*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamController_SteamController008_ActivateActionSet(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSet((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController008_GetCurrentActionSet(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetCurrentActionSet((ControllerHandle_t)controllerHandle);
}

void cppISteamController_SteamController008_ActivateActionSetLayer(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSetLayer((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamController_SteamController008_DeactivateActionSetLayer(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamController*)linux_side)->DeactivateActionSetLayer((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamController_SteamController008_DeactivateAllActionSetLayers(void *linux_side, ControllerHandle_t controllerHandle)
{
    ((ISteamController*)linux_side)->DeactivateAllActionSetLayers((ControllerHandle_t)controllerHandle);
}

int cppISteamController_SteamController008_GetActiveActionSetLayers(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut)
{
    return ((ISteamController*)linux_side)->GetActiveActionSetLayers((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t *)handlesOut);
}

ControllerDigitalActionHandle_t cppISteamController_SteamController008_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

InputDigitalActionData_t cppISteamController_SteamController008_GetDigitalActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamController*)linux_side)->GetDigitalActionData((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamController_SteamController008_GetDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (EControllerActionOrigin *)originsOut);
}

ControllerAnalogActionHandle_t cppISteamController_SteamController008_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamController*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

InputAnalogActionData_t cppISteamController_SteamController008_GetAnalogActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamController*)linux_side)->GetAnalogActionData((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle);
}

int cppISteamController_SteamController008_GetAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    return ((ISteamController*)linux_side)->GetAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (EControllerActionOrigin *)originsOut);
}

const char * cppISteamController_SteamController008_GetStringForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    return ((ISteamController*)linux_side)->GetStringForActionOrigin((EControllerActionOrigin)eOrigin);
}

void cppISteamController_SteamController008_StopAnalogActionMomentum(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    ((ISteamController*)linux_side)->StopAnalogActionMomentum((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamController_SteamController008_GetMotionData(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetMotionData((ControllerHandle_t)controllerHandle);
}

void cppISteamController_SteamController008_TriggerHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_SteamController008_TriggerRepeatedHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->TriggerRepeatedHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

void cppISteamController_SteamController008_TriggerVibration(void *linux_side, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamController*)linux_side)->TriggerVibration((ControllerHandle_t)controllerHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamController_SteamController008_SetLEDColor(void *linux_side, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->SetLEDColor((ControllerHandle_t)controllerHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

bool cppISteamController_SteamController008_ShowBindingPanel(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->ShowBindingPanel((ControllerHandle_t)controllerHandle);
}

ESteamInputType cppISteamController_SteamController008_GetInputTypeForHandle(void *linux_side, ControllerHandle_t controllerHandle)
{
    return ((ISteamController*)linux_side)->GetInputTypeForHandle((ControllerHandle_t)controllerHandle);
}

ControllerHandle_t cppISteamController_SteamController008_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    return ((ISteamController*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
}

int cppISteamController_SteamController008_GetGamepadIndexForController(void *linux_side, ControllerHandle_t ulControllerHandle)
{
    return ((ISteamController*)linux_side)->GetGamepadIndexForController((ControllerHandle_t)ulControllerHandle);
}

const char * cppISteamController_SteamController008_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    return ((ISteamController*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
}

EControllerActionOrigin cppISteamController_SteamController008_GetActionOriginFromXboxOrigin(void *linux_side, ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)
{
    return ((ISteamController*)linux_side)->GetActionOriginFromXboxOrigin((ControllerHandle_t)controllerHandle, (EXboxOrigin)eOrigin);
}

EControllerActionOrigin cppISteamController_SteamController008_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)
{
    return ((ISteamController*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EControllerActionOrigin)eSourceOrigin);
}

bool cppISteamController_SteamController008_GetControllerBindingRevision(void *linux_side, ControllerHandle_t controllerHandle, int * pMajor, int * pMinor)
{
    return ((ISteamController*)linux_side)->GetControllerBindingRevision((ControllerHandle_t)controllerHandle, (int *)pMajor, (int *)pMinor);
}

#ifdef __cplusplus
}
#endif
