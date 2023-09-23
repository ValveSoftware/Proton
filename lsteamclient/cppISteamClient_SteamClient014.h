struct cppISteamClient_SteamClient014;
struct cppISteamClient_SteamClient014_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient014_CreateSteamPipe( struct cppISteamClient_SteamClient014_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient014_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient014_BReleaseSteamPipe( struct cppISteamClient_SteamClient014_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient014_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient014_ConnectToGlobalUser( struct cppISteamClient_SteamClient014_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient014_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient014_CreateLocalUser( struct cppISteamClient_SteamClient014_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient014_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient014_ReleaseUser( struct cppISteamClient_SteamClient014_ReleaseUser_params *params );

struct cppISteamClient_SteamClient014_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamUser( struct cppISteamClient_SteamClient014_GetISteamUser_params *params );

struct cppISteamClient_SteamClient014_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamGameServer( struct cppISteamClient_SteamClient014_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient014_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient014_SetLocalIPBinding( struct cppISteamClient_SteamClient014_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient014_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamFriends( struct cppISteamClient_SteamClient014_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient014_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamUtils( struct cppISteamClient_SteamClient014_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient014_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamMatchmaking( struct cppISteamClient_SteamClient014_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient014_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient014_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient014_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamGenericInterface( struct cppISteamClient_SteamClient014_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient014_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamUserStats( struct cppISteamClient_SteamClient014_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient014_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamGameServerStats( struct cppISteamClient_SteamClient014_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient014_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamApps( struct cppISteamClient_SteamClient014_GetISteamApps_params *params );

struct cppISteamClient_SteamClient014_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamNetworking( struct cppISteamClient_SteamClient014_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient014_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamRemoteStorage( struct cppISteamClient_SteamClient014_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient014_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamScreenshots( struct cppISteamClient_SteamClient014_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient014_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient014_RunFrame( struct cppISteamClient_SteamClient014_RunFrame_params *params );

struct cppISteamClient_SteamClient014_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient014_GetIPCCallCount( struct cppISteamClient_SteamClient014_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient014_SetWarningMessageHook_params
{
    void *linux_side;
    void (*__cdecl pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient014_SetWarningMessageHook( struct cppISteamClient_SteamClient014_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient014_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamHTTP( struct cppISteamClient_SteamClient014_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient014_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void /*ISteamUnifiedMessages*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient014_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient014_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamController( struct cppISteamClient_SteamClient014_GetISteamController_params *params );

struct cppISteamClient_SteamClient014_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamUGC( struct cppISteamClient_SteamClient014_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient014_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamAppList( struct cppISteamClient_SteamClient014_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient014_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient014_GetISteamMusic( struct cppISteamClient_SteamClient014_GetISteamMusic_params *params );

