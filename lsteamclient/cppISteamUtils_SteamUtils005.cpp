/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUtils_SteamUtils005_GetSecondsSinceAppActive( void *args )
{
    struct ISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *params = (struct ISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetSecondsSinceComputerActive( void *args )
{
    struct ISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *params = (struct ISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetConnectedUniverse( void *args )
{
    struct ISteamUtils_SteamUtils005_GetConnectedUniverse_params *params = (struct ISteamUtils_SteamUtils005_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetServerRealTime( void *args )
{
    struct ISteamUtils_SteamUtils005_GetServerRealTime_params *params = (struct ISteamUtils_SteamUtils005_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetIPCountry( void *args )
{
    struct ISteamUtils_SteamUtils005_GetIPCountry_params *params = (struct ISteamUtils_SteamUtils005_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetImageSize( void *args )
{
    struct ISteamUtils_SteamUtils005_GetImageSize_params *params = (struct ISteamUtils_SteamUtils005_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetImageRGBA( void *args )
{
    struct ISteamUtils_SteamUtils005_GetImageRGBA_params *params = (struct ISteamUtils_SteamUtils005_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetCSERIPPort( void *args )
{
    struct ISteamUtils_SteamUtils005_GetCSERIPPort_params *params = (struct ISteamUtils_SteamUtils005_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetCurrentBatteryPower( void *args )
{
    struct ISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *params = (struct ISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetAppID( void *args )
{
    struct ISteamUtils_SteamUtils005_GetAppID_params *params = (struct ISteamUtils_SteamUtils005_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_SetOverlayNotificationPosition( void *args )
{
    struct ISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *params = (struct ISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_IsAPICallCompleted( void *args )
{
    struct ISteamUtils_SteamUtils005_IsAPICallCompleted_params *params = (struct ISteamUtils_SteamUtils005_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetAPICallFailureReason( void *args )
{
    struct ISteamUtils_SteamUtils005_GetAPICallFailureReason_params *params = (struct ISteamUtils_SteamUtils005_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_RunFrame( void *args )
{
    struct ISteamUtils_SteamUtils005_RunFrame_params *params = (struct ISteamUtils_SteamUtils005_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetIPCCallCount( void *args )
{
    struct ISteamUtils_SteamUtils005_GetIPCCallCount_params *params = (struct ISteamUtils_SteamUtils005_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_SetWarningMessageHook( void *args )
{
    struct ISteamUtils_SteamUtils005_SetWarningMessageHook_params *params = (struct ISteamUtils_SteamUtils005_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_IsOverlayEnabled( void *args )
{
    struct ISteamUtils_SteamUtils005_IsOverlayEnabled_params *params = (struct ISteamUtils_SteamUtils005_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_BOverlayNeedsPresent( void *args )
{
    struct ISteamUtils_SteamUtils005_BOverlayNeedsPresent_params *params = (struct ISteamUtils_SteamUtils005_BOverlayNeedsPresent_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_CheckFileSignature( void *args )
{
    struct ISteamUtils_SteamUtils005_CheckFileSignature_params *params = (struct ISteamUtils_SteamUtils005_CheckFileSignature_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    char *u_szFileName = steamclient_dos_to_unix_path( params->szFileName, 0 );
    params->_ret = iface->CheckFileSignature( u_szFileName );
    steamclient_free_path( u_szFileName );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_ShowGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils005_ShowGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils005_ShowGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetEnteredGamepadTextLength( void *args )
{
    struct ISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *params = (struct ISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils005_GetEnteredGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
    return 0;
}

