struct cppISteamGameServer_SteamGameServer014_InitGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32_t unIP;
    uint16_t usGamePort;
    uint16_t usQueryPort;
    uint32_t unFlags;
    AppId_t nGameAppId;
    const char *pchVersionString;
};
extern void cppISteamGameServer_SteamGameServer014_InitGameServer( struct cppISteamGameServer_SteamGameServer014_InitGameServer_params *params );

struct cppISteamGameServer_SteamGameServer014_SetProduct_params
{
    void *linux_side;
    const char *pszProduct;
};
extern void cppISteamGameServer_SteamGameServer014_SetProduct( struct cppISteamGameServer_SteamGameServer014_SetProduct_params *params );

struct cppISteamGameServer_SteamGameServer014_SetGameDescription_params
{
    void *linux_side;
    const char *pszGameDescription;
};
extern void cppISteamGameServer_SteamGameServer014_SetGameDescription( struct cppISteamGameServer_SteamGameServer014_SetGameDescription_params *params );

struct cppISteamGameServer_SteamGameServer014_SetModDir_params
{
    void *linux_side;
    const char *pszModDir;
};
extern void cppISteamGameServer_SteamGameServer014_SetModDir( struct cppISteamGameServer_SteamGameServer014_SetModDir_params *params );

struct cppISteamGameServer_SteamGameServer014_SetDedicatedServer_params
{
    void *linux_side;
    bool bDedicated;
};
extern void cppISteamGameServer_SteamGameServer014_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer014_SetDedicatedServer_params *params );

struct cppISteamGameServer_SteamGameServer014_LogOn_params
{
    void *linux_side;
    const char *pszToken;
};
extern void cppISteamGameServer_SteamGameServer014_LogOn( struct cppISteamGameServer_SteamGameServer014_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer014_LogOnAnonymous_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer014_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer014_LogOnAnonymous_params *params );

struct cppISteamGameServer_SteamGameServer014_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer014_LogOff( struct cppISteamGameServer_SteamGameServer014_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer014_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer014_BLoggedOn( struct cppISteamGameServer_SteamGameServer014_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer014_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer014_BSecure( struct cppISteamGameServer_SteamGameServer014_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer014_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer014_GetSteamID( struct cppISteamGameServer_SteamGameServer014_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer014_WasRestartRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer014_WasRestartRequested( struct cppISteamGameServer_SteamGameServer014_WasRestartRequested_params *params );

struct cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params
{
    void *linux_side;
    int32_t cPlayersMax;
};
extern void cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer014_SetBotPlayerCount_params
{
    void *linux_side;
    int32_t cBotplayers;
};
extern void cppISteamGameServer_SteamGameServer014_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer014_SetBotPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer014_SetServerName_params
{
    void *linux_side;
    const char *pszServerName;
};
extern void cppISteamGameServer_SteamGameServer014_SetServerName( struct cppISteamGameServer_SteamGameServer014_SetServerName_params *params );

struct cppISteamGameServer_SteamGameServer014_SetMapName_params
{
    void *linux_side;
    const char *pszMapName;
};
extern void cppISteamGameServer_SteamGameServer014_SetMapName( struct cppISteamGameServer_SteamGameServer014_SetMapName_params *params );

struct cppISteamGameServer_SteamGameServer014_SetPasswordProtected_params
{
    void *linux_side;
    bool bPasswordProtected;
};
extern void cppISteamGameServer_SteamGameServer014_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer014_SetPasswordProtected_params *params );

struct cppISteamGameServer_SteamGameServer014_SetSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer014_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer014_SetSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer014_SetSpectatorServerName_params
{
    void *linux_side;
    const char *pszSpectatorServerName;
};
extern void cppISteamGameServer_SteamGameServer014_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer014_SetSpectatorServerName_params *params );

struct cppISteamGameServer_SteamGameServer014_ClearAllKeyValues_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer014_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer014_ClearAllKeyValues_params *params );

struct cppISteamGameServer_SteamGameServer014_SetKeyValue_params
{
    void *linux_side;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamGameServer_SteamGameServer014_SetKeyValue( struct cppISteamGameServer_SteamGameServer014_SetKeyValue_params *params );

struct cppISteamGameServer_SteamGameServer014_SetGameTags_params
{
    void *linux_side;
    const char *pchGameTags;
};
extern void cppISteamGameServer_SteamGameServer014_SetGameTags( struct cppISteamGameServer_SteamGameServer014_SetGameTags_params *params );

struct cppISteamGameServer_SteamGameServer014_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer014_SetGameData( struct cppISteamGameServer_SteamGameServer014_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer014_SetRegion_params
{
    void *linux_side;
    const char *pszRegion;
};
extern void cppISteamGameServer_SteamGameServer014_SetRegion( struct cppISteamGameServer_SteamGameServer014_SetRegion_params *params );

struct cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive( struct cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params *params );

struct cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params *params );

struct cppISteamGameServer_SteamGameServer014_BeginAuthSession_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pAuthTicket;
    int32_t cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer014_BeginAuthSession( struct cppISteamGameServer_SteamGameServer014_BeginAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer014_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer014_EndAuthSession( struct cppISteamGameServer_SteamGameServer014_EndAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer014_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamGameServer_SteamGameServer014_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer014_CancelAuthTicket_params *params );

struct cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params *params );

struct cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer014_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer014_GetGameplayStats( struct cppISteamGameServer_SteamGameServer014_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer014_GetServerReputation_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamGameServer_SteamGameServer014_GetServerReputation( struct cppISteamGameServer_SteamGameServer014_GetServerReputation_params *params );

struct cppISteamGameServer_SteamGameServer014_GetPublicIP_params
{
    void *linux_side;
    SteamIPAddress_t *_ret;
};
extern void cppISteamGameServer_SteamGameServer014_GetPublicIP( struct cppISteamGameServer_SteamGameServer014_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer014_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int32_t cbData;
    uint32_t srcIP;
    uint16_t srcPort;
};
extern void cppISteamGameServer_SteamGameServer014_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer014_HandleIncomingPacket_params *params );

struct cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params
{
    void *linux_side;
    int32_t _ret;
    void *pOut;
    int32_t cbMaxOut;
    uint32_t *pNetAdr;
    uint16_t *pPort;
};
extern void cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params *params );

struct cppISteamGameServer_SteamGameServer014_AssociateWithClan_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamGameServer_SteamGameServer014_AssociateWithClan( struct cppISteamGameServer_SteamGameServer014_AssociateWithClan_params *params );

struct cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDNewPlayer;
};
extern void cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params *params );

struct cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params
{
    void *linux_side;
    bool _ret;
    uint32_t unIPClient;
    const void *pvAuthBlob;
    uint32_t cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params *params );

struct cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params *params );

struct cppISteamGameServer_SteamGameServer014_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32_t uScore;
};
extern void cppISteamGameServer_SteamGameServer014_BUpdateUserData( struct cppISteamGameServer_SteamGameServer014_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params
{
    void *linux_side;
    int32_t iHeartbeatInterval;
};
extern void cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params *params );

struct cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params *params );

