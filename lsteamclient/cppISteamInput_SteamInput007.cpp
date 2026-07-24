/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamInput_SteamInput007_Init( void *args )
{
    struct ISteamInput_SteamInput007_Init_params *params = (struct ISteamInput_SteamInput007_Init_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->Init( params->bExplicitlyCallRunFrame );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_Init( void *args )
{
    struct wow64_ISteamInput_SteamInput007_Init_params *params = (struct wow64_ISteamInput_SteamInput007_Init_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->Init( params->bExplicitlyCallRunFrame );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_Shutdown( void *args )
{
    struct ISteamInput_SteamInput007_Shutdown_params *params = (struct ISteamInput_SteamInput007_Shutdown_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->Shutdown(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_Shutdown( void *args )
{
    struct wow64_ISteamInput_SteamInput007_Shutdown_params *params = (struct wow64_ISteamInput_SteamInput007_Shutdown_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->Shutdown(  );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_SetInputActionManifestFilePath( void *args )
{
    struct ISteamInput_SteamInput007_SetInputActionManifestFilePath_params *params = (struct ISteamInput_SteamInput007_SetInputActionManifestFilePath_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    char *u_pchInputActionManifestAbsolutePath = steamclient_dos_to_unix_path( params->pchInputActionManifestAbsolutePath, 0 );
    params->_ret = iface->SetInputActionManifestFilePath( u_pchInputActionManifestAbsolutePath );
    steamclient_free_path( u_pchInputActionManifestAbsolutePath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_SetInputActionManifestFilePath( void *args )
{
    struct wow64_ISteamInput_SteamInput007_SetInputActionManifestFilePath_params *params = (struct wow64_ISteamInput_SteamInput007_SetInputActionManifestFilePath_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    char *u_pchInputActionManifestAbsolutePath = steamclient_dos_to_unix_path( params->pchInputActionManifestAbsolutePath, 0 );
    params->_ret = iface->SetInputActionManifestFilePath( u_pchInputActionManifestAbsolutePath );
    steamclient_free_path( u_pchInputActionManifestAbsolutePath );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_RunFrame( void *args )
{
    struct ISteamInput_SteamInput007_RunFrame_params *params = (struct ISteamInput_SteamInput007_RunFrame_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->RunFrame( params->bReservedValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_RunFrame( void *args )
{
    struct wow64_ISteamInput_SteamInput007_RunFrame_params *params = (struct wow64_ISteamInput_SteamInput007_RunFrame_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->RunFrame( params->bReservedValue );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_BWaitForData( void *args )
{
    struct ISteamInput_SteamInput007_BWaitForData_params *params = (struct ISteamInput_SteamInput007_BWaitForData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->BWaitForData( params->bWaitForever, params->unTimeout );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_BWaitForData( void *args )
{
    struct wow64_ISteamInput_SteamInput007_BWaitForData_params *params = (struct wow64_ISteamInput_SteamInput007_BWaitForData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->BWaitForData( params->bWaitForever, params->unTimeout );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_BNewDataAvailable( void *args )
{
    struct ISteamInput_SteamInput007_BNewDataAvailable_params *params = (struct ISteamInput_SteamInput007_BNewDataAvailable_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->BNewDataAvailable(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_BNewDataAvailable( void *args )
{
    struct wow64_ISteamInput_SteamInput007_BNewDataAvailable_params *params = (struct wow64_ISteamInput_SteamInput007_BNewDataAvailable_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->BNewDataAvailable(  );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetConnectedControllers( void *args )
{
    struct ISteamInput_SteamInput007_GetConnectedControllers_params *params = (struct ISteamInput_SteamInput007_GetConnectedControllers_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetConnectedControllers( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetConnectedControllers_params *params = (struct wow64_ISteamInput_SteamInput007_GetConnectedControllers_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_EnableDeviceCallbacks( void *args )
{
    struct ISteamInput_SteamInput007_EnableDeviceCallbacks_params *params = (struct ISteamInput_SteamInput007_EnableDeviceCallbacks_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->EnableDeviceCallbacks(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_EnableDeviceCallbacks( void *args )
{
    struct wow64_ISteamInput_SteamInput007_EnableDeviceCallbacks_params *params = (struct wow64_ISteamInput_SteamInput007_EnableDeviceCallbacks_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->EnableDeviceCallbacks(  );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetActionSetHandle( void *args )
{
    struct ISteamInput_SteamInput007_GetActionSetHandle_params *params = (struct ISteamInput_SteamInput007_GetActionSetHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetActionSetHandle( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetActionSetHandle_params *params = (struct wow64_ISteamInput_SteamInput007_GetActionSetHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_ActivateActionSet( void *args )
{
    struct ISteamInput_SteamInput007_ActivateActionSet_params *params = (struct ISteamInput_SteamInput007_ActivateActionSet_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_ActivateActionSet( void *args )
{
    struct wow64_ISteamInput_SteamInput007_ActivateActionSet_params *params = (struct wow64_ISteamInput_SteamInput007_ActivateActionSet_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetCurrentActionSet( void *args )
{
    struct ISteamInput_SteamInput007_GetCurrentActionSet_params *params = (struct ISteamInput_SteamInput007_GetCurrentActionSet_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetCurrentActionSet( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetCurrentActionSet_params *params = (struct wow64_ISteamInput_SteamInput007_GetCurrentActionSet_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_ActivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput007_ActivateActionSetLayer_params *params = (struct ISteamInput_SteamInput007_ActivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_ActivateActionSetLayer( void *args )
{
    struct wow64_ISteamInput_SteamInput007_ActivateActionSetLayer_params *params = (struct wow64_ISteamInput_SteamInput007_ActivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_DeactivateActionSetLayer( void *args )
{
    struct ISteamInput_SteamInput007_DeactivateActionSetLayer_params *params = (struct ISteamInput_SteamInput007_DeactivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_DeactivateActionSetLayer( void *args )
{
    struct wow64_ISteamInput_SteamInput007_DeactivateActionSetLayer_params *params = (struct wow64_ISteamInput_SteamInput007_DeactivateActionSetLayer_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_DeactivateAllActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput007_DeactivateAllActionSetLayers_params *params = (struct ISteamInput_SteamInput007_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_DeactivateAllActionSetLayers( void *args )
{
    struct wow64_ISteamInput_SteamInput007_DeactivateAllActionSetLayers_params *params = (struct wow64_ISteamInput_SteamInput007_DeactivateAllActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetActiveActionSetLayers( void *args )
{
    struct ISteamInput_SteamInput007_GetActiveActionSetLayers_params *params = (struct ISteamInput_SteamInput007_GetActiveActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetActiveActionSetLayers( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetActiveActionSetLayers_params *params = (struct wow64_ISteamInput_SteamInput007_GetActiveActionSetLayers_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetDigitalActionHandle( void *args )
{
    struct ISteamInput_SteamInput007_GetDigitalActionHandle_params *params = (struct ISteamInput_SteamInput007_GetDigitalActionHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetDigitalActionHandle( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetDigitalActionHandle_params *params = (struct wow64_ISteamInput_SteamInput007_GetDigitalActionHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetDigitalActionData( void *args )
{
    struct ISteamInput_SteamInput007_GetDigitalActionData_params *params = (struct ISteamInput_SteamInput007_GetDigitalActionData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetDigitalActionData( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetDigitalActionData_params *params = (struct wow64_ISteamInput_SteamInput007_GetDigitalActionData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetDigitalActionOrigins( void *args )
{
    struct ISteamInput_SteamInput007_GetDigitalActionOrigins_params *params = (struct ISteamInput_SteamInput007_GetDigitalActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetDigitalActionOrigins( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetDigitalActionOrigins_params *params = (struct wow64_ISteamInput_SteamInput007_GetDigitalActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetStringForDigitalActionName( void *args )
{
    struct ISteamInput_SteamInput007_GetStringForDigitalActionName_params *params = (struct ISteamInput_SteamInput007_GetStringForDigitalActionName_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForDigitalActionName( params->eActionHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetStringForDigitalActionName( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetStringForDigitalActionName_params *params = (struct wow64_ISteamInput_SteamInput007_GetStringForDigitalActionName_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForDigitalActionName( params->eActionHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetAnalogActionHandle( void *args )
{
    struct ISteamInput_SteamInput007_GetAnalogActionHandle_params *params = (struct ISteamInput_SteamInput007_GetAnalogActionHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetAnalogActionHandle( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetAnalogActionHandle_params *params = (struct wow64_ISteamInput_SteamInput007_GetAnalogActionHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetAnalogActionData( void *args )
{
    struct ISteamInput_SteamInput007_GetAnalogActionData_params *params = (struct ISteamInput_SteamInput007_GetAnalogActionData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetAnalogActionData( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetAnalogActionData_params *params = (struct wow64_ISteamInput_SteamInput007_GetAnalogActionData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetAnalogActionOrigins( void *args )
{
    struct ISteamInput_SteamInput007_GetAnalogActionOrigins_params *params = (struct ISteamInput_SteamInput007_GetAnalogActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetAnalogActionOrigins( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetAnalogActionOrigins_params *params = (struct wow64_ISteamInput_SteamInput007_GetAnalogActionOrigins_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetStringForActionOrigin( void *args )
{
    struct ISteamInput_SteamInput007_GetStringForActionOrigin_params *params = (struct ISteamInput_SteamInput007_GetStringForActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetStringForActionOrigin( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetStringForActionOrigin_params *params = (struct wow64_ISteamInput_SteamInput007_GetStringForActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetStringForAnalogActionName( void *args )
{
    struct ISteamInput_SteamInput007_GetStringForAnalogActionName_params *params = (struct ISteamInput_SteamInput007_GetStringForAnalogActionName_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForAnalogActionName( params->eActionHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetStringForAnalogActionName( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetStringForAnalogActionName_params *params = (struct wow64_ISteamInput_SteamInput007_GetStringForAnalogActionName_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForAnalogActionName( params->eActionHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_StopAnalogActionMomentum( void *args )
{
    struct ISteamInput_SteamInput007_StopAnalogActionMomentum_params *params = (struct ISteamInput_SteamInput007_StopAnalogActionMomentum_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_StopAnalogActionMomentum( void *args )
{
    struct wow64_ISteamInput_SteamInput007_StopAnalogActionMomentum_params *params = (struct wow64_ISteamInput_SteamInput007_StopAnalogActionMomentum_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetMotionData( void *args )
{
    struct ISteamInput_SteamInput007_GetMotionData_params *params = (struct ISteamInput_SteamInput007_GetMotionData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    *params->_ret = iface->GetMotionData( params->inputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetMotionData( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetMotionData_params *params = (struct wow64_ISteamInput_SteamInput007_GetMotionData_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    *params->_ret = iface->GetMotionData( params->inputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_TriggerVibration( void *args )
{
    struct ISteamInput_SteamInput007_TriggerVibration_params *params = (struct ISteamInput_SteamInput007_TriggerVibration_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_TriggerVibration( void *args )
{
    struct wow64_ISteamInput_SteamInput007_TriggerVibration_params *params = (struct wow64_ISteamInput_SteamInput007_TriggerVibration_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_TriggerVibrationExtended( void *args )
{
    struct ISteamInput_SteamInput007_TriggerVibrationExtended_params *params = (struct ISteamInput_SteamInput007_TriggerVibrationExtended_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->TriggerVibrationExtended( params->inputHandle, params->usLeftSpeed, params->usRightSpeed, params->usLeftTriggerSpeed, params->usRightTriggerSpeed );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_TriggerVibrationExtended( void *args )
{
    struct wow64_ISteamInput_SteamInput007_TriggerVibrationExtended_params *params = (struct wow64_ISteamInput_SteamInput007_TriggerVibrationExtended_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->TriggerVibrationExtended( params->inputHandle, params->usLeftSpeed, params->usRightSpeed, params->usLeftTriggerSpeed, params->usRightTriggerSpeed );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_TriggerSimpleHapticEvent( void *args )
{
    struct ISteamInput_SteamInput007_TriggerSimpleHapticEvent_params *params = (struct ISteamInput_SteamInput007_TriggerSimpleHapticEvent_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->TriggerSimpleHapticEvent( params->inputHandle, params->eHapticLocation, params->nIntensity, params->nGainDB, params->nOtherIntensity, params->nOtherGainDB );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_TriggerSimpleHapticEvent( void *args )
{
    struct wow64_ISteamInput_SteamInput007_TriggerSimpleHapticEvent_params *params = (struct wow64_ISteamInput_SteamInput007_TriggerSimpleHapticEvent_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->TriggerSimpleHapticEvent( params->inputHandle, params->eHapticLocation, params->nIntensity, params->nGainDB, params->nOtherIntensity, params->nOtherGainDB );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_SetLEDColor( void *args )
{
    struct ISteamInput_SteamInput007_SetLEDColor_params *params = (struct ISteamInput_SteamInput007_SetLEDColor_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_SetLEDColor( void *args )
{
    struct wow64_ISteamInput_SteamInput007_SetLEDColor_params *params = (struct wow64_ISteamInput_SteamInput007_SetLEDColor_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_Legacy_TriggerHapticPulse( void *args )
{
    struct ISteamInput_SteamInput007_Legacy_TriggerHapticPulse_params *params = (struct ISteamInput_SteamInput007_Legacy_TriggerHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->Legacy_TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_Legacy_TriggerHapticPulse( void *args )
{
    struct wow64_ISteamInput_SteamInput007_Legacy_TriggerHapticPulse_params *params = (struct wow64_ISteamInput_SteamInput007_Legacy_TriggerHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->Legacy_TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_Legacy_TriggerRepeatedHapticPulse( void *args )
{
    struct ISteamInput_SteamInput007_Legacy_TriggerRepeatedHapticPulse_params *params = (struct ISteamInput_SteamInput007_Legacy_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->Legacy_TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_Legacy_TriggerRepeatedHapticPulse( void *args )
{
    struct wow64_ISteamInput_SteamInput007_Legacy_TriggerRepeatedHapticPulse_params *params = (struct wow64_ISteamInput_SteamInput007_Legacy_TriggerRepeatedHapticPulse_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->Legacy_TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_ShowBindingPanel( void *args )
{
    struct ISteamInput_SteamInput007_ShowBindingPanel_params *params = (struct ISteamInput_SteamInput007_ShowBindingPanel_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_ShowBindingPanel( void *args )
{
    struct wow64_ISteamInput_SteamInput007_ShowBindingPanel_params *params = (struct wow64_ISteamInput_SteamInput007_ShowBindingPanel_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetInputTypeForHandle( void *args )
{
    struct ISteamInput_SteamInput007_GetInputTypeForHandle_params *params = (struct ISteamInput_SteamInput007_GetInputTypeForHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetInputTypeForHandle( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetInputTypeForHandle_params *params = (struct wow64_ISteamInput_SteamInput007_GetInputTypeForHandle_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetControllerForGamepadIndex( void *args )
{
    struct ISteamInput_SteamInput007_GetControllerForGamepadIndex_params *params = (struct ISteamInput_SteamInput007_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetControllerForGamepadIndex( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetControllerForGamepadIndex_params *params = (struct wow64_ISteamInput_SteamInput007_GetControllerForGamepadIndex_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetGamepadIndexForController( void *args )
{
    struct ISteamInput_SteamInput007_GetGamepadIndexForController_params *params = (struct ISteamInput_SteamInput007_GetGamepadIndexForController_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetGamepadIndexForController( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetGamepadIndexForController_params *params = (struct wow64_ISteamInput_SteamInput007_GetGamepadIndexForController_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetStringForXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput007_GetStringForXboxOrigin_params *params = (struct ISteamInput_SteamInput007_GetStringForXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetStringForXboxOrigin( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetStringForXboxOrigin_params *params = (struct wow64_ISteamInput_SteamInput007_GetStringForXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetActionOriginFromXboxOrigin( void *args )
{
    struct ISteamInput_SteamInput007_GetActionOriginFromXboxOrigin_params *params = (struct ISteamInput_SteamInput007_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetActionOriginFromXboxOrigin( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetActionOriginFromXboxOrigin_params *params = (struct wow64_ISteamInput_SteamInput007_GetActionOriginFromXboxOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_TranslateActionOrigin( void *args )
{
    struct ISteamInput_SteamInput007_TranslateActionOrigin_params *params = (struct ISteamInput_SteamInput007_TranslateActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_TranslateActionOrigin( void *args )
{
    struct wow64_ISteamInput_SteamInput007_TranslateActionOrigin_params *params = (struct wow64_ISteamInput_SteamInput007_TranslateActionOrigin_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetDeviceBindingRevision( void *args )
{
    struct ISteamInput_SteamInput007_GetDeviceBindingRevision_params *params = (struct ISteamInput_SteamInput007_GetDeviceBindingRevision_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetDeviceBindingRevision( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetDeviceBindingRevision_params *params = (struct wow64_ISteamInput_SteamInput007_GetDeviceBindingRevision_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetRemotePlaySessionID( void *args )
{
    struct ISteamInput_SteamInput007_GetRemotePlaySessionID_params *params = (struct ISteamInput_SteamInput007_GetRemotePlaySessionID_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetRemotePlaySessionID( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetRemotePlaySessionID_params *params = (struct wow64_ISteamInput_SteamInput007_GetRemotePlaySessionID_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_GetSessionInputConfigurationSettings( void *args )
{
    struct ISteamInput_SteamInput007_GetSessionInputConfigurationSettings_params *params = (struct ISteamInput_SteamInput007_GetSessionInputConfigurationSettings_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetSessionInputConfigurationSettings(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_GetSessionInputConfigurationSettings( void *args )
{
    struct wow64_ISteamInput_SteamInput007_GetSessionInputConfigurationSettings_params *params = (struct wow64_ISteamInput_SteamInput007_GetSessionInputConfigurationSettings_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    params->_ret = iface->GetSessionInputConfigurationSettings(  );
    return 0;
}
#endif

NTSTATUS ISteamInput_SteamInput007_SetDualSenseTriggerEffect( void *args )
{
    struct ISteamInput_SteamInput007_SetDualSenseTriggerEffect_params *params = (struct ISteamInput_SteamInput007_SetDualSenseTriggerEffect_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->SetDualSenseTriggerEffect( params->inputHandle, params->pParam );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamInput_SteamInput007_SetDualSenseTriggerEffect( void *args )
{
    struct wow64_ISteamInput_SteamInput007_SetDualSenseTriggerEffect_params *params = (struct wow64_ISteamInput_SteamInput007_SetDualSenseTriggerEffect_params *)args;
    struct u_ISteamInput_SteamInput007 *iface = (struct u_ISteamInput_SteamInput007 *)params->u_iface;
    iface->SetDualSenseTriggerEffect( params->inputHandle, params->pParam );
    return 0;
}
#endif

