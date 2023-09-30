/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamInput_SteamInput002_Init( void *args )
{
    struct ISteamInput_SteamInput002_Init_params *params = (struct ISteamInput_SteamInput002_Init_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_Shutdown( void *args )
{
    struct ISteamInput_SteamInput002_Shutdown_params *params = (struct ISteamInput_SteamInput002_Shutdown_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_RunFrame( void *args )
{
    struct ISteamInput_SteamInput002_RunFrame_params *params = (struct ISteamInput_SteamInput002_RunFrame_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetConnectedControllers( void *args )
{
    struct ISteamInput_SteamInput002_GetConnectedControllers_params *params = (struct ISteamInput_SteamInput002_GetConnectedControllers_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetActionSetHandle( void *args )
{
    struct ISteamInput_SteamInput002_GetActionSetHandle_params *params = (struct ISteamInput_SteamInput002_GetActionSetHandle_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_ActivateActionSet( void *args )
{
    struct ISteamInput_SteamInput002_ActivateActionSet_params *params = (struct ISteamInput_SteamInput002_ActivateActionSet_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetCurrentActionSet( void *args )
{
    struct ISteamInput_SteamInput002_GetCurrentActionSet_params *params = (struct ISteamInput_SteamInput002_GetCurrentActionSet_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_ActivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput002_ActivateActionSetLayer_params *params = (struct ISteamInput_SteamInput002_ActivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_DeactivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput002_DeactivateActionSetLayer_params *params = (struct ISteamInput_SteamInput002_DeactivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput002_DeactivateAllActionSetLayers_params *params = (struct ISteamInput_SteamInput002_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetActiveActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput002_GetActiveActionSetLayers_params *params = (struct ISteamInput_SteamInput002_GetActiveActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetDigitalActionHandle( void *args )
{
    struct ISteamInput_SteamInput002_GetDigitalActionHandle_params *params = (struct ISteamInput_SteamInput002_GetDigitalActionHandle_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetDigitalActionData( void *args )
{
    struct ISteamInput_SteamInput002_GetDigitalActionData_params *params = (struct ISteamInput_SteamInput002_GetDigitalActionData_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetDigitalActionOrigins( void *args )
{
    struct ISteamInput_SteamInput002_GetDigitalActionOrigins_params *params = (struct ISteamInput_SteamInput002_GetDigitalActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetAnalogActionHandle( void *args )
{
    struct ISteamInput_SteamInput002_GetAnalogActionHandle_params *params = (struct ISteamInput_SteamInput002_GetAnalogActionHandle_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetAnalogActionData( void *args )
{
    struct ISteamInput_SteamInput002_GetAnalogActionData_params *params = (struct ISteamInput_SteamInput002_GetAnalogActionData_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetAnalogActionOrigins( void *args )
{
    struct ISteamInput_SteamInput002_GetAnalogActionOrigins_params *params = (struct ISteamInput_SteamInput002_GetAnalogActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetStringForActionOrigin( void *args )
{
    struct ISteamInput_SteamInput002_GetStringForActionOrigin_params *params = (struct ISteamInput_SteamInput002_GetStringForActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_StopAnalogActionMomentum( void *args )
{
    struct ISteamInput_SteamInput002_StopAnalogActionMomentum_params *params = (struct ISteamInput_SteamInput002_StopAnalogActionMomentum_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetMotionData( void *args )
{
    struct ISteamInput_SteamInput002_GetMotionData_params *params = (struct ISteamInput_SteamInput002_GetMotionData_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_TriggerVibration( void *args )
{
    struct ISteamInput_SteamInput002_TriggerVibration_params *params = (struct ISteamInput_SteamInput002_TriggerVibration_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_SetLEDColor( void *args )
{
    struct ISteamInput_SteamInput002_SetLEDColor_params *params = (struct ISteamInput_SteamInput002_SetLEDColor_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_TriggerHapticPulse( void *args )
{
    struct ISteamInput_SteamInput002_TriggerHapticPulse_params *params = (struct ISteamInput_SteamInput002_TriggerHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params *params = (struct ISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_ShowBindingPanel( void *args )
{
    struct ISteamInput_SteamInput002_ShowBindingPanel_params *params = (struct ISteamInput_SteamInput002_ShowBindingPanel_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetInputTypeForHandle( void *args )
{
    struct ISteamInput_SteamInput002_GetInputTypeForHandle_params *params = (struct ISteamInput_SteamInput002_GetInputTypeForHandle_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetControllerForGamepadIndex( void *args )
{
    struct ISteamInput_SteamInput002_GetControllerForGamepadIndex_params *params = (struct ISteamInput_SteamInput002_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetGamepadIndexForController( void *args )
{
    struct ISteamInput_SteamInput002_GetGamepadIndexForController_params *params = (struct ISteamInput_SteamInput002_GetGamepadIndexForController_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetStringForXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput002_GetStringForXboxOrigin_params *params = (struct ISteamInput_SteamInput002_GetStringForXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetActionOriginFromXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params *params = (struct ISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_TranslateActionOrigin( void *args )
{
    struct ISteamInput_SteamInput002_TranslateActionOrigin_params *params = (struct ISteamInput_SteamInput002_TranslateActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetDeviceBindingRevision( void *args )
{
    struct ISteamInput_SteamInput002_GetDeviceBindingRevision_params *params = (struct ISteamInput_SteamInput002_GetDeviceBindingRevision_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
    return 0;
}

NTSTATUS ISteamInput_SteamInput002_GetRemotePlaySessionID( void *args )
{
    struct ISteamInput_SteamInput002_GetRemotePlaySessionID_params *params = (struct ISteamInput_SteamInput002_GetRemotePlaySessionID_params *)args;
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
    return 0;
}

