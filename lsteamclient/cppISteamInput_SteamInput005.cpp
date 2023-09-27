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
void cppISteamInput_SteamInput005_Init( struct cppISteamInput_SteamInput005_Init_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->Init( (bool)params->bExplicitlyCallRunFrame );
}

void cppISteamInput_SteamInput005_Shutdown( struct cppISteamInput_SteamInput005_Shutdown_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->Shutdown(  );
}

void cppISteamInput_SteamInput005_SetInputActionManifestFilePath( struct cppISteamInput_SteamInput005_SetInputActionManifestFilePath_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->SetInputActionManifestFilePath( (const char *)params->pchInputActionManifestAbsolutePath );
}

void cppISteamInput_SteamInput005_RunFrame( struct cppISteamInput_SteamInput005_RunFrame_params *params )
{
    ((ISteamInput*)params->linux_side)->RunFrame( (bool)params->bReservedValue );
}

void cppISteamInput_SteamInput005_BWaitForData( struct cppISteamInput_SteamInput005_BWaitForData_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->BWaitForData( (bool)params->bWaitForever, (uint32)params->unTimeout );
}

void cppISteamInput_SteamInput005_BNewDataAvailable( struct cppISteamInput_SteamInput005_BNewDataAvailable_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->BNewDataAvailable(  );
}

void cppISteamInput_SteamInput005_GetConnectedControllers( struct cppISteamInput_SteamInput005_GetConnectedControllers_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetConnectedControllers( (InputHandle_t *)params->handlesOut );
}

void cppISteamInput_SteamInput005_EnableDeviceCallbacks( struct cppISteamInput_SteamInput005_EnableDeviceCallbacks_params *params )
{
    ((ISteamInput*)params->linux_side)->EnableDeviceCallbacks(  );
}

void cppISteamInput_SteamInput005_GetActionSetHandle( struct cppISteamInput_SteamInput005_GetActionSetHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetActionSetHandle( (const char *)params->pszActionSetName );
}

void cppISteamInput_SteamInput005_ActivateActionSet( struct cppISteamInput_SteamInput005_ActivateActionSet_params *params )
{
    ((ISteamInput*)params->linux_side)->ActivateActionSet( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetHandle );
}

