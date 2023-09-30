/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamClient_SteamClient012_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient012_CreateSteamPipe( struct cppISteamClient_SteamClient012_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient012_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient012_BReleaseSteamPipe( struct cppISteamClient_SteamClient012_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient012_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient012_ConnectToGlobalUser( struct cppISteamClient_SteamClient012_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient012_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient012_CreateLocalUser( struct cppISteamClient_SteamClient012_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient012_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient012_ReleaseUser( struct cppISteamClient_SteamClient012_ReleaseUser_params *params );

struct cppISteamClient_SteamClient012_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUser( struct cppISteamClient_SteamClient012_GetISteamUser_params *params );

struct cppISteamClient_SteamClient012_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamGameServer( struct cppISteamClient_SteamClient012_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient012_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient012_SetLocalIPBinding( struct cppISteamClient_SteamClient012_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient012_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamFriends( struct cppISteamClient_SteamClient012_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient012_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUtils( struct cppISteamClient_SteamClient012_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient012_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamMatchmaking( struct cppISteamClient_SteamClient012_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient012_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient012_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient012_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamGenericInterface( struct cppISteamClient_SteamClient012_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient012_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUserStats( struct cppISteamClient_SteamClient012_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient012_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamGameServerStats( struct cppISteamClient_SteamClient012_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient012_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamApps( struct cppISteamClient_SteamClient012_GetISteamApps_params *params );

struct cppISteamClient_SteamClient012_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamNetworking( struct cppISteamClient_SteamClient012_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient012_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamRemoteStorage( struct cppISteamClient_SteamClient012_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient012_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamScreenshots( struct cppISteamClient_SteamClient012_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient012_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient012_RunFrame( struct cppISteamClient_SteamClient012_RunFrame_params *params );

struct cppISteamClient_SteamClient012_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient012_GetIPCCallCount( struct cppISteamClient_SteamClient012_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient012_SetWarningMessageHook_params
{
    void *linux_side;
    void (*W_CDECL pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient012_SetWarningMessageHook( struct cppISteamClient_SteamClient012_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient012_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamHTTP( struct cppISteamClient_SteamClient012_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient012_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void /*ISteamUnifiedMessages*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient012_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient012_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamController( struct cppISteamClient_SteamClient012_GetISteamController_params *params );

struct cppISteamClient_SteamClient012_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUGC( struct cppISteamClient_SteamClient012_GetISteamUGC_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
