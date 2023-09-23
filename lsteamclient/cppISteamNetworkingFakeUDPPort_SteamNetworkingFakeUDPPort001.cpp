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
EResult cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(void *linux_side, const SteamNetworkingIPAddr *remoteAddress, const void *pData, uint32 cbData, int nSendFlags)
{
    EResult _ret;
    _ret = ((ISteamNetworkingFakeUDPPort*)linux_side)->SendMessageToFakeIP(*remoteAddress, (const void *)pData, (uint32)cbData, (int)nSendFlags);
    return (_ret);
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(void *linux_side, const SteamNetworkingIPAddr *remoteAddress)
{
    ((ISteamNetworkingFakeUDPPort*)linux_side)->ScheduleCleanup(*remoteAddress);
}

#ifdef __cplusplus
}
#endif
