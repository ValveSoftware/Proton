struct cppISteamGameServer_SteamGameServer002_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer002_LogOn( struct cppISteamGameServer_SteamGameServer002_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer002_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer002_LogOff( struct cppISteamGameServer_SteamGameServer002_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer002_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer002_BLoggedOn( struct cppISteamGameServer_SteamGameServer002_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetSpawnCount_params
{
    void *linux_side;
    uint32 ucSpawn;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer002_GSSetSpawnCount_params *params );

struct cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params
{
    void *linux_side;
    bool _ret;
    void *pvEncryptionKey;
    uint32 *pcbEncryptionKey;
    uint32 cbMaxEncryptionKey;
};
extern void cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32 unUserID;
    const void *pvRawKey;
    uint32 unKeyLen;
    uint32 unIPPublic;
    uint16 usPort;
    const void *pvCookie;
    uint32 cubCookie;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32 unIPPublic;
    const void *pvCookie;
    uint32 cubCookie;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32 unUserID;
};
extern void cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32 unUserID;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    int nSecondsConnected;
    int nSecondsSinceLast;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse( struct cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params *params );

struct cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params
{
    void *linux_side;
    bool _ret;
    int32 nAppIdServed;
    uint32 unServerFlags;
    int cPlayers;
    int cPlayersMax;
    int cBotPlayers;
    int unGamePort;
    const char *pchServerName;
    const char *pchGameDir;
    const char *pchMapName;
    const char *pchVersion;
};
extern void cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus( struct cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params *params );

struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus_params
{
    void *linux_side;
    bool _ret;
    int cPlayers;
    int cPlayersMax;
    int cBotPlayers;
    const char *pchServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer002_GSUpdateStatus( struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus_params *params );

struct cppISteamGameServer_SteamGameServer002_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer002_BSecure( struct cppISteamGameServer_SteamGameServer002_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer002_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer002_GetSteamID( struct cppISteamGameServer_SteamGameServer002_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetServerType_params
{
    void *linux_side;
    bool _ret;
    int32 nGameAppId;
    uint32 unServerFlags;
    uint32 unGameIP;
    uint32 unGamePort;
    const char *pchGameDir;
    const char *pchVersion;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetServerType( struct cppISteamGameServer_SteamGameServer002_GSSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetServerType2_params
{
    void *linux_side;
    bool _ret;
    int32 nGameAppId;
    uint32 unServerFlags;
    uint32 unGameIP;
    uint16 unGamePort;
    uint16 unSpectatorPort;
    uint16 usQueryPort;
    const char *pchGameDir;
    const char *pchVersion;
    bool bLANMode;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetServerType2( struct cppISteamGameServer_SteamGameServer002_GSSetServerType2_params *params );

struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus2_params
{
    void *linux_side;
    bool _ret;
    int cPlayers;
    int cPlayersMax;
    int cBotPlayers;
    const char *pchServerName;
    const char *pSpectatorServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer002_GSUpdateStatus2( struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus2_params *params );

struct cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID *pSteamID;
};
extern void cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser( struct cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pPlayerName;
    uint32 nFrags;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetUserData( struct cppISteamGameServer_SteamGameServer002_GSSetUserData_params *params );

struct cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetGameType_params
{
    void *linux_side;
    const char *pchType;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetGameType( struct cppISteamGameServer_SteamGameServer002_GSSetGameType_params *params );

