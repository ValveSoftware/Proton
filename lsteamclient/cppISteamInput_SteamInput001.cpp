#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamInput_SteamInput001.h"
bool cppISteamInput_SteamInput001_Init(void *linux_side)
{
    return ((ISteamInput*)linux_side)->Init();
}

bool cppISteamInput_SteamInput001_Shutdown(void *linux_side)
{
    return ((ISteamInput*)linux_side)->Shutdown();
}

void cppISteamInput_SteamInput001_RunFrame(void *linux_side)
{
    ((ISteamInput*)linux_side)->RunFrame();
}

int cppISteamInput_SteamInput001_GetConnectedControllers(void *linux_side, InputHandle_t * handlesOut)
{
    return ((ISteamInput*)linux_side)->GetConnectedControllers((InputHandle_t *)handlesOut);
}

InputActionSetHandle_t cppISteamInput_SteamInput001_GetActionSetHandle(void *linux_side, const char * pszActionSetName)
{
    return ((ISteamInput*)linux_side)->GetActionSetHandle((const char *)pszActionSetName);
}

void cppISteamInput_SteamInput001_ActivateActionSet(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    ((ISteamInput*)linux_side)->ActivateActionSet((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle);
}

InputActionSetHandle_t cppISteamInput_SteamInput001_GetCurrentActionSet(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetCurrentActionSet((InputHandle_t)inputHandle);
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

int cppISteamInput_SteamInput001_GetActiveActionSetLayers(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    return ((ISteamInput*)linux_side)->GetActiveActionSetLayers((InputHandle_t)inputHandle, (InputActionSetHandle_t *)handlesOut);
}

InputDigitalActionHandle_t cppISteamInput_SteamInput001_GetDigitalActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionHandle((const char *)pszActionName);
}

InputDigitalActionData_t cppISteamInput_SteamInput001_GetDigitalActionData(void *linux_side, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionData((InputHandle_t)inputHandle, (InputDigitalActionHandle_t)digitalActionHandle);
}

int cppISteamInput_SteamInput001_GetDigitalActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    return ((ISteamInput*)linux_side)->GetDigitalActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputDigitalActionHandle_t)digitalActionHandle, (EInputActionOrigin *)originsOut);
}

InputAnalogActionHandle_t cppISteamInput_SteamInput001_GetAnalogActionHandle(void *linux_side, const char * pszActionName)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionHandle((const char *)pszActionName);
}

InputAnalogActionData_t cppISteamInput_SteamInput001_GetAnalogActionData(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionData((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)analogActionHandle);
}

int cppISteamInput_SteamInput001_GetAnalogActionOrigins(void *linux_side, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    return ((ISteamInput*)linux_side)->GetAnalogActionOrigins((InputHandle_t)inputHandle, (InputActionSetHandle_t)actionSetHandle, (InputAnalogActionHandle_t)analogActionHandle, (EInputActionOrigin *)originsOut);
}

const char * cppISteamInput_SteamInput001_GetGlyphForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetGlyphForActionOrigin((EInputActionOrigin)eOrigin);
}

const char * cppISteamInput_SteamInput001_GetStringForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetStringForActionOrigin((EInputActionOrigin)eOrigin);
}

void cppISteamInput_SteamInput001_StopAnalogActionMomentum(void *linux_side, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    ((ISteamInput*)linux_side)->StopAnalogActionMomentum((InputHandle_t)inputHandle, (InputAnalogActionHandle_t)eAction);
}

InputMotionData_t cppISteamInput_SteamInput001_GetMotionData(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetMotionData((InputHandle_t)inputHandle);
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
    return ((ISteamInput*)linux_side)->ShowBindingPanel((InputHandle_t)inputHandle);
}

ESteamInputType cppISteamInput_SteamInput001_GetInputTypeForHandle(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetInputTypeForHandle((InputHandle_t)inputHandle);
}

InputHandle_t cppISteamInput_SteamInput001_GetControllerForGamepadIndex(void *linux_side, int nIndex)
{
    return ((ISteamInput*)linux_side)->GetControllerForGamepadIndex((int)nIndex);
}

int cppISteamInput_SteamInput001_GetGamepadIndexForController(void *linux_side, InputHandle_t ulinputHandle)
{
    return ((ISteamInput*)linux_side)->GetGamepadIndexForController((InputHandle_t)ulinputHandle);
}

const char * cppISteamInput_SteamInput001_GetStringForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetStringForXboxOrigin((EXboxOrigin)eOrigin);
}

const char * cppISteamInput_SteamInput001_GetGlyphForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetGlyphForXboxOrigin((EXboxOrigin)eOrigin);
}

EInputActionOrigin cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(void *linux_side, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    return ((ISteamInput*)linux_side)->GetActionOriginFromXboxOrigin((InputHandle_t)inputHandle, (EXboxOrigin)eOrigin);
}

EInputActionOrigin cppISteamInput_SteamInput001_TranslateActionOrigin(void *linux_side, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    return ((ISteamInput*)linux_side)->TranslateActionOrigin((ESteamInputType)eDestinationInputType, (EInputActionOrigin)eSourceOrigin);
}

bool cppISteamInput_SteamInput001_GetDeviceBindingRevision(void *linux_side, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    return ((ISteamInput*)linux_side)->GetDeviceBindingRevision((InputHandle_t)inputHandle, (int *)pMajor, (int *)pMinor);
}

uint32 cppISteamInput_SteamInput001_GetRemotePlaySessionID(void *linux_side, InputHandle_t inputHandle)
{
    return ((ISteamInput*)linux_side)->GetRemotePlaySessionID((InputHandle_t)inputHandle);
}

#ifdef __cplusplus
}
#endif
