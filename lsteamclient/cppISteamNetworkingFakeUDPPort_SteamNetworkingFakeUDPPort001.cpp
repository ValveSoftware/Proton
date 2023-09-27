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
void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params *params )
{
    params->_ret = ((ISteamNetworkingFakeUDPPort*)params->linux_side)->SendMessageToFakeIP( *params->remoteAddress, (const void *)params->pData, (uint32)params->cbData, (int)params->nSendFlags );
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params *params )
{
    ((ISteamNetworkingFakeUDPPort*)params->linux_side)->ScheduleCleanup( *params->remoteAddress );
}

#ifdef __cplusplus
}
#endif
