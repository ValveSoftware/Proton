struct cppISteamGameServer_SteamGameServer008_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer008_LogOn( struct cppISteamGameServer_SteamGameServer008_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer008_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer008_LogOff( struct cppISteamGameServer_SteamGameServer008_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer008_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer008_BLoggedOn( struct cppISteamGameServer_SteamGameServer008_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer008_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer008_BSecure( struct cppISteamGameServer_SteamGameServer008_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer008_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer008_GetSteamID( struct cppISteamGameServer_SteamGameServer008_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32 unIPClient;
    const void *pvAuthBlob;
    uint32 cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer008_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer008_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer008_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer008_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32 uScore;
};
extern void cppISteamGameServer_SteamGameServer008_BUpdateUserData( struct cppISteamGameServer_SteamGameServer008_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer008_BSetServerType_params
{
    void *linux_side;
    bool _ret;
    uint32 unServerFlags;
    uint32 unGameIP;
    uint16 unGamePort;
    uint16 unSpectatorPort;
    uint16 usQueryPort;
    const char *pchGameDir;
    const char *pchVersion;
    bool bLANMode;
};
extern void cppISteamGameServer_SteamGameServer008_BSetServerType( struct cppISteamGameServer_SteamGameServer008_BSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer008_UpdateServerStatus_params
{
    void *linux_side;
    int cPlayers;
    int cPlayersMax;
    int cBotPlayers;
    const char *pchServerName;
    const char *pSpectatorServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer008_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer008_UpdateServerStatus_params *params );

struct cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer008_SetGameType_params
{
    void *linux_side;
    const char *pchGameType;
};
extern void cppISteamGameServer_SteamGameServer008_SetGameType( struct cppISteamGameServer_SteamGameServer008_SetGameType_params *params );

struct cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pchAchievementName;
};
extern void cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus_params *params );

struct cppISteamGameServer_SteamGameServer008_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer008_GetGameplayStats( struct cppISteamGameServer_SteamGameServer008_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer008_GetPublicIP_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamGameServer_SteamGameServer008_GetPublicIP( struct cppISteamGameServer_SteamGameServer008_GetPublicIP_params *params );

