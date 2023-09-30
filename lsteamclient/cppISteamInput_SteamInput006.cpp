/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamInput_SteamInput006.h"

void cppISteamInput_SteamInput006_Init( struct cppISteamInput_SteamInput006_Init_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->Init( params->bExplicitlyCallRunFrame );
}

void cppISteamInput_SteamInput006_Shutdown( struct cppISteamInput_SteamInput006_Shutdown_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamInput_SteamInput006_SetInputActionManifestFilePath( struct cppISteamInput_SteamInput006_SetInputActionManifestFilePath_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->SetInputActionManifestFilePath( params->pchInputActionManifestAbsolutePath );
}

void cppISteamInput_SteamInput006_RunFrame( struct cppISteamInput_SteamInput006_RunFrame_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->RunFrame( params->bReservedValue );
}

void cppISteamInput_SteamInput006_BWaitForData( struct cppISteamInput_SteamInput006_BWaitForData_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->BWaitForData( params->bWaitForever, params->unTimeout );
}

void cppISteamInput_SteamInput006_BNewDataAvailable( struct cppISteamInput_SteamInput006_BNewDataAvailable_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->BNewDataAvailable(  );
}

void cppISteamInput_SteamInput006_GetConnectedControllers( struct cppISteamInput_SteamInput006_GetConnectedControllers_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamInput_SteamInput006_EnableDeviceCallbacks( struct cppISteamInput_SteamInput006_EnableDeviceCallbacks_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->EnableDeviceCallbacks(  );
}

void cppISteamInput_SteamInput006_GetActionSetHandle( struct cppISteamInput_SteamInput006_GetActionSetHandle_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamInput_SteamInput006_ActivateActionSet( struct cppISteamInput_SteamInput006_ActivateActionSet_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
}

void cppISteamInput_SteamInput006_GetCurrentActionSet( struct cppISteamInput_SteamInput006_GetCurrentActionSet_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
}

void cppISteamInput_SteamInput006_ActivateActionSetLayer( struct cppISteamInput_SteamInput006_ActivateActionSetLayer_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput006_DeactivateActionSetLayer( struct cppISteamInput_SteamInput006_DeactivateActionSetLayer_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput006_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput006_DeactivateAllActionSetLayers_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
}

void cppISteamInput_SteamInput006_GetActiveActionSetLayers( struct cppISteamInput_SteamInput006_GetActiveActionSetLayers_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
}

void cppISteamInput_SteamInput006_GetDigitalActionHandle( struct cppISteamInput_SteamInput006_GetDigitalActionHandle_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamInput_SteamInput006_GetDigitalActionData( struct cppISteamInput_SteamInput006_GetDigitalActionData_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
}

void cppISteamInput_SteamInput006_GetDigitalActionOrigins( struct cppISteamInput_SteamInput006_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamInput_SteamInput006_GetStringForDigitalActionName( struct cppISteamInput_SteamInput006_GetStringForDigitalActionName_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetStringForDigitalActionName( params->eActionHandle );
}

void cppISteamInput_SteamInput006_GetAnalogActionHandle( struct cppISteamInput_SteamInput006_GetAnalogActionHandle_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamInput_SteamInput006_GetAnalogActionData( struct cppISteamInput_SteamInput006_GetAnalogActionData_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
}

void cppISteamInput_SteamInput006_GetAnalogActionOrigins( struct cppISteamInput_SteamInput006_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamInput_SteamInput006_GetStringForActionOrigin( struct cppISteamInput_SteamInput006_GetStringForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

void cppISteamInput_SteamInput006_GetStringForAnalogActionName( struct cppISteamInput_SteamInput006_GetStringForAnalogActionName_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetStringForAnalogActionName( params->eActionHandle );
}

void cppISteamInput_SteamInput006_StopAnalogActionMomentum( struct cppISteamInput_SteamInput006_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
}

void cppISteamInput_SteamInput006_GetMotionData( struct cppISteamInput_SteamInput006_GetMotionData_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->inputHandle );
}

void cppISteamInput_SteamInput006_TriggerVibration( struct cppISteamInput_SteamInput006_TriggerVibration_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamInput_SteamInput006_TriggerVibrationExtended( struct cppISteamInput_SteamInput006_TriggerVibrationExtended_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->TriggerVibrationExtended( params->inputHandle, params->usLeftSpeed, params->usRightSpeed, params->usLeftTriggerSpeed, params->usRightTriggerSpeed );
}

void cppISteamInput_SteamInput006_TriggerSimpleHapticEvent( struct cppISteamInput_SteamInput006_TriggerSimpleHapticEvent_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->TriggerSimpleHapticEvent( params->inputHandle, params->eHapticLocation, params->nIntensity, params->nGainDB, params->nOtherIntensity, params->nOtherGainDB );
}

void cppISteamInput_SteamInput006_SetLEDColor( struct cppISteamInput_SteamInput006_SetLEDColor_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse( struct cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->Legacy_TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->Legacy_TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamInput_SteamInput006_ShowBindingPanel( struct cppISteamInput_SteamInput006_ShowBindingPanel_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
}

void cppISteamInput_SteamInput006_GetInputTypeForHandle( struct cppISteamInput_SteamInput006_GetInputTypeForHandle_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
}

void cppISteamInput_SteamInput006_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput006_GetControllerForGamepadIndex_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamInput_SteamInput006_GetGamepadIndexForController( struct cppISteamInput_SteamInput006_GetGamepadIndexForController_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
}

void cppISteamInput_SteamInput006_GetStringForXboxOrigin( struct cppISteamInput_SteamInput006_GetStringForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
}

void cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
}

void cppISteamInput_SteamInput006_TranslateActionOrigin( struct cppISteamInput_SteamInput006_TranslateActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
}

void cppISteamInput_SteamInput006_GetDeviceBindingRevision( struct cppISteamInput_SteamInput006_GetDeviceBindingRevision_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
}

void cppISteamInput_SteamInput006_GetRemotePlaySessionID( struct cppISteamInput_SteamInput006_GetRemotePlaySessionID_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
}

void cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings( struct cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetSessionInputConfigurationSettings(  );
}

void cppISteamInput_SteamInput006_SetDualSenseTriggerEffect( struct cppISteamInput_SteamInput006_SetDualSenseTriggerEffect_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    iface->SetDualSenseTriggerEffect( params->inputHandle, params->pParam );
}

