#include "steam_defs.h"
#include "steamworks_sdk_next/steam_api.h"
#include "steamworks_sdk_next/isteamnetworkingsocketsserialized.h"
#include "steamclient_private.h"
#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_next.h"
void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(void *linux_side, CSteamID steamIDRemote, uint32 unConnectionIDSrc, const void * pMsgRendezvous, uint32 cbRendezvous)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->SendP2PRendezvous((CSteamID)steamIDRemote, (uint32)unConnectionIDSrc, (const void *)pMsgRendezvous, (uint32)cbRendezvous);
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(void *linux_side, CSteamID steamIDRemote, uint32 unConnectionIDDest, uint32 nReason, const char * pszReason)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->SendP2PConnectionFailure((CSteamID)steamIDRemote, (uint32)unConnectionIDDest, (uint32)nReason, (const char *)pszReason);
}

SteamAPICall_t cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(void *linux_side)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCertAsync();
}

int cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(void *linux_side, void * buf, uint32 cbBuf)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetNetworkConfigJSON((void *)buf, (uint32)cbBuf);
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(void *linux_side, const void * pTicket, uint32 cbTicket)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->CacheRelayTicket((const void *)pTicket, (uint32)cbTicket);
}

uint32 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(void *linux_side)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCachedRelayTicketCount();
}

int cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(void *linux_side, uint32 idxTicket, void * buf, uint32 cbBuf)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCachedRelayTicket((uint32)idxTicket, (void *)buf, (uint32)cbBuf);
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(void *linux_side, const void * pMsg, uint32 cbMsg)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->PostConnectionStateMsg((const void *)pMsg, (uint32)cbMsg);
}

#ifdef __cplusplus
}
#endif
