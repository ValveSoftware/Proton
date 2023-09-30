/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamController_SteamController003.h"

void cppISteamController_SteamController003_Init( struct cppISteamController_SteamController003_Init_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamController_SteamController003_Shutdown( struct cppISteamController_SteamController003_Shutdown_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamController_SteamController003_RunFrame( struct cppISteamController_SteamController003_RunFrame_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamController_SteamController003_GetConnectedControllers( struct cppISteamController_SteamController003_GetConnectedControllers_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamController_SteamController003_ShowBindingPanel( struct cppISteamController_SteamController003_ShowBindingPanel_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
}

void cppISteamController_SteamController003_GetActionSetHandle( struct cppISteamController_SteamController003_GetActionSetHandle_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamController_SteamController003_ActivateActionSet( struct cppISteamController_SteamController003_ActivateActionSet_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
}

void cppISteamController_SteamController003_GetCurrentActionSet( struct cppISteamController_SteamController003_GetCurrentActionSet_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
}

void cppISteamController_SteamController003_GetDigitalActionHandle( struct cppISteamController_SteamController003_GetDigitalActionHandle_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamController_SteamController003_GetDigitalActionData( struct cppISteamController_SteamController003_GetDigitalActionData_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
}

void cppISteamController_SteamController003_GetDigitalActionOrigins( struct cppISteamController_SteamController003_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamController_SteamController003_GetAnalogActionHandle( struct cppISteamController_SteamController003_GetAnalogActionHandle_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamController_SteamController003_GetAnalogActionData( struct cppISteamController_SteamController003_GetAnalogActionData_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
}

void cppISteamController_SteamController003_GetAnalogActionOrigins( struct cppISteamController_SteamController003_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamController_SteamController003_StopAnalogActionMomentum( struct cppISteamController_SteamController003_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
}

void cppISteamController_SteamController003_TriggerHapticPulse( struct cppISteamController_SteamController003_TriggerHapticPulse_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamController_SteamController003_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController003_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamController_SteamController003 *iface = (struct u_ISteamController_SteamController003 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

