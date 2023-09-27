#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamnetworkingmessages.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.h"
void cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params *params )
{
    params->_ret = ((ISteamNetworkingMessages*)params->linux_side)->SendMessageToUser( *params->identityRemote, (const void *)params->pubData, (uint32)params->cubData, (int)params->nSendFlags, (int)params->nRemoteChannel );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params *params )
{
    params->_ret = ((ISteamNetworkingMessages*)params->linux_side)->AcceptSessionWithUser( *params->identityRemote );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params *params )
{
    params->_ret = ((ISteamNetworkingMessages*)params->linux_side)->CloseSessionWithUser( *params->identityRemote );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params *params )
{
    params->_ret = ((ISteamNetworkingMessages*)params->linux_side)->CloseChannelWithUser( *params->identityRemote, (int)params->nLocalChannel );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params *params )
{
    params->_ret = ((ISteamNetworkingMessages*)params->linux_side)->GetSessionConnectionInfo( *params->identityRemote, (SteamNetConnectionInfo_t *)params->pConnectionInfo, (SteamNetConnectionRealTimeStatus_t *)params->pQuickStatus );
}

#ifdef __cplusplus
}
#endif
