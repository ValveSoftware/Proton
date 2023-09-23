#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamappticket.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"
uint32 cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(void *linux_side, uint32 nAppID, void *pvBuffer, uint32 cbBufferLength, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature)
{
    uint32 _ret;
    _ret = ((ISteamAppTicket*)linux_side)->GetAppOwnershipTicketData((uint32)nAppID, (void *)pvBuffer, (uint32)cbBufferLength, (uint32 *)piAppId, (uint32 *)piSteamId, (uint32 *)piSignature, (uint32 *)pcbSignature);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
