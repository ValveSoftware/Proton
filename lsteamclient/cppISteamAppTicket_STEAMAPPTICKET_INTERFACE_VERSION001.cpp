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

struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetAppOwnershipTicketData( uint32_t, void *, uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params )
{
    struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *iface = (struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppOwnershipTicketData( params->nAppID, params->pvBuffer, params->cbBufferLength, params->piAppId, params->piSteamId, params->piSignature, params->pcbSignature );
}

#ifdef __cplusplus
}
#endif
