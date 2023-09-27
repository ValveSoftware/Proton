#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils002.h"
void cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils002_GetConnectedUniverse( struct cppISteamUtils_SteamUtils002_GetConnectedUniverse_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils002_GetServerRealTime( struct cppISteamUtils_SteamUtils002_GetServerRealTime_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils002_GetIPCountry( struct cppISteamUtils_SteamUtils002_GetIPCountry_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils002_GetImageSize( struct cppISteamUtils_SteamUtils002_GetImageSize_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageSize( (int)params->iImage, (uint32 *)params->pnWidth, (uint32 *)params->pnHeight );
}

void cppISteamUtils_SteamUtils002_GetImageRGBA( struct cppISteamUtils_SteamUtils002_GetImageRGBA_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetImageRGBA( (int)params->iImage, (uint8 *)params->pubDest, (int)params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils002_GetCSERIPPort( struct cppISteamUtils_SteamUtils002_GetCSERIPPort_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCSERIPPort( (uint32 *)params->unIP, (uint16 *)params->usPort );
}

void cppISteamUtils_SteamUtils002_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils002_GetCurrentBatteryPower_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils002_GetAppID( struct cppISteamUtils_SteamUtils002_GetAppID_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAppID(  );
}

void cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params *params )
{
    ((ISteamUtils*)params->linux_side)->SetOverlayNotificationPosition( (ENotificationPosition)params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils002_IsAPICallCompleted( struct cppISteamUtils_SteamUtils002_IsAPICallCompleted_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->IsAPICallCompleted( (SteamAPICall_t)params->hSteamAPICall, (bool *)params->pbFailed );
}

void cppISteamUtils_SteamUtils002_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils002_GetAPICallFailureReason_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallFailureReason( (SteamAPICall_t)params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils002_GetAPICallResult( struct cppISteamUtils_SteamUtils002_GetAPICallResult_params *params )
{
    params->_ret = ((ISteamUtils*)params->linux_side)->GetAPICallResult( (SteamAPICall_t)params->hSteamAPICall, (void *)params->pCallback, (int)params->cubCallback, (int)params->iCallbackExpected, (bool *)params->pbFailed );
}

#ifdef __cplusplus
}
#endif
