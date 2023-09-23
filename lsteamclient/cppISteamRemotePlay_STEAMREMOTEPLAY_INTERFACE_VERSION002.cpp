#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002.h"
uint32 cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->GetSessionCount();
    return (_ret);
}

RemotePlaySessionID_t cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID(void *linux_side, int iSessionIndex)
{
    RemotePlaySessionID_t _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->GetSessionID((int)iSessionIndex);
    return (_ret);
}

CSteamID cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID(void *linux_side, RemotePlaySessionID_t unSessionID)
{
    CSteamID _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->GetSessionSteamID((RemotePlaySessionID_t)unSessionID);
    return (_ret);
}

const char * cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName(void *linux_side, RemotePlaySessionID_t unSessionID)
{
    const char *_ret;
    _ret = ((ISteamRemotePlay*)linux_side)->GetSessionClientName((RemotePlaySessionID_t)unSessionID);
    return (_ret);
}

ESteamDeviceFormFactor cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor(void *linux_side, RemotePlaySessionID_t unSessionID)
{
    ESteamDeviceFormFactor _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->GetSessionClientFormFactor((RemotePlaySessionID_t)unSessionID);
    return (_ret);
}

bool cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution(void *linux_side, RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)
{
    bool _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->BGetSessionClientResolution((RemotePlaySessionID_t)unSessionID, (int *)pnResolutionX, (int *)pnResolutionY);
    return (_ret);
}

bool cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether(void *linux_side, bool bShowOverlay)
{
    bool _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->BStartRemotePlayTogether((bool)bShowOverlay);
    return (_ret);
}

bool cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite(void *linux_side, CSteamID steamIDFriend)
{
    bool _ret;
    _ret = ((ISteamRemotePlay*)linux_side)->BSendRemotePlayTogetherInvite((CSteamID)steamIDFriend);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
