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

struct cppISteamNetworkingMessages_SteamNetworkingMessages002
{
#ifdef __cplusplus
    virtual uint32_t SendMessageToUser( const SteamNetworkingIdentity *, const void *, uint32_t, int32_t, int32_t ) = 0;
    virtual int32_t ReceiveMessagesOnChannel( int32_t, SteamNetworkingMessage_t **, int32_t ) = 0;
    virtual bool AcceptSessionWithUser( const SteamNetworkingIdentity * ) = 0;
    virtual bool CloseSessionWithUser( const SteamNetworkingIdentity * ) = 0;
    virtual bool CloseChannelWithUser( const SteamNetworkingIdentity *, int32_t ) = 0;
    virtual uint32_t GetSessionConnectionInfo( const SteamNetworkingIdentity *, SteamNetConnectionInfo_t *, SteamNetConnectionRealTimeStatus_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params *params )
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->SendMessageToUser( params->identityRemote, params->pubData, params->cubData, params->nSendFlags, params->nRemoteChannel );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params *params )
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->AcceptSessionWithUser( params->identityRemote );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params *params )
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->CloseSessionWithUser( params->identityRemote );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params *params )
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->CloseChannelWithUser( params->identityRemote, params->nLocalChannel );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params *params )
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct cppISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->GetSessionConnectionInfo( params->identityRemote, params->pConnectionInfo, params->pQuickStatus );
}

#ifdef __cplusplus
}
#endif
