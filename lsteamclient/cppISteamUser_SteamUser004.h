struct cppISteamUser_SteamUser004_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser004_GetHSteamUser( struct cppISteamUser_SteamUser004_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser004_LogOn_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser004_LogOn( struct cppISteamUser_SteamUser004_LogOn_params *params );

struct cppISteamUser_SteamUser004_LogOff_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser004_LogOff( struct cppISteamUser_SteamUser004_LogOff_params *params );

struct cppISteamUser_SteamUser004_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser004_BLoggedOn( struct cppISteamUser_SteamUser004_BLoggedOn_params *params );

struct cppISteamUser_SteamUser004_GetLogonState_params
{
    void *linux_side;
    ELogonState _ret;
};
extern void cppISteamUser_SteamUser004_GetLogonState( struct cppISteamUser_SteamUser004_GetLogonState_params *params );

struct cppISteamUser_SteamUser004_BConnected_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser004_BConnected( struct cppISteamUser_SteamUser004_BConnected_params *params );

struct cppISteamUser_SteamUser004_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser004_GetSteamID( struct cppISteamUser_SteamUser004_GetSteamID_params *params );

struct cppISteamUser_SteamUser004_IsVACBanned_params
{
    void *linux_side;
    bool _ret;
    int nGameID;
};
extern void cppISteamUser_SteamUser004_IsVACBanned( struct cppISteamUser_SteamUser004_IsVACBanned_params *params );

struct cppISteamUser_SteamUser004_RequireShowVACBannedMessage_params
{
    void *linux_side;
    bool _ret;
    int nGameID;
};
extern void cppISteamUser_SteamUser004_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser004_RequireShowVACBannedMessage_params *params );

struct cppISteamUser_SteamUser004_AcknowledgeVACBanning_params
{
    void *linux_side;
    int nGameID;
};
extern void cppISteamUser_SteamUser004_AcknowledgeVACBanning( struct cppISteamUser_SteamUser004_AcknowledgeVACBanning_params *params );

struct cppISteamUser_SteamUser004_NClientGameIDAdd_params
{
    void *linux_side;
    int _ret;
    int nGameID;
};
extern void cppISteamUser_SteamUser004_NClientGameIDAdd( struct cppISteamUser_SteamUser004_NClientGameIDAdd_params *params );

struct cppISteamUser_SteamUser004_RemoveClientGame_params
{
    void *linux_side;
    int nClientGameID;
};
extern void cppISteamUser_SteamUser004_RemoveClientGame( struct cppISteamUser_SteamUser004_RemoveClientGame_params *params );

struct cppISteamUser_SteamUser004_SetClientGameServer_params
{
    void *linux_side;
    int nClientGameID;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser004_SetClientGameServer( struct cppISteamUser_SteamUser004_SetClientGameServer_params *params );

struct cppISteamUser_SteamUser004_SetSteam2Ticket_params
{
    void *linux_side;
    uint8 *pubTicket;
    int cubTicket;
};
extern void cppISteamUser_SteamUser004_SetSteam2Ticket( struct cppISteamUser_SteamUser004_SetSteam2Ticket_params *params );

struct cppISteamUser_SteamUser004_AddServerNetAddress_params
{
    void *linux_side;
    uint32 unIP;
    uint16 unPort;
};
extern void cppISteamUser_SteamUser004_AddServerNetAddress( struct cppISteamUser_SteamUser004_AddServerNetAddress_params *params );

struct cppISteamUser_SteamUser004_SetEmail_params
{
    void *linux_side;
    bool _ret;
    const char *pchEmail;
};
extern void cppISteamUser_SteamUser004_SetEmail( struct cppISteamUser_SteamUser004_SetEmail_params *params );

struct cppISteamUser_SteamUser004_GetSteamGameConnectToken_params
{
    void *linux_side;
    int _ret;
    void *pBlob;
    int cbMaxBlob;
};
extern void cppISteamUser_SteamUser004_GetSteamGameConnectToken( struct cppISteamUser_SteamUser004_GetSteamGameConnectToken_params *params );

struct cppISteamUser_SteamUser004_SetRegistryString_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUser_SteamUser004_SetRegistryString( struct cppISteamUser_SteamUser004_SetRegistryString_params *params );

struct cppISteamUser_SteamUser004_GetRegistryString_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    char *pchValue;
    int cbValue;
};
extern void cppISteamUser_SteamUser004_GetRegistryString( struct cppISteamUser_SteamUser004_GetRegistryString_params *params );

struct cppISteamUser_SteamUser004_SetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    int iValue;
};
extern void cppISteamUser_SteamUser004_SetRegistryInt( struct cppISteamUser_SteamUser004_SetRegistryInt_params *params );

struct cppISteamUser_SteamUser004_GetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    EConfigSubTree eRegistrySubTree;
    const char *pchKey;
    int *piValue;
};
extern void cppISteamUser_SteamUser004_GetRegistryInt( struct cppISteamUser_SteamUser004_GetRegistryInt_params *params );

struct cppISteamUser_SteamUser004_InitiateGameConnection_params
{
    void *linux_side;
    int _ret;
    void *pBlob;
    int cbMaxBlob;
    CSteamID steamID;
    int nGameAppID;
    uint32 unIPServer;
    uint16 usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser004_InitiateGameConnection( struct cppISteamUser_SteamUser004_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser004_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser004_TerminateGameConnection( struct cppISteamUser_SteamUser004_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params *params );

struct cppISteamUser_SteamUser004_IsPrimaryChatDestination_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser004_IsPrimaryChatDestination( struct cppISteamUser_SteamUser004_IsPrimaryChatDestination_params *params );

struct cppISteamUser_SteamUser004_RequestLegacyCDKey_params
{
    void *linux_side;
    uint32 iAppID;
};
extern void cppISteamUser_SteamUser004_RequestLegacyCDKey( struct cppISteamUser_SteamUser004_RequestLegacyCDKey_params *params );

