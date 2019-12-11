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

#include "cppISteamGameServer_SteamGameServer013.h"

typedef struct __winISteamGameServer_SteamGameServer013 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer013;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_InitGameServer, 28)
bool __thiscall winISteamGameServer_SteamGameServer013_InitGameServer(winISteamGameServer_SteamGameServer013 *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_InitGameServer(_this->linux_side, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetProduct, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetProduct(winISteamGameServer_SteamGameServer013 *_this, const char * pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetProduct(_this->linux_side, pszProduct);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetGameDescription, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetGameDescription(winISteamGameServer_SteamGameServer013 *_this, const char * pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetGameDescription(_this->linux_side, pszGameDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetModDir, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetModDir(winISteamGameServer_SteamGameServer013 *_this, const char * pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetModDir(_this->linux_side, pszModDir);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetDedicatedServer, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetDedicatedServer(winISteamGameServer_SteamGameServer013 *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetDedicatedServer(_this->linux_side, bDedicated);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_LogOn, 8)
void __thiscall winISteamGameServer_SteamGameServer013_LogOn(winISteamGameServer_SteamGameServer013 *_this, const char * pszToken)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_LogOn(_this->linux_side, pszToken);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_LogOnAnonymous, 4)
void __thiscall winISteamGameServer_SteamGameServer013_LogOnAnonymous(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_LogOnAnonymous(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer013_LogOff(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer013_BLoggedOn(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer013_BSecure(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer013_GetSteamID(winISteamGameServer_SteamGameServer013 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer013_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_WasRestartRequested, 4)
bool __thiscall winISteamGameServer_SteamGameServer013_WasRestartRequested(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_WasRestartRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetMaxPlayerCount, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetMaxPlayerCount(winISteamGameServer_SteamGameServer013 *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount(_this->linux_side, cPlayersMax);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetBotPlayerCount, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetBotPlayerCount(winISteamGameServer_SteamGameServer013 *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetBotPlayerCount(_this->linux_side, cBotplayers);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetServerName, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetServerName(winISteamGameServer_SteamGameServer013 *_this, const char * pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetServerName(_this->linux_side, pszServerName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetMapName, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetMapName(winISteamGameServer_SteamGameServer013 *_this, const char * pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetMapName(_this->linux_side, pszMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetPasswordProtected, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetPasswordProtected(winISteamGameServer_SteamGameServer013 *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetPasswordProtected(_this->linux_side, bPasswordProtected);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetSpectatorPort(winISteamGameServer_SteamGameServer013 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetSpectatorServerName, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetSpectatorServerName(winISteamGameServer_SteamGameServer013 *_this, const char * pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetSpectatorServerName(_this->linux_side, pszSpectatorServerName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_ClearAllKeyValues, 4)
void __thiscall winISteamGameServer_SteamGameServer013_ClearAllKeyValues(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_ClearAllKeyValues(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetKeyValue, 12)
void __thiscall winISteamGameServer_SteamGameServer013_SetKeyValue(winISteamGameServer_SteamGameServer013 *_this, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetKeyValue(_this->linux_side, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetGameTags, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetGameTags(winISteamGameServer_SteamGameServer013 *_this, const char * pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetGameTags(_this->linux_side, pchGameTags);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetGameData, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetGameData(winISteamGameServer_SteamGameServer013 *_this, const char * pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetGameData(_this->linux_side, pchGameData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetRegion, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetRegion(winISteamGameServer_SteamGameServer013 *_this, const char * pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetRegion(_this->linux_side, pszRegion);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer013 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer013 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer013_SendUserDisconnect(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer013_BUpdateUserData(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamGameServer_SteamGameServer013_GetAuthSessionTicket(winISteamGameServer_SteamGameServer013 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer013_BeginAuthSession(winISteamGameServer_SteamGameServer013 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_EndAuthSession, 12)
void __thiscall winISteamGameServer_SteamGameServer013_EndAuthSession(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_CancelAuthTicket, 8)
void __thiscall winISteamGameServer_SteamGameServer013_CancelAuthTicket(winISteamGameServer_SteamGameServer013 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer013_UserHasLicenseForApp(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_RequestUserGroupStatus, 20)
bool __thiscall winISteamGameServer_SteamGameServer013_RequestUserGroupStatus(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus(_this->linux_side, steamIDUser, steamIDGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetGameplayStats, 4)
void __thiscall winISteamGameServer_SteamGameServer013_GetGameplayStats(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_GetGameplayStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetServerReputation, 4)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer013_GetServerReputation(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_GetServerReputation(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetPublicIP, 8)
SteamIPAddress_t *__thiscall winISteamGameServer_SteamGameServer013_GetPublicIP(winISteamGameServer_SteamGameServer013 *_this, SteamIPAddress_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer013_GetPublicIP(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_HandleIncomingPacket, 20)
bool __thiscall winISteamGameServer_SteamGameServer013_HandleIncomingPacket(winISteamGameServer_SteamGameServer013 *_this, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_HandleIncomingPacket(_this->linux_side, pData, cbData, srcIP, srcPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetNextOutgoingPacket, 20)
int __thiscall winISteamGameServer_SteamGameServer013_GetNextOutgoingPacket(winISteamGameServer_SteamGameServer013 *_this, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket(_this->linux_side, pOut, cbMaxOut, pNetAdr, pPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_EnableHeartbeats, 8)
void __thiscall winISteamGameServer_SteamGameServer013_EnableHeartbeats(winISteamGameServer_SteamGameServer013 *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_EnableHeartbeats(_this->linux_side, bActive);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetHeartbeatInterval, 8)
void __thiscall winISteamGameServer_SteamGameServer013_SetHeartbeatInterval(winISteamGameServer_SteamGameServer013 *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval(_this->linux_side, iHeartbeatInterval);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_ForceHeartbeat, 4)
void __thiscall winISteamGameServer_SteamGameServer013_ForceHeartbeat(winISteamGameServer_SteamGameServer013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_ForceHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_AssociateWithClan, 12)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer013_AssociateWithClan(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_AssociateWithClan(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility, 12)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility(winISteamGameServer_SteamGameServer013 *_this, CSteamID steamIDNewPlayer)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility(_this->linux_side, steamIDNewPlayer);
}

extern vtable_ptr winISteamGameServer_SteamGameServer013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer013,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_InitGameServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetProduct)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetGameDescription)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetModDir)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetDedicatedServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_LogOnAnonymous)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_WasRestartRequested)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetMaxPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetBotPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetMapName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetPasswordProtected)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetSpectatorServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_ClearAllKeyValues)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetKeyValue)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetGameTags)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetRegion)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_GetServerReputation)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_HandleIncomingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_GetNextOutgoingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_EnableHeartbeats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_SetHeartbeatInterval)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_ForceHeartbeat)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_AssociateWithClan)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer013 *create_winISteamGameServer_SteamGameServer013(void *linux_side)
{
    winISteamGameServer_SteamGameServer013 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer013));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer013_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer012.h"

typedef struct __winISteamGameServer_SteamGameServer012 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer012;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_InitGameServer, 28)
bool __thiscall winISteamGameServer_SteamGameServer012_InitGameServer(winISteamGameServer_SteamGameServer012 *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_InitGameServer(_this->linux_side, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetProduct, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetProduct(winISteamGameServer_SteamGameServer012 *_this, const char * pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetProduct(_this->linux_side, pszProduct);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetGameDescription, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetGameDescription(winISteamGameServer_SteamGameServer012 *_this, const char * pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetGameDescription(_this->linux_side, pszGameDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetModDir, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetModDir(winISteamGameServer_SteamGameServer012 *_this, const char * pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetModDir(_this->linux_side, pszModDir);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetDedicatedServer, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetDedicatedServer(winISteamGameServer_SteamGameServer012 *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetDedicatedServer(_this->linux_side, bDedicated);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_LogOn, 8)
void __thiscall winISteamGameServer_SteamGameServer012_LogOn(winISteamGameServer_SteamGameServer012 *_this, const char * pszToken)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_LogOn(_this->linux_side, pszToken);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_LogOnAnonymous, 4)
void __thiscall winISteamGameServer_SteamGameServer012_LogOnAnonymous(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_LogOnAnonymous(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer012_LogOff(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer012_BLoggedOn(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer012_BSecure(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer012_GetSteamID(winISteamGameServer_SteamGameServer012 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer012_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_WasRestartRequested, 4)
bool __thiscall winISteamGameServer_SteamGameServer012_WasRestartRequested(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_WasRestartRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetMaxPlayerCount, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetMaxPlayerCount(winISteamGameServer_SteamGameServer012 *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount(_this->linux_side, cPlayersMax);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetBotPlayerCount, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetBotPlayerCount(winISteamGameServer_SteamGameServer012 *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetBotPlayerCount(_this->linux_side, cBotplayers);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetServerName, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetServerName(winISteamGameServer_SteamGameServer012 *_this, const char * pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetServerName(_this->linux_side, pszServerName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetMapName, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetMapName(winISteamGameServer_SteamGameServer012 *_this, const char * pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetMapName(_this->linux_side, pszMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetPasswordProtected, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetPasswordProtected(winISteamGameServer_SteamGameServer012 *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetPasswordProtected(_this->linux_side, bPasswordProtected);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetSpectatorPort(winISteamGameServer_SteamGameServer012 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetSpectatorServerName, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetSpectatorServerName(winISteamGameServer_SteamGameServer012 *_this, const char * pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetSpectatorServerName(_this->linux_side, pszSpectatorServerName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_ClearAllKeyValues, 4)
void __thiscall winISteamGameServer_SteamGameServer012_ClearAllKeyValues(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_ClearAllKeyValues(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetKeyValue, 12)
void __thiscall winISteamGameServer_SteamGameServer012_SetKeyValue(winISteamGameServer_SteamGameServer012 *_this, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetKeyValue(_this->linux_side, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetGameTags, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetGameTags(winISteamGameServer_SteamGameServer012 *_this, const char * pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetGameTags(_this->linux_side, pchGameTags);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetGameData, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetGameData(winISteamGameServer_SteamGameServer012 *_this, const char * pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetGameData(_this->linux_side, pchGameData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetRegion, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetRegion(winISteamGameServer_SteamGameServer012 *_this, const char * pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetRegion(_this->linux_side, pszRegion);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer012 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer012 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer012_SendUserDisconnect(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer012_BUpdateUserData(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamGameServer_SteamGameServer012_GetAuthSessionTicket(winISteamGameServer_SteamGameServer012 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer012_BeginAuthSession(winISteamGameServer_SteamGameServer012 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_EndAuthSession, 12)
void __thiscall winISteamGameServer_SteamGameServer012_EndAuthSession(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_CancelAuthTicket, 8)
void __thiscall winISteamGameServer_SteamGameServer012_CancelAuthTicket(winISteamGameServer_SteamGameServer012 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer012_UserHasLicenseForApp(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_RequestUserGroupStatus, 20)
bool __thiscall winISteamGameServer_SteamGameServer012_RequestUserGroupStatus(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus(_this->linux_side, steamIDUser, steamIDGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetGameplayStats, 4)
void __thiscall winISteamGameServer_SteamGameServer012_GetGameplayStats(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_GetGameplayStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetServerReputation, 4)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer012_GetServerReputation(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_GetServerReputation(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetPublicIP, 4)
uint32 __thiscall winISteamGameServer_SteamGameServer012_GetPublicIP(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_GetPublicIP(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_HandleIncomingPacket, 20)
bool __thiscall winISteamGameServer_SteamGameServer012_HandleIncomingPacket(winISteamGameServer_SteamGameServer012 *_this, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_HandleIncomingPacket(_this->linux_side, pData, cbData, srcIP, srcPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetNextOutgoingPacket, 20)
int __thiscall winISteamGameServer_SteamGameServer012_GetNextOutgoingPacket(winISteamGameServer_SteamGameServer012 *_this, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket(_this->linux_side, pOut, cbMaxOut, pNetAdr, pPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_EnableHeartbeats, 8)
void __thiscall winISteamGameServer_SteamGameServer012_EnableHeartbeats(winISteamGameServer_SteamGameServer012 *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_EnableHeartbeats(_this->linux_side, bActive);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetHeartbeatInterval, 8)
void __thiscall winISteamGameServer_SteamGameServer012_SetHeartbeatInterval(winISteamGameServer_SteamGameServer012 *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval(_this->linux_side, iHeartbeatInterval);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_ForceHeartbeat, 4)
void __thiscall winISteamGameServer_SteamGameServer012_ForceHeartbeat(winISteamGameServer_SteamGameServer012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_ForceHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_AssociateWithClan, 12)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer012_AssociateWithClan(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_AssociateWithClan(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility, 12)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility(winISteamGameServer_SteamGameServer012 *_this, CSteamID steamIDNewPlayer)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility(_this->linux_side, steamIDNewPlayer);
}

extern vtable_ptr winISteamGameServer_SteamGameServer012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer012,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_InitGameServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetProduct)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetGameDescription)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetModDir)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetDedicatedServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_LogOnAnonymous)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_WasRestartRequested)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetMaxPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetBotPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetMapName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetPasswordProtected)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetSpectatorServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_ClearAllKeyValues)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetKeyValue)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetGameTags)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetRegion)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_GetServerReputation)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_HandleIncomingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_GetNextOutgoingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_EnableHeartbeats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_SetHeartbeatInterval)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_ForceHeartbeat)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_AssociateWithClan)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer012 *create_winISteamGameServer_SteamGameServer012(void *linux_side)
{
    winISteamGameServer_SteamGameServer012 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer012));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer012_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer011.h"

typedef struct __winISteamGameServer_SteamGameServer011 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer011;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_InitGameServer, 28)
bool __thiscall winISteamGameServer_SteamGameServer011_InitGameServer(winISteamGameServer_SteamGameServer011 *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_InitGameServer(_this->linux_side, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetProduct, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetProduct(winISteamGameServer_SteamGameServer011 *_this, const char * pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetProduct(_this->linux_side, pszProduct);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetGameDescription, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetGameDescription(winISteamGameServer_SteamGameServer011 *_this, const char * pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetGameDescription(_this->linux_side, pszGameDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetModDir, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetModDir(winISteamGameServer_SteamGameServer011 *_this, const char * pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetModDir(_this->linux_side, pszModDir);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetDedicatedServer, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetDedicatedServer(winISteamGameServer_SteamGameServer011 *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetDedicatedServer(_this->linux_side, bDedicated);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_LogOn, 12)
void __thiscall winISteamGameServer_SteamGameServer011_LogOn(winISteamGameServer_SteamGameServer011 *_this, const char * pszAccountName, const char * pszPassword)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_LogOn(_this->linux_side, pszAccountName, pszPassword);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_LogOnAnonymous, 4)
void __thiscall winISteamGameServer_SteamGameServer011_LogOnAnonymous(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_LogOnAnonymous(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer011_LogOff(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer011_BLoggedOn(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer011_BSecure(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer011_GetSteamID(winISteamGameServer_SteamGameServer011 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer011_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_WasRestartRequested, 4)
bool __thiscall winISteamGameServer_SteamGameServer011_WasRestartRequested(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_WasRestartRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetMaxPlayerCount, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetMaxPlayerCount(winISteamGameServer_SteamGameServer011 *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount(_this->linux_side, cPlayersMax);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetBotPlayerCount, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetBotPlayerCount(winISteamGameServer_SteamGameServer011 *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetBotPlayerCount(_this->linux_side, cBotplayers);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetServerName, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetServerName(winISteamGameServer_SteamGameServer011 *_this, const char * pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetServerName(_this->linux_side, pszServerName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetMapName, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetMapName(winISteamGameServer_SteamGameServer011 *_this, const char * pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetMapName(_this->linux_side, pszMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetPasswordProtected, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetPasswordProtected(winISteamGameServer_SteamGameServer011 *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetPasswordProtected(_this->linux_side, bPasswordProtected);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetSpectatorPort(winISteamGameServer_SteamGameServer011 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetSpectatorServerName, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetSpectatorServerName(winISteamGameServer_SteamGameServer011 *_this, const char * pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetSpectatorServerName(_this->linux_side, pszSpectatorServerName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_ClearAllKeyValues, 4)
void __thiscall winISteamGameServer_SteamGameServer011_ClearAllKeyValues(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_ClearAllKeyValues(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetKeyValue, 12)
void __thiscall winISteamGameServer_SteamGameServer011_SetKeyValue(winISteamGameServer_SteamGameServer011 *_this, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetKeyValue(_this->linux_side, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetGameTags, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetGameTags(winISteamGameServer_SteamGameServer011 *_this, const char * pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetGameTags(_this->linux_side, pchGameTags);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetGameData, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetGameData(winISteamGameServer_SteamGameServer011 *_this, const char * pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetGameData(_this->linux_side, pchGameData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetRegion, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetRegion(winISteamGameServer_SteamGameServer011 *_this, const char * pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetRegion(_this->linux_side, pszRegion);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer011 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer011 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer011_SendUserDisconnect(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer011_BUpdateUserData(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamGameServer_SteamGameServer011_GetAuthSessionTicket(winISteamGameServer_SteamGameServer011 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer011_BeginAuthSession(winISteamGameServer_SteamGameServer011 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_EndAuthSession, 12)
void __thiscall winISteamGameServer_SteamGameServer011_EndAuthSession(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_CancelAuthTicket, 8)
void __thiscall winISteamGameServer_SteamGameServer011_CancelAuthTicket(winISteamGameServer_SteamGameServer011 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer011_UserHasLicenseForApp(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_RequestUserGroupStatus, 20)
bool __thiscall winISteamGameServer_SteamGameServer011_RequestUserGroupStatus(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus(_this->linux_side, steamIDUser, steamIDGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetGameplayStats, 4)
void __thiscall winISteamGameServer_SteamGameServer011_GetGameplayStats(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_GetGameplayStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetServerReputation, 4)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer011_GetServerReputation(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_GetServerReputation(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetPublicIP, 4)
uint32 __thiscall winISteamGameServer_SteamGameServer011_GetPublicIP(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_GetPublicIP(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_HandleIncomingPacket, 20)
bool __thiscall winISteamGameServer_SteamGameServer011_HandleIncomingPacket(winISteamGameServer_SteamGameServer011 *_this, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_HandleIncomingPacket(_this->linux_side, pData, cbData, srcIP, srcPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetNextOutgoingPacket, 20)
int __thiscall winISteamGameServer_SteamGameServer011_GetNextOutgoingPacket(winISteamGameServer_SteamGameServer011 *_this, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket(_this->linux_side, pOut, cbMaxOut, pNetAdr, pPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_EnableHeartbeats, 8)
void __thiscall winISteamGameServer_SteamGameServer011_EnableHeartbeats(winISteamGameServer_SteamGameServer011 *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_EnableHeartbeats(_this->linux_side, bActive);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetHeartbeatInterval, 8)
void __thiscall winISteamGameServer_SteamGameServer011_SetHeartbeatInterval(winISteamGameServer_SteamGameServer011 *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval(_this->linux_side, iHeartbeatInterval);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_ForceHeartbeat, 4)
void __thiscall winISteamGameServer_SteamGameServer011_ForceHeartbeat(winISteamGameServer_SteamGameServer011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_ForceHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_AssociateWithClan, 12)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer011_AssociateWithClan(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_AssociateWithClan(_this->linux_side, steamIDClan);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility, 12)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility(winISteamGameServer_SteamGameServer011 *_this, CSteamID steamIDNewPlayer)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility(_this->linux_side, steamIDNewPlayer);
}

extern vtable_ptr winISteamGameServer_SteamGameServer011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer011,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_InitGameServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetProduct)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetGameDescription)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetModDir)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetDedicatedServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_LogOnAnonymous)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_WasRestartRequested)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetMaxPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetBotPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetMapName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetPasswordProtected)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetSpectatorServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_ClearAllKeyValues)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetKeyValue)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetGameTags)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetRegion)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_GetServerReputation)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_HandleIncomingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_GetNextOutgoingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_EnableHeartbeats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_SetHeartbeatInterval)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_ForceHeartbeat)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_AssociateWithClan)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer011 *create_winISteamGameServer_SteamGameServer011(void *linux_side)
{
    winISteamGameServer_SteamGameServer011 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer011));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer011_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer010.h"

typedef struct __winISteamGameServer_SteamGameServer010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer010;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer010_LogOn(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer010_LogOff(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer010_BLoggedOn(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer010_BSecure(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer010_GetSteamID(winISteamGameServer_SteamGameServer010 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer010_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer010 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer010 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer010_SendUserDisconnect(winISteamGameServer_SteamGameServer010 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer010_BUpdateUserData(winISteamGameServer_SteamGameServer010 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BSetServerType, 36)
bool __thiscall winISteamGameServer_SteamGameServer010_BSetServerType(winISteamGameServer_SteamGameServer010 *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_BSetServerType(_this->linux_side, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_UpdateServerStatus, 28)
void __thiscall winISteamGameServer_SteamGameServer010_UpdateServerStatus(winISteamGameServer_SteamGameServer010 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_UpdateServerStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_UpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer010_UpdateSpectatorPort(winISteamGameServer_SteamGameServer010 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SetGameTags, 8)
void __thiscall winISteamGameServer_SteamGameServer010_SetGameTags(winISteamGameServer_SteamGameServer010 *_this, const char * pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_SetGameTags(_this->linux_side, pchGameTags);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetGameplayStats, 4)
void __thiscall winISteamGameServer_SteamGameServer010_GetGameplayStats(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_GetGameplayStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetServerReputation, 4)
SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer010_GetServerReputation(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_GetServerReputation(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_RequestUserGroupStatus, 20)
bool __thiscall winISteamGameServer_SteamGameServer010_RequestUserGroupStatus(winISteamGameServer_SteamGameServer010 *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus(_this->linux_side, steamIDUser, steamIDGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetPublicIP, 4)
uint32 __thiscall winISteamGameServer_SteamGameServer010_GetPublicIP(winISteamGameServer_SteamGameServer010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_GetPublicIP(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SetGameData, 8)
void __thiscall winISteamGameServer_SteamGameServer010_SetGameData(winISteamGameServer_SteamGameServer010 *_this, const char * pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_SetGameData(_this->linux_side, pchGameData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer010_UserHasLicenseForApp(winISteamGameServer_SteamGameServer010 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamGameServer_SteamGameServer010_GetAuthSessionTicket(winISteamGameServer_SteamGameServer010 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer010_BeginAuthSession(winISteamGameServer_SteamGameServer010 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer010_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_EndAuthSession, 12)
void __thiscall winISteamGameServer_SteamGameServer010_EndAuthSession(winISteamGameServer_SteamGameServer010 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_CancelAuthTicket, 8)
void __thiscall winISteamGameServer_SteamGameServer010_CancelAuthTicket(winISteamGameServer_SteamGameServer010 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

extern vtable_ptr winISteamGameServer_SteamGameServer010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer010,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_BSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_UpdateServerStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_UpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_SetGameTags)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_GetServerReputation)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer010_CancelAuthTicket)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer010 *create_winISteamGameServer_SteamGameServer010(void *linux_side)
{
    winISteamGameServer_SteamGameServer010 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer010));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer010_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer009.h"

typedef struct __winISteamGameServer_SteamGameServer009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer009;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer009_LogOn(winISteamGameServer_SteamGameServer009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer009_LogOff(winISteamGameServer_SteamGameServer009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer009_BLoggedOn(winISteamGameServer_SteamGameServer009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer009_BSecure(winISteamGameServer_SteamGameServer009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer009_GetSteamID(winISteamGameServer_SteamGameServer009 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer009_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer009 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer009 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer009_SendUserDisconnect(winISteamGameServer_SteamGameServer009 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer009_BUpdateUserData(winISteamGameServer_SteamGameServer009 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BSetServerType, 36)
bool __thiscall winISteamGameServer_SteamGameServer009_BSetServerType(winISteamGameServer_SteamGameServer009 *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_BSetServerType(_this->linux_side, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_UpdateServerStatus, 28)
void __thiscall winISteamGameServer_SteamGameServer009_UpdateServerStatus(winISteamGameServer_SteamGameServer009 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_UpdateServerStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_UpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer009_UpdateSpectatorPort(winISteamGameServer_SteamGameServer009 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SetGameType, 8)
void __thiscall winISteamGameServer_SteamGameServer009_SetGameType(winISteamGameServer_SteamGameServer009 *_this, const char * pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_SetGameType(_this->linux_side, pchGameType);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BGetUserAchievementStatus, 16)
bool __thiscall winISteamGameServer_SteamGameServer009_BGetUserAchievementStatus(winISteamGameServer_SteamGameServer009 *_this, CSteamID steamID, const char * pchAchievementName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus(_this->linux_side, steamID, pchAchievementName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_GetGameplayStats, 4)
void __thiscall winISteamGameServer_SteamGameServer009_GetGameplayStats(winISteamGameServer_SteamGameServer009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_GetGameplayStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_RequestUserGroupStatus, 20)
bool __thiscall winISteamGameServer_SteamGameServer009_RequestUserGroupStatus(winISteamGameServer_SteamGameServer009 *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus(_this->linux_side, steamIDUser, steamIDGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_GetPublicIP, 4)
uint32 __thiscall winISteamGameServer_SteamGameServer009_GetPublicIP(winISteamGameServer_SteamGameServer009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_GetPublicIP(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SetGameData, 8)
void __thiscall winISteamGameServer_SteamGameServer009_SetGameData(winISteamGameServer_SteamGameServer009 *_this, const char * pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_SetGameData(_this->linux_side, pchGameData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer009_UserHasLicenseForApp(winISteamGameServer_SteamGameServer009 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

extern vtable_ptr winISteamGameServer_SteamGameServer009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer009,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_BSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_UpdateServerStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_UpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_SetGameType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_BGetUserAchievementStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer009_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer009 *create_winISteamGameServer_SteamGameServer009(void *linux_side)
{
    winISteamGameServer_SteamGameServer009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer008.h"

typedef struct __winISteamGameServer_SteamGameServer008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer008;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer008_LogOn(winISteamGameServer_SteamGameServer008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer008_LogOff(winISteamGameServer_SteamGameServer008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer008_BLoggedOn(winISteamGameServer_SteamGameServer008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer008_BSecure(winISteamGameServer_SteamGameServer008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer008_GetSteamID(winISteamGameServer_SteamGameServer008 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer008_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer008 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer008 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer008_SendUserDisconnect(winISteamGameServer_SteamGameServer008 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer008_BUpdateUserData(winISteamGameServer_SteamGameServer008 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BSetServerType, 36)
bool __thiscall winISteamGameServer_SteamGameServer008_BSetServerType(winISteamGameServer_SteamGameServer008 *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_BSetServerType(_this->linux_side, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_UpdateServerStatus, 28)
void __thiscall winISteamGameServer_SteamGameServer008_UpdateServerStatus(winISteamGameServer_SteamGameServer008 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_UpdateServerStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_UpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer008_UpdateSpectatorPort(winISteamGameServer_SteamGameServer008 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_SetGameType, 8)
void __thiscall winISteamGameServer_SteamGameServer008_SetGameType(winISteamGameServer_SteamGameServer008 *_this, const char * pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_SetGameType(_this->linux_side, pchGameType);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BGetUserAchievementStatus, 16)
bool __thiscall winISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(winISteamGameServer_SteamGameServer008 *_this, CSteamID steamID, const char * pchAchievementName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(_this->linux_side, steamID, pchAchievementName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_GetGameplayStats, 4)
void __thiscall winISteamGameServer_SteamGameServer008_GetGameplayStats(winISteamGameServer_SteamGameServer008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_GetGameplayStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_RequestUserGroupStatus, 20)
bool __thiscall winISteamGameServer_SteamGameServer008_RequestUserGroupStatus(winISteamGameServer_SteamGameServer008 *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus(_this->linux_side, steamIDUser, steamIDGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_GetPublicIP, 4)
uint32 __thiscall winISteamGameServer_SteamGameServer008_GetPublicIP(winISteamGameServer_SteamGameServer008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer008_GetPublicIP(_this->linux_side);
}

extern vtable_ptr winISteamGameServer_SteamGameServer008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer008,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_BSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_UpdateServerStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_UpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_SetGameType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_BGetUserAchievementStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer008_GetPublicIP)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer008 *create_winISteamGameServer_SteamGameServer008(void *linux_side)
{
    winISteamGameServer_SteamGameServer008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer005.h"

typedef struct __winISteamGameServer_SteamGameServer005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer005;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer005_LogOn(winISteamGameServer_SteamGameServer005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer005_LogOff(winISteamGameServer_SteamGameServer005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer005_BLoggedOn(winISteamGameServer_SteamGameServer005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer005_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer005_BSecure(winISteamGameServer_SteamGameServer005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer005_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer005_GetSteamID(winISteamGameServer_SteamGameServer005 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer005_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate, 20)
bool __thiscall winISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer005 *_this, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate(_this->linux_side, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer005 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer005_SendUserDisconnect(winISteamGameServer_SteamGameServer005 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer005_BUpdateUserData(winISteamGameServer_SteamGameServer005 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer005_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BSetServerType, 36)
bool __thiscall winISteamGameServer_SteamGameServer005_BSetServerType(winISteamGameServer_SteamGameServer005 *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer005_BSetServerType(_this->linux_side, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_UpdateServerStatus, 28)
void __thiscall winISteamGameServer_SteamGameServer005_UpdateServerStatus(winISteamGameServer_SteamGameServer005 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_UpdateServerStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_UpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer005_UpdateSpectatorPort(winISteamGameServer_SteamGameServer005 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_SetGameType, 8)
void __thiscall winISteamGameServer_SteamGameServer005_SetGameType(winISteamGameServer_SteamGameServer005 *_this, const char * pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_SetGameType(_this->linux_side, pchGameType);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BGetUserAchievementStatus, 16)
bool __thiscall winISteamGameServer_SteamGameServer005_BGetUserAchievementStatus(winISteamGameServer_SteamGameServer005 *_this, CSteamID steamID, const char * pchAchievementName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus(_this->linux_side, steamID, pchAchievementName);
}

extern vtable_ptr winISteamGameServer_SteamGameServer005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer005,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_BSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_UpdateServerStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_UpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_SetGameType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer005_BGetUserAchievementStatus)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer005 *create_winISteamGameServer_SteamGameServer005(void *linux_side)
{
    winISteamGameServer_SteamGameServer005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer004.h"

typedef struct __winISteamGameServer_SteamGameServer004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer004;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer004_LogOn(winISteamGameServer_SteamGameServer004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer004_LogOff(winISteamGameServer_SteamGameServer004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer004_BLoggedOn(winISteamGameServer_SteamGameServer004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer004_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer004_BSecure(winISteamGameServer_SteamGameServer004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer004_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer004_GetSteamID(winISteamGameServer_SteamGameServer004 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer004_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate, 24)
void __thiscall winISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(winISteamGameServer_SteamGameServer004 *_this, CSteamID steamIDUser, uint32 unIPClient, void * pvAuthBlob, uint32 cubAuthBlobSize)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(_this->linux_side, steamIDUser, unIPClient, pvAuthBlob, cubAuthBlobSize);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(winISteamGameServer_SteamGameServer004 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_SendUserDisconnect, 12)
void __thiscall winISteamGameServer_SteamGameServer004_SendUserDisconnect(winISteamGameServer_SteamGameServer004 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_SendUserDisconnect(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BUpdateUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer004_BUpdateUserData(winISteamGameServer_SteamGameServer004 *_this, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer004_BUpdateUserData(_this->linux_side, steamIDUser, pchPlayerName, uScore);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BSetServerType, 40)
bool __thiscall winISteamGameServer_SteamGameServer004_BSetServerType(winISteamGameServer_SteamGameServer004 *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer004_BSetServerType(_this->linux_side, nGameAppId, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_UpdateServerStatus, 28)
void __thiscall winISteamGameServer_SteamGameServer004_UpdateServerStatus(winISteamGameServer_SteamGameServer004 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_UpdateServerStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_UpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer004_UpdateSpectatorPort(winISteamGameServer_SteamGameServer004 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_SetGameType, 8)
void __thiscall winISteamGameServer_SteamGameServer004_SetGameType(winISteamGameServer_SteamGameServer004 *_this, const char * pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_SetGameType(_this->linux_side, pchGameType);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BGetUserAchievementStatus, 16)
bool __thiscall winISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(winISteamGameServer_SteamGameServer004 *_this, CSteamID steamID, const char * pchAchievementName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(_this->linux_side, steamID, pchAchievementName);
}

extern vtable_ptr winISteamGameServer_SteamGameServer004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer004,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_SendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_BSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_UpdateServerStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_UpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_SetGameType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer004_BGetUserAchievementStatus)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer004 *create_winISteamGameServer_SteamGameServer004(void *linux_side)
{
    winISteamGameServer_SteamGameServer004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer003.h"

typedef struct __winISteamGameServer_SteamGameServer003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer003;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer003_LogOn(winISteamGameServer_SteamGameServer003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer003_LogOff(winISteamGameServer_SteamGameServer003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer003_BLoggedOn(winISteamGameServer_SteamGameServer003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer003_BSecure(winISteamGameServer_SteamGameServer003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer003_GetSteamID(winISteamGameServer_SteamGameServer003 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer003_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient, 16)
bool __thiscall winISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(winISteamGameServer_SteamGameServer003 *_this, void * pvEncryptionKey, uint32 * pcbEncryptionKey, uint32 cbMaxEncryptionKey)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(_this->linux_side, pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSendUserConnect, 24)
bool __thiscall winISteamGameServer_SteamGameServer003_GSSendUserConnect(winISteamGameServer_SteamGameServer003 *_this, uint32 unUserID, uint32 unIPPublic, uint16 usPort, const void * pvCookie, uint32 cubCookie)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSSendUserConnect(_this->linux_side, unUserID, unIPPublic, usPort, pvCookie, cubCookie);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSRemoveUserConnect, 8)
bool __thiscall winISteamGameServer_SteamGameServer003_GSRemoveUserConnect(winISteamGameServer_SteamGameServer003 *_this, uint32 unUserID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect(_this->linux_side, unUserID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSendUserDisconnect, 16)
bool __thiscall winISteamGameServer_SteamGameServer003_GSSendUserDisconnect(winISteamGameServer_SteamGameServer003 *_this, CSteamID steamID, uint32 unUserID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect(_this->linux_side, steamID, unUserID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetSpawnCount, 8)
void __thiscall winISteamGameServer_SteamGameServer003_GSSetSpawnCount(winISteamGameServer_SteamGameServer003 *_this, uint32 ucSpawn)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_GSSetSpawnCount(_this->linux_side, ucSpawn);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetServerType, 40)
bool __thiscall winISteamGameServer_SteamGameServer003_GSSetServerType(winISteamGameServer_SteamGameServer003 *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSSetServerType(_this->linux_side, nGameAppId, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSUpdateStatus, 28)
bool __thiscall winISteamGameServer_SteamGameServer003_GSUpdateStatus(winISteamGameServer_SteamGameServer003 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSUpdateStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser, 8)
bool __thiscall winISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(winISteamGameServer_SteamGameServer003 *_this, CSteamID * pSteamID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(_this->linux_side, pSteamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer003_GSSetUserData(winISteamGameServer_SteamGameServer003 *_this, CSteamID steamID, const char * pPlayerName, uint32 nFrags)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSSetUserData(_this->linux_side, steamID, pPlayerName, nFrags);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(winISteamGameServer_SteamGameServer003 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetGameType, 8)
void __thiscall winISteamGameServer_SteamGameServer003_GSSetGameType(winISteamGameServer_SteamGameServer003 *_this, const char * pchType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_GSSetGameType(_this->linux_side, pchType);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus, 16)
bool __thiscall winISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(winISteamGameServer_SteamGameServer003 *_this, CSteamID steamID, const char * pchAchievementName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(_this->linux_side, steamID, pchAchievementName);
}

extern vtable_ptr winISteamGameServer_SteamGameServer003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer003,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSSendUserConnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSRemoveUserConnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSSendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSSetSpawnCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSUpdateStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSSetUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSSetGameType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer003 *create_winISteamGameServer_SteamGameServer003(void *linux_side)
{
    winISteamGameServer_SteamGameServer003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamGameServer_SteamGameServer002.h"

typedef struct __winISteamGameServer_SteamGameServer002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServer_SteamGameServer002;

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_LogOn, 4)
void __thiscall winISteamGameServer_SteamGameServer002_LogOn(winISteamGameServer_SteamGameServer002 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_LogOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_LogOff, 4)
void __thiscall winISteamGameServer_SteamGameServer002_LogOff(winISteamGameServer_SteamGameServer002 *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_BLoggedOn, 4)
bool __thiscall winISteamGameServer_SteamGameServer002_BLoggedOn(winISteamGameServer_SteamGameServer002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetSpawnCount, 8)
void __thiscall winISteamGameServer_SteamGameServer002_GSSetSpawnCount(winISteamGameServer_SteamGameServer002 *_this, uint32 ucSpawn)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_GSSetSpawnCount(_this->linux_side, ucSpawn);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient, 16)
bool __thiscall winISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient(winISteamGameServer_SteamGameServer002 *_this, void * pvEncryptionKey, uint32 * pcbEncryptionKey, uint32 cbMaxEncryptionKey)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient(_this->linux_side, pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect, 32)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect(winISteamGameServer_SteamGameServer002 *_this, uint32 unUserID, const void * pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void * pvCookie, uint32 cubCookie)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect(_this->linux_side, unUserID, pvRawKey, unKeyLen, unIPPublic, usPort, pvCookie, cubCookie);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect, 24)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect(winISteamGameServer_SteamGameServer002 *_this, CSteamID steamID, uint32 unIPPublic, const void * pvCookie, uint32 cubCookie)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect(_this->linux_side, steamID, unIPPublic, pvCookie, cubCookie);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSRemoveUserConnect, 8)
bool __thiscall winISteamGameServer_SteamGameServer002_GSRemoveUserConnect(winISteamGameServer_SteamGameServer002 *_this, uint32 unUserID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect(_this->linux_side, unUserID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendUserDisconnect, 16)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSendUserDisconnect(winISteamGameServer_SteamGameServer002 *_this, CSteamID steamID, uint32 unUserID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect(_this->linux_side, steamID, unUserID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendUserStatusResponse, 20)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSendUserStatusResponse(winISteamGameServer_SteamGameServer002 *_this, CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse(_this->linux_side, steamID, nSecondsConnected, nSecondsSinceLast);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus, 44)
bool __thiscall winISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus(winISteamGameServer_SteamGameServer002 *_this, int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char * pchServerName, const char * pchGameDir, const char * pchMapName, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus(_this->linux_side, nAppIdServed, unServerFlags, cPlayers, cPlayersMax, cBotPlayers, unGamePort, pchServerName, pchGameDir, pchMapName, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSUpdateStatus, 24)
bool __thiscall winISteamGameServer_SteamGameServer002_GSUpdateStatus(winISteamGameServer_SteamGameServer002 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSUpdateStatus(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_BSecure, 4)
bool __thiscall winISteamGameServer_SteamGameServer002_BSecure(winISteamGameServer_SteamGameServer002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_BSecure(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GetSteamID, 8)
CSteamID *__thiscall winISteamGameServer_SteamGameServer002_GetSteamID(winISteamGameServer_SteamGameServer002 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamGameServer_SteamGameServer002_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetServerType, 28)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSetServerType(winISteamGameServer_SteamGameServer002 *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char * pchGameDir, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSetServerType(_this->linux_side, nGameAppId, unServerFlags, unGameIP, unGamePort, pchGameDir, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetServerType2, 40)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSetServerType2(winISteamGameServer_SteamGameServer002 *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSetServerType2(_this->linux_side, nGameAppId, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSUpdateStatus2, 28)
bool __thiscall winISteamGameServer_SteamGameServer002_GSUpdateStatus2(winISteamGameServer_SteamGameServer002 *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSUpdateStatus2(_this->linux_side, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser, 8)
bool __thiscall winISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser(winISteamGameServer_SteamGameServer002 *_this, CSteamID * pSteamID)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser(_this->linux_side, pSteamID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetUserData, 20)
bool __thiscall winISteamGameServer_SteamGameServer002_GSSetUserData(winISteamGameServer_SteamGameServer002 *_this, CSteamID steamID, const char * pPlayerName, uint32 nFrags)
{
    TRACE("%p\n", _this);
    return cppISteamGameServer_SteamGameServer002_GSSetUserData(_this->linux_side, steamID, pPlayerName, nFrags);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort, 8)
void __thiscall winISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort(winISteamGameServer_SteamGameServer002 *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort(_this->linux_side, unSpectatorPort);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetGameType, 8)
void __thiscall winISteamGameServer_SteamGameServer002_GSSetGameType(winISteamGameServer_SteamGameServer002 *_this, const char * pchType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_GSSetGameType(_this->linux_side, pchType);
}

extern vtable_ptr winISteamGameServer_SteamGameServer002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer002,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSetSpawnCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSRemoveUserConnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSendUserDisconnect)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSendUserStatusResponse)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSUpdateStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSetServerType)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSetServerType2)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSUpdateStatus2)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSetUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer002_GSSetGameType)
    );
#ifndef __GNUC__
}
#endif

winISteamGameServer_SteamGameServer002 *create_winISteamGameServer_SteamGameServer002(void *linux_side)
{
    winISteamGameServer_SteamGameServer002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServer_SteamGameServer002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServer_SteamGameServer002_vtable;
    r->linux_side = linux_side;
    return r;
}

