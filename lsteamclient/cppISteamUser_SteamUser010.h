struct cppISteamUser_SteamUser010_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser010_GetHSteamUser( struct cppISteamUser_SteamUser010_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser010_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser010_BLoggedOn( struct cppISteamUser_SteamUser010_BLoggedOn_params *params );

struct cppISteamUser_SteamUser010_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser010_GetSteamID( struct cppISteamUser_SteamUser010_GetSteamID_params *params );

struct cppISteamUser_SteamUser010_InitiateGameConnection_params
{
    void *linux_side;
    int32_t _ret;
    void *pAuthBlob;
    int32_t cbMaxAuthBlob;
    CSteamID steamIDGameServer;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser010_InitiateGameConnection( struct cppISteamUser_SteamUser010_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser010_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser010_TerminateGameConnection( struct cppISteamUser_SteamUser010_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser010_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser010_TrackAppUsageEvent( struct cppISteamUser_SteamUser010_TrackAppUsageEvent_params *params );

