/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamInput_SteamInput005_Init( void *args )
{
    struct ISteamInput_SteamInput005_Init_params *params = (struct ISteamInput_SteamInput005_Init_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->Init( params->bExplicitlyCallRunFrame );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_Shutdown( void *args )
{
    struct ISteamInput_SteamInput005_Shutdown_params *params = (struct ISteamInput_SteamInput005_Shutdown_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_SetInputActionManifestFilePath( void *args )
{
    struct ISteamInput_SteamInput005_SetInputActionManifestFilePath_params *params = (struct ISteamInput_SteamInput005_SetInputActionManifestFilePath_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    char *u_pchInputActionManifestAbsolutePath = steamclient_dos_to_unix_path( params->pchInputActionManifestAbsolutePath, 0 );
    params->_ret = iface->SetInputActionManifestFilePath( u_pchInputActionManifestAbsolutePath );
    steamclient_free_path( u_pchInputActionManifestAbsolutePath );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_RunFrame( void *args )
{
    struct ISteamInput_SteamInput005_RunFrame_params *params = (struct ISteamInput_SteamInput005_RunFrame_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->RunFrame( params->bReservedValue );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_BWaitForData( void *args )
{
    struct ISteamInput_SteamInput005_BWaitForData_params *params = (struct ISteamInput_SteamInput005_BWaitForData_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->BWaitForData( params->bWaitForever, params->unTimeout );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_BNewDataAvailable( void *args )
{
    struct ISteamInput_SteamInput005_BNewDataAvailable_params *params = (struct ISteamInput_SteamInput005_BNewDataAvailable_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->BNewDataAvailable(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetConnectedControllers( void *args )
{
    struct ISteamInput_SteamInput005_GetConnectedControllers_params *params = (struct ISteamInput_SteamInput005_GetConnectedControllers_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_EnableDeviceCallbacks( void *args )
{
    struct ISteamInput_SteamInput005_EnableDeviceCallbacks_params *params = (struct ISteamInput_SteamInput005_EnableDeviceCallbacks_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->EnableDeviceCallbacks(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetActionSetHandle( void *args )
{
    struct ISteamInput_SteamInput005_GetActionSetHandle_params *params = (struct ISteamInput_SteamInput005_GetActionSetHandle_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_ActivateActionSet( void *args )
{
    struct ISteamInput_SteamInput005_ActivateActionSet_params *params = (struct ISteamInput_SteamInput005_ActivateActionSet_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetCurrentActionSet( void *args )
{
    struct ISteamInput_SteamInput005_GetCurrentActionSet_params *params = (struct ISteamInput_SteamInput005_GetCurrentActionSet_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_ActivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput005_ActivateActionSetLayer_params *params = (struct ISteamInput_SteamInput005_ActivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_DeactivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput005_DeactivateActionSetLayer_params *params = (struct ISteamInput_SteamInput005_DeactivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput005_DeactivateAllActionSetLayers_params *params = (struct ISteamInput_SteamInput005_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetActiveActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput005_GetActiveActionSetLayers_params *params = (struct ISteamInput_SteamInput005_GetActiveActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetDigitalActionHandle( void *args )
{
    struct ISteamInput_SteamInput005_GetDigitalActionHandle_params *params = (struct ISteamInput_SteamInput005_GetDigitalActionHandle_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetDigitalActionData( void *args )
{
    struct ISteamInput_SteamInput005_GetDigitalActionData_params *params = (struct ISteamInput_SteamInput005_GetDigitalActionData_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetDigitalActionOrigins( void *args )
{
    struct ISteamInput_SteamInput005_GetDigitalActionOrigins_params *params = (struct ISteamInput_SteamInput005_GetDigitalActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetStringForDigitalActionName( void *args )
{
    struct ISteamInput_SteamInput005_GetStringForDigitalActionName_params *params = (struct ISteamInput_SteamInput005_GetStringForDigitalActionName_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetStringForDigitalActionName( params->eActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetAnalogActionHandle( void *args )
{
    struct ISteamInput_SteamInput005_GetAnalogActionHandle_params *params = (struct ISteamInput_SteamInput005_GetAnalogActionHandle_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetAnalogActionData( void *args )
{
    struct ISteamInput_SteamInput005_GetAnalogActionData_params *params = (struct ISteamInput_SteamInput005_GetAnalogActionData_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetAnalogActionOrigins( void *args )
{
    struct ISteamInput_SteamInput005_GetAnalogActionOrigins_params *params = (struct ISteamInput_SteamInput005_GetAnalogActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetStringForActionOrigin( void *args )
{
    struct ISteamInput_SteamInput005_GetStringForActionOrigin_params *params = (struct ISteamInput_SteamInput005_GetStringForActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetStringForAnalogActionName( void *args )
{
    struct ISteamInput_SteamInput005_GetStringForAnalogActionName_params *params = (struct ISteamInput_SteamInput005_GetStringForAnalogActionName_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetStringForAnalogActionName( params->eActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_StopAnalogActionMomentum( void *args )
{
    struct ISteamInput_SteamInput005_StopAnalogActionMomentum_params *params = (struct ISteamInput_SteamInput005_StopAnalogActionMomentum_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetMotionData( void *args )
{
    struct ISteamInput_SteamInput005_GetMotionData_params *params = (struct ISteamInput_SteamInput005_GetMotionData_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_TriggerVibration( void *args )
{
    struct ISteamInput_SteamInput005_TriggerVibration_params *params = (struct ISteamInput_SteamInput005_TriggerVibration_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_TriggerVibrationExtended( void *args )
{
    struct ISteamInput_SteamInput005_TriggerVibrationExtended_params *params = (struct ISteamInput_SteamInput005_TriggerVibrationExtended_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->TriggerVibrationExtended( params->inputHandle, params->usLeftSpeed, params->usRightSpeed, params->usLeftTriggerSpeed, params->usRightTriggerSpeed );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_TriggerSimpleHapticEvent( void *args )
{
    struct ISteamInput_SteamInput005_TriggerSimpleHapticEvent_params *params = (struct ISteamInput_SteamInput005_TriggerSimpleHapticEvent_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->TriggerSimpleHapticEvent( params->inputHandle, params->eHapticLocation, params->nIntensity, params->nGainDB, params->nOtherIntensity, params->nOtherGainDB );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_SetLEDColor( void *args )
{
    struct ISteamInput_SteamInput005_SetLEDColor_params *params = (struct ISteamInput_SteamInput005_SetLEDColor_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_Legacy_TriggerHapticPulse( void *args )
{
    struct ISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params *params = (struct ISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->Legacy_TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params *params = (struct ISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    iface->Legacy_TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_ShowBindingPanel( void *args )
{
    struct ISteamInput_SteamInput005_ShowBindingPanel_params *params = (struct ISteamInput_SteamInput005_ShowBindingPanel_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetInputTypeForHandle( void *args )
{
    struct ISteamInput_SteamInput005_GetInputTypeForHandle_params *params = (struct ISteamInput_SteamInput005_GetInputTypeForHandle_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetControllerForGamepadIndex( void *args )
{
    struct ISteamInput_SteamInput005_GetControllerForGamepadIndex_params *params = (struct ISteamInput_SteamInput005_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetGamepadIndexForController( void *args )
{
    struct ISteamInput_SteamInput005_GetGamepadIndexForController_params *params = (struct ISteamInput_SteamInput005_GetGamepadIndexForController_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetStringForXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput005_GetStringForXboxOrigin_params *params = (struct ISteamInput_SteamInput005_GetStringForXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetActionOriginFromXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params *params = (struct ISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_TranslateActionOrigin( void *args )
{
    struct ISteamInput_SteamInput005_TranslateActionOrigin_params *params = (struct ISteamInput_SteamInput005_TranslateActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetDeviceBindingRevision( void *args )
{
    struct ISteamInput_SteamInput005_GetDeviceBindingRevision_params *params = (struct ISteamInput_SteamInput005_GetDeviceBindingRevision_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetRemotePlaySessionID( void *args )
{
    struct ISteamInput_SteamInput005_GetRemotePlaySessionID_params *params = (struct ISteamInput_SteamInput005_GetRemotePlaySessionID_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput005_GetSessionInputConfigurationSettings( void *args )
{
    struct ISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params *params = (struct ISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params *)args;
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetSessionInputConfigurationSettings(  );
    return 0;
}

