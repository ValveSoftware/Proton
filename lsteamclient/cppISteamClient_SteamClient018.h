struct cppISteamClient_SteamClient018_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient018_CreateSteamPipe( struct cppISteamClient_SteamClient018_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient018_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient018_BReleaseSteamPipe( struct cppISteamClient_SteamClient018_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient018_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient018_ConnectToGlobalUser( struct cppISteamClient_SteamClient018_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient018_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient018_CreateLocalUser( struct cppISteamClient_SteamClient018_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient018_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient018_ReleaseUser( struct cppISteamClient_SteamClient018_ReleaseUser_params *params );

struct cppISteamClient_SteamClient018_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamUser( struct cppISteamClient_SteamClient018_GetISteamUser_params *params );

struct cppISteamClient_SteamClient018_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamGameServer( struct cppISteamClient_SteamClient018_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient018_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient018_SetLocalIPBinding( struct cppISteamClient_SteamClient018_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient018_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamFriends( struct cppISteamClient_SteamClient018_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient018_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamUtils( struct cppISteamClient_SteamClient018_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient018_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamMatchmaking( struct cppISteamClient_SteamClient018_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient018_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient018_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient018_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamGenericInterface( struct cppISteamClient_SteamClient018_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient018_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamUserStats( struct cppISteamClient_SteamClient018_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient018_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamGameServerStats( struct cppISteamClient_SteamClient018_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient018_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamApps( struct cppISteamClient_SteamClient018_GetISteamApps_params *params );

struct cppISteamClient_SteamClient018_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamNetworking( struct cppISteamClient_SteamClient018_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient018_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamRemoteStorage( struct cppISteamClient_SteamClient018_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient018_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamScreenshots( struct cppISteamClient_SteamClient018_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient018_GetISteamGameSearch_params
{
    void *linux_side;
    void /*ISteamGameSearch*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamGameSearch( struct cppISteamClient_SteamClient018_GetISteamGameSearch_params *params );

struct cppISteamClient_SteamClient018_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient018_RunFrame( struct cppISteamClient_SteamClient018_RunFrame_params *params );

struct cppISteamClient_SteamClient018_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient018_GetIPCCallCount( struct cppISteamClient_SteamClient018_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient018_SetWarningMessageHook_params
{
    void *linux_side;
    void (*__cdecl pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient018_SetWarningMessageHook( struct cppISteamClient_SteamClient018_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient018_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamHTTP( struct cppISteamClient_SteamClient018_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient018_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamController( struct cppISteamClient_SteamClient018_GetISteamController_params *params );

struct cppISteamClient_SteamClient018_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamUGC( struct cppISteamClient_SteamClient018_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient018_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamAppList( struct cppISteamClient_SteamClient018_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient018_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamMusic( struct cppISteamClient_SteamClient018_GetISteamMusic_params *params );

struct cppISteamClient_SteamClient018_GetISteamMusicRemote_params
{
    void *linux_side;
    void /*ISteamMusicRemote*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamMusicRemote( struct cppISteamClient_SteamClient018_GetISteamMusicRemote_params *params );

struct cppISteamClient_SteamClient018_GetISteamHTMLSurface_params
{
    void *linux_side;
    void /*ISteamHTMLSurface*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamHTMLSurface( struct cppISteamClient_SteamClient018_GetISteamHTMLSurface_params *params );

struct cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void (*__stdcall _a)(void);
};
extern void cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void (*__stdcall _a)(void);
};
extern void cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params
{
    void *linux_side;
    uint32_t (*__stdcall func)(int32_t);
};
extern void cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params );

struct cppISteamClient_SteamClient018_GetISteamInventory_params
{
    void *linux_side;
    void /*ISteamInventory*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamInventory( struct cppISteamClient_SteamClient018_GetISteamInventory_params *params );

struct cppISteamClient_SteamClient018_GetISteamVideo_params
{
    void *linux_side;
    void /*ISteamVideo*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamVideo( struct cppISteamClient_SteamClient018_GetISteamVideo_params *params );

struct cppISteamClient_SteamClient018_GetISteamParentalSettings_params
{
    void *linux_side;
    void /*ISteamParentalSettings*/ *_ret;
    HSteamUser hSteamuser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamParentalSettings( struct cppISteamClient_SteamClient018_GetISteamParentalSettings_params *params );

struct cppISteamClient_SteamClient018_GetISteamInput_params
{
    void *linux_side;
    void /*ISteamInput*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamInput( struct cppISteamClient_SteamClient018_GetISteamInput_params *params );

struct cppISteamClient_SteamClient018_GetISteamParties_params
{
    void *linux_side;
    void /*ISteamParties*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient018_GetISteamParties( struct cppISteamClient_SteamClient018_GetISteamParties_params *params );

