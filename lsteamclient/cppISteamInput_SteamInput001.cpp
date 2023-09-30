/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamInput_SteamInput001_Init( void *args )
{
    struct ISteamInput_SteamInput001_Init_params *params = (struct ISteamInput_SteamInput001_Init_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_Shutdown( void *args )
{
    struct ISteamInput_SteamInput001_Shutdown_params *params = (struct ISteamInput_SteamInput001_Shutdown_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_RunFrame( void *args )
{
    struct ISteamInput_SteamInput001_RunFrame_params *params = (struct ISteamInput_SteamInput001_RunFrame_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetConnectedControllers( void *args )
{
    struct ISteamInput_SteamInput001_GetConnectedControllers_params *params = (struct ISteamInput_SteamInput001_GetConnectedControllers_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetActionSetHandle( void *args )
{
    struct ISteamInput_SteamInput001_GetActionSetHandle_params *params = (struct ISteamInput_SteamInput001_GetActionSetHandle_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_ActivateActionSet( void *args )
{
    struct ISteamInput_SteamInput001_ActivateActionSet_params *params = (struct ISteamInput_SteamInput001_ActivateActionSet_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetCurrentActionSet( void *args )
{
    struct ISteamInput_SteamInput001_GetCurrentActionSet_params *params = (struct ISteamInput_SteamInput001_GetCurrentActionSet_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_ActivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput001_ActivateActionSetLayer_params *params = (struct ISteamInput_SteamInput001_ActivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_DeactivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput001_DeactivateActionSetLayer_params *params = (struct ISteamInput_SteamInput001_DeactivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput001_DeactivateAllActionSetLayers_params *params = (struct ISteamInput_SteamInput001_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetActiveActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput001_GetActiveActionSetLayers_params *params = (struct ISteamInput_SteamInput001_GetActiveActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetDigitalActionHandle( void *args )
{
    struct ISteamInput_SteamInput001_GetDigitalActionHandle_params *params = (struct ISteamInput_SteamInput001_GetDigitalActionHandle_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetDigitalActionData( void *args )
{
    struct ISteamInput_SteamInput001_GetDigitalActionData_params *params = (struct ISteamInput_SteamInput001_GetDigitalActionData_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetDigitalActionOrigins( void *args )
{
    struct ISteamInput_SteamInput001_GetDigitalActionOrigins_params *params = (struct ISteamInput_SteamInput001_GetDigitalActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetAnalogActionHandle( void *args )
{
    struct ISteamInput_SteamInput001_GetAnalogActionHandle_params *params = (struct ISteamInput_SteamInput001_GetAnalogActionHandle_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetAnalogActionData( void *args )
{
    struct ISteamInput_SteamInput001_GetAnalogActionData_params *params = (struct ISteamInput_SteamInput001_GetAnalogActionData_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetAnalogActionOrigins( void *args )
{
    struct ISteamInput_SteamInput001_GetAnalogActionOrigins_params *params = (struct ISteamInput_SteamInput001_GetAnalogActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetStringForActionOrigin( void *args )
{
    struct ISteamInput_SteamInput001_GetStringForActionOrigin_params *params = (struct ISteamInput_SteamInput001_GetStringForActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_StopAnalogActionMomentum( void *args )
{
    struct ISteamInput_SteamInput001_StopAnalogActionMomentum_params *params = (struct ISteamInput_SteamInput001_StopAnalogActionMomentum_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetMotionData( void *args )
{
    struct ISteamInput_SteamInput001_GetMotionData_params *params = (struct ISteamInput_SteamInput001_GetMotionData_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_TriggerVibration( void *args )
{
    struct ISteamInput_SteamInput001_TriggerVibration_params *params = (struct ISteamInput_SteamInput001_TriggerVibration_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_SetLEDColor( void *args )
{
    struct ISteamInput_SteamInput001_SetLEDColor_params *params = (struct ISteamInput_SteamInput001_SetLEDColor_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_TriggerHapticPulse( void *args )
{
    struct ISteamInput_SteamInput001_TriggerHapticPulse_params *params = (struct ISteamInput_SteamInput001_TriggerHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamInput_SteamInput001_TriggerRepeatedHapticPulse_params *params = (struct ISteamInput_SteamInput001_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_ShowBindingPanel( void *args )
{
    struct ISteamInput_SteamInput001_ShowBindingPanel_params *params = (struct ISteamInput_SteamInput001_ShowBindingPanel_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetInputTypeForHandle( void *args )
{
    struct ISteamInput_SteamInput001_GetInputTypeForHandle_params *params = (struct ISteamInput_SteamInput001_GetInputTypeForHandle_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetControllerForGamepadIndex( void *args )
{
    struct ISteamInput_SteamInput001_GetControllerForGamepadIndex_params *params = (struct ISteamInput_SteamInput001_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetGamepadIndexForController( void *args )
{
    struct ISteamInput_SteamInput001_GetGamepadIndexForController_params *params = (struct ISteamInput_SteamInput001_GetGamepadIndexForController_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetStringForXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput001_GetStringForXboxOrigin_params *params = (struct ISteamInput_SteamInput001_GetStringForXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetActionOriginFromXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput001_GetActionOriginFromXboxOrigin_params *params = (struct ISteamInput_SteamInput001_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_TranslateActionOrigin( void *args )
{
    struct ISteamInput_SteamInput001_TranslateActionOrigin_params *params = (struct ISteamInput_SteamInput001_TranslateActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetDeviceBindingRevision( void *args )
{
    struct ISteamInput_SteamInput001_GetDeviceBindingRevision_params *params = (struct ISteamInput_SteamInput001_GetDeviceBindingRevision_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
    return 0;
}

NTSTATUS ISteamInput_SteamInput001_GetRemotePlaySessionID( void *args )
{
    struct ISteamInput_SteamInput001_GetRemotePlaySessionID_params *params = (struct ISteamInput_SteamInput001_GetRemotePlaySessionID_params *)args;
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
    return 0;
}

