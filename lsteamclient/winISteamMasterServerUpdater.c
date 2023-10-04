/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive, 8)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval, 8)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData, 32)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues, 4)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue, 12)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested, 4)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers, 4)
DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress, 16)

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(struct w_steam_iface *_this, int8_t bActive)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params params =
    {
        .linux_side = _this->u_iface,
        .bActive = bActive,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive, &params );
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(struct w_steam_iface *_this, int32_t iHeartbeatInterval)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params params =
    {
        .linux_side = _this->u_iface,
        .iHeartbeatInterval = iHeartbeatInterval,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval, &params );
}

int8_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pData = pData,
        .cbData = cbData,
        .srcIP = srcIP,
        .srcPort = srcPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket, &params );
    return params._ret;
}

int32_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int32_t cbMaxOut, uint32_t *pNetAdr, uint16_t *pPort)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pOut = pOut,
        .cbMaxOut = cbMaxOut,
        .pNetAdr = pNetAdr,
        .pPort = pPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket, &params );
    return params._ret;
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(struct w_steam_iface *_this, uint16_t nProtocolVersion, int8_t bDedicatedServer, const char *pRegionName, const char *pProductName, uint16_t nMaxReportedClients, int8_t bPasswordProtected, const char *pGameDescription)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params params =
    {
        .linux_side = _this->u_iface,
        .nProtocolVersion = nProtocolVersion,
        .bDedicatedServer = bDedicatedServer,
        .pRegionName = pRegionName,
        .pProductName = pProductName,
        .nMaxReportedClients = nMaxReportedClients,
        .bPasswordProtected = bPasswordProtected,
        .pGameDescription = pGameDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData, &params );
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(struct w_steam_iface *_this)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues, &params );
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params params =
    {
        .linux_side = _this->u_iface,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue, &params );
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(struct w_steam_iface *_this)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown, &params );
}

int8_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(struct w_steam_iface *_this)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested, &params );
    return params._ret;
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat, &params );
}

int8_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(struct w_steam_iface *_this, const char *pServerAddress)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params params =
    {
        .linux_side = _this->u_iface,
        .pServerAddress = pServerAddress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(struct w_steam_iface *_this, const char *pServerAddress)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params params =
    {
        .linux_side = _this->u_iface,
        .pServerAddress = pServerAddress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer, &params );
    return params._ret;
}

int32_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(struct w_steam_iface *_this)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers, &params );
    return params._ret;
}

int32_t __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(struct w_steam_iface *_this, int32_t iServer, char *pOut, int32_t outBufferSize)
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .iServer = iServer,
        .pOut = pOut,
        .outBufferSize = outBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress, &params );
    return params._ret;
}

extern vtable_ptr winISteamMasterServerUpdater_SteamMasterServerUpdater001_vtable;

DEFINE_RTTI_DATA0(winISteamMasterServerUpdater_SteamMasterServerUpdater001, 0, ".?AVISteamMasterServerUpdater@@")

__ASM_BLOCK_BEGIN(winISteamMasterServerUpdater_SteamMasterServerUpdater001_vtables)
    __ASM_VTABLE(winISteamMasterServerUpdater_SteamMasterServerUpdater001,
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers)
        VTABLE_ADD_FUNC(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMasterServerUpdater_SteamMasterServerUpdater001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMasterServerUpdater001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMasterServerUpdater_SteamMasterServerUpdater001_vtable, 14, "SteamMasterServerUpdater001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamMasterServerUpdater_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamMasterServerUpdater_SteamMasterServerUpdater001_rtti( base );
#endif /* __x86_64__ */
}
