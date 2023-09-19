#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_128
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils006.h"
void cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils006_GetConnectedUniverse( struct cppISteamUtils_SteamUtils006_GetConnectedUniverse_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils006_GetServerRealTime( struct cppISteamUtils_SteamUtils006_GetServerRealTime_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils006_GetIPCountry( struct cppISteamUtils_SteamUtils006_GetIPCountry_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils006_GetImageSize( struct cppISteamUtils_SteamUtils006_GetImageSize_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageSize( (int)params->iImage, (uint32 *)params->pnWidth, (uint32 *)params->pnHeight );
}

void cppISteamUtils_SteamUtils006_GetImageRGBA( struct cppISteamUtils_SteamUtils006_GetImageRGBA_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageRGBA( (int)params->iImage, (uint8 *)params->pubDest, (int)params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils006_GetCSERIPPort( struct cppISteamUtils_SteamUtils006_GetCSERIPPort_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCSERIPPort( (uint32 *)params->unIP, (uint16 *)params->usPort );
}

void cppISteamUtils_SteamUtils006_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils006_GetCurrentBatteryPower_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils006_GetAppID( struct cppISteamUtils_SteamUtils006_GetAppID_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAppID(  );
}

void cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationPosition( (ENotificationPosition)params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils006_IsAPICallCompleted( struct cppISteamUtils_SteamUtils006_IsAPICallCompleted_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsAPICallCompleted( (SteamAPICall_t)params->hSteamAPICall, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils006_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils006_GetAPICallFailureReason_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallFailureReason( (SteamAPICall_t)params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils006_GetAPICallResult( struct cppISteamUtils_SteamUtils006_GetAPICallResult_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallResult( (SteamAPICall_t)params->hSteamAPICall, (void *)params->pCallback, (int)params->cubCallback, (int)params->iCallbackExpected, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils006_RunFrame( struct cppISteamUtils_SteamUtils006_RunFrame_params *params )
{
    ((ISteamUtils*)params->linux_side)->RunFrame(  );
}

void cppISteamUtils_SteamUtils006_GetIPCCallCount( struct cppISteamUtils_SteamUtils006_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils006_SetWarningMessageHook( struct cppISteamUtils_SteamUtils006_SetWarningMessageHook_params *params )
{
    SteamAPIWarningMessageHook_t lin_pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamUtils*)params->linux_side)->SetWarningMessageHook( lin_pFunction );
}

void cppISteamUtils_SteamUtils006_IsOverlayEnabled( struct cppISteamUtils_SteamUtils006_IsOverlayEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils006_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils006_BOverlayNeedsPresent_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils006_CheckFileSignature( struct cppISteamUtils_SteamUtils006_CheckFileSignature_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->CheckFileSignature( (const char *)params->szFileName );
}

void cppISteamUtils_SteamUtils006_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils006_ShowGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->ShowGamepadTextInput( (EGamepadTextInputMode)params->eInputMode, (EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32)params->unCharMax );
}

void cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextInput( (char *)params->pchText, (uint32)params->cchText );
}

void cppISteamUtils_SteamUtils006_GetSteamUILanguage( struct cppISteamUtils_SteamUtils006_GetSteamUILanguage_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils006_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils006_IsSteamRunningInVR_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsSteamRunningInVR(  );
}

#ifdef __cplusplus
}
#endif
