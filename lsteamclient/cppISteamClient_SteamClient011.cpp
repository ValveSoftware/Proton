#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamClient_SteamClient011.h"
HSteamPipe cppISteamClient_SteamClient011_CreateSteamPipe(void *linux_side)
{
    return after_steam_pipe_create(((ISteamClient*)linux_side)->CreateSteamPipe());
}

bool cppISteamClient_SteamClient011_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient011_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient011_CreateLocalUser(void *linux_side, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    return ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe, (EAccountType)eAccountType);
}

void cppISteamClient_SteamClient011_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void *cppISteamClient_SteamClient011_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient011_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

void *cppISteamClient_SteamClient011_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamMasterServerUpdater(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMasterServerUpdater((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void * cppISteamClient_SteamClient011_GetISteamGenericInterface(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamUserStats(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUserStats((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamGameServerStats(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServerStats((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamNetworking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamNetworking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamRemoteStorage(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamRemoteStorage((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient011_GetISteamScreenshots(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamScreenshots((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient011_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient011_GetIPCCallCount(void *linux_side)
{
    return ((ISteamClient*)linux_side)->GetIPCCallCount();
}

void cppISteamClient_SteamClient011_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamClient*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed(void *linux_side)
{
    return after_shutdown(((ISteamClient*)linux_side)->BShutdownIfAllPipesClosed());
}

void *cppISteamClient_SteamClient011_GetISteamHTTP(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamHTTP((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

#ifdef __cplusplus
}
#endif
