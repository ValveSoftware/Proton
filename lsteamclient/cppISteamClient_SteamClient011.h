struct cppISteamClient_SteamClient011;
struct cppISteamClient_SteamClient011_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient011_CreateSteamPipe( struct cppISteamClient_SteamClient011_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient011_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient011_BReleaseSteamPipe( struct cppISteamClient_SteamClient011_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient011_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient011_ConnectToGlobalUser( struct cppISteamClient_SteamClient011_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient011_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient011_CreateLocalUser( struct cppISteamClient_SteamClient011_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient011_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient011_ReleaseUser( struct cppISteamClient_SteamClient011_ReleaseUser_params *params );

struct cppISteamClient_SteamClient011_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamUser( struct cppISteamClient_SteamClient011_GetISteamUser_params *params );

struct cppISteamClient_SteamClient011_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamGameServer( struct cppISteamClient_SteamClient011_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient011_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient011_SetLocalIPBinding( struct cppISteamClient_SteamClient011_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient011_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamFriends( struct cppISteamClient_SteamClient011_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient011_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamUtils( struct cppISteamClient_SteamClient011_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient011_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamMatchmaking( struct cppISteamClient_SteamClient011_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient011_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient011_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient011_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient011_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient011_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamGenericInterface( struct cppISteamClient_SteamClient011_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient011_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamUserStats( struct cppISteamClient_SteamClient011_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient011_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamGameServerStats( struct cppISteamClient_SteamClient011_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient011_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamApps( struct cppISteamClient_SteamClient011_GetISteamApps_params *params );

struct cppISteamClient_SteamClient011_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamNetworking( struct cppISteamClient_SteamClient011_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient011_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamRemoteStorage( struct cppISteamClient_SteamClient011_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient011_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamScreenshots( struct cppISteamClient_SteamClient011_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient011_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient011_RunFrame( struct cppISteamClient_SteamClient011_RunFrame_params *params );

struct cppISteamClient_SteamClient011_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient011_GetIPCCallCount( struct cppISteamClient_SteamClient011_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient011_SetWarningMessageHook_params
{
    void *linux_side;
    void (*W_CDECL pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient011_SetWarningMessageHook( struct cppISteamClient_SteamClient011_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient011_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient011_GetISteamHTTP( struct cppISteamClient_SteamClient011_GetISteamHTTP_params *params );

