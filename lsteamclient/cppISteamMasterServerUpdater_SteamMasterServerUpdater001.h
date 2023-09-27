struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params
{
    void *linux_side;
    int iHeartbeatInterval;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int cbData;
    uint32 srcIP;
    uint16 srcPort;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params
{
    void *linux_side;
    int _ret;
    void *pOut;
    int cbMaxOut;
    uint32 *pNetAdr;
    uint16 *pPort;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params
{
    void *linux_side;
    unsigned short nProtocolVersion;
    bool bDedicatedServer;
    const char *pRegionName;
    const char *pProductName;
    unsigned short nMaxReportedClients;
    bool bPasswordProtected;
    const char *pGameDescription;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params
{
    void *linux_side;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params
{
    void *linux_side;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params
{
    void *linux_side;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params
{
    void *linux_side;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params
{
    void *linux_side;
    bool _ret;
    const char *pServerAddress;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params
{
    void *linux_side;
    bool _ret;
    const char *pServerAddress;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params
{
    void *linux_side;
    int _ret;
    int iServer;
    char *pOut;
    int outBufferSize;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *params );

