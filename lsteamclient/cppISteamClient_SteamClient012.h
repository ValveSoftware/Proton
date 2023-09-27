struct cppISteamClient_SteamClient012_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient012_CreateSteamPipe( struct cppISteamClient_SteamClient012_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient012_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient012_BReleaseSteamPipe( struct cppISteamClient_SteamClient012_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient012_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient012_ConnectToGlobalUser( struct cppISteamClient_SteamClient012_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient012_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    EAccountType eAccountType;
};
extern void cppISteamClient_SteamClient012_CreateLocalUser( struct cppISteamClient_SteamClient012_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient012_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient012_ReleaseUser( struct cppISteamClient_SteamClient012_ReleaseUser_params *params );

struct cppISteamClient_SteamClient012_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUser( struct cppISteamClient_SteamClient012_GetISteamUser_params *params );

struct cppISteamClient_SteamClient012_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamGameServer( struct cppISteamClient_SteamClient012_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient012_SetLocalIPBinding_params
{
    void *linux_side;
    uint32 unIP;
    uint16 usPort;
};
extern void cppISteamClient_SteamClient012_SetLocalIPBinding( struct cppISteamClient_SteamClient012_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient012_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamFriends( struct cppISteamClient_SteamClient012_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient012_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUtils( struct cppISteamClient_SteamClient012_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient012_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamMatchmaking( struct cppISteamClient_SteamClient012_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient012_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient012_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient012_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamGenericInterface( struct cppISteamClient_SteamClient012_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient012_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUserStats( struct cppISteamClient_SteamClient012_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient012_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamGameServerStats( struct cppISteamClient_SteamClient012_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient012_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamApps( struct cppISteamClient_SteamClient012_GetISteamApps_params *params );

struct cppISteamClient_SteamClient012_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamNetworking( struct cppISteamClient_SteamClient012_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient012_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamRemoteStorage( struct cppISteamClient_SteamClient012_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient012_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
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
    uint32 _ret;
};
extern void cppISteamClient_SteamClient012_GetIPCCallCount( struct cppISteamClient_SteamClient012_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient012_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
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
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamHTTP( struct cppISteamClient_SteamClient012_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient012_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void /*ISteamUnifiedMessages*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient012_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient012_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamController( struct cppISteamClient_SteamClient012_GetISteamController_params *params );

struct cppISteamClient_SteamClient012_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient012_GetISteamUGC( struct cppISteamClient_SteamClient012_GetISteamUGC_params *params );