void cppISteamInput_SteamInput005_GetCurrentActionSet( struct cppISteamInput_SteamInput005_GetCurrentActionSet_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetCurrentActionSet( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput005_ActivateActionSetLayer( struct cppISteamInput_SteamInput005_ActivateActionSetLayer_params *params )
{
    ((ISteamInput*)params->linux_side)->ActivateActionSetLayer( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput005_DeactivateActionSetLayer( struct cppISteamInput_SteamInput005_DeactivateActionSetLayer_params *params )
{
    ((ISteamInput*)params->linux_side)->DeactivateActionSetLayer( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput005_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput005_DeactivateAllActionSetLayers_params *params )
{
    ((ISteamInput*)params->linux_side)->DeactivateAllActionSetLayers( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput005_GetActiveActionSetLayers( struct cppISteamInput_SteamInput005_GetActiveActionSetLayers_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetActiveActionSetLayers( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t *)params->handlesOut );
}

void cppISteamInput_SteamInput005_GetDigitalActionHandle( struct cppISteamInput_SteamInput005_GetDigitalActionHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetDigitalActionHandle( (const char *)params->pszActionName );
}

void cppISteamInput_SteamInput005_GetDigitalActionData( struct cppISteamInput_SteamInput005_GetDigitalActionData_params *params )
{
    *params->_ret = ((ISteamInput*)params->linux_side)->GetDigitalActionData( (InputHandle_t)params->inputHandle, (InputDigitalActionHandle_t)params->digitalActionHandle );
}

void cppISteamInput_SteamInput005_GetDigitalActionOrigins( struct cppISteamInput_SteamInput005_GetDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetDigitalActionOrigins( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetHandle, (InputDigitalActionHandle_t)params->digitalActionHandle, (EInputActionOrigin *)params->originsOut );
}

void cppISteamInput_SteamInput005_GetStringForDigitalActionName( struct cppISteamInput_SteamInput005_GetStringForDigitalActionName_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetStringForDigitalActionName( (InputDigitalActionHandle_t)params->eActionHandle );
}

void cppISteamInput_SteamInput005_GetAnalogActionHandle( struct cppISteamInput_SteamInput005_GetAnalogActionHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetAnalogActionHandle( (const char *)params->pszActionName );
}

void cppISteamInput_SteamInput005_GetAnalogActionData( struct cppISteamInput_SteamInput005_GetAnalogActionData_params *params )
{
    *params->_ret = ((ISteamInput*)params->linux_side)->GetAnalogActionData( (InputHandle_t)params->inputHandle, (InputAnalogActionHandle_t)params->analogActionHandle );
}

void cppISteamInput_SteamInput005_GetAnalogActionOrigins( struct cppISteamInput_SteamInput005_GetAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetAnalogActionOrigins( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetHandle, (InputAnalogActionHandle_t)params->analogActionHandle, (EInputActionOrigin *)params->originsOut );
}

void cppISteamInput_SteamInput005_GetStringForActionOrigin( struct cppISteamInput_SteamInput005_GetStringForActionOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetStringForActionOrigin( (EInputActionOrigin)params->eOrigin );
}

void cppISteamInput_SteamInput005_GetStringForAnalogActionName( struct cppISteamInput_SteamInput005_GetStringForAnalogActionName_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetStringForAnalogActionName( (InputAnalogActionHandle_t)params->eActionHandle );
}

void cppISteamInput_SteamInput005_StopAnalogActionMomentum( struct cppISteamInput_SteamInput005_StopAnalogActionMomentum_params *params )
{
    ((ISteamInput*)params->linux_side)->StopAnalogActionMomentum( (InputHandle_t)params->inputHandle, (InputAnalogActionHandle_t)params->eAction );
}

void cppISteamInput_SteamInput005_GetMotionData( struct cppISteamInput_SteamInput005_GetMotionData_params *params )
{
    *params->_ret = ((ISteamInput*)params->linux_side)->GetMotionData( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput005_TriggerVibration( struct cppISteamInput_SteamInput005_TriggerVibration_params *params )
{
    ((ISteamInput*)params->linux_side)->TriggerVibration( (InputHandle_t)params->inputHandle, (unsigned short)params->usLeftSpeed, (unsigned short)params->usRightSpeed );
}

void cppISteamInput_SteamInput005_TriggerVibrationExtended( struct cppISteamInput_SteamInput005_TriggerVibrationExtended_params *params )
{
    ((ISteamInput*)params->linux_side)->TriggerVibrationExtended( (InputHandle_t)params->inputHandle, (unsigned short)params->usLeftSpeed, (unsigned short)params->usRightSpeed, (unsigned short)params->usLeftTriggerSpeed, (unsigned short)params->usRightTriggerSpeed );
}

void cppISteamInput_SteamInput005_TriggerSimpleHapticEvent( struct cppISteamInput_SteamInput005_TriggerSimpleHapticEvent_params *params )
{
    ((ISteamInput*)params->linux_side)->TriggerSimpleHapticEvent( (InputHandle_t)params->inputHandle, (EControllerHapticLocation)params->eHapticLocation, (uint8)params->nIntensity, (char)params->nGainDB, (uint8)params->nOtherIntensity, (char)params->nOtherGainDB );
}

void cppISteamInput_SteamInput005_SetLEDColor( struct cppISteamInput_SteamInput005_SetLEDColor_params *params )
{
    ((ISteamInput*)params->linux_side)->SetLEDColor( (InputHandle_t)params->inputHandle, (uint8)params->nColorR, (uint8)params->nColorG, (uint8)params->nColorB, (unsigned int)params->nFlags );
}

void cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse( struct cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params *params )
{
    ((ISteamInput*)params->linux_side)->Legacy_TriggerHapticPulse( (InputHandle_t)params->inputHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec );
}

void cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params *params )
{
    ((ISteamInput*)params->linux_side)->Legacy_TriggerRepeatedHapticPulse( (InputHandle_t)params->inputHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec, (unsigned short)params->usOffMicroSec, (unsigned short)params->unRepeat, (unsigned int)params->nFlags );
}

void cppISteamInput_SteamInput005_ShowBindingPanel( struct cppISteamInput_SteamInput005_ShowBindingPanel_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->ShowBindingPanel( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput005_GetInputTypeForHandle( struct cppISteamInput_SteamInput005_GetInputTypeForHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetInputTypeForHandle( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput005_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput005_GetControllerForGamepadIndex_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetControllerForGamepadIndex( (int)params->nIndex );
}

void cppISteamInput_SteamInput005_GetGamepadIndexForController( struct cppISteamInput_SteamInput005_GetGamepadIndexForController_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetGamepadIndexForController( (InputHandle_t)params->ulinputHandle );
}

void cppISteamInput_SteamInput005_GetStringForXboxOrigin( struct cppISteamInput_SteamInput005_GetStringForXboxOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetStringForXboxOrigin( (EXboxOrigin)params->eOrigin );
}

void cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetActionOriginFromXboxOrigin( (InputHandle_t)params->inputHandle, (EXboxOrigin)params->eOrigin );
}

void cppISteamInput_SteamInput005_TranslateActionOrigin( struct cppISteamInput_SteamInput005_TranslateActionOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->TranslateActionOrigin( (ESteamInputType)params->eDestinationInputType, (EInputActionOrigin)params->eSourceOrigin );
}

void cppISteamInput_SteamInput005_GetDeviceBindingRevision( struct cppISteamInput_SteamInput005_GetDeviceBindingRevision_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetDeviceBindingRevision( (InputHandle_t)params->inputHandle, (int *)params->pMajor, (int *)params->pMinor );
}

void cppISteamInput_SteamInput005_GetRemotePlaySessionID( struct cppISteamInput_SteamInput005_GetRemotePlaySessionID_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetRemotePlaySessionID( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings( struct cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetSessionInputConfigurationSettings(  );
}

#ifdef __cplusplus
}
#endif
