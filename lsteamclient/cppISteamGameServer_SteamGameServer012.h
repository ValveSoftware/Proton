struct cppISteamGameServer_SteamGameServer012_InitGameServer_params
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
extern void cppISteamGameServer_SteamGameServer012_InitGameServer( struct cppISteamGameServer_SteamGameServer012_InitGameServer_params *params );

struct cppISteamGameServer_SteamGameServer012_SetProduct_params
{
    void *linux_side;
    const char *pszProduct;
};
extern void cppISteamGameServer_SteamGameServer012_SetProduct( struct cppISteamGameServer_SteamGameServer012_SetProduct_params *params );

struct cppISteamGameServer_SteamGameServer012_SetGameDescription_params
{
    void *linux_side;
    const char *pszGameDescription;
};
extern void cppISteamGameServer_SteamGameServer012_SetGameDescription( struct cppISteamGameServer_SteamGameServer012_SetGameDescription_params *params );

struct cppISteamGameServer_SteamGameServer012_SetModDir_params
{
    void *linux_side;
    const char *pszModDir;
};
extern void cppISteamGameServer_SteamGameServer012_SetModDir( struct cppISteamGameServer_SteamGameServer012_SetModDir_params *params );

struct cppISteamGameServer_SteamGameServer012_SetDedicatedServer_params
{
    void *linux_side;
    bool bDedicated;
};
extern void cppISteamGameServer_SteamGameServer012_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer012_SetDedicatedServer_params *params );

struct cppISteamGameServer_SteamGameServer012_LogOn_params
{
    void *linux_side;
    const char *pszToken;
};
extern void cppISteamGameServer_SteamGameServer012_LogOn( struct cppISteamGameServer_SteamGameServer012_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer012_LogOnAnonymous_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer012_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer012_LogOnAnonymous_params *params );

struct cppISteamGameServer_SteamGameServer012_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer012_LogOff( struct cppISteamGameServer_SteamGameServer012_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer012_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer012_BLoggedOn( struct cppISteamGameServer_SteamGameServer012_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer012_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer012_BSecure( struct cppISteamGameServer_SteamGameServer012_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer012_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer012_GetSteamID( struct cppISteamGameServer_SteamGameServer012_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer012_WasRestartRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer012_WasRestartRequested( struct cppISteamGameServer_SteamGameServer012_WasRestartRequested_params *params );

struct cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount_params
{
    void *linux_side;
    int cPlayersMax;
};
extern void cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer012_SetBotPlayerCount_params
{
    void *linux_side;
    int cBotplayers;
};
extern void cppISteamGameServer_SteamGameServer012_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer012_SetBotPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer012_SetServerName_params
{
    void *linux_side;
    const char *pszServerName;
};
extern void cppISteamGameServer_SteamGameServer012_SetServerName( struct cppISteamGameServer_SteamGameServer012_SetServerName_params *params );

struct cppISteamGameServer_SteamGameServer012_SetMapName_params
{
    void *linux_side;
    const char *pszMapName;
};
extern void cppISteamGameServer_SteamGameServer012_SetMapName( struct cppISteamGameServer_SteamGameServer012_SetMapName_params *params );

struct cppISteamGameServer_SteamGameServer012_SetPasswordProtected_params
{
    void *linux_side;
    bool bPasswordProtected;
};
extern void cppISteamGameServer_SteamGameServer012_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer012_SetPasswordProtected_params *params );

struct cppISteamGameServer_SteamGameServer012_SetSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer012_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer012_SetSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer012_SetSpectatorServerName_params
{
    void *linux_side;
    const char *pszSpectatorServerName;
};
extern void cppISteamGameServer_SteamGameServer012_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer012_SetSpectatorServerName_params *params );

struct cppISteamGameServer_SteamGameServer012_ClearAllKeyValues_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer012_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer012_ClearAllKeyValues_params *params );

struct cppISteamGameServer_SteamGameServer012_SetKeyValue_params
{
    void *linux_side;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamGameServer_SteamGameServer012_SetKeyValue( struct cppISteamGameServer_SteamGameServer012_SetKeyValue_params *params );

struct cppISteamGameServer_SteamGameServer012_SetGameTags_params
{
    void *linux_side;
    const char *pchGameTags;
};
extern void cppISteamGameServer_SteamGameServer012_SetGameTags( struct cppISteamGameServer_SteamGameServer012_SetGameTags_params *params );

struct cppISteamGameServer_SteamGameServer012_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer012_SetGameData( struct cppISteamGameServer_SteamGameServer012_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer012_SetRegion_params
{
    void *linux_side;
    const char *pszRegion;
};
extern void cppISteamGameServer_SteamGameServer012_SetRegion( struct cppISteamGameServer_SteamGameServer012_SetRegion_params *params );

struct cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32 unIPClient;
    const void *pvAuthBlob;
    uint32 cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer012_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer012_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer012_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer012_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32 uScore;
};
extern void cppISteamGameServer_SteamGameServer012_BUpdateUserData( struct cppISteamGameServer_SteamGameServer012_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket_params *params );

struct cppISteamGameServer_SteamGameServer012_BeginAuthSession_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer012_BeginAuthSession( struct cppISteamGameServer_SteamGameServer012_BeginAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer012_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer012_EndAuthSession( struct cppISteamGameServer_SteamGameServer012_EndAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer012_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamGameServer_SteamGameServer012_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer012_CancelAuthTicket_params *params );

struct cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp_params *params );

struct cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer012_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer012_GetGameplayStats( struct cppISteamGameServer_SteamGameServer012_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer012_GetServerReputation_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamGameServer_SteamGameServer012_GetServerReputation( struct cppISteamGameServer_SteamGameServer012_GetServerReputation_params *params );

struct cppISteamGameServer_SteamGameServer012_GetPublicIP_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamGameServer_SteamGameServer012_GetPublicIP( struct cppISteamGameServer_SteamGameServer012_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer012_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int cbData;
    uint32 srcIP;
    uint16 srcPort;
};
extern void cppISteamGameServer_SteamGameServer012_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer012_HandleIncomingPacket_params *params );

struct cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket_params
{
    void *linux_side;
    int _ret;
    void *pOut;
    int cbMaxOut;
    uint32 *pNetAdr;
    uint16 *pPort;
};
extern void cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket_params *params );

struct cppISteamGameServer_SteamGameServer012_EnableHeartbeats_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamGameServer_SteamGameServer012_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer012_EnableHeartbeats_params *params );

struct cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval_params
{
    void *linux_side;
    int iHeartbeatInterval;
};
extern void cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval_params *params );

struct cppISteamGameServer_SteamGameServer012_ForceHeartbeat_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer012_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer012_ForceHeartbeat_params *params );

struct cppISteamGameServer_SteamGameServer012_AssociateWithClan_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamGameServer_SteamGameServer012_AssociateWithClan( struct cppISteamGameServer_SteamGameServer012_AssociateWithClan_params *params );

struct cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDNewPlayer;
};
extern void cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility_params *params );

