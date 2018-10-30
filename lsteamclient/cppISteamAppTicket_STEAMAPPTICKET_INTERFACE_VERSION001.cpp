#include "steam_defs.h"
#include "steamworks_sdk_142/steam_api.h"
#include "steamworks_sdk_142/isteamappticket.h"
#include "steamclient_private.h"
#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_142.h"
uint32 cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(void *linux_side, uint32 nAppID, void * pvBuffer, uint32 cbBufferLength, uint32 * piAppId, uint32 * piSteamId, uint32 * piSignature, uint32 * pcbSignature)
{
    return ((ISteamAppTicket*)linux_side)->GetAppOwnershipTicketData((uint32)nAppID, (void *)pvBuffer, (uint32)cbBufferLength, (uint32 *)piAppId, (uint32 *)piSteamId, (uint32 *)piSignature, (uint32 *)pcbSignature);
}

#ifdef __cplusplus
}
#endif
