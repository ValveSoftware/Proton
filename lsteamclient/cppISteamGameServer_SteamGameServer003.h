struct cppISteamGameServer_SteamGameServer003_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer003_LogOn( struct cppISteamGameServer_SteamGameServer003_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer003_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer003_LogOff( struct cppISteamGameServer_SteamGameServer003_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer003_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer003_BLoggedOn( struct cppISteamGameServer_SteamGameServer003_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer003_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer003_BSecure( struct cppISteamGameServer_SteamGameServer003_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer003_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer003_GetSteamID( struct cppISteamGameServer_SteamGameServer003_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params
{
    void *linux_side;
    bool _ret;
    void *pvEncryptionKey;
    uint32 *pcbEncryptionKey;
    uint32 cbMaxEncryptionKey;
};
extern void cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSendUserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32 unUserID;
    uint32 unIPPublic;
    uint16 usPort;
    const void *pvCookie;
    uint32 cubCookie;
};
extern void cppISteamGameServer_SteamGameServer003_GSSendUserConnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserConnect_params *params );

struct cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32 unUserID;
};
extern void cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32 unUserID;
};
extern void cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSetSpawnCount_params
{
    void *linux_side;
    uint32 ucSpawn;
};
extern void cppISteamGameServer_SteamGameServer003_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer003_GSSetSpawnCount_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSetServerType_params
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
extern void cppISteamGameServer_SteamGameServer003_GSSetServerType( struct cppISteamGameServer_SteamGameServer003_GSSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer003_GSUpdateStatus_params
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
extern void cppISteamGameServer_SteamGameServer003_GSUpdateStatus( struct cppISteamGameServer_SteamGameServer003_GSUpdateStatus_params *params );

struct cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID *pSteamID;
};
extern void cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser( struct cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSetUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pPlayerName;
    uint32 nFrags;
};
extern void cppISteamGameServer_SteamGameServer003_GSSetUserData( struct cppISteamGameServer_SteamGameServer003_GSSetUserData_params *params );

struct cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSetGameType_params
{
    void *linux_side;
    const char *pchType;
};
extern void cppISteamGameServer_SteamGameServer003_GSSetGameType( struct cppISteamGameServer_SteamGameServer003_GSSetGameType_params *params );

struct cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pchAchievementName;
};
extern void cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params *params );

