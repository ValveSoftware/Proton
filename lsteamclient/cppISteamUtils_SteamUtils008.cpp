#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_139/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_139
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils008.h"
void cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils008_GetConnectedUniverse( struct cppISteamUtils_SteamUtils008_GetConnectedUniverse_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils008_GetServerRealTime( struct cppISteamUtils_SteamUtils008_GetServerRealTime_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils008_GetIPCountry( struct cppISteamUtils_SteamUtils008_GetIPCountry_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils008_GetImageSize( struct cppISteamUtils_SteamUtils008_GetImageSize_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageSize( (int)params->iImage, (uint32 *)params->pnWidth, (uint32 *)params->pnHeight );
}

void cppISteamUtils_SteamUtils008_GetImageRGBA( struct cppISteamUtils_SteamUtils008_GetImageRGBA_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageRGBA( (int)params->iImage, (uint8 *)params->pubDest, (int)params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils008_GetCSERIPPort( struct cppISteamUtils_SteamUtils008_GetCSERIPPort_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCSERIPPort( (uint32 *)params->unIP, (uint16 *)params->usPort );
}

void cppISteamUtils_SteamUtils008_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils008_GetCurrentBatteryPower_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils008_GetAppID( struct cppISteamUtils_SteamUtils008_GetAppID_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAppID(  );
}

void cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationPosition( (ENotificationPosition)params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils008_IsAPICallCompleted( struct cppISteamUtils_SteamUtils008_IsAPICallCompleted_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsAPICallCompleted( (SteamAPICall_t)params->hSteamAPICall, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils008_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils008_GetAPICallFailureReason_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallFailureReason( (SteamAPICall_t)params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils008_GetAPICallResult( struct cppISteamUtils_SteamUtils008_GetAPICallResult_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallResult( (SteamAPICall_t)params->hSteamAPICall, (void *)params->pCallback, (int)params->cubCallback, (int)params->iCallbackExpected, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils008_RunFrame( struct cppISteamUtils_SteamUtils008_RunFrame_params *params )
{
    ((ISteamUtils*)params->linux_side)->RunFrame(  );
}

void cppISteamUtils_SteamUtils008_GetIPCCallCount( struct cppISteamUtils_SteamUtils008_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils008_SetWarningMessageHook( struct cppISteamUtils_SteamUtils008_SetWarningMessageHook_params *params )
{
    params->pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamUtils*)params->linux_side)->SetWarningMessageHook( (SteamAPIWarningMessageHook_t)params->pFunction );
}

void cppISteamUtils_SteamUtils008_IsOverlayEnabled( struct cppISteamUtils_SteamUtils008_IsOverlayEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils008_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils008_BOverlayNeedsPresent_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils008_CheckFileSignature( struct cppISteamUtils_SteamUtils008_CheckFileSignature_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->CheckFileSignature( (const char *)params->szFileName );
}

void cppISteamUtils_SteamUtils008_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils008_ShowGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->ShowGamepadTextInput( (EGamepadTextInputMode)params->eInputMode, (EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32)params->unCharMax, (const char *)params->pchExistingText );
}

void cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextInput( (char *)params->pchText, (uint32)params->cchText );
}

void cppISteamUtils_SteamUtils008_GetSteamUILanguage( struct cppISteamUtils_SteamUtils008_GetSteamUILanguage_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils008_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils008_IsSteamRunningInVR_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamRunningInVR(  );
}

void cppISteamUtils_SteamUtils008_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils008_SetOverlayNotificationInset_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationInset( (int)params->nHorizontalInset, (int)params->nVerticalInset );
}

void cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamInBigPictureMode(  );
}

void cppISteamUtils_SteamUtils008_StartVRDashboard( struct cppISteamUtils_SteamUtils008_StartVRDashboard_params *params )
{
    ((ISteamUtils*)params->linux_side)->StartVRDashboard(  );
}

#ifdef __cplusplus
}
#endif
