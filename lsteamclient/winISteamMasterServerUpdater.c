/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMasterServerUpdater_SteamMasterServerUpdater001.h"

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

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(struct w_steam_iface *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(_this->u_iface, bActive);
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(struct w_steam_iface *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(_this->u_iface, iHeartbeatInterval);
}

bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(_this->u_iface, pData, cbData, srcIP, srcPort);
    return _ret;
}

int __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(_this->u_iface, pOut, cbMaxOut, pNetAdr, pPort);
    return _ret;
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(struct w_steam_iface *_this, unsigned short nProtocolVersion, bool bDedicatedServer, const char *pRegionName, const char *pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char *pGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(_this->u_iface, nProtocolVersion, bDedicatedServer, pRegionName, pProductName, nMaxReportedClients, bPasswordProtected, pGameDescription);
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(_this->u_iface);
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(_this->u_iface, pKey, pValue);
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(_this->u_iface);
}

bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(_this->u_iface);
    return _ret;
}

void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(_this->u_iface);
}

bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(struct w_steam_iface *_this, const char *pServerAddress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(_this->u_iface, pServerAddress);
    return _ret;
}

bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(struct w_steam_iface *_this, const char *pServerAddress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(_this->u_iface, pServerAddress);
    return _ret;
}

int __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(_this->u_iface);
    return _ret;
}

int __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(struct w_steam_iface *_this, int iServer, char *pOut, int outBufferSize)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(_this->u_iface, iServer, pOut, outBufferSize);
    return _ret;
}

extern vtable_ptr winISteamMasterServerUpdater_SteamMasterServerUpdater001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMasterServerUpdater_SteamMasterServerUpdater001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMasterServerUpdater001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMasterServerUpdater_SteamMasterServerUpdater001_vtable, 14, "SteamMasterServerUpdater001");
    r->u_iface = u_iface;
    return r;
}

