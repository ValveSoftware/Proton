/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamController_SteamController003_Init( void *args )
{
    struct ISteamController_SteamController003_Init_params *params = (struct ISteamController_SteamController003_Init_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamController_SteamController003_Shutdown( void *args )
{
    struct ISteamController_SteamController003_Shutdown_params *params = (struct ISteamController_SteamController003_Shutdown_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamController_SteamController003_RunFrame( void *args )
{
    struct ISteamController_SteamController003_RunFrame_params *params = (struct ISteamController_SteamController003_RunFrame_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetConnectedControllers( void *args )
{
    struct ISteamController_SteamController003_GetConnectedControllers_params *params = (struct ISteamController_SteamController003_GetConnectedControllers_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

NTSTATUS ISteamController_SteamController003_ShowBindingPanel( void *args )
{
    struct ISteamController_SteamController003_ShowBindingPanel_params *params = (struct ISteamController_SteamController003_ShowBindingPanel_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetActionSetHandle( void *args )
{
    struct ISteamController_SteamController003_GetActionSetHandle_params *params = (struct ISteamController_SteamController003_GetActionSetHandle_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

NTSTATUS ISteamController_SteamController003_ActivateActionSet( void *args )
{
    struct ISteamController_SteamController003_ActivateActionSet_params *params = (struct ISteamController_SteamController003_ActivateActionSet_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetCurrentActionSet( void *args )
{
    struct ISteamController_SteamController003_GetCurrentActionSet_params *params = (struct ISteamController_SteamController003_GetCurrentActionSet_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetDigitalActionHandle( void *args )
{
    struct ISteamController_SteamController003_GetDigitalActionHandle_params *params = (struct ISteamController_SteamController003_GetDigitalActionHandle_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetDigitalActionData( void *args )
{
    struct ISteamController_SteamController003_GetDigitalActionData_params *params = (struct ISteamController_SteamController003_GetDigitalActionData_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetDigitalActionOrigins( void *args )
{
    struct ISteamController_SteamController003_GetDigitalActionOrigins_params *params = (struct ISteamController_SteamController003_GetDigitalActionOrigins_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetAnalogActionHandle( void *args )
{
    struct ISteamController_SteamController003_GetAnalogActionHandle_params *params = (struct ISteamController_SteamController003_GetAnalogActionHandle_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetAnalogActionData( void *args )
{
    struct ISteamController_SteamController003_GetAnalogActionData_params *params = (struct ISteamController_SteamController003_GetAnalogActionData_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
    return 0;
}

NTSTATUS ISteamController_SteamController003_GetAnalogActionOrigins( void *args )
{
    struct ISteamController_SteamController003_GetAnalogActionOrigins_params *params = (struct ISteamController_SteamController003_GetAnalogActionOrigins_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

NTSTATUS ISteamController_SteamController003_StopAnalogActionMomentum( void *args )
{
    struct ISteamController_SteamController003_StopAnalogActionMomentum_params *params = (struct ISteamController_SteamController003_StopAnalogActionMomentum_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
    return 0;
}

NTSTATUS ISteamController_SteamController003_TriggerHapticPulse( void *args )
{
    struct ISteamController_SteamController003_TriggerHapticPulse_params *params = (struct ISteamController_SteamController003_TriggerHapticPulse_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamController_SteamController003_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamController_SteamController003_TriggerRepeatedHapticPulse_params *params = (struct ISteamController_SteamController003_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

