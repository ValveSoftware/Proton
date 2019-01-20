#include "steam_defs.h"
#include "steamworks_sdk_140/steam_api.h"
#include "steamworks_sdk_140/isteamnetworkingsocketsserialized.h"
#include "steamclient_private.h"
#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_140.h"
uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous(void *linux_side, CSteamID _a, uint32 _b, const void * _c, uint32 _d)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->SendP2PRendezvous((CSteamID)_a, (uint32)_b, (const void *)_c, (uint32)_d);
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure(void *linux_side, CSteamID _a, uint32 _b, uint32 _c, const char * _d)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->SendP2PConnectionFailure((CSteamID)_a, (uint32)_b, (uint32)_c, (const char *)_d);
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync(void *linux_side)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCertAsync();
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON(void *linux_side, void * _a, uint32 _b, const char * _c)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetNetworkConfigJSON((void *)_a, (uint32)_b, (const char *)_c);
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket(void *linux_side, const void * _a, uint32 _b)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->CacheRelayTicket((const void *)_a, (uint32)_b);
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount(void *linux_side)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCachedRelayTicketCount();
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket(void *linux_side, uint32 _a, void * _b, uint32 _c, uint32 _d)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCachedRelayTicket((uint32)_a, (void *)_b, (uint32)_c, (uint32)_d);
}

uint64 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg(void *linux_side, const void * _a, uint32 _b)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->PostConnectionStateMsg((const void *)_a, (uint32)_b);
}

#ifdef __cplusplus
}
#endif
