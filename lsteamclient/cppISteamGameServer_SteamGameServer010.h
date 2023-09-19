struct cppISteamGameServer_SteamGameServer010_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer010_LogOn( struct cppISteamGameServer_SteamGameServer010_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer010_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer010_LogOff( struct cppISteamGameServer_SteamGameServer010_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer010_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer010_BLoggedOn( struct cppISteamGameServer_SteamGameServer010_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer010_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer010_BSecure( struct cppISteamGameServer_SteamGameServer010_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer010_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer010_GetSteamID( struct cppISteamGameServer_SteamGameServer010_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32_t unIPClient;
    const void *pvAuthBlob;
    uint32_t cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer010_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer010_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer010_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer010_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32_t uScore;
};
extern void cppISteamGameServer_SteamGameServer010_BUpdateUserData( struct cppISteamGameServer_SteamGameServer010_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer010_BSetServerType_params
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
extern void cppISteamGameServer_SteamGameServer010_BSetServerType( struct cppISteamGameServer_SteamGameServer010_BSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer010_UpdateServerStatus_params
{
    void *linux_side;
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
    const char *pchServerName;
    const char *pSpectatorServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer010_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer010_UpdateServerStatus_params *params );

struct cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer010_SetGameTags_params
{
    void *linux_side;
    const char *pchGameTags;
};
extern void cppISteamGameServer_SteamGameServer010_SetGameTags( struct cppISteamGameServer_SteamGameServer010_SetGameTags_params *params );

struct cppISteamGameServer_SteamGameServer010_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer010_GetGameplayStats( struct cppISteamGameServer_SteamGameServer010_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer010_GetServerReputation_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamGameServer_SteamGameServer010_GetServerReputation( struct cppISteamGameServer_SteamGameServer010_GetServerReputation_params *params );

struct cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer010_GetPublicIP_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamGameServer_SteamGameServer010_GetPublicIP( struct cppISteamGameServer_SteamGameServer010_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer010_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer010_SetGameData( struct cppISteamGameServer_SteamGameServer010_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    uint32_t appID;
};
extern void cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params *params );

struct cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params
{
    void *linux_side;
    uint32_t _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params *params );

struct cppISteamGameServer_SteamGameServer010_BeginAuthSession_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pAuthTicket;
    int32_t cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer010_BeginAuthSession( struct cppISteamGameServer_SteamGameServer010_BeginAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer010_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer010_EndAuthSession( struct cppISteamGameServer_SteamGameServer010_EndAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer010_CancelAuthTicket_params
{
    void *linux_side;
    uint32_t hAuthTicket;
};
extern void cppISteamGameServer_SteamGameServer010_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer010_CancelAuthTicket_params *params );

