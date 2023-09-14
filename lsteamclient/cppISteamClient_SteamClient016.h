struct cppISteamClient_SteamClient016_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient016_CreateSteamPipe( struct cppISteamClient_SteamClient016_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient016_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient016_BReleaseSteamPipe( struct cppISteamClient_SteamClient016_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient016_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient016_ConnectToGlobalUser( struct cppISteamClient_SteamClient016_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient016_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient016_CreateLocalUser( struct cppISteamClient_SteamClient016_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient016_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient016_ReleaseUser( struct cppISteamClient_SteamClient016_ReleaseUser_params *params );

struct cppISteamClient_SteamClient016_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamUser( struct cppISteamClient_SteamClient016_GetISteamUser_params *params );

struct cppISteamClient_SteamClient016_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamGameServer( struct cppISteamClient_SteamClient016_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient016_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient016_SetLocalIPBinding( struct cppISteamClient_SteamClient016_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient016_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamFriends( struct cppISteamClient_SteamClient016_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient016_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamUtils( struct cppISteamClient_SteamClient016_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient016_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamMatchmaking( struct cppISteamClient_SteamClient016_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient016_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient016_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient016_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamGenericInterface( struct cppISteamClient_SteamClient016_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient016_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamUserStats( struct cppISteamClient_SteamClient016_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient016_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamGameServerStats( struct cppISteamClient_SteamClient016_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient016_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamApps( struct cppISteamClient_SteamClient016_GetISteamApps_params *params );

struct cppISteamClient_SteamClient016_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamNetworking( struct cppISteamClient_SteamClient016_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient016_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamRemoteStorage( struct cppISteamClient_SteamClient016_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient016_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamScreenshots( struct cppISteamClient_SteamClient016_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient016_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient016_RunFrame( struct cppISteamClient_SteamClient016_RunFrame_params *params );

struct cppISteamClient_SteamClient016_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient016_GetIPCCallCount( struct cppISteamClient_SteamClient016_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient016_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient016_SetWarningMessageHook( struct cppISteamClient_SteamClient016_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient016_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamHTTP( struct cppISteamClient_SteamClient016_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient016_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void /*ISteamUnifiedMessages*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient016_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient016_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamController( struct cppISteamClient_SteamClient016_GetISteamController_params *params );

struct cppISteamClient_SteamClient016_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamUGC( struct cppISteamClient_SteamClient016_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient016_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamAppList( struct cppISteamClient_SteamClient016_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient016_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamMusic( struct cppISteamClient_SteamClient016_GetISteamMusic_params *params );

struct cppISteamClient_SteamClient016_GetISteamMusicRemote_params
{
    void *linux_side;
    void /*ISteamMusicRemote*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamMusicRemote( struct cppISteamClient_SteamClient016_GetISteamMusicRemote_params *params );

struct cppISteamClient_SteamClient016_GetISteamHTMLSurface_params
{
    void *linux_side;
    void /*ISteamHTMLSurface*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient016_GetISteamHTMLSurface( struct cppISteamClient_SteamClient016_GetISteamHTMLSurface_params *params );

struct cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    SteamAPI_PostAPIResultInProcess_t func;
};
extern void cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    SteamAPI_PostAPIResultInProcess_t func;
};
extern void cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params
{
    void *linux_side;
    SteamAPI_CheckCallbackRegistered_t func;
};
extern void cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params );

