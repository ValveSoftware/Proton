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
ClientUnifiedMessageHandle cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod(void *linux_side, const char * pchServiceMethod, const void * pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext)
{
    return ((ISteamUnifiedMessages*)linux_side)->SendMethod((const char *)pchServiceMethod, (const void *)pRequestBuffer, (uint32)unRequestBufferSize, (uint64)unContext);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo(void *linux_side, ClientUnifiedMessageHandle hHandle, uint32 * punResponseSize, EResult * peResult)
{
    return ((ISteamUnifiedMessages*)linux_side)->GetMethodResponseInfo((ClientUnifiedMessageHandle)hHandle, (uint32 *)punResponseSize, (EResult *)peResult);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData(void *linux_side, ClientUnifiedMessageHandle hHandle, void * pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease)
{
    return ((ISteamUnifiedMessages*)linux_side)->GetMethodResponseData((ClientUnifiedMessageHandle)hHandle, (void *)pResponseBuffer, (uint32)unResponseBufferSize, (bool)bAutoRelease);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod(void *linux_side, ClientUnifiedMessageHandle hHandle)
{
    return ((ISteamUnifiedMessages*)linux_side)->ReleaseMethod((ClientUnifiedMessageHandle)hHandle);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification(void *linux_side, const char * pchServiceNotification, const void * pNotificationBuffer, uint32 unNotificationBufferSize)
{
    return ((ISteamUnifiedMessages*)linux_side)->SendNotification((const char *)pchServiceNotification, (const void *)pNotificationBuffer, (uint32)unNotificationBufferSize);
}

#ifdef __cplusplus
}
#endif
