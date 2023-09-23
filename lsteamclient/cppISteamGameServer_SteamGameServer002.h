struct cppISteamGameServer_SteamGameServer002;
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
    uint32_t ucSpawn;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer002_GSSetSpawnCount_params *params );

struct cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params
{
    void *linux_side;
    bool _ret;
    void *pvEncryptionKey;
    uint32_t *pcbEncryptionKey;
    uint32_t cbMaxEncryptionKey;
};
extern void cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32_t unUserID;
    const void *pvRawKey;
    uint32_t unKeyLen;
    uint32_t unIPPublic;
    uint16_t usPort;
    const void *pvCookie;
    uint32_t cubCookie;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32_t unIPPublic;
    const void *pvCookie;
    uint32_t cubCookie;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params
{
    void *linux_side;
    bool _ret;
    uint32_t unUserID;
};
extern void cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    uint32_t unUserID;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    int32_t nSecondsConnected;
    int32_t nSecondsSinceLast;
};
extern void cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse( struct cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params *params );

struct cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params
{
    void *linux_side;
    bool _ret;
    int32_t nAppIdServed;
    uint32_t unServerFlags;
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
    int32_t unGamePort;
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
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
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
    int32_t nGameAppId;
    uint32_t unServerFlags;
    uint32_t unGameIP;
    uint32_t unGamePort;
    const char *pchGameDir;
    const char *pchVersion;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetServerType( struct cppISteamGameServer_SteamGameServer002_GSSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetServerType2_params
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
extern void cppISteamGameServer_SteamGameServer002_GSSetServerType2( struct cppISteamGameServer_SteamGameServer002_GSSetServerType2_params *params );

struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus2_params
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
    uint32_t nFrags;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetUserData( struct cppISteamGameServer_SteamGameServer002_GSSetUserData_params *params );

struct cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer002_GSSetGameType_params
{
    void *linux_side;
    const char *pchType;
};
extern void cppISteamGameServer_SteamGameServer002_GSSetGameType( struct cppISteamGameServer_SteamGameServer002_GSSetGameType_params *params );

