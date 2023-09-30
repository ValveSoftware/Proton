/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->SendP2PRendezvous( params->steamIDRemote, params->unConnectionIDSrc, params->pMsgRendezvous, params->cbRendezvous );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->SendP2PConnectionFailure( params->steamIDRemote, params->unConnectionIDDest, params->nReason, params->pszReason );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetCertAsync(  );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetNetworkConfigJSON( params->buf, params->cbBuf, params->pszLauncherPartner );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->CacheRelayTicket( params->pTicket, params->cbTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetCachedRelayTicketCount(  );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetCachedRelayTicket( params->idxTicket, params->buf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->PostConnectionStateMsg( params->pMsg, params->cbMsg );
    return 0;
}

