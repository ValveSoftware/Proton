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
    return after_steam_pipe_create(((ISteamClient*)linux_side)->CreateSteamPipe());
}

bool cppISteamClient_SteamClient006_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient006_CreateGlobalUser(void *linux_side, HSteamPipe * phSteamPipe)
{
    return ((ISteamClient*)linux_side)->CreateGlobalUser((HSteamPipe *)phSteamPipe);
}

HSteamUser cppISteamClient_SteamClient006_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient006_CreateLocalUser(void *linux_side, HSteamPipe * phSteamPipe)
{
    return ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe);
}

void cppISteamClient_SteamClient006_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void *cppISteamClient_SteamClient006_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void * cppISteamClient_SteamClient006_GetIVAC(void *linux_side, HSteamUser hSteamUser)
{
    return ((ISteamClient*)linux_side)->GetIVAC((HSteamUser)hSteamUser);
}

void *cppISteamClient_SteamClient006_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient006_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

const char * cppISteamClient_SteamClient006_GetUniverseName(void *linux_side, EUniverse eUniverse)
{
    return ((ISteamClient*)linux_side)->GetUniverseName((EUniverse)eUniverse);
}

void *cppISteamClient_SteamClient006_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient006_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void * cppISteamClient_SteamClient006_GetISteamBilling(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamBilling((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient006_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient006_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient006_GetISteamContentServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamContentServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient006_GetISteamMasterServerUpdater(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMasterServerUpdater((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient006_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient006_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient006_GetIPCCallCount(void *linux_side)
{
    return ((ISteamClient*)linux_side)->GetIPCCallCount();
}

#ifdef __cplusplus
}
#endif
