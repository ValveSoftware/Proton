#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamClient_SteamClient020.h"
HSteamPipe cppISteamClient_SteamClient020_CreateSteamPipe(void *linux_side)
{
    return ((ISteamClient*)linux_side)->CreateSteamPipe();
}

bool cppISteamClient_SteamClient020_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient020_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    return ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
}

HSteamUser cppISteamClient_SteamClient020_CreateLocalUser(void *linux_side, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    return ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe, (EAccountType)eAccountType);
}

void cppISteamClient_SteamClient020_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void *cppISteamClient_SteamClient020_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient020_SetLocalIPBinding(void *linux_side, const SteamIPAddress_t * unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((const SteamIPAddress_t *)unIP, (uint16)usPort);
}

void *cppISteamClient_SteamClient020_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void * cppISteamClient_SteamClient020_GetISteamGenericInterface(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamUserStats(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUserStats((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamGameServerStats(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameServerStats((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamNetworking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamNetworking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamRemoteStorage(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamRemoteStorage((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamScreenshots(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamScreenshots((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamGameSearch(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamGameSearch((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient020_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient020_GetIPCCallCount(void *linux_side)
{
    return ((ISteamClient*)linux_side)->GetIPCCallCount();
}

void cppISteamClient_SteamClient020_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    ((ISteamClient*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed(void *linux_side)
{
    return ((ISteamClient*)linux_side)->BShutdownIfAllPipesClosed();
}

void *cppISteamClient_SteamClient020_GetISteamHTTP(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamHTTP((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void * cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->DEPRECATED_GetISteamUnifiedMessages((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamController(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamController((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamUGC(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamUGC((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamAppList(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamAppList((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamMusic(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMusic((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamMusicRemote(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamMusicRemote((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamHTMLSurface(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamHTMLSurface((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void *linux_side, void * _a)
{
    ((ISteamClient*)linux_side)->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess((void (*)())_a);
}

void cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void *linux_side, void * _a)
{
    ((ISteamClient*)linux_side)->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess((void (*)())_a);
}

void cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *linux_side, SteamAPI_CheckCallbackRegistered_t func)
{
    func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t((void*)func);
    ((ISteamClient*)linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess((SteamAPI_CheckCallbackRegistered_t)func);
}

void *cppISteamClient_SteamClient020_GetISteamInventory(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamInventory((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamVideo(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamVideo((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamParentalSettings(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamParentalSettings((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamInput(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamInput((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamParties(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamParties((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void *cppISteamClient_SteamClient020_GetISteamRemotePlay(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    return ((ISteamClient*)linux_side)->GetISteamRemotePlay((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
}

void cppISteamClient_SteamClient020_DestroyAllInterfaces(void *linux_side)
{
    ((ISteamClient*)linux_side)->DestroyAllInterfaces();
}

#ifdef __cplusplus
}
#endif
