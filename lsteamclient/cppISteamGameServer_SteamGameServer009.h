struct cppISteamGameServer_SteamGameServer009_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer009_LogOn( struct cppISteamGameServer_SteamGameServer009_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer009_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer009_LogOff( struct cppISteamGameServer_SteamGameServer009_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer009_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer009_BLoggedOn( struct cppISteamGameServer_SteamGameServer009_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer009_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer009_BSecure( struct cppISteamGameServer_SteamGameServer009_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer009_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer009_GetSteamID( struct cppISteamGameServer_SteamGameServer009_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32_t unIPClient;
    const void *pvAuthBlob;
    uint32_t cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer009_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer009_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer009_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer009_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32_t uScore;
};
extern void cppISteamGameServer_SteamGameServer009_BUpdateUserData( struct cppISteamGameServer_SteamGameServer009_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer009_BSetServerType_params
{
    void *linux_side;
    bool _ret;
    uint32_t unServerFlags;
    uint32_t unGameIP;
    uint16_t unGamePort;
    uint16_t unSpectatorPort;
    uint16_t usQueryPort;
    const char *pchGameDir;
    const char *pchVersion;
    bool bLANMode;
};
extern void cppISteamGameServer_SteamGameServer009_BSetServerType( struct cppISteamGameServer_SteamGameServer009_BSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer009_UpdateServerStatus_params
{
    void *linux_side;
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
    const char *pchServerName;
    const char *pSpectatorServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer009_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer009_UpdateServerStatus_params *params );

struct cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer009_SetGameType_params
{
    void *linux_side;
    const char *pchGameType;
};
extern void cppISteamGameServer_SteamGameServer009_SetGameType( struct cppISteamGameServer_SteamGameServer009_SetGameType_params *params );

struct cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pchAchievementName;
};
extern void cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus_params *params );

struct cppISteamGameServer_SteamGameServer009_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer009_GetGameplayStats( struct cppISteamGameServer_SteamGameServer009_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer009_GetPublicIP_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamGameServer_SteamGameServer009_GetPublicIP( struct cppISteamGameServer_SteamGameServer009_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer009_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer009_SetGameData( struct cppISteamGameServer_SteamGameServer009_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    uint32_t appID;
};
extern void cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp_params *params );

