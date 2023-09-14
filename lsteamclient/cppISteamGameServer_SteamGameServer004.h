struct cppISteamGameServer_SteamGameServer004_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer004_LogOn( struct cppISteamGameServer_SteamGameServer004_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer004_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer004_LogOff( struct cppISteamGameServer_SteamGameServer004_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer004_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer004_BLoggedOn( struct cppISteamGameServer_SteamGameServer004_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer004_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer004_BSecure( struct cppISteamGameServer_SteamGameServer004_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer004_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer004_GetSteamID( struct cppISteamGameServer_SteamGameServer004_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    CSteamID steamIDUser;
    uint32_t unIPClient;
    void *pvAuthBlob;
    uint32_t cubAuthBlobSize;
};
extern void cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer004_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer004_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer004_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer004_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32_t uScore;
};
extern void cppISteamGameServer_SteamGameServer004_BUpdateUserData( struct cppISteamGameServer_SteamGameServer004_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer004_BSetServerType_params
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
extern void cppISteamGameServer_SteamGameServer004_BSetServerType( struct cppISteamGameServer_SteamGameServer004_BSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer004_UpdateServerStatus_params
{
    void *linux_side;
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
    const char *pchServerName;
    const char *pSpectatorServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer004_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer004_UpdateServerStatus_params *params );

struct cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer004_SetGameType_params
{
    void *linux_side;
    const char *pchGameType;
};
extern void cppISteamGameServer_SteamGameServer004_SetGameType( struct cppISteamGameServer_SteamGameServer004_SetGameType_params *params );

struct cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pchAchievementName;
};
extern void cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus_params *params );

