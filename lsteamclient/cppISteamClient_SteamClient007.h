struct cppISteamClient_SteamClient007_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient007_CreateSteamPipe( struct cppISteamClient_SteamClient007_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient007_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient007_BReleaseSteamPipe( struct cppISteamClient_SteamClient007_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient007_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient007_ConnectToGlobalUser( struct cppISteamClient_SteamClient007_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient007_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
};
extern void cppISteamClient_SteamClient007_CreateLocalUser( struct cppISteamClient_SteamClient007_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient007_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient007_ReleaseUser( struct cppISteamClient_SteamClient007_ReleaseUser_params *params );

struct cppISteamClient_SteamClient007_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamUser( struct cppISteamClient_SteamClient007_GetISteamUser_params *params );

struct cppISteamClient_SteamClient007_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamGameServer( struct cppISteamClient_SteamClient007_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient007_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient007_SetLocalIPBinding( struct cppISteamClient_SteamClient007_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient007_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamFriends( struct cppISteamClient_SteamClient007_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient007_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamUtils( struct cppISteamClient_SteamClient007_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient007_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamMatchmaking( struct cppISteamClient_SteamClient007_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient007_GetISteamContentServer_params
{
    void *linux_side;
    void /*ISteamContentServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamContentServer( struct cppISteamClient_SteamClient007_GetISteamContentServer_params *params );

struct cppISteamClient_SteamClient007_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient007_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient007_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient007_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient007_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamGenericInterface( struct cppISteamClient_SteamClient007_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient007_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient007_RunFrame( struct cppISteamClient_SteamClient007_RunFrame_params *params );

struct cppISteamClient_SteamClient007_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient007_GetIPCCallCount( struct cppISteamClient_SteamClient007_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient007_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamUserStats( struct cppISteamClient_SteamClient007_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient007_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamApps( struct cppISteamClient_SteamClient007_GetISteamApps_params *params );

struct cppISteamClient_SteamClient007_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamNetworking( struct cppISteamClient_SteamClient007_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient007_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient007_SetWarningMessageHook( struct cppISteamClient_SteamClient007_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient007_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient007_GetISteamRemoteStorage( struct cppISteamClient_SteamClient007_GetISteamRemoteStorage_params *params );

