struct cppISteamUser_SteamUser007_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser007_GetHSteamUser( struct cppISteamUser_SteamUser007_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser007_LogOn_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser007_LogOn( struct cppISteamUser_SteamUser007_LogOn_params *params );

struct cppISteamUser_SteamUser007_LogOff_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser007_LogOff( struct cppISteamUser_SteamUser007_LogOff_params *params );

struct cppISteamUser_SteamUser007_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser007_BLoggedOn( struct cppISteamUser_SteamUser007_BLoggedOn_params *params );

struct cppISteamUser_SteamUser007_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser007_GetSteamID( struct cppISteamUser_SteamUser007_GetSteamID_params *params );

struct cppISteamUser_SteamUser007_SetRegistryString_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUser_SteamUser007_SetRegistryString( struct cppISteamUser_SteamUser007_SetRegistryString_params *params );

struct cppISteamUser_SteamUser007_GetRegistryString_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    char *pchValue;
    int cbValue;
};
extern void cppISteamUser_SteamUser007_GetRegistryString( struct cppISteamUser_SteamUser007_GetRegistryString_params *params );

struct cppISteamUser_SteamUser007_SetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    int iValue;
};
extern void cppISteamUser_SteamUser007_SetRegistryInt( struct cppISteamUser_SteamUser007_SetRegistryInt_params *params );

struct cppISteamUser_SteamUser007_GetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    int *piValue;
};
extern void cppISteamUser_SteamUser007_GetRegistryInt( struct cppISteamUser_SteamUser007_GetRegistryInt_params *params );

struct cppISteamUser_SteamUser007_InitiateGameConnection_params
{
    void *linux_side;
    int _ret;
    void *pBlob;
    int cbMaxBlob;
    CSteamID steamID;
    CGameID gameID;
    uint32 unIPServer;
    uint16 usPortServer;
    bool bSecure;
    void *pvSteam2GetEncryptionKey;
    int cbSteam2GetEncryptionKey;
};
extern void cppISteamUser_SteamUser007_InitiateGameConnection( struct cppISteamUser_SteamUser007_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser007_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser007_TerminateGameConnection( struct cppISteamUser_SteamUser007_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser007_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser007_TrackAppUsageEvent( struct cppISteamUser_SteamUser007_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser007_RefreshSteam2Login_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser007_RefreshSteam2Login( struct cppISteamUser_SteamUser007_RefreshSteam2Login_params *params );

