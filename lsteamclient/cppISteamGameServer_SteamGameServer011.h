struct cppISteamGameServer_SteamGameServer011_InitGameServer_params
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
extern void cppISteamGameServer_SteamGameServer011_InitGameServer( struct cppISteamGameServer_SteamGameServer011_InitGameServer_params *params );

struct cppISteamGameServer_SteamGameServer011_SetProduct_params
{
    void *linux_side;
    const char *pszProduct;
};
extern void cppISteamGameServer_SteamGameServer011_SetProduct( struct cppISteamGameServer_SteamGameServer011_SetProduct_params *params );

struct cppISteamGameServer_SteamGameServer011_SetGameDescription_params
{
    void *linux_side;
    const char *pszGameDescription;
};
extern void cppISteamGameServer_SteamGameServer011_SetGameDescription( struct cppISteamGameServer_SteamGameServer011_SetGameDescription_params *params );

struct cppISteamGameServer_SteamGameServer011_SetModDir_params
{
    void *linux_side;
    const char *pszModDir;
};
extern void cppISteamGameServer_SteamGameServer011_SetModDir( struct cppISteamGameServer_SteamGameServer011_SetModDir_params *params );

struct cppISteamGameServer_SteamGameServer011_SetDedicatedServer_params
{
    void *linux_side;
    bool bDedicated;
};
extern void cppISteamGameServer_SteamGameServer011_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer011_SetDedicatedServer_params *params );

struct cppISteamGameServer_SteamGameServer011_LogOn_params
{
    void *linux_side;
    const char *pszAccountName;
    const char *pszPassword;
};
extern void cppISteamGameServer_SteamGameServer011_LogOn( struct cppISteamGameServer_SteamGameServer011_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer011_LogOnAnonymous_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer011_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer011_LogOnAnonymous_params *params );

struct cppISteamGameServer_SteamGameServer011_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer011_LogOff( struct cppISteamGameServer_SteamGameServer011_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer011_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer011_BLoggedOn( struct cppISteamGameServer_SteamGameServer011_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer011_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer011_BSecure( struct cppISteamGameServer_SteamGameServer011_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer011_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer011_GetSteamID( struct cppISteamGameServer_SteamGameServer011_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer011_WasRestartRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer011_WasRestartRequested( struct cppISteamGameServer_SteamGameServer011_WasRestartRequested_params *params );

struct cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params
{
    void *linux_side;
    int cPlayersMax;
};
extern void cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer011_SetBotPlayerCount_params
{
    void *linux_side;
    int cBotplayers;
};
extern void cppISteamGameServer_SteamGameServer011_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer011_SetBotPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer011_SetServerName_params
{
    void *linux_side;
    const char *pszServerName;
};
extern void cppISteamGameServer_SteamGameServer011_SetServerName( struct cppISteamGameServer_SteamGameServer011_SetServerName_params *params );

struct cppISteamGameServer_SteamGameServer011_SetMapName_params
{
    void *linux_side;
    const char *pszMapName;
};
extern void cppISteamGameServer_SteamGameServer011_SetMapName( struct cppISteamGameServer_SteamGameServer011_SetMapName_params *params );

struct cppISteamGameServer_SteamGameServer011_SetPasswordProtected_params
{
    void *linux_side;
    bool bPasswordProtected;
};
extern void cppISteamGameServer_SteamGameServer011_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer011_SetPasswordProtected_params *params );

struct cppISteamGameServer_SteamGameServer011_SetSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer011_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer011_SetSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer011_SetSpectatorServerName_params
{
    void *linux_side;
    const char *pszSpectatorServerName;
};
extern void cppISteamGameServer_SteamGameServer011_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer011_SetSpectatorServerName_params *params );

struct cppISteamGameServer_SteamGameServer011_ClearAllKeyValues_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer011_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer011_ClearAllKeyValues_params *params );

struct cppISteamGameServer_SteamGameServer011_SetKeyValue_params
{
    void *linux_side;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamGameServer_SteamGameServer011_SetKeyValue( struct cppISteamGameServer_SteamGameServer011_SetKeyValue_params *params );

struct cppISteamGameServer_SteamGameServer011_SetGameTags_params
{
    void *linux_side;
    const char *pchGameTags;
};
extern void cppISteamGameServer_SteamGameServer011_SetGameTags( struct cppISteamGameServer_SteamGameServer011_SetGameTags_params *params );

struct cppISteamGameServer_SteamGameServer011_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer011_SetGameData( struct cppISteamGameServer_SteamGameServer011_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer011_SetRegion_params
{
    void *linux_side;
    const char *pszRegion;
};
extern void cppISteamGameServer_SteamGameServer011_SetRegion( struct cppISteamGameServer_SteamGameServer011_SetRegion_params *params );

struct cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32 unIPClient;
    const void *pvAuthBlob;
    uint32 cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer011_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer011_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer011_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer011_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32 uScore;
};
extern void cppISteamGameServer_SteamGameServer011_BUpdateUserData( struct cppISteamGameServer_SteamGameServer011_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params *params );

struct cppISteamGameServer_SteamGameServer011_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer011_BeginAuthSession( struct cppISteamGameServer_SteamGameServer011_BeginAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer011_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer011_EndAuthSession( struct cppISteamGameServer_SteamGameServer011_EndAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer011_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamGameServer_SteamGameServer011_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer011_CancelAuthTicket_params *params );

struct cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params *params );

struct cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer011_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer011_GetGameplayStats( struct cppISteamGameServer_SteamGameServer011_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer011_GetServerReputation_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamGameServer_SteamGameServer011_GetServerReputation( struct cppISteamGameServer_SteamGameServer011_GetServerReputation_params *params );

struct cppISteamGameServer_SteamGameServer011_GetPublicIP_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamGameServer_SteamGameServer011_GetPublicIP( struct cppISteamGameServer_SteamGameServer011_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer011_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int cbData;
    uint32 srcIP;
    uint16 srcPort;
};
extern void cppISteamGameServer_SteamGameServer011_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer011_HandleIncomingPacket_params *params );

struct cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params
{
    void *linux_side;
    int _ret;
    void *pOut;
    int cbMaxOut;
    uint32 *pNetAdr;
    uint16 *pPort;
};
extern void cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params *params );

struct cppISteamGameServer_SteamGameServer011_EnableHeartbeats_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamGameServer_SteamGameServer011_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer011_EnableHeartbeats_params *params );

struct cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params
{
    void *linux_side;
    int iHeartbeatInterval;
};
extern void cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params *params );

struct cppISteamGameServer_SteamGameServer011_ForceHeartbeat_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer011_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer011_ForceHeartbeat_params *params );

struct cppISteamGameServer_SteamGameServer011_AssociateWithClan_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamGameServer_SteamGameServer011_AssociateWithClan( struct cppISteamGameServer_SteamGameServer011_AssociateWithClan_params *params );

struct cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDNewPlayer;
};
extern void cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params *params );

