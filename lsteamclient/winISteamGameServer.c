/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamGameServer_SteamGameServer002.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetSpawnCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect, 32)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSRemoveUserConnect, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendUserDisconnect, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSendUserStatusResponse, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus, 44)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSUpdateStatus, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetServerType, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetServerType2, 40)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSUpdateStatus2, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer002_GSSetGameType, 8)

void __thiscall winISteamGameServer_SteamGameServer002_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer002_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer002_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_BLoggedOn(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer002_GSSetSpawnCount(struct w_steam_iface *_this, uint32 ucSpawn)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_GSSetSpawnCount(_this->u_iface, ucSpawn);
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient(struct w_steam_iface *_this, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient(_this->u_iface, pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect(struct w_steam_iface *_this, uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect(_this->u_iface, unUserID, pvRawKey, unKeyLen, unIPPublic, usPort, pvCookie, cubCookie);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect(struct w_steam_iface *_this, CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect(_this->u_iface, steamID, unIPPublic, pvCookie, cubCookie);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSRemoveUserConnect(struct w_steam_iface *_this, uint32 unUserID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect(_this->u_iface, unUserID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSendUserDisconnect(struct w_steam_iface *_this, CSteamID steamID, uint32 unUserID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect(_this->u_iface, steamID, unUserID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSendUserStatusResponse(struct w_steam_iface *_this, CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse(_this->u_iface, steamID, nSecondsConnected, nSecondsSinceLast);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus(struct w_steam_iface *_this, int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus(_this->u_iface, nAppIdServed, unServerFlags, cPlayers, cPlayersMax, cBotPlayers, unGamePort, pchServerName, pchGameDir, pchMapName, pchVersion);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSUpdateStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSUpdateStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer002_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer002_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSetServerType(struct w_steam_iface *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSetServerType(_this->u_iface, nGameAppId, unServerFlags, unGameIP, unGamePort, pchGameDir, pchVersion);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSetServerType2(struct w_steam_iface *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSetServerType2(_this->u_iface, nGameAppId, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSUpdateStatus2(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSUpdateStatus2(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser(struct w_steam_iface *_this, CSteamID *pSteamID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser(_this->u_iface, pSteamID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer002_GSSetUserData(struct w_steam_iface *_this, CSteamID steamID, const char *pPlayerName, uint32 nFrags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer002_GSSetUserData(_this->u_iface, steamID, pPlayerName, nFrags);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer002_GSSetGameType(struct w_steam_iface *_this, const char *pchType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer002_GSSetGameType(_this->u_iface, pchType);
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer002_vtable, 21, "SteamGameServer002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer003.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSendUserConnect, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSRemoveUserConnect, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSendUserDisconnect, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetSpawnCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetServerType, 40)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSUpdateStatus, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSSetGameType, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus, 16)

void __thiscall winISteamGameServer_SteamGameServer003_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer003_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer003_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer003_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer003_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(struct w_steam_iface *_this, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(_this->u_iface, pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSSendUserConnect(struct w_steam_iface *_this, uint32 unUserID, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSSendUserConnect(_this->u_iface, unUserID, unIPPublic, usPort, pvCookie, cubCookie);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSRemoveUserConnect(struct w_steam_iface *_this, uint32 unUserID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect(_this->u_iface, unUserID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSSendUserDisconnect(struct w_steam_iface *_this, CSteamID steamID, uint32 unUserID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect(_this->u_iface, steamID, unUserID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer003_GSSetSpawnCount(struct w_steam_iface *_this, uint32 ucSpawn)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_GSSetSpawnCount(_this->u_iface, ucSpawn);
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSSetServerType(struct w_steam_iface *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSSetServerType(_this->u_iface, nGameAppId, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSUpdateStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSUpdateStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(struct w_steam_iface *_this, CSteamID *pSteamID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(_this->u_iface, pSteamID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSSetUserData(struct w_steam_iface *_this, CSteamID steamID, const char *pPlayerName, uint32 nFrags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSSetUserData(_this->u_iface, steamID, pPlayerName, nFrags);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer003_GSSetGameType(struct w_steam_iface *_this, const char *pchType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer003_GSSetGameType(_this->u_iface, pchType);
}

bool __thiscall winISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(_this->u_iface, steamID, pchAchievementName);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer003_vtable, 17, "SteamGameServer003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer004.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BSetServerType, 40)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_UpdateServerStatus, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_UpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_SetGameType, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer004_BGetUserAchievementStatus, 16)

void __thiscall winISteamGameServer_SteamGameServer004_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer004_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer004_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer004_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer004_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer004_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer004_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer004_GetSteamID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, CSteamID steamIDUser, uint32 unIPClient, void *pvAuthBlob, uint32 cubAuthBlobSize)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(_this->u_iface, steamIDUser, unIPClient, pvAuthBlob, cubAuthBlobSize);
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer004_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer004_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer004_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer004_BSetServerType(struct w_steam_iface *_this, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer004_BSetServerType(_this->u_iface, nGameAppId, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer004_UpdateServerStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_UpdateServerStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void __thiscall winISteamGameServer_SteamGameServer004_UpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer004_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer004_SetGameType(_this->u_iface, pchGameType);
}

bool __thiscall winISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(_this->u_iface, steamID, pchAchievementName);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer004_vtable, 14, "SteamGameServer004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer005.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BSetServerType, 36)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_UpdateServerStatus, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_UpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_SetGameType, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer005_BGetUserAchievementStatus, 16)

void __thiscall winISteamGameServer_SteamGameServer005_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer005_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer005_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer005_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer005_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer005_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer005_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer005_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer005_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer005_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer005_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer005_BSetServerType(struct w_steam_iface *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer005_BSetServerType(_this->u_iface, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer005_UpdateServerStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_UpdateServerStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void __thiscall winISteamGameServer_SteamGameServer005_UpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer005_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer005_SetGameType(_this->u_iface, pchGameType);
}

bool __thiscall winISteamGameServer_SteamGameServer005_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus(_this->u_iface, steamID, pchAchievementName);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer005_vtable, 14, "SteamGameServer005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer008.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BSetServerType, 36)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_UpdateServerStatus, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_UpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_SetGameType, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_BGetUserAchievementStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer008_GetPublicIP, 4)

void __thiscall winISteamGameServer_SteamGameServer008_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer008_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer008_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer008_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer008_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer008_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer008_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer008_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer008_BSetServerType(struct w_steam_iface *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_BSetServerType(_this->u_iface, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer008_UpdateServerStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_UpdateServerStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void __thiscall winISteamGameServer_SteamGameServer008_UpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer008_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_SetGameType(_this->u_iface, pchGameType);
}

bool __thiscall winISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(_this->u_iface, steamID, pchAchievementName);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer008_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer008_GetGameplayStats(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer008_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

uint32 __thiscall winISteamGameServer_SteamGameServer008_GetPublicIP(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer008_GetPublicIP(_this->u_iface);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer008_vtable, 17, "SteamGameServer008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer009.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BSetServerType, 36)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_UpdateServerStatus, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_UpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SetGameType, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_BGetUserAchievementStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_GetPublicIP, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer009_UserHasLicenseForApp, 16)

void __thiscall winISteamGameServer_SteamGameServer009_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer009_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer009_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer009_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer009_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer009_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer009_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer009_BSetServerType(struct w_steam_iface *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_BSetServerType(_this->u_iface, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_UpdateServerStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_UpdateServerStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void __thiscall winISteamGameServer_SteamGameServer009_UpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer009_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_SetGameType(_this->u_iface, pchGameType);
}

bool __thiscall winISteamGameServer_SteamGameServer009_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus(_this->u_iface, steamID, pchAchievementName);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_GetGameplayStats(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer009_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

uint32 __thiscall winISteamGameServer_SteamGameServer009_GetPublicIP(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_GetPublicIP(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer009_SetGameData(_this->u_iface, pchGameData);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer009_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer009_vtable, 19, "SteamGameServer009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer010.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_LogOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BSetServerType, 36)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_UpdateServerStatus, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_UpdateSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SetGameTags, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetServerReputation, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetPublicIP, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer010_CancelAuthTicket, 8)

void __thiscall winISteamGameServer_SteamGameServer010_LogOn(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_LogOn(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer010_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer010_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer010_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer010_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer010_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer010_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer010_BSetServerType(struct w_steam_iface *_this, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_BSetServerType(_this->u_iface, unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_UpdateServerStatus(struct w_steam_iface *_this, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_UpdateServerStatus(_this->u_iface, cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

void __thiscall winISteamGameServer_SteamGameServer010_UpdateSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer010_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_SetGameTags(_this->u_iface, pchGameTags);
}

void __thiscall winISteamGameServer_SteamGameServer010_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_GetGameplayStats(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer010_GetServerReputation(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_GetServerReputation(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer010_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

uint32 __thiscall winISteamGameServer_SteamGameServer010_GetPublicIP(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_GetPublicIP(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_SetGameData(_this->u_iface, pchGameData);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer010_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

HAuthTicket __thiscall winISteamGameServer_SteamGameServer010_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer010_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer010_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamGameServer_SteamGameServer010_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer010_CancelAuthTicket(_this->u_iface, hAuthTicket);
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer010_vtable, 23, "SteamGameServer010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer011.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_InitGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetProduct, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetGameDescription, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetModDir, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetDedicatedServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_LogOnAnonymous, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_WasRestartRequested, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetMaxPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetBotPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetMapName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetPasswordProtected, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetSpectatorServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_ClearAllKeyValues, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetKeyValue, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetGameTags, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetRegion, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetServerReputation, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetPublicIP, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_HandleIncomingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_GetNextOutgoingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_EnableHeartbeats, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_SetHeartbeatInterval, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_ForceHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_AssociateWithClan, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility, 12)

bool __thiscall winISteamGameServer_SteamGameServer011_InitGameServer(struct w_steam_iface *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_InitGameServer(_this->u_iface, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetProduct(_this->u_iface, pszProduct);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetGameDescription(_this->u_iface, pszGameDescription);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetModDir(_this->u_iface, pszModDir);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetDedicatedServer(struct w_steam_iface *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetDedicatedServer(_this->u_iface, bDedicated);
}

void __thiscall winISteamGameServer_SteamGameServer011_LogOn(struct w_steam_iface *_this, const char *pszAccountName, const char *pszPassword)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_LogOn(_this->u_iface, pszAccountName, pszPassword);
}

void __thiscall winISteamGameServer_SteamGameServer011_LogOnAnonymous(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_LogOnAnonymous(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer011_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer011_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer011_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer011_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer011_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer011_WasRestartRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_WasRestartRequested(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_SetMaxPlayerCount(struct w_steam_iface *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount(_this->u_iface, cPlayersMax);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetBotPlayerCount(struct w_steam_iface *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetBotPlayerCount(_this->u_iface, cBotplayers);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetServerName(_this->u_iface, pszServerName);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetMapName(_this->u_iface, pszMapName);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetPasswordProtected(struct w_steam_iface *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetPasswordProtected(_this->u_iface, bPasswordProtected);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetSpectatorServerName(_this->u_iface, pszSpectatorServerName);
}

void __thiscall winISteamGameServer_SteamGameServer011_ClearAllKeyValues(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_ClearAllKeyValues(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetKeyValue(_this->u_iface, pKey, pValue);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetGameTags(_this->u_iface, pchGameTags);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetGameData(_this->u_iface, pchGameData);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetRegion(_this->u_iface, pszRegion);
}

bool __thiscall winISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer011_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

HAuthTicket __thiscall winISteamGameServer_SteamGameServer011_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer011_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamGameServer_SteamGameServer011_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer011_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer011_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_GetGameplayStats(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer011_GetServerReputation(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_GetServerReputation(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamGameServer_SteamGameServer011_GetPublicIP(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_GetPublicIP(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer011_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_HandleIncomingPacket(_this->u_iface, pData, cbData, srcIP, srcPort);
    return _ret;
}

int __thiscall winISteamGameServer_SteamGameServer011_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket(_this->u_iface, pOut, cbMaxOut, pNetAdr, pPort);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_EnableHeartbeats(struct w_steam_iface *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_EnableHeartbeats(_this->u_iface, bActive);
}

void __thiscall winISteamGameServer_SteamGameServer011_SetHeartbeatInterval(struct w_steam_iface *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval(_this->u_iface, iHeartbeatInterval);
}

void __thiscall winISteamGameServer_SteamGameServer011_ForceHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer011_ForceHeartbeat(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer011_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_AssociateWithClan(_this->u_iface, steamIDClan);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility(_this->u_iface, steamIDNewPlayer);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer011_vtable, 44, "SteamGameServer011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer012.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_InitGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetProduct, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetGameDescription, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetModDir, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetDedicatedServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_LogOn, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_LogOnAnonymous, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_WasRestartRequested, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetMaxPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetBotPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetMapName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetPasswordProtected, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetSpectatorServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_ClearAllKeyValues, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetKeyValue, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetGameTags, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetRegion, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetServerReputation, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetPublicIP, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_HandleIncomingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_GetNextOutgoingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_EnableHeartbeats, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_SetHeartbeatInterval, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_ForceHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_AssociateWithClan, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility, 12)

bool __thiscall winISteamGameServer_SteamGameServer012_InitGameServer(struct w_steam_iface *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_InitGameServer(_this->u_iface, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetProduct(_this->u_iface, pszProduct);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetGameDescription(_this->u_iface, pszGameDescription);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetModDir(_this->u_iface, pszModDir);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetDedicatedServer(struct w_steam_iface *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetDedicatedServer(_this->u_iface, bDedicated);
}

void __thiscall winISteamGameServer_SteamGameServer012_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_LogOn(_this->u_iface, pszToken);
}

void __thiscall winISteamGameServer_SteamGameServer012_LogOnAnonymous(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_LogOnAnonymous(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer012_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer012_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer012_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer012_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer012_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer012_WasRestartRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_WasRestartRequested(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_SetMaxPlayerCount(struct w_steam_iface *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount(_this->u_iface, cPlayersMax);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetBotPlayerCount(struct w_steam_iface *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetBotPlayerCount(_this->u_iface, cBotplayers);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetServerName(_this->u_iface, pszServerName);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetMapName(_this->u_iface, pszMapName);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetPasswordProtected(struct w_steam_iface *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetPasswordProtected(_this->u_iface, bPasswordProtected);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetSpectatorServerName(_this->u_iface, pszSpectatorServerName);
}

void __thiscall winISteamGameServer_SteamGameServer012_ClearAllKeyValues(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_ClearAllKeyValues(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetKeyValue(_this->u_iface, pKey, pValue);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetGameTags(_this->u_iface, pchGameTags);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetGameData(_this->u_iface, pchGameData);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetRegion(_this->u_iface, pszRegion);
}

bool __thiscall winISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer012_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

HAuthTicket __thiscall winISteamGameServer_SteamGameServer012_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer012_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamGameServer_SteamGameServer012_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer012_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer012_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_GetGameplayStats(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer012_GetServerReputation(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_GetServerReputation(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamGameServer_SteamGameServer012_GetPublicIP(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_GetPublicIP(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer012_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_HandleIncomingPacket(_this->u_iface, pData, cbData, srcIP, srcPort);
    return _ret;
}

int __thiscall winISteamGameServer_SteamGameServer012_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket(_this->u_iface, pOut, cbMaxOut, pNetAdr, pPort);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_EnableHeartbeats(struct w_steam_iface *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_EnableHeartbeats(_this->u_iface, bActive);
}

void __thiscall winISteamGameServer_SteamGameServer012_SetHeartbeatInterval(struct w_steam_iface *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval(_this->u_iface, iHeartbeatInterval);
}

void __thiscall winISteamGameServer_SteamGameServer012_ForceHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer012_ForceHeartbeat(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer012_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_AssociateWithClan(_this->u_iface, steamIDClan);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility(_this->u_iface, steamIDNewPlayer);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer012_vtable, 44, "SteamGameServer012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer013.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_InitGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetProduct, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetGameDescription, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetModDir, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetDedicatedServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_LogOn, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_LogOnAnonymous, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_WasRestartRequested, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetMaxPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetBotPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetMapName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetPasswordProtected, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetSpectatorServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_ClearAllKeyValues, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetKeyValue, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetGameTags, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetRegion, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SendUserDisconnect, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetServerReputation, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetPublicIP, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_HandleIncomingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_GetNextOutgoingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_EnableHeartbeats, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_SetHeartbeatInterval, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_ForceHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_AssociateWithClan, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility, 12)

bool __thiscall winISteamGameServer_SteamGameServer013_InitGameServer(struct w_steam_iface *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_InitGameServer(_this->u_iface, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetProduct(_this->u_iface, pszProduct);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetGameDescription(_this->u_iface, pszGameDescription);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetModDir(_this->u_iface, pszModDir);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetDedicatedServer(struct w_steam_iface *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetDedicatedServer(_this->u_iface, bDedicated);
}

void __thiscall winISteamGameServer_SteamGameServer013_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_LogOn(_this->u_iface, pszToken);
}

void __thiscall winISteamGameServer_SteamGameServer013_LogOnAnonymous(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_LogOnAnonymous(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer013_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer013_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer013_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer013_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer013_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer013_WasRestartRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_WasRestartRequested(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_SetMaxPlayerCount(struct w_steam_iface *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount(_this->u_iface, cPlayersMax);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetBotPlayerCount(struct w_steam_iface *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetBotPlayerCount(_this->u_iface, cBotplayers);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetServerName(_this->u_iface, pszServerName);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetMapName(_this->u_iface, pszMapName);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetPasswordProtected(struct w_steam_iface *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetPasswordProtected(_this->u_iface, bPasswordProtected);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetSpectatorServerName(_this->u_iface, pszSpectatorServerName);
}

void __thiscall winISteamGameServer_SteamGameServer013_ClearAllKeyValues(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_ClearAllKeyValues(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetKeyValue(_this->u_iface, pKey, pValue);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetGameTags(_this->u_iface, pchGameTags);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetGameData(_this->u_iface, pchGameData);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetRegion(_this->u_iface, pszRegion);
}

bool __thiscall winISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SendUserDisconnect(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer013_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

HAuthTicket __thiscall winISteamGameServer_SteamGameServer013_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer013_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamGameServer_SteamGameServer013_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer013_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer013_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_GetGameplayStats(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer013_GetServerReputation(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_GetServerReputation(_this->u_iface);
    return _ret;
}

SteamIPAddress_t * __thiscall winISteamGameServer_SteamGameServer013_GetPublicIP(struct w_steam_iface *_this, SteamIPAddress_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer013_GetPublicIP(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer013_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_HandleIncomingPacket(_this->u_iface, pData, cbData, srcIP, srcPort);
    return _ret;
}

int __thiscall winISteamGameServer_SteamGameServer013_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket(_this->u_iface, pOut, cbMaxOut, pNetAdr, pPort);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_EnableHeartbeats(struct w_steam_iface *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_EnableHeartbeats(_this->u_iface, bActive);
}

void __thiscall winISteamGameServer_SteamGameServer013_SetHeartbeatInterval(struct w_steam_iface *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval(_this->u_iface, iHeartbeatInterval);
}

void __thiscall winISteamGameServer_SteamGameServer013_ForceHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer013_ForceHeartbeat(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer013_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_AssociateWithClan(_this->u_iface, steamIDClan);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility(_this->u_iface, steamIDNewPlayer);
    return _ret;
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

struct w_steam_iface *create_winISteamGameServer_SteamGameServer013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer013_vtable, 44, "SteamGameServer013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer014.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_InitGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetProduct, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetGameDescription, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetModDir, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetDedicatedServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_LogOn, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_LogOnAnonymous, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_WasRestartRequested, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetMaxPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetBotPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetMapName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetPasswordProtected, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetSpectatorServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_ClearAllKeyValues, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetKeyValue, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetGameTags, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetRegion, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetAdvertiseServerActive, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_GetServerReputation, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_GetPublicIP, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_HandleIncomingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_GetNextOutgoingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_AssociateWithClan, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED, 4)

bool __thiscall winISteamGameServer_SteamGameServer014_InitGameServer(struct w_steam_iface *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_InitGameServer(_this->u_iface, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetProduct(_this->u_iface, pszProduct);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetGameDescription(_this->u_iface, pszGameDescription);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetModDir(_this->u_iface, pszModDir);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetDedicatedServer(struct w_steam_iface *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetDedicatedServer(_this->u_iface, bDedicated);
}

void __thiscall winISteamGameServer_SteamGameServer014_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_LogOn(_this->u_iface, pszToken);
}

void __thiscall winISteamGameServer_SteamGameServer014_LogOnAnonymous(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_LogOnAnonymous(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer014_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer014_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer014_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer014_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer014_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer014_WasRestartRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_WasRestartRequested(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SetMaxPlayerCount(struct w_steam_iface *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount(_this->u_iface, cPlayersMax);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetBotPlayerCount(struct w_steam_iface *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetBotPlayerCount(_this->u_iface, cBotplayers);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetServerName(_this->u_iface, pszServerName);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetMapName(_this->u_iface, pszMapName);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetPasswordProtected(struct w_steam_iface *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetPasswordProtected(_this->u_iface, bPasswordProtected);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetSpectatorServerName(_this->u_iface, pszSpectatorServerName);
}

void __thiscall winISteamGameServer_SteamGameServer014_ClearAllKeyValues(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_ClearAllKeyValues(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetKeyValue(_this->u_iface, pKey, pValue);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetGameTags(_this->u_iface, pchGameTags);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetGameData(_this->u_iface, pchGameData);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetRegion(_this->u_iface, pszRegion);
}

void __thiscall winISteamGameServer_SteamGameServer014_SetAdvertiseServerActive(struct w_steam_iface *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive(_this->u_iface, bActive);
}

HAuthTicket __thiscall winISteamGameServer_SteamGameServer014_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer014_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamGameServer_SteamGameServer014_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer014_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer014_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_GetGameplayStats(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer014_GetServerReputation(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_GetServerReputation(_this->u_iface);
    return _ret;
}

SteamIPAddress_t * __thiscall winISteamGameServer_SteamGameServer014_GetPublicIP(struct w_steam_iface *_this, SteamIPAddress_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer014_GetPublicIP(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer014_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_HandleIncomingPacket(_this->u_iface, pData, cbData, srcIP, srcPort);
    return _ret;
}

int __thiscall winISteamGameServer_SteamGameServer014_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket(_this->u_iface, pOut, cbMaxOut, pNetAdr, pPort);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer014_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_AssociateWithClan(_this->u_iface, steamIDClan);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility(_this->u_iface, steamIDNewPlayer);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer014_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer014_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED(struct w_steam_iface *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED(_this->u_iface, iHeartbeatInterval);
}

void __thiscall winISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED(_this->u_iface);
}

extern vtable_ptr winISteamGameServer_SteamGameServer014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer014,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_InitGameServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetProduct)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetGameDescription)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetModDir)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetDedicatedServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_LogOnAnonymous)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_WasRestartRequested)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetMaxPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetBotPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetMapName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetPasswordProtected)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetSpectatorServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_ClearAllKeyValues)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetKeyValue)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetGameTags)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetRegion)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetAdvertiseServerActive)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_GetServerReputation)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_HandleIncomingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_GetNextOutgoingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_AssociateWithClan)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameServer_SteamGameServer014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer014_vtable, 44, "SteamGameServer014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamGameServer_SteamGameServer015.h"

DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_InitGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetProduct, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetGameDescription, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetModDir, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetDedicatedServer, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_LogOn, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_LogOnAnonymous, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_BSecure, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_WasRestartRequested, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetMaxPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetBotPlayerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetMapName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetPasswordProtected, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetSpectatorPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetSpectatorServerName, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_ClearAllKeyValues, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetKeyValue, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetGameTags, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetGameData, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetRegion, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetAdvertiseServerActive, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_GetAuthSessionTicket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_RequestUserGroupStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_GetGameplayStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_GetServerReputation, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_GetPublicIP, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_HandleIncomingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_GetNextOutgoingPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_AssociateWithClan, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_BUpdateUserData, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED, 4)

bool __thiscall winISteamGameServer_SteamGameServer015_InitGameServer(struct w_steam_iface *_this, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char *pchVersionString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_InitGameServer(_this->u_iface, unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetProduct(_this->u_iface, pszProduct);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetGameDescription(_this->u_iface, pszGameDescription);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetModDir(_this->u_iface, pszModDir);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetDedicatedServer(struct w_steam_iface *_this, bool bDedicated)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetDedicatedServer(_this->u_iface, bDedicated);
}

void __thiscall winISteamGameServer_SteamGameServer015_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_LogOn(_this->u_iface, pszToken);
}

void __thiscall winISteamGameServer_SteamGameServer015_LogOnAnonymous(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_LogOnAnonymous(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer015_LogOff(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_LogOff(_this->u_iface);
}

bool __thiscall winISteamGameServer_SteamGameServer015_BLoggedOn(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_BLoggedOn(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer015_BSecure(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_BSecure(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer015_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer015_GetSteamID(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer015_WasRestartRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_WasRestartRequested(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SetMaxPlayerCount(struct w_steam_iface *_this, int cPlayersMax)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount(_this->u_iface, cPlayersMax);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetBotPlayerCount(struct w_steam_iface *_this, int cBotplayers)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetBotPlayerCount(_this->u_iface, cBotplayers);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetServerName(_this->u_iface, pszServerName);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetMapName(_this->u_iface, pszMapName);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetPasswordProtected(struct w_steam_iface *_this, bool bPasswordProtected)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetPasswordProtected(_this->u_iface, bPasswordProtected);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetSpectatorPort(struct w_steam_iface *_this, uint16 unSpectatorPort)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetSpectatorPort(_this->u_iface, unSpectatorPort);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetSpectatorServerName(_this->u_iface, pszSpectatorServerName);
}

void __thiscall winISteamGameServer_SteamGameServer015_ClearAllKeyValues(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_ClearAllKeyValues(_this->u_iface);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetKeyValue(_this->u_iface, pKey, pValue);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetGameTags(_this->u_iface, pchGameTags);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetGameData(_this->u_iface, pchGameData);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetRegion(_this->u_iface, pszRegion);
}

void __thiscall winISteamGameServer_SteamGameServer015_SetAdvertiseServerActive(struct w_steam_iface *_this, bool bActive)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive(_this->u_iface, bActive);
}

HAuthTicket __thiscall winISteamGameServer_SteamGameServer015_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket, const SteamNetworkingIdentity *pSnid)
{
    HAuthTicket _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket(_this->u_iface, pTicket, cbMaxTicket, pcbTicket, pSnid);
    return _ret;
}

EBeginAuthSessionResult __thiscall winISteamGameServer_SteamGameServer015_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_BeginAuthSession(_this->u_iface, pAuthTicket, cbAuthTicket, steamID);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_EndAuthSession(_this->u_iface, steamID);
}

void __thiscall winISteamGameServer_SteamGameServer015_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_CancelAuthTicket(_this->u_iface, hAuthTicket);
}

EUserHasLicenseForAppResult __thiscall winISteamGameServer_SteamGameServer015_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp(_this->u_iface, steamID, appID);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer015_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus(_this->u_iface, steamIDUser, steamIDGroup);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_GetGameplayStats(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_GetGameplayStats(_this->u_iface);
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer015_GetServerReputation(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_GetServerReputation(_this->u_iface);
    return _ret;
}

SteamIPAddress_t * __thiscall winISteamGameServer_SteamGameServer015_GetPublicIP(struct w_steam_iface *_this, SteamIPAddress_t *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer015_GetPublicIP(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer015_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_HandleIncomingPacket(_this->u_iface, pData, cbData, srcIP, srcPort);
    return _ret;
}

int __thiscall winISteamGameServer_SteamGameServer015_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket(_this->u_iface, pOut, cbMaxOut, pNetAdr, pPort);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer015_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_AssociateWithClan(_this->u_iface, steamIDClan);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility(_this->u_iface, steamIDNewPlayer);
    return _ret;
}

bool __thiscall winISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED(struct w_steam_iface *_this, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED(_this->u_iface, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
    return _ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection(_this->u_iface);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED(_this->u_iface, steamIDUser);
}

bool __thiscall winISteamGameServer_SteamGameServer015_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameServer_SteamGameServer015_BUpdateUserData(_this->u_iface, steamIDUser, pchPlayerName, uScore);
    return _ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED(struct w_steam_iface *_this, int iHeartbeatInterval)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED(_this->u_iface, iHeartbeatInterval);
}

void __thiscall winISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED(_this->u_iface);
}

extern vtable_ptr winISteamGameServer_SteamGameServer015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameServer_SteamGameServer015,
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_InitGameServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetProduct)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetGameDescription)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetModDir)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetDedicatedServer)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_LogOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_LogOnAnonymous)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_LogOff)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_BSecure)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_GetSteamID)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_WasRestartRequested)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetMaxPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetBotPlayerCount)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetMapName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetPasswordProtected)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetSpectatorPort)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetSpectatorServerName)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_ClearAllKeyValues)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetKeyValue)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetGameTags)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetGameData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetRegion)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetAdvertiseServerActive)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_RequestUserGroupStatus)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_GetGameplayStats)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_GetServerReputation)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_GetPublicIP)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_HandleIncomingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_GetNextOutgoingPacket)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_AssociateWithClan)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_BUpdateUserData)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameServer_SteamGameServer015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer015_vtable, 44, "SteamGameServer015");
    r->u_iface = u_iface;
    return r;
}

