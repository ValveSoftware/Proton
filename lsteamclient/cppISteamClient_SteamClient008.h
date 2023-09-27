struct cppISteamClient_SteamClient008_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient008_CreateSteamPipe( struct cppISteamClient_SteamClient008_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient008_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient008_BReleaseSteamPipe( struct cppISteamClient_SteamClient008_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient008_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient008_ConnectToGlobalUser( struct cppISteamClient_SteamClient008_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient008_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    EAccountType eAccountType;
};
extern void cppISteamClient_SteamClient008_CreateLocalUser( struct cppISteamClient_SteamClient008_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient008_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient008_ReleaseUser( struct cppISteamClient_SteamClient008_ReleaseUser_params *params );

struct cppISteamClient_SteamClient008_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamUser( struct cppISteamClient_SteamClient008_GetISteamUser_params *params );

struct cppISteamClient_SteamClient008_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamGameServer( struct cppISteamClient_SteamClient008_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient008_SetLocalIPBinding_params
{
    void *linux_side;
    uint32 unIP;
    uint16 usPort;
};
extern void cppISteamClient_SteamClient008_SetLocalIPBinding( struct cppISteamClient_SteamClient008_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient008_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamFriends( struct cppISteamClient_SteamClient008_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient008_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamUtils( struct cppISteamClient_SteamClient008_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient008_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamMatchmaking( struct cppISteamClient_SteamClient008_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient008_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient008_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient008_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient008_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient008_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamGenericInterface( struct cppISteamClient_SteamClient008_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient008_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamUserStats( struct cppISteamClient_SteamClient008_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient008_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamApps( struct cppISteamClient_SteamClient008_GetISteamApps_params *params );

struct cppISteamClient_SteamClient008_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamNetworking( struct cppISteamClient_SteamClient008_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient008_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient008_GetISteamRemoteStorage( struct cppISteamClient_SteamClient008_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient008_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient008_RunFrame( struct cppISteamClient_SteamClient008_RunFrame_params *params );

struct cppISteamClient_SteamClient008_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamClient_SteamClient008_GetIPCCallCount( struct cppISteamClient_SteamClient008_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient008_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient008_SetWarningMessageHook( struct cppISteamClient_SteamClient008_SetWarningMessageHook_params *params );

