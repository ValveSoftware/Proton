struct cppISteamUser_SteamUser006_GetHSteamUser_params
{
    void *linux_side;
    int32_t _ret;
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
    uint32_t eRegistrySubTree;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUser_SteamUser006_SetRegistryString( struct cppISteamUser_SteamUser006_SetRegistryString_params *params );

struct cppISteamUser_SteamUser006_GetRegistryString_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    char *pchValue;
    int32_t cbValue;
};
extern void cppISteamUser_SteamUser006_GetRegistryString( struct cppISteamUser_SteamUser006_GetRegistryString_params *params );

struct cppISteamUser_SteamUser006_SetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    int32_t iValue;
};
extern void cppISteamUser_SteamUser006_SetRegistryInt( struct cppISteamUser_SteamUser006_SetRegistryInt_params *params );

struct cppISteamUser_SteamUser006_GetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    int32_t *piValue;
};
extern void cppISteamUser_SteamUser006_GetRegistryInt( struct cppISteamUser_SteamUser006_GetRegistryInt_params *params );

struct cppISteamUser_SteamUser006_InitiateGameConnection_params
{
    void *linux_side;
    int32_t _ret;
    void *pBlob;
    int32_t cbMaxBlob;
    CSteamID steamID;
    CGameID gameID;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser006_InitiateGameConnection( struct cppISteamUser_SteamUser006_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser006_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser006_TerminateGameConnection( struct cppISteamUser_SteamUser006_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser006_TrackAppUsageEvent( struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params *params );

