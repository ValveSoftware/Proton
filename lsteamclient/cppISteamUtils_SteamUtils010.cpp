/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUtils_SteamUtils010_GetSecondsSinceAppActive( void *args )
{
    struct ISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params *params = (struct ISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetSecondsSinceComputerActive( void *args )
{
    struct ISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params *params = (struct ISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetConnectedUniverse( void *args )
{
    struct ISteamUtils_SteamUtils010_GetConnectedUniverse_params *params = (struct ISteamUtils_SteamUtils010_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetServerRealTime( void *args )
{
    struct ISteamUtils_SteamUtils010_GetServerRealTime_params *params = (struct ISteamUtils_SteamUtils010_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetIPCountry( void *args )
{
    struct ISteamUtils_SteamUtils010_GetIPCountry_params *params = (struct ISteamUtils_SteamUtils010_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetImageSize( void *args )
{
    struct ISteamUtils_SteamUtils010_GetImageSize_params *params = (struct ISteamUtils_SteamUtils010_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetImageRGBA( void *args )
{
    struct ISteamUtils_SteamUtils010_GetImageRGBA_params *params = (struct ISteamUtils_SteamUtils010_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetCSERIPPort( void *args )
{
    struct ISteamUtils_SteamUtils010_GetCSERIPPort_params *params = (struct ISteamUtils_SteamUtils010_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetCurrentBatteryPower( void *args )
{
    struct ISteamUtils_SteamUtils010_GetCurrentBatteryPower_params *params = (struct ISteamUtils_SteamUtils010_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetAppID( void *args )
{
    struct ISteamUtils_SteamUtils010_GetAppID_params *params = (struct ISteamUtils_SteamUtils010_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_SetOverlayNotificationPosition( void *args )
{
    struct ISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params *params = (struct ISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsAPICallCompleted( void *args )
{
    struct ISteamUtils_SteamUtils010_IsAPICallCompleted_params *params = (struct ISteamUtils_SteamUtils010_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetAPICallFailureReason( void *args )
{
    struct ISteamUtils_SteamUtils010_GetAPICallFailureReason_params *params = (struct ISteamUtils_SteamUtils010_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_RunFrame( void *args )
{
    struct ISteamUtils_SteamUtils010_RunFrame_params *params = (struct ISteamUtils_SteamUtils010_RunFrame_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetIPCCallCount( void *args )
{
    struct ISteamUtils_SteamUtils010_GetIPCCallCount_params *params = (struct ISteamUtils_SteamUtils010_GetIPCCallCount_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_SetWarningMessageHook( void *args )
{
    struct ISteamUtils_SteamUtils010_SetWarningMessageHook_params *params = (struct ISteamUtils_SteamUtils010_SetWarningMessageHook_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsOverlayEnabled( void *args )
{
    struct ISteamUtils_SteamUtils010_IsOverlayEnabled_params *params = (struct ISteamUtils_SteamUtils010_IsOverlayEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_BOverlayNeedsPresent( void *args )
{
    struct ISteamUtils_SteamUtils010_BOverlayNeedsPresent_params *params = (struct ISteamUtils_SteamUtils010_BOverlayNeedsPresent_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_CheckFileSignature( void *args )
{
    struct ISteamUtils_SteamUtils010_CheckFileSignature_params *params = (struct ISteamUtils_SteamUtils010_CheckFileSignature_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    char *u_szFileName = steamclient_dos_to_unix_path( params->szFileName, 0 );
    params->_ret = iface->CheckFileSignature( u_szFileName );
    steamclient_free_path( u_szFileName );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_ShowGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils010_ShowGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils010_ShowGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetEnteredGamepadTextLength( void *args )
{
    struct ISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params *params = (struct ISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetEnteredGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetSteamUILanguage( void *args )
{
    struct ISteamUtils_SteamUtils010_GetSteamUILanguage_params *params = (struct ISteamUtils_SteamUtils010_GetSteamUILanguage_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetSteamUILanguage(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsSteamRunningInVR( void *args )
{
    struct ISteamUtils_SteamUtils010_IsSteamRunningInVR_params *params = (struct ISteamUtils_SteamUtils010_IsSteamRunningInVR_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamRunningInVR(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_SetOverlayNotificationInset( void *args )
{
    struct ISteamUtils_SteamUtils010_SetOverlayNotificationInset_params *params = (struct ISteamUtils_SteamUtils010_SetOverlayNotificationInset_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsSteamInBigPictureMode( void *args )
{
    struct ISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params *params = (struct ISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamInBigPictureMode(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_StartVRDashboard( void *args )
{
    struct ISteamUtils_SteamUtils010_StartVRDashboard_params *params = (struct ISteamUtils_SteamUtils010_StartVRDashboard_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->StartVRDashboard(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled( void *args )
{
    struct ISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params *params = (struct ISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsVRHeadsetStreamingEnabled(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled( void *args )
{
    struct ISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params *params = (struct ISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetVRHeadsetStreamingEnabled( params->bEnabled );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsSteamChinaLauncher( void *args )
{
    struct ISteamUtils_SteamUtils010_IsSteamChinaLauncher_params *params = (struct ISteamUtils_SteamUtils010_IsSteamChinaLauncher_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamChinaLauncher(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_InitFilterText( void *args )
{
    struct ISteamUtils_SteamUtils010_InitFilterText_params *params = (struct ISteamUtils_SteamUtils010_InitFilterText_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->InitFilterText( params->unFilterOptions );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_FilterText( void *args )
{
    struct ISteamUtils_SteamUtils010_FilterText_params *params = (struct ISteamUtils_SteamUtils010_FilterText_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->FilterText( params->eContext, params->sourceSteamID, params->pchInputMessage, params->pchOutFilteredText, params->nByteSizeOutFilteredText );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_GetIPv6ConnectivityState( void *args )
{
    struct ISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params *params = (struct ISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetIPv6ConnectivityState( params->eProtocol );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck( void *args )
{
    struct ISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params *params = (struct ISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamRunningOnSteamDeck(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->ShowFloatingGamepadTextInput( params->eKeyboardMode, params->nTextFieldXPosition, params->nTextFieldYPosition, params->nTextFieldWidth, params->nTextFieldHeight );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_SetGameLauncherMode( void *args )
{
    struct ISteamUtils_SteamUtils010_SetGameLauncherMode_params *params = (struct ISteamUtils_SteamUtils010_SetGameLauncherMode_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetGameLauncherMode( params->bLauncherMode );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput( void *args )
{
    struct ISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params *params = (struct ISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->DismissFloatingGamepadTextInput(  );
    return 0;
}

