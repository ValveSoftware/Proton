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
#include "cppISteamInput_SteamInput006.h"
bool cppISteamInput_SteamInput006_Init(void *linux_side, bool bExplicitlyCallRunFrame)
{
    return ((ISteamInput*)linux_side)->Init((bool)bExplicitlyCallRunFrame);
}

bool cppISteamInput_SteamInput006_Shutdown(void *linux_side)
{
    return ((ISteamInput*)linux_side)->Shutdown();
}

bool cppISteamInput_SteamInput006_SetInputActionManifestFilePath(void *linux_side, const char * pchInputActionManifestAbsolutePath)
{
    return ((ISteamInput*)linux_side)->SetInputActionManifestFilePath((const char *)pchInputActionManifestAbsolutePath);
}

void cppISteamInput_SteamInput006_RunFrame(void *linux_side, bool bReservedValue)
{
    ((ISteamInput*)linux_side)->RunFrame((bool)bReservedValue);
}

bool cppISteamInput_SteamInput006_BWaitForData(void *linux_side, bool bWaitForever, uint32 unTimeout)
{
    return ((ISteamInput*)linux_side)->BWaitForData((bool)bWaitForever, (uint32)unTimeout);
}

bool cppISteamInput_SteamInput006_BNewDataAvailable(void *linux_side)
{
    return ((ISteamInput*)linux_side)->BNewDataAvailable();
}

int cppISteamInput_SteamInput006_GetConnectedControllers(void *linux_side, InputHandle_t * handlesOut)
{
    return ((ISteamInput*)linux_side)->GetConnectedControllers((InputHandle_t *)handlesOut);
}

void cppISteamInput_SteamInput006_EnableDeviceCallbacks(void *linux_side)
{
    ((ISteamInput*)linux_side)->EnableDeviceCallbacks();
}

