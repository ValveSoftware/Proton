#include "steam_defs.h"
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_146
#include "struct_converters.h"
#include "cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001.h"
uint32 cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount(void *linux_side)
{
    return ((ISteamRemotePlay*)linux_side)->GetSessionCount();
}

uint32 cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID(void *linux_side, int iSessionIndex)
{
    return ((ISteamRemotePlay*)linux_side)->GetSessionID((int)iSessionIndex);
}

CSteamID cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID(void *linux_side, uint32 unSessionID)
{
    return ((ISteamRemotePlay*)linux_side)->GetSessionSteamID((uint32)unSessionID);
}

const char * cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName(void *linux_side, uint32 unSessionID)
{
    return ((ISteamRemotePlay*)linux_side)->GetSessionClientName((uint32)unSessionID);
}

ESteamDeviceFormFactor cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor(void *linux_side, uint32 unSessionID)
{
    return ((ISteamRemotePlay*)linux_side)->GetSessionClientFormFactor((uint32)unSessionID);
}

bool cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution(void *linux_side, uint32 unSessionID, int * pnResolutionX, int * pnResolutionY)
{
    return ((ISteamRemotePlay*)linux_side)->BGetSessionClientResolution((uint32)unSessionID, (int *)pnResolutionX, (int *)pnResolutionY);
}

#ifdef __cplusplus
}
#endif
