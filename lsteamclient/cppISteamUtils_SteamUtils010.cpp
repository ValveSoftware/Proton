#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils010.h"
void cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils010_GetConnectedUniverse( struct cppISteamUtils_SteamUtils010_GetConnectedUniverse_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils010_GetServerRealTime( struct cppISteamUtils_SteamUtils010_GetServerRealTime_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils010_GetIPCountry( struct cppISteamUtils_SteamUtils010_GetIPCountry_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils010_GetImageSize( struct cppISteamUtils_SteamUtils010_GetImageSize_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageSize( (int)params->iImage, (uint32 *)params->pnWidth, (uint32 *)params->pnHeight );
}

void cppISteamUtils_SteamUtils010_GetImageRGBA( struct cppISteamUtils_SteamUtils010_GetImageRGBA_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageRGBA( (int)params->iImage, (uint8 *)params->pubDest, (int)params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils010_GetCSERIPPort( struct cppISteamUtils_SteamUtils010_GetCSERIPPort_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCSERIPPort( (uint32 *)params->unIP, (uint16 *)params->usPort );
}

void cppISteamUtils_SteamUtils010_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils010_GetCurrentBatteryPower_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils010_GetAppID( struct cppISteamUtils_SteamUtils010_GetAppID_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAppID(  );
}

void cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationPosition( (ENotificationPosition)params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils010_IsAPICallCompleted( struct cppISteamUtils_SteamUtils010_IsAPICallCompleted_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsAPICallCompleted( (SteamAPICall_t)params->hSteamAPICall, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils010_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils010_GetAPICallFailureReason_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallFailureReason( (SteamAPICall_t)params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils010_GetAPICallResult( struct cppISteamUtils_SteamUtils010_GetAPICallResult_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallResult( (SteamAPICall_t)params->hSteamAPICall, (void *)params->pCallback, (int)params->cubCallback, (int)params->iCallbackExpected, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils010_RunFrame( struct cppISteamUtils_SteamUtils010_RunFrame_params *params )
{
    ((ISteamUtils*)params->linux_side)->RunFrame(  );
}

void cppISteamUtils_SteamUtils010_GetIPCCallCount( struct cppISteamUtils_SteamUtils010_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils010_SetWarningMessageHook( struct cppISteamUtils_SteamUtils010_SetWarningMessageHook_params *params )
{
    params->pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamUtils*)params->linux_side)->SetWarningMessageHook( (SteamAPIWarningMessageHook_t)params->pFunction );
}

void cppISteamUtils_SteamUtils010_IsOverlayEnabled( struct cppISteamUtils_SteamUtils010_IsOverlayEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils010_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils010_BOverlayNeedsPresent_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils010_CheckFileSignature( struct cppISteamUtils_SteamUtils010_CheckFileSignature_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->CheckFileSignature( (const char *)params->szFileName );
}

void cppISteamUtils_SteamUtils010_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils010_ShowGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->ShowGamepadTextInput( (EGamepadTextInputMode)params->eInputMode, (EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32)params->unCharMax, (const char *)params->pchExistingText );
}

void cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextInput( (char *)params->pchText, (uint32)params->cchText );
}

void cppISteamUtils_SteamUtils010_GetSteamUILanguage( struct cppISteamUtils_SteamUtils010_GetSteamUILanguage_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils010_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils010_IsSteamRunningInVR_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamRunningInVR(  );
}

void cppISteamUtils_SteamUtils010_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils010_SetOverlayNotificationInset_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationInset( (int)params->nHorizontalInset, (int)params->nVerticalInset );
}

void cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamInBigPictureMode(  );
}

void cppISteamUtils_SteamUtils010_StartVRDashboard( struct cppISteamUtils_SteamUtils010_StartVRDashboard_params *params )
{
    ((ISteamUtils*)params->linux_side)->StartVRDashboard(  );
}

void cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsVRHeadsetStreamingEnabled(  );
}

void cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetVRHeadsetStreamingEnabled( (bool)params->bEnabled );
}

void cppISteamUtils_SteamUtils010_IsSteamChinaLauncher( struct cppISteamUtils_SteamUtils010_IsSteamChinaLauncher_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamChinaLauncher(  );
}

void cppISteamUtils_SteamUtils010_InitFilterText( struct cppISteamUtils_SteamUtils010_InitFilterText_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->InitFilterText( (uint32)params->unFilterOptions );
}

void cppISteamUtils_SteamUtils010_FilterText( struct cppISteamUtils_SteamUtils010_FilterText_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->FilterText( (ETextFilteringContext)params->eContext, (CSteamID)params->sourceSteamID, (const char *)params->pchInputMessage, (char *)params->pchOutFilteredText, (uint32)params->nByteSizeOutFilteredText );
}

void cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState( struct cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPv6ConnectivityState( (ESteamIPv6ConnectivityProtocol)params->eProtocol );
}

void cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck( struct cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamRunningOnSteamDeck(  );
}

void cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput( struct cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->ShowFloatingGamepadTextInput( (EFloatingGamepadTextInputMode)params->eKeyboardMode, (int)params->nTextFieldXPosition, (int)params->nTextFieldYPosition, (int)params->nTextFieldWidth, (int)params->nTextFieldHeight );
}

void cppISteamUtils_SteamUtils010_SetGameLauncherMode( struct cppISteamUtils_SteamUtils010_SetGameLauncherMode_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetGameLauncherMode( (bool)params->bLauncherMode );
}

void cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput( struct cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->DismissFloatingGamepadTextInput(  );
}

#ifdef __cplusplus
}
#endif
