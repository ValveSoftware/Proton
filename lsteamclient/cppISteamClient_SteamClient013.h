struct cppISteamClient_SteamClient013_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient013_CreateSteamPipe( struct cppISteamClient_SteamClient013_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient013_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient013_BReleaseSteamPipe( struct cppISteamClient_SteamClient013_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient013_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient013_ConnectToGlobalUser( struct cppISteamClient_SteamClient013_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient013_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient013_CreateLocalUser( struct cppISteamClient_SteamClient013_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient013_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient013_ReleaseUser( struct cppISteamClient_SteamClient013_ReleaseUser_params *params );

struct cppISteamClient_SteamClient013_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamUser( struct cppISteamClient_SteamClient013_GetISteamUser_params *params );

struct cppISteamClient_SteamClient013_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamGameServer( struct cppISteamClient_SteamClient013_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient013_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient013_SetLocalIPBinding( struct cppISteamClient_SteamClient013_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient013_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamFriends( struct cppISteamClient_SteamClient013_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient013_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamUtils( struct cppISteamClient_SteamClient013_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient013_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamMatchmaking( struct cppISteamClient_SteamClient013_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient013_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient013_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient013_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamGenericInterface( struct cppISteamClient_SteamClient013_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient013_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamUserStats( struct cppISteamClient_SteamClient013_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient013_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamGameServerStats( struct cppISteamClient_SteamClient013_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient013_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamApps( struct cppISteamClient_SteamClient013_GetISteamApps_params *params );

struct cppISteamClient_SteamClient013_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamNetworking( struct cppISteamClient_SteamClient013_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient013_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamRemoteStorage( struct cppISteamClient_SteamClient013_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient013_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamScreenshots( struct cppISteamClient_SteamClient013_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient013_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient013_RunFrame( struct cppISteamClient_SteamClient013_RunFrame_params *params );

struct cppISteamClient_SteamClient013_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient013_GetIPCCallCount( struct cppISteamClient_SteamClient013_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient013_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient013_SetWarningMessageHook( struct cppISteamClient_SteamClient013_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient013_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamHTTP( struct cppISteamClient_SteamClient013_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient013_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void /*ISteamUnifiedMessages*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient013_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient013_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamController( struct cppISteamClient_SteamClient013_GetISteamController_params *params );

struct cppISteamClient_SteamClient013_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamUGC( struct cppISteamClient_SteamClient013_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient013_GetISteamInventory_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamInventory( struct cppISteamClient_SteamClient013_GetISteamInventory_params *params );

struct cppISteamClient_SteamClient013_GetISteamVideo_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamVideo( struct cppISteamClient_SteamClient013_GetISteamVideo_params *params );

struct cppISteamClient_SteamClient013_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient013_GetISteamAppList( struct cppISteamClient_SteamClient013_GetISteamAppList_params *params );

