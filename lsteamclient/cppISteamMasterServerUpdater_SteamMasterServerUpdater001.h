struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001;
struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params
{
    void *linux_side;
    int32_t iHeartbeatInterval;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int32_t cbData;
    uint32_t srcIP;
    uint16_t srcPort;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params
{
    void *linux_side;
    int32_t _ret;
    void *pOut;
    int32_t cbMaxOut;
    uint32_t *pNetAdr;
    uint16_t *pPort;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params
{
    void *linux_side;
    uint16_t nProtocolVersion;
    bool bDedicatedServer;
    const char *pRegionName;
    const char *pProductName;
    uint16_t nMaxReportedClients;
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
    int32_t _ret;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *params );

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iServer;
    char *pOut;
    int32_t outBufferSize;
};
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *params );

