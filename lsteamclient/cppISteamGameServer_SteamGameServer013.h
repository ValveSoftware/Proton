struct cppISteamGameServer_SteamGameServer013_InitGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32 unIP;
    uint16 usGamePort;
    uint16 usQueryPort;
    uint32 unFlags;
    AppId_t nGameAppId;
    const char *pchVersionString;
};
extern void cppISteamGameServer_SteamGameServer013_InitGameServer( struct cppISteamGameServer_SteamGameServer013_InitGameServer_params *params );

struct cppISteamGameServer_SteamGameServer013_SetProduct_params
{
    void *linux_side;
    const char *pszProduct;
};
extern void cppISteamGameServer_SteamGameServer013_SetProduct( struct cppISteamGameServer_SteamGameServer013_SetProduct_params *params );

struct cppISteamGameServer_SteamGameServer013_SetGameDescription_params
{
    void *linux_side;
    const char *pszGameDescription;
};
extern void cppISteamGameServer_SteamGameServer013_SetGameDescription( struct cppISteamGameServer_SteamGameServer013_SetGameDescription_params *params );

struct cppISteamGameServer_SteamGameServer013_SetModDir_params
{
    void *linux_side;
    const char *pszModDir;
};
extern void cppISteamGameServer_SteamGameServer013_SetModDir( struct cppISteamGameServer_SteamGameServer013_SetModDir_params *params );

struct cppISteamGameServer_SteamGameServer013_SetDedicatedServer_params
{
    void *linux_side;
    bool bDedicated;
};
extern void cppISteamGameServer_SteamGameServer013_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer013_SetDedicatedServer_params *params );

struct cppISteamGameServer_SteamGameServer013_LogOn_params
{
    void *linux_side;
    const char *pszToken;
};
extern void cppISteamGameServer_SteamGameServer013_LogOn( struct cppISteamGameServer_SteamGameServer013_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer013_LogOnAnonymous_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer013_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer013_LogOnAnonymous_params *params );

struct cppISteamGameServer_SteamGameServer013_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer013_LogOff( struct cppISteamGameServer_SteamGameServer013_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer013_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer013_BLoggedOn( struct cppISteamGameServer_SteamGameServer013_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer013_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer013_BSecure( struct cppISteamGameServer_SteamGameServer013_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer013_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer013_GetSteamID( struct cppISteamGameServer_SteamGameServer013_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer013_WasRestartRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer013_WasRestartRequested( struct cppISteamGameServer_SteamGameServer013_WasRestartRequested_params *params );

struct cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params
{
    void *linux_side;
    int cPlayersMax;
};
extern void cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer013_SetBotPlayerCount_params
{
    void *linux_side;
    int cBotplayers;
};
extern void cppISteamGameServer_SteamGameServer013_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer013_SetBotPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer013_SetServerName_params
{
    void *linux_side;
    const char *pszServerName;
};
extern void cppISteamGameServer_SteamGameServer013_SetServerName( struct cppISteamGameServer_SteamGameServer013_SetServerName_params *params );

struct cppISteamGameServer_SteamGameServer013_SetMapName_params
{
    void *linux_side;
    const char *pszMapName;
};
extern void cppISteamGameServer_SteamGameServer013_SetMapName( struct cppISteamGameServer_SteamGameServer013_SetMapName_params *params );

struct cppISteamGameServer_SteamGameServer013_SetPasswordProtected_params
{
    void *linux_side;
    bool bPasswordProtected;
};
extern void cppISteamGameServer_SteamGameServer013_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer013_SetPasswordProtected_params *params );

struct cppISteamGameServer_SteamGameServer013_SetSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer013_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer013_SetSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer013_SetSpectatorServerName_params
{
    void *linux_side;
    const char *pszSpectatorServerName;
};
extern void cppISteamGameServer_SteamGameServer013_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer013_SetSpectatorServerName_params *params );

struct cppISteamGameServer_SteamGameServer013_ClearAllKeyValues_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer013_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer013_ClearAllKeyValues_params *params );

struct cppISteamGameServer_SteamGameServer013_SetKeyValue_params
{
    void *linux_side;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamGameServer_SteamGameServer013_SetKeyValue( struct cppISteamGameServer_SteamGameServer013_SetKeyValue_params *params );

struct cppISteamGameServer_SteamGameServer013_SetGameTags_params
{
    void *linux_side;
    const char *pchGameTags;
};
extern void cppISteamGameServer_SteamGameServer013_SetGameTags( struct cppISteamGameServer_SteamGameServer013_SetGameTags_params *params );

struct cppISteamGameServer_SteamGameServer013_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer013_SetGameData( struct cppISteamGameServer_SteamGameServer013_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer013_SetRegion_params
{
    void *linux_side;
    const char *pszRegion;
};
extern void cppISteamGameServer_SteamGameServer013_SetRegion( struct cppISteamGameServer_SteamGameServer013_SetRegion_params *params );

struct cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32 unIPClient;
    const void *pvAuthBlob;
    uint32 cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer013_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer013_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer013_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer013_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32 uScore;
};
extern void cppISteamGameServer_SteamGameServer013_BUpdateUserData( struct cppISteamGameServer_SteamGameServer013_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params *params );

struct cppISteamGameServer_SteamGameServer013_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer013_BeginAuthSession( struct cppISteamGameServer_SteamGameServer013_BeginAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer013_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer013_EndAuthSession( struct cppISteamGameServer_SteamGameServer013_EndAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer013_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamGameServer_SteamGameServer013_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer013_CancelAuthTicket_params *params );

struct cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params *params );

struct cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer013_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer013_GetGameplayStats( struct cppISteamGameServer_SteamGameServer013_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer013_GetServerReputation_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamGameServer_SteamGameServer013_GetServerReputation( struct cppISteamGameServer_SteamGameServer013_GetServerReputation_params *params );

struct cppISteamGameServer_SteamGameServer013_GetPublicIP_params
{
    void *linux_side;
    SteamIPAddress_t *_ret;
};
extern void cppISteamGameServer_SteamGameServer013_GetPublicIP( struct cppISteamGameServer_SteamGameServer013_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer013_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int cbData;
    uint32 srcIP;
    uint16 srcPort;
};
extern void cppISteamGameServer_SteamGameServer013_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer013_HandleIncomingPacket_params *params );

struct cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params
{
    void *linux_side;
    int _ret;
    void *pOut;
    int cbMaxOut;
    uint32 *pNetAdr;
    uint16 *pPort;
};
extern void cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params *params );

struct cppISteamGameServer_SteamGameServer013_EnableHeartbeats_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamGameServer_SteamGameServer013_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer013_EnableHeartbeats_params *params );

struct cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params
{
    void *linux_side;
    int iHeartbeatInterval;
};
extern void cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params *params );

struct cppISteamGameServer_SteamGameServer013_ForceHeartbeat_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer013_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer013_ForceHeartbeat_params *params );

struct cppISteamGameServer_SteamGameServer013_AssociateWithClan_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamGameServer_SteamGameServer013_AssociateWithClan( struct cppISteamGameServer_SteamGameServer013_AssociateWithClan_params *params );

struct cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDNewPlayer;
};
extern void cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params *params );

