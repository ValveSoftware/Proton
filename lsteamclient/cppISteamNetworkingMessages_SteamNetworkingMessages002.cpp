#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#include "steamworks_sdk_157/isteamnetworkingmessages.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.h"
EResult cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(void *linux_side, const SteamNetworkingIdentity * identityRemote, const void * pubData, uint32 cubData, int nSendFlags, int nRemoteChannel)
{
    return ((ISteamNetworkingMessages*)linux_side)->SendMessageToUser(*identityRemote, (const void *)pubData, (uint32)cubData, (int)nSendFlags, (int)nRemoteChannel);
}

bool cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(void *linux_side, const SteamNetworkingIdentity * identityRemote)
{
    return ((ISteamNetworkingMessages*)linux_side)->AcceptSessionWithUser(*identityRemote);
}

bool cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(void *linux_side, const SteamNetworkingIdentity * identityRemote)
{
    return ((ISteamNetworkingMessages*)linux_side)->CloseSessionWithUser(*identityRemote);
}

bool cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(void *linux_side, const SteamNetworkingIdentity * identityRemote, int nLocalChannel)
{
    return ((ISteamNetworkingMessages*)linux_side)->CloseChannelWithUser(*identityRemote, (int)nLocalChannel);
}

ESteamNetworkingConnectionState cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(void *linux_side, const SteamNetworkingIdentity * identityRemote, SteamNetConnectionInfo_t * pConnectionInfo, SteamNetConnectionRealTimeStatus_t * pQuickStatus)
{
    return ((ISteamNetworkingMessages*)linux_side)->GetSessionConnectionInfo(*identityRemote, (SteamNetConnectionInfo_t *)pConnectionInfo, (SteamNetConnectionRealTimeStatus_t *)pQuickStatus);
}

#ifdef __cplusplus
}
#endif
