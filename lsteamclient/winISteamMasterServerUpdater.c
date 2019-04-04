/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMasterServerUpdater_SteamMasterServerUpdater001.h"

typedef struct __winISteamMasterServerUpdater_SteamMasterServerUpdater001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMasterServerUpdater_SteamMasterServerUpdater001;

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive, 8)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(_this->linux_side, bActive);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval, 8)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(_this->linux_side, iHeartbeatInterval);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket, 20)
bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(_this->linux_side, pData, cbData, srcIP, srcPort);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket, 20)
int __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(_this->linux_side, pOut, cbMaxOut, pNetAdr, pPort);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData, 32)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, unsigned short nProtocolVersion, bool bDedicatedServer, const char * pRegionName, const char * pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char * pGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(_this->linux_side, nProtocolVersion, bDedicatedServer, pRegionName, pProductName, nMaxReportedClients, bPasswordProtected, pGameDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues, 4)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue, 12)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(_this->linux_side, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown, 4)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested, 4)
bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat, 4)
void __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer, 8)
bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, const char * pServerAddress)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(_this->linux_side, pServerAddress);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer, 8)
bool __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, const char * pServerAddress)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(_this->linux_side, pServerAddress);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers, 4)
int __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress, 16)
int __thiscall winISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(winISteamMasterServerUpdater_SteamMasterServerUpdater001 *_this, int iServer, char * pOut, int outBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(_this->linux_side, iServer, pOut, outBufferSize);
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

winISteamMasterServerUpdater_SteamMasterServerUpdater001 *create_winISteamMasterServerUpdater_SteamMasterServerUpdater001(void *linux_side)
{
    winISteamMasterServerUpdater_SteamMasterServerUpdater001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMasterServerUpdater_SteamMasterServerUpdater001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMasterServerUpdater_SteamMasterServerUpdater001_vtable;
    r->linux_side = linux_side;
    return r;
}

