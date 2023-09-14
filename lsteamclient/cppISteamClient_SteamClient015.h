struct cppISteamClient_SteamClient015_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient015_CreateSteamPipe( struct cppISteamClient_SteamClient015_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient015_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient015_BReleaseSteamPipe( struct cppISteamClient_SteamClient015_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient015_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient015_ConnectToGlobalUser( struct cppISteamClient_SteamClient015_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient015_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient015_CreateLocalUser( struct cppISteamClient_SteamClient015_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient015_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient015_ReleaseUser( struct cppISteamClient_SteamClient015_ReleaseUser_params *params );

struct cppISteamClient_SteamClient015_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamUser( struct cppISteamClient_SteamClient015_GetISteamUser_params *params );

struct cppISteamClient_SteamClient015_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamGameServer( struct cppISteamClient_SteamClient015_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient015_SetLocalIPBinding_params
{
    void *linux_side;
    uint32 unIP;
    uint16 usPort;
};
extern void cppISteamClient_SteamClient015_SetLocalIPBinding( struct cppISteamClient_SteamClient015_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient015_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamFriends( struct cppISteamClient_SteamClient015_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient015_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamUtils( struct cppISteamClient_SteamClient015_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient015_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamMatchmaking( struct cppISteamClient_SteamClient015_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient015_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient015_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient015_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamGenericInterface( struct cppISteamClient_SteamClient015_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient015_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamUserStats( struct cppISteamClient_SteamClient015_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient015_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamGameServerStats( struct cppISteamClient_SteamClient015_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient015_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamApps( struct cppISteamClient_SteamClient015_GetISteamApps_params *params );

struct cppISteamClient_SteamClient015_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamNetworking( struct cppISteamClient_SteamClient015_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient015_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamRemoteStorage( struct cppISteamClient_SteamClient015_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient015_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamScreenshots( struct cppISteamClient_SteamClient015_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient015_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient015_RunFrame( struct cppISteamClient_SteamClient015_RunFrame_params *params );

struct cppISteamClient_SteamClient015_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamClient_SteamClient015_GetIPCCallCount( struct cppISteamClient_SteamClient015_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient015_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient015_SetWarningMessageHook( struct cppISteamClient_SteamClient015_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient015_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamHTTP( struct cppISteamClient_SteamClient015_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient015_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void /*ISteamUnifiedMessages*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient015_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient015_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamController( struct cppISteamClient_SteamClient015_GetISteamController_params *params );

struct cppISteamClient_SteamClient015_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamUGC( struct cppISteamClient_SteamClient015_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient015_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamAppList( struct cppISteamClient_SteamClient015_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient015_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamMusic( struct cppISteamClient_SteamClient015_GetISteamMusic_params *params );

struct cppISteamClient_SteamClient015_GetISteamMusicRemote_params
{
    void *linux_side;
    void /*ISteamMusicRemote*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient015_GetISteamMusicRemote( struct cppISteamClient_SteamClient015_GetISteamMusicRemote_params *params );

