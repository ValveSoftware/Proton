#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_123a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_123a
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils005.h"
void cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils005_GetConnectedUniverse( struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils005_GetServerRealTime( struct cppISteamUtils_SteamUtils005_GetServerRealTime_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils005_GetIPCountry( struct cppISteamUtils_SteamUtils005_GetIPCountry_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils005_GetImageSize( struct cppISteamUtils_SteamUtils005_GetImageSize_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageSize( (int)params->iImage, (uint32 *)params->pnWidth, (uint32 *)params->pnHeight );
}

void cppISteamUtils_SteamUtils005_GetImageRGBA( struct cppISteamUtils_SteamUtils005_GetImageRGBA_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageRGBA( (int)params->iImage, (uint8 *)params->pubDest, (int)params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils005_GetCSERIPPort( struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCSERIPPort( (uint32 *)params->unIP, (uint16 *)params->usPort );
}

void cppISteamUtils_SteamUtils005_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils005_GetAppID( struct cppISteamUtils_SteamUtils005_GetAppID_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAppID(  );
}

void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationPosition( (ENotificationPosition)params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils005_IsAPICallCompleted( struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsAPICallCompleted( (SteamAPICall_t)params->hSteamAPICall, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils005_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallFailureReason( (SteamAPICall_t)params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils005_GetAPICallResult( struct cppISteamUtils_SteamUtils005_GetAPICallResult_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallResult( (SteamAPICall_t)params->hSteamAPICall, (void *)params->pCallback, (int)params->cubCallback, (int)params->iCallbackExpected, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils005_RunFrame( struct cppISteamUtils_SteamUtils005_RunFrame_params *params )
{
    ((ISteamUtils*)params->linux_side)->RunFrame(  );
}

void cppISteamUtils_SteamUtils005_GetIPCCallCount( struct cppISteamUtils_SteamUtils005_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils005_SetWarningMessageHook( struct cppISteamUtils_SteamUtils005_SetWarningMessageHook_params *params )
{
    SteamAPIWarningMessageHook_t lin_pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamUtils*)params->linux_side)->SetWarningMessageHook( lin_pFunction );
}

void cppISteamUtils_SteamUtils005_IsOverlayEnabled( struct cppISteamUtils_SteamUtils005_IsOverlayEnabled_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils005_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils005_BOverlayNeedsPresent_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils005_CheckFileSignature( struct cppISteamUtils_SteamUtils005_CheckFileSignature_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->CheckFileSignature( (const char *)params->szFileName );
}

void cppISteamUtils_SteamUtils005_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->ShowGamepadTextInput( (EGamepadTextInputMode)params->eInputMode, (EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32)params->unCharMax );
}

void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetEnteredGamepadTextInput( (char *)params->pchText, (uint32)params->cchText );
}

#ifdef __cplusplus
}
#endif
