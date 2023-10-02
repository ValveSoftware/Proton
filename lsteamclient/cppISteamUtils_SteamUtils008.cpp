/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUtils_SteamUtils008_GetSecondsSinceAppActive( void *args )
{
    struct ISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params *params = (struct ISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetSecondsSinceComputerActive( void *args )
{
    struct ISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params *params = (struct ISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetConnectedUniverse( void *args )
{
    struct ISteamUtils_SteamUtils008_GetConnectedUniverse_params *params = (struct ISteamUtils_SteamUtils008_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetServerRealTime( void *args )
{
    struct ISteamUtils_SteamUtils008_GetServerRealTime_params *params = (struct ISteamUtils_SteamUtils008_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetIPCountry( void *args )
{
    struct ISteamUtils_SteamUtils008_GetIPCountry_params *params = (struct ISteamUtils_SteamUtils008_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetImageSize( void *args )
{
    struct ISteamUtils_SteamUtils008_GetImageSize_params *params = (struct ISteamUtils_SteamUtils008_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetImageRGBA( void *args )
{
    struct ISteamUtils_SteamUtils008_GetImageRGBA_params *params = (struct ISteamUtils_SteamUtils008_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetCSERIPPort( void *args )
{
    struct ISteamUtils_SteamUtils008_GetCSERIPPort_params *params = (struct ISteamUtils_SteamUtils008_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetCurrentBatteryPower( void *args )
{
    struct ISteamUtils_SteamUtils008_GetCurrentBatteryPower_params *params = (struct ISteamUtils_SteamUtils008_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetAppID( void *args )
{
    struct ISteamUtils_SteamUtils008_GetAppID_params *params = (struct ISteamUtils_SteamUtils008_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_SetOverlayNotificationPosition( void *args )
{
    struct ISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params *params = (struct ISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_IsAPICallCompleted( void *args )
{
    struct ISteamUtils_SteamUtils008_IsAPICallCompleted_params *params = (struct ISteamUtils_SteamUtils008_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetAPICallFailureReason( void *args )
{
    struct ISteamUtils_SteamUtils008_GetAPICallFailureReason_params *params = (struct ISteamUtils_SteamUtils008_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_RunFrame( void *args )
{
    struct ISteamUtils_SteamUtils008_RunFrame_params *params = (struct ISteamUtils_SteamUtils008_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetIPCCallCount( void *args )
{
    struct ISteamUtils_SteamUtils008_GetIPCCallCount_params *params = (struct ISteamUtils_SteamUtils008_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_SetWarningMessageHook( void *args )
{
    struct ISteamUtils_SteamUtils008_SetWarningMessageHook_params *params = (struct ISteamUtils_SteamUtils008_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_IsOverlayEnabled( void *args )
{
    struct ISteamUtils_SteamUtils008_IsOverlayEnabled_params *params = (struct ISteamUtils_SteamUtils008_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_BOverlayNeedsPresent( void *args )
{
    struct ISteamUtils_SteamUtils008_BOverlayNeedsPresent_params *params = (struct ISteamUtils_SteamUtils008_BOverlayNeedsPresent_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_CheckFileSignature( void *args )
{
    struct ISteamUtils_SteamUtils008_CheckFileSignature_params *params = (struct ISteamUtils_SteamUtils008_CheckFileSignature_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    char *u_szFileName = steamclient_dos_to_unix_path( params->szFileName, 0 );
    params->_ret = iface->CheckFileSignature( u_szFileName );
    steamclient_free_path( u_szFileName );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_ShowGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils008_ShowGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils008_ShowGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetEnteredGamepadTextLength( void *args )
{
    struct ISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params *params = (struct ISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetEnteredGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_GetSteamUILanguage( void *args )
{
    struct ISteamUtils_SteamUtils008_GetSteamUILanguage_params *params = (struct ISteamUtils_SteamUtils008_GetSteamUILanguage_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetSteamUILanguage(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_IsSteamRunningInVR( void *args )
{
    struct ISteamUtils_SteamUtils008_IsSteamRunningInVR_params *params = (struct ISteamUtils_SteamUtils008_IsSteamRunningInVR_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsSteamRunningInVR(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_SetOverlayNotificationInset( void *args )
{
    struct ISteamUtils_SteamUtils008_SetOverlayNotificationInset_params *params = (struct ISteamUtils_SteamUtils008_SetOverlayNotificationInset_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_IsSteamInBigPictureMode( void *args )
{
    struct ISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params *params = (struct ISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsSteamInBigPictureMode(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils008_StartVRDashboard( void *args )
{
    struct ISteamUtils_SteamUtils008_StartVRDashboard_params *params = (struct ISteamUtils_SteamUtils008_StartVRDashboard_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->StartVRDashboard(  );
    return 0;
}

