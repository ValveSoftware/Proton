struct cppISteamClient_SteamClient017_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient017_CreateSteamPipe( struct cppISteamClient_SteamClient017_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient017_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient017_BReleaseSteamPipe( struct cppISteamClient_SteamClient017_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient017_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient017_ConnectToGlobalUser( struct cppISteamClient_SteamClient017_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient017_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient017_CreateLocalUser( struct cppISteamClient_SteamClient017_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient017_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient017_ReleaseUser( struct cppISteamClient_SteamClient017_ReleaseUser_params *params );

struct cppISteamClient_SteamClient017_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUser( struct cppISteamClient_SteamClient017_GetISteamUser_params *params );

struct cppISteamClient_SteamClient017_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamGameServer( struct cppISteamClient_SteamClient017_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient017_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient017_SetLocalIPBinding( struct cppISteamClient_SteamClient017_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient017_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamFriends( struct cppISteamClient_SteamClient017_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient017_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUtils( struct cppISteamClient_SteamClient017_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient017_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMatchmaking( struct cppISteamClient_SteamClient017_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient017_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient017_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient017_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamGenericInterface( struct cppISteamClient_SteamClient017_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient017_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUserStats( struct cppISteamClient_SteamClient017_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient017_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamGameServerStats( struct cppISteamClient_SteamClient017_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient017_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamApps( struct cppISteamClient_SteamClient017_GetISteamApps_params *params );

struct cppISteamClient_SteamClient017_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamNetworking( struct cppISteamClient_SteamClient017_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient017_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamRemoteStorage( struct cppISteamClient_SteamClient017_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient017_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamScreenshots( struct cppISteamClient_SteamClient017_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient017_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient017_RunFrame( struct cppISteamClient_SteamClient017_RunFrame_params *params );

struct cppISteamClient_SteamClient017_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient017_GetIPCCallCount( struct cppISteamClient_SteamClient017_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient017_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamClient_SteamClient017_SetWarningMessageHook( struct cppISteamClient_SteamClient017_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient017_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamHTTP( struct cppISteamClient_SteamClient017_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient017_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamController( struct cppISteamClient_SteamClient017_GetISteamController_params *params );

struct cppISteamClient_SteamClient017_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamUGC( struct cppISteamClient_SteamClient017_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient017_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamAppList( struct cppISteamClient_SteamClient017_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient017_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMusic( struct cppISteamClient_SteamClient017_GetISteamMusic_params *params );

struct cppISteamClient_SteamClient017_GetISteamMusicRemote_params
{
    void *linux_side;
    void /*ISteamMusicRemote*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamMusicRemote( struct cppISteamClient_SteamClient017_GetISteamMusicRemote_params *params );

struct cppISteamClient_SteamClient017_GetISteamHTMLSurface_params
{
    void *linux_side;
    void /*ISteamHTMLSurface*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamHTMLSurface( struct cppISteamClient_SteamClient017_GetISteamHTMLSurface_params *params );

struct cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void *_a;
};
extern void cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void *_a;
};
extern void cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params
{
    void *linux_side;
    SteamAPI_CheckCallbackRegistered_t func;
};
extern void cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params );

struct cppISteamClient_SteamClient017_GetISteamInventory_params
{
    void *linux_side;
    void /*ISteamInventory*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamInventory( struct cppISteamClient_SteamClient017_GetISteamInventory_params *params );

struct cppISteamClient_SteamClient017_GetISteamVideo_params
{
    void *linux_side;
    void /*ISteamVideo*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamVideo( struct cppISteamClient_SteamClient017_GetISteamVideo_params *params );

struct cppISteamClient_SteamClient017_GetISteamParentalSettings_params
{
    void *linux_side;
    void /*ISteamParentalSettings*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient017_GetISteamParentalSettings( struct cppISteamClient_SteamClient017_GetISteamParentalSettings_params *params );

