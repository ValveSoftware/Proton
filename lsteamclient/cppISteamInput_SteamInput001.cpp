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
#include "cppISteamInput_SteamInput001.h"
bool cppISteamInput_SteamInput001_Init(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->Init();
    return (_ret);
}

bool cppISteamInput_SteamInput001_Shutdown(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->Shutdown();
    return (_ret);
}

void cppISteamInput_SteamInput001_RunFrame(void *linux_side)
{
    ((ISteamInput*)linux_side)->RunFrame();
}

int cppISteamInput_SteamInput001_GetConnectedControllers(void *linux_side, InputHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetConnectedControllers((InputHandle_t *)handlesOut);
    return (_ret);
}

InputActionSetHandle_t cppISteamInput_SteamInput001_GetActionSetHandle(void *linux_side, const char *pszActionSetName)
{
    InputActionSetHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
    return (_ret);
}

void cppISteamInput_SteamInput001_ActivateActionSet(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSet((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle);
}

InputActionSetHandle_t cppISteamInput_SteamInput001_GetCurrentActionSet(void *linux_side, InputHandle_t inputHandle)
{
    InputActionSetHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetCurrentActionSet((InputHandle_t)inputHandle);
    return (_ret);
}

void cppISteamInput_SteamInput001_ActivateActionSetLayer(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSetLayer((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamInput_SteamInput001_DeactivateActionSetLayer(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamInput*)linux_side)->DeactivateActionSetLayer((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamInput_SteamInput001_DeactivateAllActionSetLayers(void *linux_side, InputHandle_t inputHandle)
{
    ((ISteamInput*)linux_side)->DeactivateAllActionSetLayers((InputHandle_t)inputHandle);
}

int cppISteamInput_SteamInput001_GetActiveActionSetLayers(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetActiveActionSetLayers((InputHandle_t)inputHandle, (InputActionSetHandle_t *)handlesOut);
    return (_ret);
}

InputDigitalActionHandle_t cppISteamInput_SteamInput001_GetDigitalActionHandle(void *linux_side, const char *pszActionName)
{
    InputDigitalActionHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
    return (_ret);
}

InputDigitalActionData_t cppISteamInput_SteamInput001_GetDigitalActionData(void *linux_side, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    InputDigitalActionData_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetDigitalActionData((InputHandle_t)inputHandle, (InputDigitalActionHandle_t)digitalActionHandle);
    return (_ret);
}

int cppISteamInput_SteamInput001_GetDigitalActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetDigitalActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputDigitalActionHandle_t)digitalActionHandle, (EInputActionOrigin *)originsOut);
    return (_ret);
}

InputAnalogActionHandle_t cppISteamInput_SteamInput001_GetAnalogActionHandle(void *linux_side, const char *pszActionName)
{
    InputAnalogActionHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
    return (_ret);
}

InputAnalogActionData_t cppISteamInput_SteamInput001_GetAnalogActionData(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    InputAnalogActionData_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetAnalogActionData((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)analogActionHandle);
    return (_ret);
}

int cppISteamInput_SteamInput001_GetAnalogActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetAnalogActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputAnalogActionHandle_t)analogActionHandle, (EInputActionOrigin *)originsOut);
    return (_ret);
}

const char * cppISteamInput_SteamInput001_GetStringForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    const char *_ret;
    _ret = ((ISteamInput*)linux_side)->GetStringForActionOrigin((EInputActionOrigin)eOrigin);
    return (_ret);
}

void cppISteamInput_SteamInput001_StopAnalogActionMomentum(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    ((ISteamInput*)linux_side)->StopAnalogActionMomentum((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamInput_SteamInput001_GetMotionData(void *linux_side, InputHandle_t inputHandle)
{
    InputMotionData_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetMotionData((InputHandle_t)inputHandle);
    return (_ret);
}

void cppISteamInput_SteamInput001_TriggerVibration(void *linux_side, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamInput*)linux_side)->TriggerVibration((InputHandle_t)inputHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamInput_SteamInput001_SetLEDColor(void *linux_side, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamInput*)linux_side)->SetLEDColor((InputHandle_t)inputHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

void cppISteamInput_SteamInput001_TriggerHapticPulse(void *linux_side, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamInput*)linux_side)->TriggerHapticPulse((InputHandle_t)inputHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse(void *linux_side, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamInput*)linux_side)->TriggerRepeatedHapticPulse((InputHandle_t)inputHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

bool cppISteamInput_SteamInput001_ShowBindingPanel(void *linux_side, InputHandle_t inputHandle)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->ShowBindingPanel((InputHandle_t)inputHandle);
    return (_ret);
}

ESteamInputType cppISteamInput_SteamInput001_GetInputTypeForHandle(void *linux_side, InputHandle_t inputHandle)
{
    ESteamInputType _ret;
    _ret = ((ISteamInput*)linux_side)->GetInputTypeForHandle((InputHandle_t)inputHandle);
    return (_ret);
}

InputHandle_t cppISteamInput_SteamInput001_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    InputHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
    return (_ret);
}

int cppISteamInput_SteamInput001_GetGamepadIndexForController(void *linux_side, InputHandle_t ulinputHandle)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetGamepadIndexForController((InputHandle_t)ulinputHandle);
    return (_ret);
}

const char * cppISteamInput_SteamInput001_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char *_ret;
    _ret = ((ISteamInput*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
    return (_ret);
}

EInputActionOrigin cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(void *linux_side, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    EInputActionOrigin _ret;
    _ret = ((ISteamInput*)linux_side)->GetActionOriginFromXboxOrigin((InputHandle_t)inputHandle, (EXboxOrigin)eOrigin);
    return (_ret);
}

EInputActionOrigin cppISteamInput_SteamInput001_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    EInputActionOrigin _ret;
    _ret = ((ISteamInput*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EInputActionOrigin)eSourceOrigin);
    return (_ret);
}

bool cppISteamInput_SteamInput001_GetDeviceBindingRevision(void *linux_side, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->GetDeviceBindingRevision((InputHandle_t)inputHandle, (int *)pMajor, (int *)pMinor);
    return (_ret);
}

uint32 cppISteamInput_SteamInput001_GetRemotePlaySessionID(void *linux_side, InputHandle_t inputHandle)
{
    uint32 _ret;
    _ret = ((ISteamInput*)linux_side)->GetRemotePlaySessionID((InputHandle_t)inputHandle);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
