/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init( void *args )
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init_params *params = (struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init_params *)args;
    struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *iface = (struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *)params->linux_side;
    params->_ret = iface->Init( params->pchAbsolutePathToControllerConfigVDF );
    return 0;
}

NTSTATUS ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown( void *args )
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown_params *params = (struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown_params *)args;
    struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *iface = (struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame( void *args )
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame_params *params = (struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame_params *)args;
    struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *iface = (struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState( void *args )
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState_params *params = (struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState_params *)args;
    struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *iface = (struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *)params->linux_side;
    params->_ret = iface->GetControllerState( params->unControllerIndex, params->pState );
    return 0;
}

NTSTATUS ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse( void *args )
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse_params *params = (struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse_params *)args;
    struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *iface = (struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerIndex, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

NTSTATUS ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode( void *args )
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode_params *params = (struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode_params *)args;
    struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *iface = (struct u_ISteamController_STEAMCONTROLLER_INTERFACE_VERSION *)params->linux_side;
    iface->SetOverrideMode( params->pchMode );
    return 0;
}

