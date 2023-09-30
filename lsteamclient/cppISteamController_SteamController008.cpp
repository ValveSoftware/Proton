/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamController_SteamController008_Init( void *args )
{
    struct ISteamController_SteamController008_Init_params *params = (struct ISteamController_SteamController008_Init_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamController_SteamController008_Shutdown( void *args )
{
    struct ISteamController_SteamController008_Shutdown_params *params = (struct ISteamController_SteamController008_Shutdown_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamController_SteamController008_RunFrame( void *args )
{
    struct ISteamController_SteamController008_RunFrame_params *params = (struct ISteamController_SteamController008_RunFrame_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetConnectedControllers( void *args )
{
    struct ISteamController_SteamController008_GetConnectedControllers_params *params = (struct ISteamController_SteamController008_GetConnectedControllers_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetActionSetHandle( void *args )
{
    struct ISteamController_SteamController008_GetActionSetHandle_params *params = (struct ISteamController_SteamController008_GetActionSetHandle_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamController_SteamController008_ActivateActionSet( void *args )
{
    struct ISteamController_SteamController008_ActivateActionSet_params *params = (struct ISteamController_SteamController008_ActivateActionSet_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetCurrentActionSet( void *args )
{
    struct ISteamController_SteamController008_GetCurrentActionSet_params *params = (struct ISteamController_SteamController008_GetCurrentActionSet_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_ActivateActionSetLayer( void *args )
{
    struct ISteamController_SteamController008_ActivateActionSetLayer_params *params = (struct ISteamController_SteamController008_ActivateActionSetLayer_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->ActivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_DeactivateActionSetLayer( void *args )
{
    struct ISteamController_SteamController008_DeactivateActionSetLayer_params *params = (struct ISteamController_SteamController008_DeactivateActionSetLayer_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamController_SteamController008_DeactivateAllActionSetLayers_params *params = (struct ISteamController_SteamController008_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetActiveActionSetLayers( void *args )
{
    struct ISteamController_SteamController008_GetActiveActionSetLayers_params *params = (struct ISteamController_SteamController008_GetActiveActionSetLayers_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->controllerHandle, params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetDigitalActionHandle( void *args )
{
    struct ISteamController_SteamController008_GetDigitalActionHandle_params *params = (struct ISteamController_SteamController008_GetDigitalActionHandle_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetDigitalActionData( void *args )
{
    struct ISteamController_SteamController008_GetDigitalActionData_params *params = (struct ISteamController_SteamController008_GetDigitalActionData_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController008_GetDigitalActionOrigins_params *params = (struct ISteamController_SteamController008_GetDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetAnalogActionHandle( void *args )
{
    struct ISteamController_SteamController008_GetAnalogActionHandle_params *params = (struct ISteamController_SteamController008_GetAnalogActionHandle_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetAnalogActionData( void *args )
{
    struct ISteamController_SteamController008_GetAnalogActionData_params *params = (struct ISteamController_SteamController008_GetAnalogActionData_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController008_GetAnalogActionOrigins_params *params = (struct ISteamController_SteamController008_GetAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetStringForActionOrigin( void *args )
{
    struct ISteamController_SteamController008_GetStringForActionOrigin_params *params = (struct ISteamController_SteamController008_GetStringForActionOrigin_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController008_StopAnalogActionMomentum( void *args )
{
    struct ISteamController_SteamController008_StopAnalogActionMomentum_params *params = (struct ISteamController_SteamController008_StopAnalogActionMomentum_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetMotionData( void *args )
{
    struct ISteamController_SteamController008_GetMotionData_params *params = (struct ISteamController_SteamController008_GetMotionData_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_TriggerHapticPulse( void *args )
{
    struct ISteamController_SteamController008_TriggerHapticPulse_params *params = (struct ISteamController_SteamController008_TriggerHapticPulse_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamController_SteamController008_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamController_SteamController008_TriggerRepeatedHapticPulse_params *params = (struct ISteamController_SteamController008_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController008_TriggerVibration( void *args )
{
    struct ISteamController_SteamController008_TriggerVibration_params *params = (struct ISteamController_SteamController008_TriggerVibration_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

NTSTATUS ISteamController_SteamController008_SetLEDColor( void *args )
{
    struct ISteamController_SteamController008_SetLEDColor_params *params = (struct ISteamController_SteamController008_SetLEDColor_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController008_ShowBindingPanel( void *args )
{
    struct ISteamController_SteamController008_ShowBindingPanel_params *params = (struct ISteamController_SteamController008_ShowBindingPanel_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetInputTypeForHandle( void *args )
{
    struct ISteamController_SteamController008_GetInputTypeForHandle_params *params = (struct ISteamController_SteamController008_GetInputTypeForHandle_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetControllerForGamepadIndex( void *args )
{
    struct ISteamController_SteamController008_GetControllerForGamepadIndex_params *params = (struct ISteamController_SteamController008_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetGamepadIndexForController( void *args )
{
    struct ISteamController_SteamController008_GetGamepadIndexForController_params *params = (struct ISteamController_SteamController008_GetGamepadIndexForController_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetStringForXboxOrigin( void *args )
{
    struct ISteamController_SteamController008_GetStringForXboxOrigin_params *params = (struct ISteamController_SteamController008_GetStringForXboxOrigin_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetActionOriginFromXboxOrigin( void *args )
{
    struct ISteamController_SteamController008_GetActionOriginFromXboxOrigin_params *params = (struct ISteamController_SteamController008_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->controllerHandle, params->eOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController008_TranslateActionOrigin( void *args )
{
    struct ISteamController_SteamController008_TranslateActionOrigin_params *params = (struct ISteamController_SteamController008_TranslateActionOrigin_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}

NTSTATUS ISteamController_SteamController008_GetControllerBindingRevision( void *args )
{
    struct ISteamController_SteamController008_GetControllerBindingRevision_params *params = (struct ISteamController_SteamController008_GetControllerBindingRevision_params *)args;
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetControllerBindingRevision( params->controllerHandle, params->pMajor, params->pMinor );
    return 0;
}

