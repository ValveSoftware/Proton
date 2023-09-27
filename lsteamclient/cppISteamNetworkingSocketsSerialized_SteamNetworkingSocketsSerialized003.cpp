#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_143y/steam_api.h"
#include "steamworks_sdk_143y/isteamnetworkingsocketsserialized.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_143y
#include "struct_converters.h"
#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003.h"
void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous_params *params )
{
    ((ISteamNetworkingSocketsSerialized*)params->linux_side)->SendP2PRendezvous( (CSteamID)params->steamIDRemote, (uint32)params->unConnectionIDSrc, (const void *)params->pMsgRendezvous, (uint32)params->cbRendezvous );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure_params *params )
{
    ((ISteamNetworkingSocketsSerialized*)params->linux_side)->SendP2PConnectionFailure( (CSteamID)params->steamIDRemote, (uint32)params->unConnectionIDDest, (uint32)params->nReason, (const char *)params->pszReason );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync_params *params )
{
    params->_ret = ((ISteamNetworkingSocketsSerialized*)params->linux_side)->GetCertAsync(  );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON_params *params )
{
    params->_ret = ((ISteamNetworkingSocketsSerialized*)params->linux_side)->GetNetworkConfigJSON( (void *)params->buf, (uint32)params->cbBuf, (const char *)params->pszLauncherPartner );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket_params *params )
{
    ((ISteamNetworkingSocketsSerialized*)params->linux_side)->CacheRelayTicket( (const void *)params->pTicket, (uint32)params->cbTicket );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount_params *params )
{
    params->_ret = ((ISteamNetworkingSocketsSerialized*)params->linux_side)->GetCachedRelayTicketCount(  );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket_params *params )
{
    params->_ret = ((ISteamNetworkingSocketsSerialized*)params->linux_side)->GetCachedRelayTicket( (uint32)params->idxTicket, (void *)params->buf, (uint32)params->cbBuf );
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg_params *params )
{
    ((ISteamNetworkingSocketsSerialized*)params->linux_side)->PostConnectionStateMsg( (const void *)params->pMsg, (uint32)params->cbMsg );
}

#ifdef __cplusplus
}
#endif
