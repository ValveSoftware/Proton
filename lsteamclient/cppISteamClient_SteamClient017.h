/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamClient_SteamClient017_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient017_CreateSteamPipe( struct cppISteamClient_SteamClient017_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient017_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient017_BReleaseSteamPipe( struct cppISteamClient_SteamClient017_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient017_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient017_ConnectToGlobalUser( struct cppISteamClient_SteamClient017_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient017_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient017_CreateLocalUser( struct cppISteamClient_SteamClient017_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient017_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient017_ReleaseUser( struct cppISteamClient_SteamClient017_ReleaseUser_params *params );

struct cppISteamClient_SteamClient017_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUser( struct cppISteamClient_SteamClient017_GetISteamUser_params *params );

struct cppISteamClient_SteamClient017_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamGameServer( struct cppISteamClient_SteamClient017_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient017_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient017_SetLocalIPBinding( struct cppISteamClient_SteamClient017_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient017_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamFriends( struct cppISteamClient_SteamClient017_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient017_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUtils( struct cppISteamClient_SteamClient017_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient017_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMatchmaking( struct cppISteamClient_SteamClient017_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient017_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient017_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient017_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamGenericInterface( struct cppISteamClient_SteamClient017_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient017_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUserStats( struct cppISteamClient_SteamClient017_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient017_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamGameServerStats( struct cppISteamClient_SteamClient017_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient017_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamApps( struct cppISteamClient_SteamClient017_GetISteamApps_params *params );

struct cppISteamClient_SteamClient017_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamNetworking( struct cppISteamClient_SteamClient017_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient017_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamRemoteStorage( struct cppISteamClient_SteamClient017_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient017_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamScreenshots( struct cppISteamClient_SteamClient017_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient017_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient017_RunFrame( struct cppISteamClient_SteamClient017_RunFrame_params *params );

struct cppISteamClient_SteamClient017_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient017_GetIPCCallCount( struct cppISteamClient_SteamClient017_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient017_SetWarningMessageHook_params
{
    void *linux_side;
    void (*W_CDECL pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient017_SetWarningMessageHook( struct cppISteamClient_SteamClient017_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient017_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamHTTP( struct cppISteamClient_SteamClient017_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient017_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamController( struct cppISteamClient_SteamClient017_GetISteamController_params *params );

struct cppISteamClient_SteamClient017_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUGC( struct cppISteamClient_SteamClient017_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient017_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamAppList( struct cppISteamClient_SteamClient017_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient017_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMusic( struct cppISteamClient_SteamClient017_GetISteamMusic_params *params );

struct cppISteamClient_SteamClient017_GetISteamMusicRemote_params
{
    void *linux_side;
    void /*ISteamMusicRemote*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMusicRemote( struct cppISteamClient_SteamClient017_GetISteamMusicRemote_params *params );

struct cppISteamClient_SteamClient017_GetISteamHTMLSurface_params
{
    void *linux_side;
    void /*ISteamHTMLSurface*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamHTMLSurface( struct cppISteamClient_SteamClient017_GetISteamHTMLSurface_params *params );

struct cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void (*W_STDCALL _a)(void);
};
extern void cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void (*W_STDCALL _a)(void);
};
extern void cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params
{
    void *linux_side;
    uint32_t (*W_STDCALL func)(int32_t);
};
extern void cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params );

struct cppISteamClient_SteamClient017_GetISteamInventory_params
{
    void *linux_side;
    void /*ISteamInventory*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamInventory( struct cppISteamClient_SteamClient017_GetISteamInventory_params *params );

struct cppISteamClient_SteamClient017_GetISteamVideo_params
{
    void *linux_side;
    void /*ISteamVideo*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamVideo( struct cppISteamClient_SteamClient017_GetISteamVideo_params *params );

struct cppISteamClient_SteamClient017_GetISteamParentalSettings_params
{
    void *linux_side;
    void /*ISteamParentalSettings*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamParentalSettings( struct cppISteamClient_SteamClient017_GetISteamParentalSettings_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
