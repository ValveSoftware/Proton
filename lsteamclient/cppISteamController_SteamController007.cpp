#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_150/steam_api.h"
#include "steamworks_sdk_150/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_150
#include "struct_converters.h"
#include "cppISteamController_SteamController007.h"
bool cppISteamController_SteamController007_Init(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->Init();
    return (_ret);
}

bool cppISteamController_SteamController007_Shutdown(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->Shutdown();
    return (_ret);
}

void cppISteamController_SteamController007_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

int cppISteamController_SteamController007_GetConnectedControllers(void *linux_side, ControllerHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetConnectedControllers((ControllerHandle_t *)handlesOut);
    return (_ret);
}

ControllerActionSetHandle_t cppISteamController_SteamController007_GetActionSetHandle(void *linux_side, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
    return (_ret);
}

void cppISteamController_SteamController007_ActivateActionSet(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSet((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController007_GetCurrentActionSet(void *linux_side, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetCurrentActionSet((ControllerHandle_t)controllerHandle);
    return (_ret);
}

void cppISteamController_SteamController007_ActivateActionSetLayer(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSetLayer((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamController_SteamController007_DeactivateActionSetLayer(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamController*)linux_side)->DeactivateActionSetLayer((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamController_SteamController007_DeactivateAllActionSetLayers(void *linux_side, ControllerHandle_t controllerHandle)
{
    ((ISteamController*)linux_side)->DeactivateAllActionSetLayers((ControllerHandle_t)controllerHandle);
}

int cppISteamController_SteamController007_GetActiveActionSetLayers(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetActiveActionSetLayers((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t *)handlesOut);
    return (_ret);
}

ControllerDigitalActionHandle_t cppISteamController_SteamController007_GetDigitalActionHandle(void *linux_side, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
    return (_ret);
}

InputDigitalActionData_t cppISteamController_SteamController007_GetDigitalActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    InputDigitalActionData_t _ret;
    _ret = ((ISteamController*)linux_side)->GetDigitalActionData((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle);
    return (_ret);
}

int cppISteamController_SteamController007_GetDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (EControllerActionOrigin *)originsOut);
    return (_ret);
}

ControllerAnalogActionHandle_t cppISteamController_SteamController007_GetAnalogActionHandle(void *linux_side, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
    return (_ret);
}

InputAnalogActionData_t cppISteamController_SteamController007_GetAnalogActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    InputAnalogActionData_t _ret;
    _ret = ((ISteamController*)linux_side)->GetAnalogActionData((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle);
    return (_ret);
}

int cppISteamController_SteamController007_GetAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (EControllerActionOrigin *)originsOut);
    return (_ret);
}

const char * cppISteamController_SteamController007_GetStringForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    _ret = ((ISteamController*)linux_side)->GetStringForActionOrigin((EControllerActionOrigin)eOrigin);
    return (_ret);
}

void cppISteamController_SteamController007_StopAnalogActionMomentum(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    ((ISteamController*)linux_side)->StopAnalogActionMomentum((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamController_SteamController007_GetMotionData(void *linux_side, ControllerHandle_t controllerHandle)
{
    InputMotionData_t _ret;
    _ret = ((ISteamController*)linux_side)->GetMotionData((ControllerHandle_t)controllerHandle);
    return (_ret);
}

void cppISteamController_SteamController007_TriggerHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_SteamController007_TriggerRepeatedHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->TriggerRepeatedHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

void cppISteamController_SteamController007_TriggerVibration(void *linux_side, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamController*)linux_side)->TriggerVibration((ControllerHandle_t)controllerHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamController_SteamController007_SetLEDColor(void *linux_side, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->SetLEDColor((ControllerHandle_t)controllerHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

bool cppISteamController_SteamController007_ShowBindingPanel(void *linux_side, ControllerHandle_t controllerHandle)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->ShowBindingPanel((ControllerHandle_t)controllerHandle);
    return (_ret);
}

ESteamInputType cppISteamController_SteamController007_GetInputTypeForHandle(void *linux_side, ControllerHandle_t controllerHandle)
{
    ESteamInputType _ret;
    _ret = ((ISteamController*)linux_side)->GetInputTypeForHandle((ControllerHandle_t)controllerHandle);
    return (_ret);
}

ControllerHandle_t cppISteamController_SteamController007_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    ControllerHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
    return (_ret);
}

int cppISteamController_SteamController007_GetGamepadIndexForController(void *linux_side, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetGamepadIndexForController((ControllerHandle_t)ulControllerHandle);
    return (_ret);
}

const char * cppISteamController_SteamController007_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char * _ret;
    _ret = ((ISteamController*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
    return (_ret);
}

EControllerActionOrigin cppISteamController_SteamController007_GetActionOriginFromXboxOrigin(void *linux_side, ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)
{
    EControllerActionOrigin _ret;
    _ret = ((ISteamController*)linux_side)->GetActionOriginFromXboxOrigin((ControllerHandle_t)controllerHandle, (EXboxOrigin)eOrigin);
    return (_ret);
}

EControllerActionOrigin cppISteamController_SteamController007_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)
{
    EControllerActionOrigin _ret;
    _ret = ((ISteamController*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EControllerActionOrigin)eSourceOrigin);
    return (_ret);
}

bool cppISteamController_SteamController007_GetControllerBindingRevision(void *linux_side, ControllerHandle_t controllerHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->GetControllerBindingRevision((ControllerHandle_t)controllerHandle, (int *)pMajor, (int *)pMinor);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
