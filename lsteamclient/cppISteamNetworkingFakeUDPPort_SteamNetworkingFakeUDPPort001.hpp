#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/steamnetworkingfakeip.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001
{
#ifdef __cplusplus
    virtual void DestroyFakeUDPPort(  ) = 0;
    virtual uint32_t SendMessageToFakeIP( const SteamNetworkingIPAddr *, const void *, uint32_t, int32_t ) = 0;
    virtual int32_t ReceiveMessages( SteamNetworkingMessage_t **, int32_t ) = 0;
    virtual void ScheduleCleanup( const SteamNetworkingIPAddr * ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params *params )
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    params->_ret = iface->SendMessageToFakeIP( params->remoteAddress, params->pData, params->cbData, params->nSendFlags );
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params *params )
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    iface->ScheduleCleanup( params->remoteAddress );
}

#ifdef __cplusplus
}
#endif
