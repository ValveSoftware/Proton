#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_152/steam_api.h"
#include "steamworks_sdk_152/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_152
#include "struct_converters.h"
#include "cppISteamInput_SteamInput005.h"
bool cppISteamInput_SteamInput005_Init(void *linux_side, bool bExplicitlyCallRunFrame)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->Init((bool)bExplicitlyCallRunFrame);
    return (_ret);
}

bool cppISteamInput_SteamInput005_Shutdown(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->Shutdown();
    return (_ret);
}

bool cppISteamInput_SteamInput005_SetInputActionManifestFilePath(void *linux_side, const char *pchInputActionManifestAbsolutePath)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->SetInputActionManifestFilePath((const char *)pchInputActionManifestAbsolutePath);
    return (_ret);
}

void cppISteamInput_SteamInput005_RunFrame(void *linux_side, bool bReservedValue)
{
    ((ISteamInput*)linux_side)->RunFrame((bool)bReservedValue);
}

bool cppISteamInput_SteamInput005_BWaitForData(void *linux_side, bool bWaitForever, uint32 unTimeout)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->BWaitForData((bool)bWaitForever, (uint32)unTimeout);
    return (_ret);
}

bool cppISteamInput_SteamInput005_BNewDataAvailable(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->BNewDataAvailable();
    return (_ret);
}

int cppISteamInput_SteamInput005_GetConnectedControllers(void *linux_side, InputHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetConnectedControllers((InputHandle_t *)handlesOut);
    return (_ret);
}

void cppISteamInput_SteamInput005_EnableDeviceCallbacks(void *linux_side)
{
    ((ISteamInput*)linux_side)->EnableDeviceCallbacks();
}

InputActionSetHandle_t cppISteamInput_SteamInput005_GetActionSetHandle(void *linux_side, const char *pszActionSetName)
{
    InputActionSetHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
    return (_ret);
}

void cppISteamInput_SteamInput005_ActivateActionSet(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSet((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle);
}

InputActionSetHandle_t cppISteamInput_SteamInput005_GetCurrentActionSet(void *linux_side, InputHandle_t inputHandle)
{
    InputActionSetHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetCurrentActionSet((InputHandle_t)inputHandle);
    return (_ret);
}

void cppISteamInput_SteamInput005_ActivateActionSetLayer(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSetLayer((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamInput_SteamInput005_DeactivateActionSetLayer(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamInput*)linux_side)->DeactivateActionSetLayer((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamInput_SteamInput005_DeactivateAllActionSetLayers(void *linux_side, InputHandle_t inputHandle)
{
    ((ISteamInput*)linux_side)->DeactivateAllActionSetLayers((InputHandle_t)inputHandle);
}

int cppISteamInput_SteamInput005_GetActiveActionSetLayers(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetActiveActionSetLayers((InputHandle_t)inputHandle, (InputActionSetHandle_t *)handlesOut);
    return (_ret);
}

InputDigitalActionHandle_t cppISteamInput_SteamInput005_GetDigitalActionHandle(void *linux_side, const char *pszActionName)
{
    InputDigitalActionHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
    return (_ret);
}

InputDigitalActionData_t cppISteamInput_SteamInput005_GetDigitalActionData(void *linux_side, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    InputDigitalActionData_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetDigitalActionData((InputHandle_t)inputHandle, (InputDigitalActionHandle_t)digitalActionHandle);
    return (_ret);
}

int cppISteamInput_SteamInput005_GetDigitalActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetDigitalActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputDigitalActionHandle_t)digitalActionHandle, (EInputActionOrigin *)originsOut);
    return (_ret);
}

const char * cppISteamInput_SteamInput005_GetStringForDigitalActionName(void *linux_side, InputDigitalActionHandle_t eActionHandle)
{
    const char *_ret;
    _ret = ((ISteamInput*)linux_side)->GetStringForDigitalActionName((InputDigitalActionHandle_t)eActionHandle);
    return (_ret);
}

InputAnalogActionHandle_t cppISteamInput_SteamInput005_GetAnalogActionHandle(void *linux_side, const char *pszActionName)
{
    InputAnalogActionHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
    return (_ret);
}

InputAnalogActionData_t cppISteamInput_SteamInput005_GetAnalogActionData(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    InputAnalogActionData_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetAnalogActionData((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)analogActionHandle);
    return (_ret);
}

int cppISteamInput_SteamInput005_GetAnalogActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetAnalogActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputAnalogActionHandle_t)analogActionHandle, (EInputActionOrigin *)originsOut);
    return (_ret);
}

