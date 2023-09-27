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
void cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params )
{
    params->_ret = ((ISteamAppTicket*)params->linux_side)->GetAppOwnershipTicketData( (uint32)params->nAppID, (void *)params->pvBuffer, (uint32)params->cbBufferLength, (uint32 *)params->piAppId, (uint32 *)params->piSteamId, (uint32 *)params->piSignature, (uint32 *)params->pcbSignature );
}

#ifdef __cplusplus
}
#endif
