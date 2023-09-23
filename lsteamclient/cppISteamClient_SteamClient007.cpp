#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamClient_SteamClient007.h"
HSteamPipe cppISteamClient_SteamClient007_CreateSteamPipe(void *linux_side)
{
    HSteamPipe _ret;
    _ret = ((ISteamClient*)linux_side)->CreateSteamPipe();
    return after_steam_pipe_create(_ret);
}

bool cppISteamClient_SteamClient007_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    bool _ret;
    _ret = ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient007_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient007_CreateLocalUser(void *linux_side, HSteamPipe *phSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe);
    return (_ret);
}

void cppISteamClient_SteamClient007_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void /*ISteamUser*/ * cppISteamClient_SteamClient007_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamGameServer*/ * cppISteamClient_SteamClient007_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient007_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

void /*ISteamFriends*/ * cppISteamClient_SteamClient007_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUtils*/ * cppISteamClient_SteamClient007_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmaking*/ * cppISteamClient_SteamClient007_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamContentServer*/ * cppISteamClient_SteamClient007_GetISteamContentServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamContentServer*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamContentServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMasterServerUpdater*/ * cppISteamClient_SteamClient007_GetISteamMasterServerUpdater(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMasterServerUpdater((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmakingServers*/ * cppISteamClient_SteamClient007_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient007_GetISteamGenericInterface(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient007_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient007_GetIPCCallCount(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamClient*)linux_side)->GetIPCCallCount();
    return (_ret);
}

void /*ISteamUserStats*/ * cppISteamClient_SteamClient007_GetISteamUserStats(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUserStats((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamApps*/ * cppISteamClient_SteamClient007_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamNetworking*/ * cppISteamClient_SteamClient007_GetISteamNetworking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamNetworking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient007_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamClient*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

void /*ISteamRemoteStorage*/ * cppISteamClient_SteamClient007_GetISteamRemoteStorage(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamRemoteStorage((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
