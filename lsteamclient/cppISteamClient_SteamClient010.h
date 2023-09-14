struct cppISteamClient_SteamClient010_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient010_CreateSteamPipe( struct cppISteamClient_SteamClient010_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient010_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient010_BReleaseSteamPipe( struct cppISteamClient_SteamClient010_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient010_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient010_ConnectToGlobalUser( struct cppISteamClient_SteamClient010_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient010_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient010_CreateLocalUser( struct cppISteamClient_SteamClient010_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient010_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient010_ReleaseUser( struct cppISteamClient_SteamClient010_ReleaseUser_params *params );

struct cppISteamClient_SteamClient010_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamUser( struct cppISteamClient_SteamClient010_GetISteamUser_params *params );

struct cppISteamClient_SteamClient010_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamGameServer( struct cppISteamClient_SteamClient010_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient010_SetLocalIPBinding_params
{
    void *linux_side;
    uint32 unIP;
    uint16 usPort;
};
extern void cppISteamClient_SteamClient010_SetLocalIPBinding( struct cppISteamClient_SteamClient010_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient010_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamFriends( struct cppISteamClient_SteamClient010_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient010_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamUtils( struct cppISteamClient_SteamClient010_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient010_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamMatchmaking( struct cppISteamClient_SteamClient010_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient010_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient010_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient010_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient010_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient010_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamGenericInterface( struct cppISteamClient_SteamClient010_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient010_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamUserStats( struct cppISteamClient_SteamClient010_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient010_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamGameServerStats( struct cppISteamClient_SteamClient010_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient010_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamApps( struct cppISteamClient_SteamClient010_GetISteamApps_params *params );

struct cppISteamClient_SteamClient010_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamNetworking( struct cppISteamClient_SteamClient010_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient010_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamRemoteStorage( struct cppISteamClient_SteamClient010_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient010_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient010_RunFrame( struct cppISteamClient_SteamClient010_RunFrame_params *params );

struct cppISteamClient_SteamClient010_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamClient_SteamClient010_GetIPCCallCount( struct cppISteamClient_SteamClient010_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient010_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient010_SetWarningMessageHook( struct cppISteamClient_SteamClient010_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient010_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient010_GetISteamHTTP( struct cppISteamClient_SteamClient010_GetISteamHTTP_params *params );

