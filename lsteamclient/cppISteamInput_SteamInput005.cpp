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
    return ((ISteamInput*)linux_side)->Init((bool)bExplicitlyCallRunFrame);
}

bool cppISteamInput_SteamInput005_Shutdown(void *linux_side)
{
    return ((ISteamInput*)linux_side)->Shutdown();
}

bool cppISteamInput_SteamInput005_SetInputActionManifestFilePath(void *linux_side, const char * pchInputActionManifestAbsolutePath)
{
    return ((ISteamInput*)linux_side)->SetInputActionManifestFilePath((const char *)pchInputActionManifestAbsolutePath);
}

void cppISteamInput_SteamInput005_RunFrame(void *linux_side, bool bReservedValue)
{
    ((ISteamInput*)linux_side)->RunFrame((bool)bReservedValue);
}

bool cppISteamInput_SteamInput005_BWaitForData(void *linux_side, bool bWaitForever, uint32 unTimeout)
{
    return ((ISteamInput*)linux_side)->BWaitForData((bool)bWaitForever, (uint32)unTimeout);
}

bool cppISteamInput_SteamInput005_BNewDataAvailable(void *linux_side)
{
    return ((ISteamInput*)linux_side)->BNewDataAvailable();
}

int cppISteamInput_SteamInput005_GetConnectedControllers(void *linux_side, InputHandle_t * handlesOut)
{
    return ((ISteamInput*)linux_side)->GetConnectedControllers((InputHandle_t *)handlesOut);
}

void cppISteamInput_SteamInput005_EnableDeviceCallbacks(void *linux_side)
{
    ((ISteamInput*)linux_side)->EnableDeviceCallbacks();
}

InputActionSetHandle_t cppISteamInput_SteamInput005_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamInput*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamInput_SteamInput005_ActivateActionSet(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSet((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle);
}

InputActionSetHandle_t cppISteamInput_SteamInput005_GetCurrentActionSet(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetCurrentActionSet((InputHandle_t)inputHandle);
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

int cppISteamInput_SteamInput005_GetActiveActionSetLayers(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    return ((ISteamInput*)linux_side)->GetActiveActionSetLayers((InputHandle_t)inputHandle, (InputActionSetHandle_t *)handlesOut);
}

InputDigitalActionHandle_t cppISteamInput_SteamInput005_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

InputDigitalActionData_t cppISteamInput_SteamInput005_GetDigitalActionData(void *linux_side, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionData((InputHandle_t)inputHandle, (InputDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamInput_SteamInput005_GetDigitalActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputDigitalActionHandle_t)digitalActionHandle, (EInputActionOrigin *)originsOut);
}

const char * cppISteamInput_SteamInput005_GetStringForDigitalActionName(void *linux_side, InputDigitalActionHandle_t eActionHandle)
{
    return ((ISteamInput*)linux_side)->GetStringForDigitalActionName((InputDigitalActionHandle_t)eActionHandle);
}

InputAnalogActionHandle_t cppISteamInput_SteamInput005_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

InputAnalogActionData_t cppISteamInput_SteamInput005_GetAnalogActionData(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionData((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)analogActionHandle);
}

int cppISteamInput_SteamInput005_GetAnalogActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputAnalogActionHandle_t)analogActionHandle, (EInputActionOrigin *)originsOut);
}

const char * cppISteamInput_SteamInput005_GetStringForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetStringForActionOrigin((EInputActionOrigin)eOrigin);
}

const char * cppISteamInput_SteamInput005_GetStringForAnalogActionName(void *linux_side, InputAnalogActionHandle_t eActionHandle)
{
    return ((ISteamInput*)linux_side)->GetStringForAnalogActionName((InputAnalogActionHandle_t)eActionHandle);
}

void cppISteamInput_SteamInput005_StopAnalogActionMomentum(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    ((ISteamInput*)linux_side)->StopAnalogActionMomentum((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamInput_SteamInput005_GetMotionData(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetMotionData((InputHandle_t)inputHandle);
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
    return ((ISteamInput*)linux_side)->ShowBindingPanel((InputHandle_t)inputHandle);
}

ESteamInputType cppISteamInput_SteamInput005_GetInputTypeForHandle(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetInputTypeForHandle((InputHandle_t)inputHandle);
}

InputHandle_t cppISteamInput_SteamInput005_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    return ((ISteamInput*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
}

int cppISteamInput_SteamInput005_GetGamepadIndexForController(void *linux_side, InputHandle_t ulinputHandle)
{
    return ((ISteamInput*)linux_side)->GetGamepadIndexForController((InputHandle_t)ulinputHandle);
}

const char * cppISteamInput_SteamInput005_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
}

EInputActionOrigin cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(void *linux_side, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetActionOriginFromXboxOrigin((InputHandle_t)inputHandle, (EXboxOrigin)eOrigin);
}

EInputActionOrigin cppISteamInput_SteamInput005_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    return ((ISteamInput*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EInputActionOrigin)eSourceOrigin);
}

bool cppISteamInput_SteamInput005_GetDeviceBindingRevision(void *linux_side, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    return ((ISteamInput*)linux_side)->GetDeviceBindingRevision((InputHandle_t)inputHandle, (int *)pMajor, (int *)pMinor);
}

uint32 cppISteamInput_SteamInput005_GetRemotePlaySessionID(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetRemotePlaySessionID((InputHandle_t)inputHandle);
}

uint16 cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings(void *linux_side)
{
    return ((ISteamInput*)linux_side)->GetSessionInputConfigurationSettings();
}

#ifdef __cplusplus
}
#endif
