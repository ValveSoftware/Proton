#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_129a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_129a
#include "struct_converters.h"
#include "cppISteamClient_SteamClient014.h"
HSteamPipe cppISteamClient_SteamClient014_CreateSteamPipe(void *linux_side)
{
    return after_steam_pipe_create(((ISteamClient*)linux_side)->CreateSteamPipe());
}

bool cppISteamClient_SteamClient014_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient014_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient014_CreateLocalUser(void *linux_side, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    return ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe, (EAccountType)eAccountType);
}

void cppISteamClient_SteamClient014_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void *cppISteamClient_SteamClient014_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient014_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

void *cppISteamClient_SteamClient014_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void * cppISteamClient_SteamClient014_GetISteamGenericInterface(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamUserStats(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUserStats((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamGameServerStats(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServerStats((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamNetworking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamNetworking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamRemoteStorage(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamRemoteStorage((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamScreenshots(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamScreenshots((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient014_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient014_GetIPCCallCount(void *linux_side)
{
    return ((ISteamClient*)linux_side)->GetIPCCallCount();
}

void cppISteamClient_SteamClient014_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamClient*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed(void *linux_side)
{
    return after_shutdown(((ISteamClient*)linux_side)->BShutdownIfAllPipesClosed());
}

void *cppISteamClient_SteamClient014_GetISteamHTTP(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamHTTP((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamUnifiedMessages(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUnifiedMessages((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamController(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamController((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamUGC(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUGC((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamAppList(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamAppList((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient014_GetISteamMusic(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMusic((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

#ifdef __cplusplus
}
#endif
