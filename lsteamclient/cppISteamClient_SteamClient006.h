struct cppISteamClient_SteamClient006_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient006_CreateSteamPipe( struct cppISteamClient_SteamClient006_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient006_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient006_BReleaseSteamPipe( struct cppISteamClient_SteamClient006_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient006_CreateGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
};
extern void cppISteamClient_SteamClient006_CreateGlobalUser( struct cppISteamClient_SteamClient006_CreateGlobalUser_params *params );

struct cppISteamClient_SteamClient006_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient006_ConnectToGlobalUser( struct cppISteamClient_SteamClient006_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient006_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
};
extern void cppISteamClient_SteamClient006_CreateLocalUser( struct cppISteamClient_SteamClient006_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient006_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient006_ReleaseUser( struct cppISteamClient_SteamClient006_ReleaseUser_params *params );

struct cppISteamClient_SteamClient006_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamUser( struct cppISteamClient_SteamClient006_GetISteamUser_params *params );

struct cppISteamClient_SteamClient006_GetIVAC_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
};
extern void cppISteamClient_SteamClient006_GetIVAC( struct cppISteamClient_SteamClient006_GetIVAC_params *params );

struct cppISteamClient_SteamClient006_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamGameServer( struct cppISteamClient_SteamClient006_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient006_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
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
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamFriends( struct cppISteamClient_SteamClient006_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient006_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamUtils( struct cppISteamClient_SteamClient006_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient006_GetISteamBilling_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamBilling( struct cppISteamClient_SteamClient006_GetISteamBilling_params *params );

struct cppISteamClient_SteamClient006_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamMatchmaking( struct cppISteamClient_SteamClient006_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient006_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamApps( struct cppISteamClient_SteamClient006_GetISteamApps_params *params );

struct cppISteamClient_SteamClient006_GetISteamContentServer_params
{
    void *linux_side;
    void /*ISteamContentServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamContentServer( struct cppISteamClient_SteamClient006_GetISteamContentServer_params *params );

struct cppISteamClient_SteamClient006_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient006_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient006_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient006_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
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
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient006_GetIPCCallCount( struct cppISteamClient_SteamClient006_GetIPCCallCount_params *params );

