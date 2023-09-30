/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUtils_SteamUtils010.h"

void cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils010_GetConnectedUniverse( struct cppISteamUtils_SteamUtils010_GetConnectedUniverse_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils010_GetServerRealTime( struct cppISteamUtils_SteamUtils010_GetServerRealTime_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils010_GetIPCountry( struct cppISteamUtils_SteamUtils010_GetIPCountry_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils010_GetImageSize( struct cppISteamUtils_SteamUtils010_GetImageSize_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils010_GetImageRGBA( struct cppISteamUtils_SteamUtils010_GetImageRGBA_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils010_GetCSERIPPort( struct cppISteamUtils_SteamUtils010_GetCSERIPPort_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils010_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils010_GetCurrentBatteryPower_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils010_GetAppID( struct cppISteamUtils_SteamUtils010_GetAppID_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils010_IsAPICallCompleted( struct cppISteamUtils_SteamUtils010_IsAPICallCompleted_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils010_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils010_GetAPICallFailureReason_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils010_RunFrame( struct cppISteamUtils_SteamUtils010_RunFrame_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils010_GetIPCCallCount( struct cppISteamUtils_SteamUtils010_GetIPCCallCount_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils010_SetWarningMessageHook( struct cppISteamUtils_SteamUtils010_SetWarningMessageHook_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamUtils_SteamUtils010_IsOverlayEnabled( struct cppISteamUtils_SteamUtils010_IsOverlayEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils010_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils010_BOverlayNeedsPresent_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils010_CheckFileSignature( struct cppISteamUtils_SteamUtils010_CheckFileSignature_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->CheckFileSignature( params->szFileName );
}

void cppISteamUtils_SteamUtils010_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils010_ShowGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
}

void cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
}

void cppISteamUtils_SteamUtils010_GetSteamUILanguage( struct cppISteamUtils_SteamUtils010_GetSteamUILanguage_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils010_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils010_IsSteamRunningInVR_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamRunningInVR(  );
}

void cppISteamUtils_SteamUtils010_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils010_SetOverlayNotificationInset_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
}

void cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamInBigPictureMode(  );
}

void cppISteamUtils_SteamUtils010_StartVRDashboard( struct cppISteamUtils_SteamUtils010_StartVRDashboard_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->StartVRDashboard(  );
}

void cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsVRHeadsetStreamingEnabled(  );
}

void cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetVRHeadsetStreamingEnabled( params->bEnabled );
}

void cppISteamUtils_SteamUtils010_IsSteamChinaLauncher( struct cppISteamUtils_SteamUtils010_IsSteamChinaLauncher_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamChinaLauncher(  );
}

void cppISteamUtils_SteamUtils010_InitFilterText( struct cppISteamUtils_SteamUtils010_InitFilterText_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->InitFilterText( params->unFilterOptions );
}

void cppISteamUtils_SteamUtils010_FilterText( struct cppISteamUtils_SteamUtils010_FilterText_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->FilterText( params->eContext, params->sourceSteamID, params->pchInputMessage, params->pchOutFilteredText, params->nByteSizeOutFilteredText );
}

void cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState( struct cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->GetIPv6ConnectivityState( params->eProtocol );
}

void cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck( struct cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->IsSteamRunningOnSteamDeck(  );
}

void cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput( struct cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->ShowFloatingGamepadTextInput( params->eKeyboardMode, params->nTextFieldXPosition, params->nTextFieldYPosition, params->nTextFieldWidth, params->nTextFieldHeight );
}

void cppISteamUtils_SteamUtils010_SetGameLauncherMode( struct cppISteamUtils_SteamUtils010_SetGameLauncherMode_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    iface->SetGameLauncherMode( params->bLauncherMode );
}

void cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput( struct cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    params->_ret = iface->DismissFloatingGamepadTextInput(  );
}

