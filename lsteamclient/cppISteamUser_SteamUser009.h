struct cppISteamUser_SteamUser009;
struct cppISteamUser_SteamUser009_GetHSteamUser_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamUser_SteamUser009_GetHSteamUser( struct cppISteamUser_SteamUser009_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser009_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser009_BLoggedOn( struct cppISteamUser_SteamUser009_BLoggedOn_params *params );

struct cppISteamUser_SteamUser009_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser009_GetSteamID( struct cppISteamUser_SteamUser009_GetSteamID_params *params );

struct cppISteamUser_SteamUser009_InitiateGameConnection_params
{
    void *linux_side;
    int32_t _ret;
    void *pAuthBlob;
    int32_t cbMaxAuthBlob;
    CSteamID steamIDGameServer;
    CGameID gameID;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser009_InitiateGameConnection( struct cppISteamUser_SteamUser009_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser009_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser009_TerminateGameConnection( struct cppISteamUser_SteamUser009_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser009_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser009_TrackAppUsageEvent( struct cppISteamUser_SteamUser009_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser009_RefreshSteam2Login_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser009_RefreshSteam2Login( struct cppISteamUser_SteamUser009_RefreshSteam2Login_params *params );

