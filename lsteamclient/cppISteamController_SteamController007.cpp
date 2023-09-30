/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamController_SteamController007_Init( void *args )
{
    struct ISteamController_SteamController007_Init_params *params = (struct ISteamController_SteamController007_Init_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamController_SteamController007_Shutdown( void *args )
{
    struct ISteamController_SteamController007_Shutdown_params *params = (struct ISteamController_SteamController007_Shutdown_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamController_SteamController007_RunFrame( void *args )
{
    struct ISteamController_SteamController007_RunFrame_params *params = (struct ISteamController_SteamController007_RunFrame_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetConnectedControllers( void *args )
{
    struct ISteamController_SteamController007_GetConnectedControllers_params *params = (struct ISteamController_SteamController007_GetConnectedControllers_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetActionSetHandle( void *args )
{
    struct ISteamController_SteamController007_GetActionSetHandle_params *params = (struct ISteamController_SteamController007_GetActionSetHandle_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamController_SteamController007_ActivateActionSet( void *args )
{
    struct ISteamController_SteamController007_ActivateActionSet_params *params = (struct ISteamController_SteamController007_ActivateActionSet_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetCurrentActionSet( void *args )
{
    struct ISteamController_SteamController007_GetCurrentActionSet_params *params = (struct ISteamController_SteamController007_GetCurrentActionSet_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_ActivateActionSetLayer( void *args )
{
    struct ISteamController_SteamController007_ActivateActionSetLayer_params *params = (struct ISteamController_SteamController007_ActivateActionSetLayer_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->ActivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_DeactivateActionSetLayer( void *args )
{
    struct ISteamController_SteamController007_DeactivateActionSetLayer_params *params = (struct ISteamController_SteamController007_DeactivateActionSetLayer_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamController_SteamController007_DeactivateAllActionSetLayers_params *params = (struct ISteamController_SteamController007_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetActiveActionSetLayers( void *args )
{
    struct ISteamController_SteamController007_GetActiveActionSetLayers_params *params = (struct ISteamController_SteamController007_GetActiveActionSetLayers_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->controllerHandle, params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetDigitalActionHandle( void *args )
{
    struct ISteamController_SteamController007_GetDigitalActionHandle_params *params = (struct ISteamController_SteamController007_GetDigitalActionHandle_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetDigitalActionData( void *args )
{
    struct ISteamController_SteamController007_GetDigitalActionData_params *params = (struct ISteamController_SteamController007_GetDigitalActionData_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController007_GetDigitalActionOrigins_params *params = (struct ISteamController_SteamController007_GetDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetAnalogActionHandle( void *args )
{
    struct ISteamController_SteamController007_GetAnalogActionHandle_params *params = (struct ISteamController_SteamController007_GetAnalogActionHandle_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetAnalogActionData( void *args )
{
    struct ISteamController_SteamController007_GetAnalogActionData_params *params = (struct ISteamController_SteamController007_GetAnalogActionData_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController007_GetAnalogActionOrigins_params *params = (struct ISteamController_SteamController007_GetAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetStringForActionOrigin( void *args )
{
    struct ISteamController_SteamController007_GetStringForActionOrigin_params *params = (struct ISteamController_SteamController007_GetStringForActionOrigin_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController007_StopAnalogActionMomentum( void *args )
{
    struct ISteamController_SteamController007_StopAnalogActionMomentum_params *params = (struct ISteamController_SteamController007_StopAnalogActionMomentum_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetMotionData( void *args )
{
    struct ISteamController_SteamController007_GetMotionData_params *params = (struct ISteamController_SteamController007_GetMotionData_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_TriggerHapticPulse( void *args )
{
    struct ISteamController_SteamController007_TriggerHapticPulse_params *params = (struct ISteamController_SteamController007_TriggerHapticPulse_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamController_SteamController007_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamController_SteamController007_TriggerRepeatedHapticPulse_params *params = (struct ISteamController_SteamController007_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController007_TriggerVibration( void *args )
{
    struct ISteamController_SteamController007_TriggerVibration_params *params = (struct ISteamController_SteamController007_TriggerVibration_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

NTSTATUS ISteamController_SteamController007_SetLEDColor( void *args )
{
    struct ISteamController_SteamController007_SetLEDColor_params *params = (struct ISteamController_SteamController007_SetLEDColor_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController007_ShowBindingPanel( void *args )
{
    struct ISteamController_SteamController007_ShowBindingPanel_params *params = (struct ISteamController_SteamController007_ShowBindingPanel_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetInputTypeForHandle( void *args )
{
    struct ISteamController_SteamController007_GetInputTypeForHandle_params *params = (struct ISteamController_SteamController007_GetInputTypeForHandle_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetControllerForGamepadIndex( void *args )
{
    struct ISteamController_SteamController007_GetControllerForGamepadIndex_params *params = (struct ISteamController_SteamController007_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetGamepadIndexForController( void *args )
{
    struct ISteamController_SteamController007_GetGamepadIndexForController_params *params = (struct ISteamController_SteamController007_GetGamepadIndexForController_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetStringForXboxOrigin( void *args )
{
    struct ISteamController_SteamController007_GetStringForXboxOrigin_params *params = (struct ISteamController_SteamController007_GetStringForXboxOrigin_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetActionOriginFromXboxOrigin( void *args )
{
    struct ISteamController_SteamController007_GetActionOriginFromXboxOrigin_params *params = (struct ISteamController_SteamController007_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->controllerHandle, params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController007_TranslateActionOrigin( void *args )
{
    struct ISteamController_SteamController007_TranslateActionOrigin_params *params = (struct ISteamController_SteamController007_TranslateActionOrigin_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController007_GetControllerBindingRevision( void *args )
{
    struct ISteamController_SteamController007_GetControllerBindingRevision_params *params = (struct ISteamController_SteamController007_GetControllerBindingRevision_params *)args;
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetControllerBindingRevision( params->controllerHandle, params->pMajor, params->pMinor );
    return 0;
}

