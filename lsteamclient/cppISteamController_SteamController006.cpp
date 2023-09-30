/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamController_SteamController006_Init( void *args )
{
    struct ISteamController_SteamController006_Init_params *params = (struct ISteamController_SteamController006_Init_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamController_SteamController006_Shutdown( void *args )
{
    struct ISteamController_SteamController006_Shutdown_params *params = (struct ISteamController_SteamController006_Shutdown_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamController_SteamController006_RunFrame( void *args )
{
    struct ISteamController_SteamController006_RunFrame_params *params = (struct ISteamController_SteamController006_RunFrame_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetConnectedControllers( void *args )
{
    struct ISteamController_SteamController006_GetConnectedControllers_params *params = (struct ISteamController_SteamController006_GetConnectedControllers_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController006_ShowBindingPanel( void *args )
{
    struct ISteamController_SteamController006_ShowBindingPanel_params *params = (struct ISteamController_SteamController006_ShowBindingPanel_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetActionSetHandle( void *args )
{
    struct ISteamController_SteamController006_GetActionSetHandle_params *params = (struct ISteamController_SteamController006_GetActionSetHandle_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamController_SteamController006_ActivateActionSet( void *args )
{
    struct ISteamController_SteamController006_ActivateActionSet_params *params = (struct ISteamController_SteamController006_ActivateActionSet_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetCurrentActionSet( void *args )
{
    struct ISteamController_SteamController006_GetCurrentActionSet_params *params = (struct ISteamController_SteamController006_GetCurrentActionSet_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_ActivateActionSetLayer( void *args )
{
    struct ISteamController_SteamController006_ActivateActionSetLayer_params *params = (struct ISteamController_SteamController006_ActivateActionSetLayer_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->ActivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_DeactivateActionSetLayer( void *args )
{
    struct ISteamController_SteamController006_DeactivateActionSetLayer_params *params = (struct ISteamController_SteamController006_DeactivateActionSetLayer_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamController_SteamController006_DeactivateAllActionSetLayers_params *params = (struct ISteamController_SteamController006_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetActiveActionSetLayers( void *args )
{
    struct ISteamController_SteamController006_GetActiveActionSetLayers_params *params = (struct ISteamController_SteamController006_GetActiveActionSetLayers_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->controllerHandle, params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetDigitalActionHandle( void *args )
{
    struct ISteamController_SteamController006_GetDigitalActionHandle_params *params = (struct ISteamController_SteamController006_GetDigitalActionHandle_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetDigitalActionData( void *args )
{
    struct ISteamController_SteamController006_GetDigitalActionData_params *params = (struct ISteamController_SteamController006_GetDigitalActionData_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController006_GetDigitalActionOrigins_params *params = (struct ISteamController_SteamController006_GetDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetAnalogActionHandle( void *args )
{
    struct ISteamController_SteamController006_GetAnalogActionHandle_params *params = (struct ISteamController_SteamController006_GetAnalogActionHandle_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetAnalogActionData( void *args )
{
    struct ISteamController_SteamController006_GetAnalogActionData_params *params = (struct ISteamController_SteamController006_GetAnalogActionData_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController006_GetAnalogActionOrigins_params *params = (struct ISteamController_SteamController006_GetAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController006_StopAnalogActionMomentum( void *args )
{
    struct ISteamController_SteamController006_StopAnalogActionMomentum_params *params = (struct ISteamController_SteamController006_StopAnalogActionMomentum_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamController_SteamController006_TriggerHapticPulse( void *args )
{
    struct ISteamController_SteamController006_TriggerHapticPulse_params *params = (struct ISteamController_SteamController006_TriggerHapticPulse_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamController_SteamController006_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamController_SteamController006_TriggerRepeatedHapticPulse_params *params = (struct ISteamController_SteamController006_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController006_TriggerVibration( void *args )
{
    struct ISteamController_SteamController006_TriggerVibration_params *params = (struct ISteamController_SteamController006_TriggerVibration_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

NTSTATUS ISteamController_SteamController006_SetLEDColor( void *args )
{
    struct ISteamController_SteamController006_SetLEDColor_params *params = (struct ISteamController_SteamController006_SetLEDColor_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetGamepadIndexForController( void *args )
{
    struct ISteamController_SteamController006_GetGamepadIndexForController_params *params = (struct ISteamController_SteamController006_GetGamepadIndexForController_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetControllerForGamepadIndex( void *args )
{
    struct ISteamController_SteamController006_GetControllerForGamepadIndex_params *params = (struct ISteamController_SteamController006_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetMotionData( void *args )
{
    struct ISteamController_SteamController006_GetMotionData_params *params = (struct ISteamController_SteamController006_GetMotionData_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController006_ShowDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController006_ShowDigitalActionOrigins_params *params = (struct ISteamController_SteamController006_ShowDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->ShowDigitalActionOrigins( params->controllerHandle, params->digitalActionHandle, params->flScale, params->flXPosition, params->flYPosition );
    return 0;
}

NTSTATUS ISteamController_SteamController006_ShowAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController006_ShowAnalogActionOrigins_params *params = (struct ISteamController_SteamController006_ShowAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->ShowAnalogActionOrigins( params->controllerHandle, params->analogActionHandle, params->flScale, params->flXPosition, params->flYPosition );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetStringForActionOrigin( void *args )
{
    struct ISteamController_SteamController006_GetStringForActionOrigin_params *params = (struct ISteamController_SteamController006_GetStringForActionOrigin_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController006_GetInputTypeForHandle( void *args )
{
    struct ISteamController_SteamController006_GetInputTypeForHandle_params *params = (struct ISteamController_SteamController006_GetInputTypeForHandle_params *)args;
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->controllerHandle );
    return 0;
}

