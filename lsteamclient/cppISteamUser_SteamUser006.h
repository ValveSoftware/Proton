struct cppISteamUser_SteamUser006_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser006_GetHSteamUser( struct cppISteamUser_SteamUser006_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser006_LogOn_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser006_LogOn( struct cppISteamUser_SteamUser006_LogOn_params *params );

struct cppISteamUser_SteamUser006_LogOff_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser006_LogOff( struct cppISteamUser_SteamUser006_LogOff_params *params );

struct cppISteamUser_SteamUser006_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser006_BLoggedOn( struct cppISteamUser_SteamUser006_BLoggedOn_params *params );

struct cppISteamUser_SteamUser006_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser006_GetSteamID( struct cppISteamUser_SteamUser006_GetSteamID_params *params );

struct cppISteamUser_SteamUser006_SetRegistryString_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUser_SteamUser006_SetRegistryString( struct cppISteamUser_SteamUser006_SetRegistryString_params *params );

struct cppISteamUser_SteamUser006_GetRegistryString_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    char *pchValue;
    int cbValue;
};
extern void cppISteamUser_SteamUser006_GetRegistryString( struct cppISteamUser_SteamUser006_GetRegistryString_params *params );

struct cppISteamUser_SteamUser006_SetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    int iValue;
};
extern void cppISteamUser_SteamUser006_SetRegistryInt( struct cppISteamUser_SteamUser006_SetRegistryInt_params *params );

struct cppISteamUser_SteamUser006_GetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    int *piValue;
};
extern void cppISteamUser_SteamUser006_GetRegistryInt( struct cppISteamUser_SteamUser006_GetRegistryInt_params *params );

struct cppISteamUser_SteamUser006_InitiateGameConnection_params
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
};
extern void cppISteamUser_SteamUser006_InitiateGameConnection( struct cppISteamUser_SteamUser006_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser006_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser006_TerminateGameConnection( struct cppISteamUser_SteamUser006_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser006_TrackAppUsageEvent( struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params *params );