const char * cppISteamInput_SteamInput005_GetStringForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    const char *_ret;
    _ret = ((ISteamInput*)linux_side)->GetStringForActionOrigin((EInputActionOrigin)eOrigin);
    return (_ret);
}

const char * cppISteamInput_SteamInput005_GetStringForAnalogActionName(void *linux_side, InputAnalogActionHandle_t eActionHandle)
{
    const char *_ret;
    _ret = ((ISteamInput*)linux_side)->GetStringForAnalogActionName((InputAnalogActionHandle_t)eActionHandle);
    return (_ret);
}

void cppISteamInput_SteamInput005_StopAnalogActionMomentum(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    ((ISteamInput*)linux_side)->StopAnalogActionMomentum((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamInput_SteamInput005_GetMotionData(void *linux_side, InputHandle_t inputHandle)
{
    InputMotionData_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetMotionData((InputHandle_t)inputHandle);
    return (_ret);
}

void cppISteamInput_SteamInput005_TriggerVibration(void *linux_side, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamInput*)linux_side)->TriggerVibration((InputHandle_t)inputHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamInput_SteamInput005_TriggerVibrationExtended(void *linux_side, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    ((ISteamInput*)linux_side)->TriggerVibrationExtended((InputHandle_t)inputHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed, (unsigned short)usLeftTriggerSpeed, (unsigned short)usRightTriggerSpeed);
}

void cppISteamInput_SteamInput005_TriggerSimpleHapticEvent(void *linux_side, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    ((ISteamInput*)linux_side)->TriggerSimpleHapticEvent((InputHandle_t)inputHandle, (EControllerHapticLocation)eHapticLocation, (uint8)nIntensity, (char)nGainDB, (uint8)nOtherIntensity, (char)nOtherGainDB);
}

void cppISteamInput_SteamInput005_SetLEDColor(void *linux_side, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamInput*)linux_side)->SetLEDColor((InputHandle_t)inputHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

void cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse(void *linux_side, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamInput*)linux_side)->Legacy_TriggerHapticPulse((InputHandle_t)inputHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(void *linux_side, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamInput*)linux_side)->Legacy_TriggerRepeatedHapticPulse((InputHandle_t)inputHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

bool cppISteamInput_SteamInput005_ShowBindingPanel(void *linux_side, InputHandle_t inputHandle)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->ShowBindingPanel((InputHandle_t)inputHandle);
    return (_ret);
}

ESteamInputType cppISteamInput_SteamInput005_GetInputTypeForHandle(void *linux_side, InputHandle_t inputHandle)
{
    ESteamInputType _ret;
    _ret = ((ISteamInput*)linux_side)->GetInputTypeForHandle((InputHandle_t)inputHandle);
    return (_ret);
}

InputHandle_t cppISteamInput_SteamInput005_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    InputHandle_t _ret;
    _ret = ((ISteamInput*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
    return (_ret);
}

int cppISteamInput_SteamInput005_GetGamepadIndexForController(void *linux_side, InputHandle_t ulinputHandle)
{
    int _ret;
    _ret = ((ISteamInput*)linux_side)->GetGamepadIndexForController((InputHandle_t)ulinputHandle);
    return (_ret);
}

const char * cppISteamInput_SteamInput005_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char *_ret;
    _ret = ((ISteamInput*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
    return (_ret);
}

EInputActionOrigin cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(void *linux_side, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    EInputActionOrigin _ret;
    _ret = ((ISteamInput*)linux_side)->GetActionOriginFromXboxOrigin((InputHandle_t)inputHandle, (EXboxOrigin)eOrigin);
    return (_ret);
}

EInputActionOrigin cppISteamInput_SteamInput005_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    EInputActionOrigin _ret;
    _ret = ((ISteamInput*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EInputActionOrigin)eSourceOrigin);
    return (_ret);
}

bool cppISteamInput_SteamInput005_GetDeviceBindingRevision(void *linux_side, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    _ret = ((ISteamInput*)linux_side)->GetDeviceBindingRevision((InputHandle_t)inputHandle, (int *)pMajor, (int *)pMinor);
    return (_ret);
}

uint32 cppISteamInput_SteamInput005_GetRemotePlaySessionID(void *linux_side, InputHandle_t inputHandle)
{
    uint32 _ret;
    _ret = ((ISteamInput*)linux_side)->GetRemotePlaySessionID((InputHandle_t)inputHandle);
    return (_ret);
}

uint16 cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings(void *linux_side)
{
    uint16 _ret;
    _ret = ((ISteamInput*)linux_side)->GetSessionInputConfigurationSettings();
    return (_ret);
}

#ifdef __cplusplus
}
#endif
