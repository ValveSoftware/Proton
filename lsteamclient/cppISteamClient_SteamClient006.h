struct cppISteamClient_SteamClient006_CreateSteamPipe_params
{
    void *linux_side;
    HSteamPipe _ret;
};
extern void cppISteamClient_SteamClient006_CreateSteamPipe( struct cppISteamClient_SteamClient006_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient006_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient006_BReleaseSteamPipe( struct cppISteamClient_SteamClient006_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient006_CreateGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
};
extern void cppISteamClient_SteamClient006_CreateGlobalUser( struct cppISteamClient_SteamClient006_CreateGlobalUser_params *params );

struct cppISteamClient_SteamClient006_ConnectToGlobalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe hSteamPipe;
};
extern void cppISteamClient_SteamClient006_ConnectToGlobalUser( struct cppISteamClient_SteamClient006_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient006_CreateLocalUser_params
{
    void *linux_side;
    HSteamUser _ret;
    HSteamPipe *phSteamPipe;
};
extern void cppISteamClient_SteamClient006_CreateLocalUser( struct cppISteamClient_SteamClient006_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient006_ReleaseUser_params
{
    void *linux_side;
    HSteamPipe hSteamPipe;
    HSteamUser hUser;
};
extern void cppISteamClient_SteamClient006_ReleaseUser( struct cppISteamClient_SteamClient006_ReleaseUser_params *params );

struct cppISteamClient_SteamClient006_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamUser( struct cppISteamClient_SteamClient006_GetISteamUser_params *params );

struct cppISteamClient_SteamClient006_GetIVAC_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
};
extern void cppISteamClient_SteamClient006_GetIVAC( struct cppISteamClient_SteamClient006_GetIVAC_params *params );

struct cppISteamClient_SteamClient006_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamGameServer( struct cppISteamClient_SteamClient006_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient006_SetLocalIPBinding_params
{
    void *linux_side;
    uint32 unIP;
    uint16 usPort;
};
extern void cppISteamClient_SteamClient006_SetLocalIPBinding( struct cppISteamClient_SteamClient006_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient006_GetUniverseName_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eUniverse;
};
extern void cppISteamClient_SteamClient006_GetUniverseName( struct cppISteamClient_SteamClient006_GetUniverseName_params *params );

struct cppISteamClient_SteamClient006_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamFriends( struct cppISteamClient_SteamClient006_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient006_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamUtils( struct cppISteamClient_SteamClient006_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient006_GetISteamBilling_params
{
    void *linux_side;
    void *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamBilling( struct cppISteamClient_SteamClient006_GetISteamBilling_params *params );

struct cppISteamClient_SteamClient006_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamMatchmaking( struct cppISteamClient_SteamClient006_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient006_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamApps( struct cppISteamClient_SteamClient006_GetISteamApps_params *params );

struct cppISteamClient_SteamClient006_GetISteamContentServer_params
{
    void *linux_side;
    void /*ISteamContentServer*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamContentServer( struct cppISteamClient_SteamClient006_GetISteamContentServer_params *params );

struct cppISteamClient_SteamClient006_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient006_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient006_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    HSteamUser hSteamUser;
    HSteamPipe hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient006_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient006_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient006_RunFrame( struct cppISteamClient_SteamClient006_RunFrame_params *params );

struct cppISteamClient_SteamClient006_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamClient_SteamClient006_GetIPCCallCount( struct cppISteamClient_SteamClient006_GetIPCCallCount_params *params );

