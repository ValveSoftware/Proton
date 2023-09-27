#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_141/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_141
#include "struct_converters.h"
#include "cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001.h"
void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params *params )
{
    params->_ret = ((ISteamUnifiedMessages*)params->linux_side)->SendMethod( (const char *)params->pchServiceMethod, (const void *)params->pRequestBuffer, (uint32)params->unRequestBufferSize, (uint64)params->unContext );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params *params )
{
    params->_ret = ((ISteamUnifiedMessages*)params->linux_side)->GetMethodResponseInfo( (ClientUnifiedMessageHandle)params->hHandle, (uint32 *)params->punResponseSize, (EResult *)params->peResult );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params *params )
{
    params->_ret = ((ISteamUnifiedMessages*)params->linux_side)->GetMethodResponseData( (ClientUnifiedMessageHandle)params->hHandle, (void *)params->pResponseBuffer, (uint32)params->unResponseBufferSize, (bool)params->bAutoRelease );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params *params )
{
    params->_ret = ((ISteamUnifiedMessages*)params->linux_side)->ReleaseMethod( (ClientUnifiedMessageHandle)params->hHandle );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params *params )
{
    params->_ret = ((ISteamUnifiedMessages*)params->linux_side)->SendNotification( (const char *)params->pchServiceNotification, (const void *)params->pNotificationBuffer, (uint32)params->unNotificationBufferSize );
}

#ifdef __cplusplus
}
#endif
