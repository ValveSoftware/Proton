#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamClient_SteamClient006.h"
HSteamPipe cppISteamClient_SteamClient006_CreateSteamPipe(void *linux_side)
{
    HSteamPipe _ret;
    _ret = ((ISteamClient*)linux_side)->CreateSteamPipe();
    return after_steam_pipe_create(_ret);
}

bool cppISteamClient_SteamClient006_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    bool _ret;
    _ret = ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient006_CreateGlobalUser(void *linux_side, HSteamPipe *phSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->CreateGlobalUser((HSteamPipe *)phSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient006_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient006_CreateLocalUser(void *linux_side, HSteamPipe *phSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe);
    return (_ret);
}

void cppISteamClient_SteamClient006_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void /*ISteamUser*/ * cppISteamClient_SteamClient006_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient006_GetIVAC(void *linux_side, HSteamUser hSteamUser)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetIVAC((HSteamUser)hSteamUser);
    return (_ret);
}

void /*ISteamGameServer*/ * cppISteamClient_SteamClient006_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient006_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

const char * cppISteamClient_SteamClient006_GetUniverseName(void *linux_side, EUniverse eUniverse)
{
    const char *_ret;
    _ret = ((ISteamClient*)linux_side)->GetUniverseName((EUniverse)eUniverse);
    return (_ret);
}

void /*ISteamFriends*/ * cppISteamClient_SteamClient006_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUtils*/ * cppISteamClient_SteamClient006_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient006_GetISteamBilling(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamBilling((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmaking*/ * cppISteamClient_SteamClient006_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamApps*/ * cppISteamClient_SteamClient006_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamContentServer*/ * cppISteamClient_SteamClient006_GetISteamContentServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamContentServer*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamContentServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMasterServerUpdater*/ * cppISteamClient_SteamClient006_GetISteamMasterServerUpdater(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMasterServerUpdater((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmakingServers*/ * cppISteamClient_SteamClient006_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient006_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient006_GetIPCCallCount(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamClient*)linux_side)->GetIPCCallCount();
    return (_ret);
}

#ifdef __cplusplus
}
#endif