InputActionSetHandle_t cppISteamInput_SteamInput006_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamInput*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamInput_SteamInput006_ActivateActionSet(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSet((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle);
}

InputActionSetHandle_t cppISteamInput_SteamInput006_GetCurrentActionSet(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetCurrentActionSet((InputHandle_t)inputHandle);
}

void cppISteamInput_SteamInput006_ActivateActionSetLayer(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSetLayer((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamInput_SteamInput006_DeactivateActionSetLayer(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    ((ISteamInput*)linux_side)->DeactivateActionSetLayer((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetLayerHandle);
}

void cppISteamInput_SteamInput006_DeactivateAllActionSetLayers(void *linux_side, InputHandle_t inputHandle)
{
    ((ISteamInput*)linux_side)->DeactivateAllActionSetLayers((InputHandle_t)inputHandle);
}

int cppISteamInput_SteamInput006_GetActiveActionSetLayers(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    return ((ISteamInput*)linux_side)->GetActiveActionSetLayers((InputHandle_t)inputHandle, (InputActionSetHandle_t *)handlesOut);
}

InputDigitalActionHandle_t cppISteamInput_SteamInput006_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

InputDigitalActionData_t cppISteamInput_SteamInput006_GetDigitalActionData(void *linux_side, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionData((InputHandle_t)inputHandle, (InputDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamInput_SteamInput006_GetDigitalActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputDigitalActionHandle_t)digitalActionHandle, (EInputActionOrigin *)originsOut);
}

const char * cppISteamInput_SteamInput006_GetStringForDigitalActionName(void *linux_side, InputDigitalActionHandle_t eActionHandle)
{
    return ((ISteamInput*)linux_side)->GetStringForDigitalActionName((InputDigitalActionHandle_t)eActionHandle);
}

InputAnalogActionHandle_t cppISteamInput_SteamInput006_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

InputAnalogActionData_t cppISteamInput_SteamInput006_GetAnalogActionData(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionData((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)analogActionHandle);
}

int cppISteamInput_SteamInput006_GetAnalogActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputAnalogActionHandle_t)analogActionHandle, (EInputActionOrigin *)originsOut);
}

const char * cppISteamInput_SteamInput006_GetStringForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetStringForActionOrigin((EInputActionOrigin)eOrigin);
}

const char * cppISteamInput_SteamInput006_GetStringForAnalogActionName(void *linux_side, InputAnalogActionHandle_t eActionHandle)
{
    return ((ISteamInput*)linux_side)->GetStringForAnalogActionName((InputAnalogActionHandle_t)eActionHandle);
}

void cppISteamInput_SteamInput006_StopAnalogActionMomentum(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    ((ISteamInput*)linux_side)->StopAnalogActionMomentum((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamInput_SteamInput006_GetMotionData(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetMotionData((InputHandle_t)inputHandle);
}

void cppISteamInput_SteamInput006_TriggerVibration(void *linux_side, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    ((ISteamInput*)linux_side)->TriggerVibration((InputHandle_t)inputHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed);
}

void cppISteamInput_SteamInput006_TriggerVibrationExtended(void *linux_side, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    ((ISteamInput*)linux_side)->TriggerVibrationExtended((InputHandle_t)inputHandle, (unsigned short)usLeftSpeed, (unsigned short)usRightSpeed, (unsigned short)usLeftTriggerSpeed, (unsigned short)usRightTriggerSpeed);
}

void cppISteamInput_SteamInput006_TriggerSimpleHapticEvent(void *linux_side, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    ((ISteamInput*)linux_side)->TriggerSimpleHapticEvent((InputHandle_t)inputHandle, (EControllerHapticLocation)eHapticLocation, (uint8)nIntensity, (char)nGainDB, (uint8)nOtherIntensity, (char)nOtherGainDB);
}

void cppISteamInput_SteamInput006_SetLEDColor(void *linux_side, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    ((ISteamInput*)linux_side)->SetLEDColor((InputHandle_t)inputHandle, (uint8)nColorR, (uint8)nColorG, (uint8)nColorB, (unsigned int)nFlags);
}

void cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse(void *linux_side, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamInput*)linux_side)->Legacy_TriggerHapticPulse((InputHandle_t)inputHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(void *linux_side, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    ((ISteamInput*)linux_side)->Legacy_TriggerRepeatedHapticPulse((InputHandle_t)inputHandle, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec, (unsigned short)usOffMicroSec, (unsigned short)unRepeat, (unsigned int)nFlags);
}

bool cppISteamInput_SteamInput006_ShowBindingPanel(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->ShowBindingPanel((InputHandle_t)inputHandle);
}

ESteamInputType cppISteamInput_SteamInput006_GetInputTypeForHandle(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetInputTypeForHandle((InputHandle_t)inputHandle);
}

InputHandle_t cppISteamInput_SteamInput006_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    return ((ISteamInput*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
}

int cppISteamInput_SteamInput006_GetGamepadIndexForController(void *linux_side, InputHandle_t ulinputHandle)
{
    return ((ISteamInput*)linux_side)->GetGamepadIndexForController((InputHandle_t)ulinputHandle);
}

const char * cppISteamInput_SteamInput006_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
}

EInputActionOrigin cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(void *linux_side, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetActionOriginFromXboxOrigin((InputHandle_t)inputHandle, (EXboxOrigin)eOrigin);
}

EInputActionOrigin cppISteamInput_SteamInput006_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    return ((ISteamInput*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EInputActionOrigin)eSourceOrigin);
}

bool cppISteamInput_SteamInput006_GetDeviceBindingRevision(void *linux_side, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    return ((ISteamInput*)linux_side)->GetDeviceBindingRevision((InputHandle_t)inputHandle, (int *)pMajor, (int *)pMinor);
}

uint32 cppISteamInput_SteamInput006_GetRemotePlaySessionID(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetRemotePlaySessionID((InputHandle_t)inputHandle);
}

uint16 cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings(void *linux_side)
{
    return ((ISteamInput*)linux_side)->GetSessionInputConfigurationSettings();
}

void cppISteamInput_SteamInput006_SetDualSenseTriggerEffect(void *linux_side, InputHandle_t inputHandle, const ScePadTriggerEffectParam * pParam)
{
    ((ISteamInput*)linux_side)->SetDualSenseTriggerEffect((InputHandle_t)inputHandle, (const ScePadTriggerEffectParam *)pParam);
}

#ifdef __cplusplus
}
#endif
