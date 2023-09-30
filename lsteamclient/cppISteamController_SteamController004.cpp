/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamController_SteamController004_Init( void *args )
{
    struct ISteamController_SteamController004_Init_params *params = (struct ISteamController_SteamController004_Init_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamController_SteamController004_Shutdown( void *args )
{
    struct ISteamController_SteamController004_Shutdown_params *params = (struct ISteamController_SteamController004_Shutdown_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamController_SteamController004_RunFrame( void *args )
{
    struct ISteamController_SteamController004_RunFrame_params *params = (struct ISteamController_SteamController004_RunFrame_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetConnectedControllers( void *args )
{
    struct ISteamController_SteamController004_GetConnectedControllers_params *params = (struct ISteamController_SteamController004_GetConnectedControllers_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController004_ShowBindingPanel( void *args )
{
    struct ISteamController_SteamController004_ShowBindingPanel_params *params = (struct ISteamController_SteamController004_ShowBindingPanel_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetActionSetHandle( void *args )
{
    struct ISteamController_SteamController004_GetActionSetHandle_params *params = (struct ISteamController_SteamController004_GetActionSetHandle_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamController_SteamController004_ActivateActionSet( void *args )
{
    struct ISteamController_SteamController004_ActivateActionSet_params *params = (struct ISteamController_SteamController004_ActivateActionSet_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetCurrentActionSet( void *args )
{
    struct ISteamController_SteamController004_GetCurrentActionSet_params *params = (struct ISteamController_SteamController004_GetCurrentActionSet_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetDigitalActionHandle( void *args )
{
    struct ISteamController_SteamController004_GetDigitalActionHandle_params *params = (struct ISteamController_SteamController004_GetDigitalActionHandle_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetDigitalActionData( void *args )
{
    struct ISteamController_SteamController004_GetDigitalActionData_params *params = (struct ISteamController_SteamController004_GetDigitalActionData_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController004_GetDigitalActionOrigins_params *params = (struct ISteamController_SteamController004_GetDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetAnalogActionHandle( void *args )
{
    struct ISteamController_SteamController004_GetAnalogActionHandle_params *params = (struct ISteamController_SteamController004_GetAnalogActionHandle_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetAnalogActionData( void *args )
{
    struct ISteamController_SteamController004_GetAnalogActionData_params *params = (struct ISteamController_SteamController004_GetAnalogActionData_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController004_GetAnalogActionOrigins_params *params = (struct ISteamController_SteamController004_GetAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController004_StopAnalogActionMomentum( void *args )
{
    struct ISteamController_SteamController004_StopAnalogActionMomentum_params *params = (struct ISteamController_SteamController004_StopAnalogActionMomentum_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamController_SteamController004_TriggerHapticPulse( void *args )
{
    struct ISteamController_SteamController004_TriggerHapticPulse_params *params = (struct ISteamController_SteamController004_TriggerHapticPulse_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamController_SteamController004_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamController_SteamController004_TriggerRepeatedHapticPulse_params *params = (struct ISteamController_SteamController004_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetGamepadIndexForController( void *args )
{
    struct ISteamController_SteamController004_GetGamepadIndexForController_params *params = (struct ISteamController_SteamController004_GetGamepadIndexForController_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetControllerForGamepadIndex( void *args )
{
    struct ISteamController_SteamController004_GetControllerForGamepadIndex_params *params = (struct ISteamController_SteamController004_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

NTSTATUS ISteamController_SteamController004_GetMotionData( void *args )
{
    struct ISteamController_SteamController004_GetMotionData_params *params = (struct ISteamController_SteamController004_GetMotionData_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController004_ShowDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController004_ShowDigitalActionOrigins_params *params = (struct ISteamController_SteamController004_ShowDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->ShowDigitalActionOrigins( params->controllerHandle, params->digitalActionHandle, params->flScale, params->flXPosition, params->flYPosition );
    return 0;
}

NTSTATUS ISteamController_SteamController004_ShowAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController004_ShowAnalogActionOrigins_params *params = (struct ISteamController_SteamController004_ShowAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController004 *iface = (struct u_ISteamController_SteamController004 *)params->linux_side;
    params->_ret = iface->ShowAnalogActionOrigins( params->controllerHandle, params->analogActionHandle, params->flScale, params->flXPosition, params->flYPosition );
    return 0;
}

