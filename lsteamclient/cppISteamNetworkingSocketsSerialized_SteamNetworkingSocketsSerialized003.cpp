/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003.h"

struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003
{
#ifdef __cplusplus
    virtual void SendP2PRendezvous( CSteamID, uint32_t, const void *, uint32_t ) = 0;
    virtual void SendP2PConnectionFailure( CSteamID, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t GetCertAsync(  ) = 0;
    virtual int32_t GetNetworkConfigJSON( void *, uint32_t, const char * ) = 0;
    virtual void CacheRelayTicket( const void *, uint32_t ) = 0;
    virtual uint32_t GetCachedRelayTicketCount(  ) = 0;
    virtual int32_t GetCachedRelayTicket( uint32_t, void *, uint32_t ) = 0;
    virtual void PostConnectionStateMsg( const void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->SendP2PRendezvous( params->steamIDRemote, params->unConnectionIDSrc, params->pMsgRendezvous, params->cbRendezvous );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->SendP2PConnectionFailure( params->steamIDRemote, params->unConnectionIDDest, params->nReason, params->pszReason );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetCertAsync(  );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetNetworkConfigJSON( params->buf, params->cbBuf, params->pszLauncherPartner );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->CacheRelayTicket( params->pTicket, params->cbTicket );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetCachedRelayTicketCount(  );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    params->_ret = iface->GetCachedRelayTicket( params->idxTicket, params->buf, params->cbBuf );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg_params *params )
{
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *)params->linux_side;
    iface->PostConnectionStateMsg( params->pMsg, params->cbMsg );
}

