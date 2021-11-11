#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_153_preview/steam_api.h"
#include "steamworks_sdk_153_preview/steamnetworkingtypes.h"
#include "steamworks_sdk_153_preview/isteamappticket.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_153_preview
#include "struct_converters.h"
#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"
uint32 cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(void *linux_side, uint32 nAppID, void * pvBuffer, uint32 cbBufferLength, uint32 * piAppId, uint32 * piSteamId, uint32 * piSignature, uint32 * pcbSignature)
{
    return ((ISteamAppTicket*)linux_side)->GetAppOwnershipTicketData((uint32)nAppID, (void *)pvBuffer, (uint32)cbBufferLength, (uint32 *)piAppId, (uint32 *)piSteamId, (uint32 *)piSignature, (uint32 *)pcbSignature);
}

#ifdef __cplusplus
}
#endif
