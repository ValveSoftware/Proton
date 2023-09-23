struct cppISteamClient_SteamClient019;
struct cppISteamClient_SteamClient019_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient019_CreateSteamPipe( struct cppISteamClient_SteamClient019_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient019_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient019_BReleaseSteamPipe( struct cppISteamClient_SteamClient019_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient019_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient019_ConnectToGlobalUser( struct cppISteamClient_SteamClient019_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient019_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient019_CreateLocalUser( struct cppISteamClient_SteamClient019_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient019_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient019_ReleaseUser( struct cppISteamClient_SteamClient019_ReleaseUser_params *params );

struct cppISteamClient_SteamClient019_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamUser( struct cppISteamClient_SteamClient019_GetISteamUser_params *params );

struct cppISteamClient_SteamClient019_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamGameServer( struct cppISteamClient_SteamClient019_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient019_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient019_SetLocalIPBinding( struct cppISteamClient_SteamClient019_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient019_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamFriends( struct cppISteamClient_SteamClient019_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient019_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamUtils( struct cppISteamClient_SteamClient019_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient019_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamMatchmaking( struct cppISteamClient_SteamClient019_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient019_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient019_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient019_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamGenericInterface( struct cppISteamClient_SteamClient019_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient019_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamUserStats( struct cppISteamClient_SteamClient019_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient019_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamGameServerStats( struct cppISteamClient_SteamClient019_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient019_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamApps( struct cppISteamClient_SteamClient019_GetISteamApps_params *params );

struct cppISteamClient_SteamClient019_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamNetworking( struct cppISteamClient_SteamClient019_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient019_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamRemoteStorage( struct cppISteamClient_SteamClient019_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient019_GetISteamScreenshots_params
{
    void *linux_side;
    void /*ISteamScreenshots*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamScreenshots( struct cppISteamClient_SteamClient019_GetISteamScreenshots_params *params );

struct cppISteamClient_SteamClient019_GetISteamGameSearch_params
{
    void *linux_side;
    void /*ISteamGameSearch*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamGameSearch( struct cppISteamClient_SteamClient019_GetISteamGameSearch_params *params );

struct cppISteamClient_SteamClient019_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient019_RunFrame( struct cppISteamClient_SteamClient019_RunFrame_params *params );

struct cppISteamClient_SteamClient019_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient019_GetIPCCallCount( struct cppISteamClient_SteamClient019_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient019_SetWarningMessageHook_params
{
    void *linux_side;
    void (*__cdecl pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient019_SetWarningMessageHook( struct cppISteamClient_SteamClient019_SetWarningMessageHook_params *params );

struct cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed_params *params );

struct cppISteamClient_SteamClient019_GetISteamHTTP_params
{
    void *linux_side;
    void /*ISteamHTTP*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamHTTP( struct cppISteamClient_SteamClient019_GetISteamHTTP_params *params );

struct cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages_params *params );

struct cppISteamClient_SteamClient019_GetISteamController_params
{
    void *linux_side;
    void /*ISteamController*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamController( struct cppISteamClient_SteamClient019_GetISteamController_params *params );

struct cppISteamClient_SteamClient019_GetISteamUGC_params
{
    void *linux_side;
    void /*ISteamUGC*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamUGC( struct cppISteamClient_SteamClient019_GetISteamUGC_params *params );

struct cppISteamClient_SteamClient019_GetISteamAppList_params
{
    void *linux_side;
    void /*ISteamAppList*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamAppList( struct cppISteamClient_SteamClient019_GetISteamAppList_params *params );

struct cppISteamClient_SteamClient019_GetISteamMusic_params
{
    void *linux_side;
    void /*ISteamMusic*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamMusic( struct cppISteamClient_SteamClient019_GetISteamMusic_params *params );

struct cppISteamClient_SteamClient019_GetISteamMusicRemote_params
{
    void *linux_side;
    void /*ISteamMusicRemote*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamMusicRemote( struct cppISteamClient_SteamClient019_GetISteamMusicRemote_params *params );

struct cppISteamClient_SteamClient019_GetISteamHTMLSurface_params
{
    void *linux_side;
    void /*ISteamHTMLSurface*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamHTMLSurface( struct cppISteamClient_SteamClient019_GetISteamHTMLSurface_params *params );

struct cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void (*__stdcall _a)(void);
};
extern void cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params
{
    void *linux_side;
    void (*__stdcall _a)(void);
};
extern void cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params );

struct cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params
{
    void *linux_side;
    uint32_t (*__stdcall func)(int32_t);
};
extern void cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params );

struct cppISteamClient_SteamClient019_GetISteamInventory_params
{
    void *linux_side;
    void /*ISteamInventory*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamInventory( struct cppISteamClient_SteamClient019_GetISteamInventory_params *params );

struct cppISteamClient_SteamClient019_GetISteamVideo_params
{
    void *linux_side;
    void /*ISteamVideo*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamVideo( struct cppISteamClient_SteamClient019_GetISteamVideo_params *params );

struct cppISteamClient_SteamClient019_GetISteamParentalSettings_params
{
    void *linux_side;
    void /*ISteamParentalSettings*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamParentalSettings( struct cppISteamClient_SteamClient019_GetISteamParentalSettings_params *params );

struct cppISteamClient_SteamClient019_GetISteamInput_params
{
    void *linux_side;
    void /*ISteamInput*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamInput( struct cppISteamClient_SteamClient019_GetISteamInput_params *params );

struct cppISteamClient_SteamClient019_GetISteamParties_params
{
    void *linux_side;
    void /*ISteamParties*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamParties( struct cppISteamClient_SteamClient019_GetISteamParties_params *params );

struct cppISteamClient_SteamClient019_GetISteamRemotePlay_params
{
    void *linux_side;
    void /*ISteamRemotePlay*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient019_GetISteamRemotePlay( struct cppISteamClient_SteamClient019_GetISteamRemotePlay_params *params );

