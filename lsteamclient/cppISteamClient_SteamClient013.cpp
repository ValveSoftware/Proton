#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_128x
#include "struct_converters.h"
#include "cppISteamClient_SteamClient013.h"
HSteamPipe cppISteamClient_SteamClient013_CreateSteamPipe(void *linux_side)
{
    HSteamPipe _ret;
    _ret = ((ISteamClient*)linux_side)->CreateSteamPipe();
    return after_steam_pipe_create(_ret);
}

bool cppISteamClient_SteamClient013_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    bool _ret;
    _ret = ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient013_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient013_CreateLocalUser(void *linux_side, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe, (EAccountType)eAccountType);
    return (_ret);
}

void cppISteamClient_SteamClient013_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void /*ISteamUser*/ * cppISteamClient_SteamClient013_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamGameServer*/ * cppISteamClient_SteamClient013_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient013_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

void /*ISteamFriends*/ * cppISteamClient_SteamClient013_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUtils*/ * cppISteamClient_SteamClient013_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmaking*/ * cppISteamClient_SteamClient013_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmakingServers*/ * cppISteamClient_SteamClient013_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient013_GetISteamGenericInterface(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUserStats*/ * cppISteamClient_SteamClient013_GetISteamUserStats(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUserStats((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamGameServerStats*/ * cppISteamClient_SteamClient013_GetISteamGameServerStats(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameServerStats((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamApps*/ * cppISteamClient_SteamClient013_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamNetworking*/ * cppISteamClient_SteamClient013_GetISteamNetworking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamNetworking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamRemoteStorage*/ * cppISteamClient_SteamClient013_GetISteamRemoteStorage(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamRemoteStorage((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamScreenshots*/ * cppISteamClient_SteamClient013_GetISteamScreenshots(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamScreenshots((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient013_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient013_GetIPCCallCount(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamClient*)linux_side)->GetIPCCallCount();
    return (_ret);
}

void cppISteamClient_SteamClient013_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamClient*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamClient*)linux_side)->BShutdownIfAllPipesClosed();
    return after_shutdown(_ret);
}

void /*ISteamHTTP*/ * cppISteamClient_SteamClient013_GetISteamHTTP(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamHTTP((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUnifiedMessages*/ * cppISteamClient_SteamClient013_GetISteamUnifiedMessages(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUnifiedMessages*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUnifiedMessages((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamController*/ * cppISteamClient_SteamClient013_GetISteamController(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamController((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUGC*/ * cppISteamClient_SteamClient013_GetISteamUGC(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUGC((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient013_GetISteamInventory(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamInventory((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient013_GetISteamVideo(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamVideo((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamAppList*/ * cppISteamClient_SteamClient013_GetISteamAppList(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamAppList((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
