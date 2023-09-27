#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_149/steam_api.h"
#include "steamworks_sdk_149/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_149
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils009.h"
void cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils009_GetConnectedUniverse( struct cppISteamUtils_SteamUtils009_GetConnectedUniverse_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils009_GetServerRealTime( struct cppISteamUtils_SteamUtils009_GetServerRealTime_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils009_GetIPCountry( struct cppISteamUtils_SteamUtils009_GetIPCountry_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils009_GetImageSize( struct cppISteamUtils_SteamUtils009_GetImageSize_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageSize( (int)params->iImage, (uint32 *)params->pnWidth, (uint32 *)params->pnHeight );
}

void cppISteamUtils_SteamUtils009_GetImageRGBA( struct cppISteamUtils_SteamUtils009_GetImageRGBA_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageRGBA( (int)params->iImage, (uint8 *)params->pubDest, (int)params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils009_GetCSERIPPort( struct cppISteamUtils_SteamUtils009_GetCSERIPPort_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCSERIPPort( (uint32 *)params->unIP, (uint16 *)params->usPort );
}

void cppISteamUtils_SteamUtils009_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils009_GetCurrentBatteryPower_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils009_GetAppID( struct cppISteamUtils_SteamUtils009_GetAppID_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAppID(  );
}

void cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationPosition( (ENotificationPosition)params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils009_IsAPICallCompleted( struct cppISteamUtils_SteamUtils009_IsAPICallCompleted_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsAPICallCompleted( (SteamAPICall_t)params->hSteamAPICall, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils009_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils009_GetAPICallFailureReason_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallFailureReason( (SteamAPICall_t)params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils009_GetAPICallResult( struct cppISteamUtils_SteamUtils009_GetAPICallResult_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallResult( (SteamAPICall_t)params->hSteamAPICall, (void *)params->pCallback, (int)params->cubCallback, (int)params->iCallbackExpected, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils009_RunFrame( struct cppISteamUtils_SteamUtils009_RunFrame_params *params )
{
    ((ISteamUtils*)params->linux_side)->RunFrame(  );
}

void cppISteamUtils_SteamUtils009_GetIPCCallCount( struct cppISteamUtils_SteamUtils009_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils009_SetWarningMessageHook( struct cppISteamUtils_SteamUtils009_SetWarningMessageHook_params *params )
{
    params->pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamUtils*)params->linux_side)->SetWarningMessageHook( (SteamAPIWarningMessageHook_t)params->pFunction );
}

void cppISteamUtils_SteamUtils009_IsOverlayEnabled( struct cppISteamUtils_SteamUtils009_IsOverlayEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils009_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils009_BOverlayNeedsPresent_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils009_CheckFileSignature( struct cppISteamUtils_SteamUtils009_CheckFileSignature_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->CheckFileSignature( (const char *)params->szFileName );
}

void cppISteamUtils_SteamUtils009_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils009_ShowGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->ShowGamepadTextInput( (EGamepadTextInputMode)params->eInputMode, (EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32)params->unCharMax, (const char *)params->pchExistingText );
}

void cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextInput( (char *)params->pchText, (uint32)params->cchText );
}

void cppISteamUtils_SteamUtils009_GetSteamUILanguage( struct cppISteamUtils_SteamUtils009_GetSteamUILanguage_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils009_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils009_IsSteamRunningInVR_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamRunningInVR(  );
}

void cppISteamUtils_SteamUtils009_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils009_SetOverlayNotificationInset_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationInset( (int)params->nHorizontalInset, (int)params->nVerticalInset );
}

void cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamInBigPictureMode(  );
}

void cppISteamUtils_SteamUtils009_StartVRDashboard( struct cppISteamUtils_SteamUtils009_StartVRDashboard_params *params )
{
    ((ISteamUtils*)params->linux_side)->StartVRDashboard(  );
}

void cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsVRHeadsetStreamingEnabled(  );
}

void cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetVRHeadsetStreamingEnabled( (bool)params->bEnabled );
}

void cppISteamUtils_SteamUtils009_IsSteamChinaLauncher( struct cppISteamUtils_SteamUtils009_IsSteamChinaLauncher_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamChinaLauncher(  );
}

void cppISteamUtils_SteamUtils009_InitFilterText( struct cppISteamUtils_SteamUtils009_InitFilterText_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->InitFilterText(  );
}

void cppISteamUtils_SteamUtils009_FilterText( struct cppISteamUtils_SteamUtils009_FilterText_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->FilterText( (char *)params->pchOutFilteredText, (uint32)params->nByteSizeOutFilteredText, (const char *)params->pchInputMessage, (bool)params->bLegalOnly );
}

void cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState( struct cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPv6ConnectivityState( (ESteamIPv6ConnectivityProtocol)params->eProtocol );
}

#ifdef __cplusplus
}
#endif
