#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_138a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_138a
#include "struct_converters.h"
#include "cppISteamController_SteamController004.h"
bool cppISteamController_SteamController004_Init(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->Init();
    return (_ret);
}

bool cppISteamController_SteamController004_Shutdown(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->Shutdown();
    return (_ret);
}

void cppISteamController_SteamController004_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

int cppISteamController_SteamController004_GetConnectedControllers(void *linux_side, ControllerHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetConnectedControllers((ControllerHandle_t *)handlesOut);
    return (_ret);
}

bool cppISteamController_SteamController004_ShowBindingPanel(void *linux_side, ControllerHandle_t controllerHandle)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->ShowBindingPanel((ControllerHandle_t)controllerHandle);
    return (_ret);
}

ControllerActionSetHandle_t cppISteamController_SteamController004_GetActionSetHandle(void *linux_side, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
    return (_ret);
}

void cppISteamController_SteamController004_ActivateActionSet(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    ((ISteamController*)linux_side)->ActivateActionSet((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle);
}

ControllerActionSetHandle_t cppISteamController_SteamController004_GetCurrentActionSet(void *linux_side, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetCurrentActionSet((ControllerHandle_t)controllerHandle);
    return (_ret);
}

ControllerDigitalActionHandle_t cppISteamController_SteamController004_GetDigitalActionHandle(void *linux_side, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
    return (_ret);
}

ControllerDigitalActionData_t cppISteamController_SteamController004_GetDigitalActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    ControllerDigitalActionData_t _ret;
    _ret = ((ISteamController*)linux_side)->GetDigitalActionData((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle);
    return (_ret);
}

int cppISteamController_SteamController004_GetDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (EControllerActionOrigin *)originsOut);
    return (_ret);
}

ControllerAnalogActionHandle_t cppISteamController_SteamController004_GetAnalogActionHandle(void *linux_side, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
    return (_ret);
}

ControllerAnalogActionData_t cppISteamController_SteamController004_GetAnalogActionData(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    ControllerAnalogActionData_t _ret;
    _ret = ((ISteamController*)linux_side)->GetAnalogActionData((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle);
    return (_ret);
}

int cppISteamController_SteamController004_GetAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerActionSetHandle_t)actionSetHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (EControllerActionOrigin *)originsOut);
    return (_ret);
}

void cppISteamController_SteamController004_StopAnalogActionMomentum(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    ((ISteamController*)linux_side)->StopAnalogActionMomentum((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)eAction);
}

void cppISteamController_SteamController004_TriggerHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_SteamController004_TriggerRepeatedHapticPulse(void *linux_side, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamController*)linux_side)->TriggerRepeatedHapticPulse((ControllerHandle_t)controllerHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

int cppISteamController_SteamController004_GetGamepadIndexForController(void *linux_side, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    _ret = ((ISteamController*)linux_side)->GetGamepadIndexForController((ControllerHandle_t)ulControllerHandle);
    return (_ret);
}

ControllerHandle_t cppISteamController_SteamController004_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    ControllerHandle_t _ret;
    _ret = ((ISteamController*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
    return (_ret);
}

ControllerMotionData_t cppISteamController_SteamController004_GetMotionData(void *linux_side, ControllerHandle_t controllerHandle)
{
    ControllerMotionData_t _ret;
    _ret = ((ISteamController*)linux_side)->GetMotionData((ControllerHandle_t)controllerHandle);
    return (_ret);
}

bool cppISteamController_SteamController004_ShowDigitalActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->ShowDigitalActionOrigins((ControllerHandle_t)controllerHandle, (ControllerDigitalActionHandle_t)digitalActionHandle, (float)flScale, (float)flXPosition, (float)flYPosition);
    return (_ret);
}

bool cppISteamController_SteamController004_ShowAnalogActionOrigins(void *linux_side, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    _ret = ((ISteamController*)linux_side)->ShowAnalogActionOrigins((ControllerHandle_t)controllerHandle, (ControllerAnalogActionHandle_t)analogActionHandle, (float)flScale, (float)flXPosition, (float)flYPosition);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
