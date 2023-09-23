#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_146
#include "struct_converters.h"
#include "cppISteamClient_SteamClient019.h"
HSteamPipe cppISteamClient_SteamClient019_CreateSteamPipe(void *linux_side)
{
    HSteamPipe _ret;
    _ret = ((ISteamClient*)linux_side)->CreateSteamPipe();
    return after_steam_pipe_create(_ret);
}

bool cppISteamClient_SteamClient019_BReleaseSteamPipe(void *linux_side, HSteamPipe hSteamPipe)
{
    bool _ret;
    _ret = ((ISteamClient*)linux_side)->BReleaseSteamPipe((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient019_ConnectToGlobalUser(void *linux_side, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->ConnectToGlobalUser((HSteamPipe)hSteamPipe);
    return (_ret);
}

HSteamUser cppISteamClient_SteamClient019_CreateLocalUser(void *linux_side, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    _ret = ((ISteamClient*)linux_side)->CreateLocalUser((HSteamPipe *)phSteamPipe, (EAccountType)eAccountType);
    return (_ret);
}

void cppISteamClient_SteamClient019_ReleaseUser(void *linux_side, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    ((ISteamClient*)linux_side)->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void /*ISteamUser*/ * cppISteamClient_SteamClient019_GetISteamUser(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUser((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamGameServer*/ * cppISteamClient_SteamClient019_GetISteamGameServer(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameServer((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient019_SetLocalIPBinding(void *linux_side, uint32 unIP, uint16 usPort)
{
    ((ISteamClient*)linux_side)->SetLocalIPBinding((uint32)unIP, (uint16)usPort);
}

void /*ISteamFriends*/ * cppISteamClient_SteamClient019_GetISteamFriends(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamFriends((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUtils*/ * cppISteamClient_SteamClient019_GetISteamUtils(void *linux_side, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUtils((HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmaking*/ * cppISteamClient_SteamClient019_GetISteamMatchmaking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmaking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMatchmakingServers*/ * cppISteamClient_SteamClient019_GetISteamMatchmakingServers(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMatchmakingServers((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient019_GetISteamGenericInterface(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUserStats*/ * cppISteamClient_SteamClient019_GetISteamUserStats(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUserStats((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamGameServerStats*/ * cppISteamClient_SteamClient019_GetISteamGameServerStats(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameServerStats((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamApps*/ * cppISteamClient_SteamClient019_GetISteamApps(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamApps((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamNetworking*/ * cppISteamClient_SteamClient019_GetISteamNetworking(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamNetworking((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamRemoteStorage*/ * cppISteamClient_SteamClient019_GetISteamRemoteStorage(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamRemoteStorage((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamScreenshots*/ * cppISteamClient_SteamClient019_GetISteamScreenshots(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamScreenshots((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamGameSearch*/ * cppISteamClient_SteamClient019_GetISteamGameSearch(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameSearch*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamGameSearch((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient019_RunFrame(void *linux_side)
{
    ((ISteamClient*)linux_side)->RunFrame();
}

uint32 cppISteamClient_SteamClient019_GetIPCCallCount(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamClient*)linux_side)->GetIPCCallCount();
    return (_ret);
}

void cppISteamClient_SteamClient019_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamClient*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamClient*)linux_side)->BShutdownIfAllPipesClosed();
    return after_shutdown(_ret);
}

void /*ISteamHTTP*/ * cppISteamClient_SteamClient019_GetISteamHTTP(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamHTTP((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void * cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void *_ret;
    _ret = ((ISteamClient*)linux_side)->DEPRECATED_GetISteamUnifiedMessages((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamController*/ * cppISteamClient_SteamClient019_GetISteamController(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamController((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamUGC*/ * cppISteamClient_SteamClient019_GetISteamUGC(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamUGC((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamAppList*/ * cppISteamClient_SteamClient019_GetISteamAppList(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamAppList((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMusic*/ * cppISteamClient_SteamClient019_GetISteamMusic(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMusic((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamMusicRemote*/ * cppISteamClient_SteamClient019_GetISteamMusicRemote(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamMusicRemote((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamHTMLSurface*/ * cppISteamClient_SteamClient019_GetISteamHTMLSurface(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTMLSurface*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamHTMLSurface((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void *linux_side, void *_a)
{
    ((ISteamClient*)linux_side)->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess((void (*)())_a);
}

void cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void *linux_side, void *_a)
{
    ((ISteamClient*)linux_side)->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess((void (*)())_a);
}

void cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *linux_side, SteamAPI_CheckCallbackRegistered_t func)
{
    func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t((void*)func);
    ((ISteamClient*)linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess((SteamAPI_CheckCallbackRegistered_t)func);
}

void /*ISteamInventory*/ * cppISteamClient_SteamClient019_GetISteamInventory(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInventory*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamInventory((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamVideo*/ * cppISteamClient_SteamClient019_GetISteamVideo(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamVideo*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamVideo((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamParentalSettings*/ * cppISteamClient_SteamClient019_GetISteamParentalSettings(void *linux_side, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParentalSettings*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamParentalSettings((HSteamUser)hSteamuser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamInput*/ * cppISteamClient_SteamClient019_GetISteamInput(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInput*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamInput((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamParties*/ * cppISteamClient_SteamClient019_GetISteamParties(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParties*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamParties((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

void /*ISteamRemotePlay*/ * cppISteamClient_SteamClient019_GetISteamRemotePlay(void *linux_side, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemotePlay*/ *_ret;
    _ret = ((ISteamClient*)linux_side)->GetISteamRemotePlay((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, (const char *)pchVersion);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
