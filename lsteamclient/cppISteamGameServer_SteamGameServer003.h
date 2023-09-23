struct cppISteamGameServer_SteamGameServer003;
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
    uint32_t *pcbEncryptionKey;
    uint32_t cbMaxEncryptionKey;
};
extern void cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSendUserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32_t unUserID;
    uint32_t unIPPublic;
    uint16_t usPort;
    const void *pvCookie;
    uint32_t cubCookie;
};
extern void cppISteamGameServer_SteamGameServer003_GSSendUserConnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserConnect_params *params );

struct cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32_t unUserID;
};
extern void cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32_t unUserID;
};
extern void cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSetSpawnCount_params
{
    void *linux_side;
    uint32_t ucSpawn;
};
extern void cppISteamGameServer_SteamGameServer003_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer003_GSSetSpawnCount_params *params );

struct cppISteamGameServer_SteamGameServer003_GSSetServerType_params
{
    void *linux_side;
    bool _ret;
    int32_t nGameAppId;
    uint32_t unServerFlags;
    uint32_t unGameIP;
    uint16_t unGamePort;
    uint16_t unSpectatorPort;
    uint16_t usQueryPort;
    const char *pchGameDir;
    const char *pchVersion;
    bool bLANMode;
};
extern void cppISteamGameServer_SteamGameServer003_GSSetServerType( struct cppISteamGameServer_SteamGameServer003_GSSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer003_GSUpdateStatus_params
{
    void *linux_side;
    bool _ret;
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
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
    uint32_t nFrags;
};
extern void cppISteamGameServer_SteamGameServer003_GSSetUserData( struct cppISteamGameServer_SteamGameServer003_GSSetUserData_params *params );

struct cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
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

