/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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
    struct ISteamGameServer_SteamGameServer002_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer002_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer002_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer002_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_BLoggedOn, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer002_GSSetSpawnCount(struct w_steam_iface *_this, uint32_t ucSpawn)
{
    struct ISteamGameServer_SteamGameServer002_GSSetSpawnCount_params params =
    {
        .linux_side = _this->u_iface,
        .ucSpawn = ucSpawn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSetSpawnCount, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient(struct w_steam_iface *_this, void *pvEncryptionKey, uint32_t *pcbEncryptionKey, uint32_t cbMaxEncryptionKey)
{
    struct ISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params params =
    {
        .linux_side = _this->u_iface,
        .pvEncryptionKey = pvEncryptionKey,
        .pcbEncryptionKey = pcbEncryptionKey,
        .cbMaxEncryptionKey = cbMaxEncryptionKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect(struct w_steam_iface *_this, uint32_t unUserID, const void *pvRawKey, uint32_t unKeyLen, uint32_t unIPPublic, uint16_t usPort, const void *pvCookie, uint32_t cubCookie)
{
    struct ISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params params =
    {
        .linux_side = _this->u_iface,
        .unUserID = unUserID,
        .pvRawKey = pvRawKey,
        .unKeyLen = unKeyLen,
        .unIPPublic = unIPPublic,
        .usPort = usPort,
        .pvCookie = pvCookie,
        .cubCookie = cubCookie,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect(struct w_steam_iface *_this, CSteamID steamID, uint32_t unIPPublic, const void *pvCookie, uint32_t cubCookie)
{
    struct ISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .unIPPublic = unIPPublic,
        .pvCookie = pvCookie,
        .cubCookie = cubCookie,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSRemoveUserConnect(struct w_steam_iface *_this, uint32_t unUserID)
{
    struct ISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params params =
    {
        .linux_side = _this->u_iface,
        .unUserID = unUserID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSRemoveUserConnect, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSendUserDisconnect(struct w_steam_iface *_this, CSteamID steamID, uint32_t unUserID)
{
    struct ISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .unUserID = unUserID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSendUserDisconnect, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSendUserStatusResponse(struct w_steam_iface *_this, CSteamID steamID, int32_t nSecondsConnected, int32_t nSecondsSinceLast)
{
    struct ISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .nSecondsConnected = nSecondsConnected,
        .nSecondsSinceLast = nSecondsSinceLast,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSendUserStatusResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus(struct w_steam_iface *_this, int32_t nAppIdServed, uint32_t unServerFlags, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, int32_t unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion)
{
    struct ISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params params =
    {
        .linux_side = _this->u_iface,
        .nAppIdServed = nAppIdServed,
        .unServerFlags = unServerFlags,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .unGamePort = unGamePort,
        .pchServerName = pchServerName,
        .pchGameDir = pchGameDir,
        .pchMapName = pchMapName,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSUpdateStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer002_GSUpdateStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSUpdateStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer002_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer002_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer002_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSetServerType(struct w_steam_iface *_this, int32_t nGameAppId, uint32_t unServerFlags, uint32_t unGameIP, uint32_t unGamePort, const char *pchGameDir, const char *pchVersion)
{
    struct ISteamGameServer_SteamGameServer002_GSSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .nGameAppId = nGameAppId,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSetServerType, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSetServerType2(struct w_steam_iface *_this, int32_t nGameAppId, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer002_GSSetServerType2_params params =
    {
        .linux_side = _this->u_iface,
        .nGameAppId = nGameAppId,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSetServerType2, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSUpdateStatus2(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer002_GSUpdateStatus2_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSUpdateStatus2, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser(struct w_steam_iface *_this, CSteamID *pSteamID)
{
    struct ISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params params =
    {
        .linux_side = _this->u_iface,
        .pSteamID = pSteamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer002_GSSetUserData(struct w_steam_iface *_this, CSteamID steamID, const char *pPlayerName, uint32_t nFrags)
{
    struct ISteamGameServer_SteamGameServer002_GSSetUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pPlayerName = pPlayerName,
        .nFrags = nFrags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSetUserData, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer002_GSSetGameType(struct w_steam_iface *_this, const char *pchType)
{
    struct ISteamGameServer_SteamGameServer002_GSSetGameType_params params =
    {
        .linux_side = _this->u_iface,
        .pchType = pchType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer002_GSSetGameType, &params );
}

extern vtable_ptr winISteamGameServer_SteamGameServer002_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer002, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer002_vtable, 21, "SteamGameServer002");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamGameServer_SteamGameServer003_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer003_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer003_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer003_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer003_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer003_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer003_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(struct w_steam_iface *_this, void *pvEncryptionKey, uint32_t *pcbEncryptionKey, uint32_t cbMaxEncryptionKey)
{
    struct ISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params params =
    {
        .linux_side = _this->u_iface,
        .pvEncryptionKey = pvEncryptionKey,
        .pcbEncryptionKey = pcbEncryptionKey,
        .cbMaxEncryptionKey = cbMaxEncryptionKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSSendUserConnect(struct w_steam_iface *_this, uint32_t unUserID, uint32_t unIPPublic, uint16_t usPort, const void *pvCookie, uint32_t cubCookie)
{
    struct ISteamGameServer_SteamGameServer003_GSSendUserConnect_params params =
    {
        .linux_side = _this->u_iface,
        .unUserID = unUserID,
        .unIPPublic = unIPPublic,
        .usPort = usPort,
        .pvCookie = pvCookie,
        .cubCookie = cubCookie,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSSendUserConnect, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSRemoveUserConnect(struct w_steam_iface *_this, uint32_t unUserID)
{
    struct ISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params params =
    {
        .linux_side = _this->u_iface,
        .unUserID = unUserID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSRemoveUserConnect, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSSendUserDisconnect(struct w_steam_iface *_this, CSteamID steamID, uint32_t unUserID)
{
    struct ISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .unUserID = unUserID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSSendUserDisconnect, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer003_GSSetSpawnCount(struct w_steam_iface *_this, uint32_t ucSpawn)
{
    struct ISteamGameServer_SteamGameServer003_GSSetSpawnCount_params params =
    {
        .linux_side = _this->u_iface,
        .ucSpawn = ucSpawn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSSetSpawnCount, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSSetServerType(struct w_steam_iface *_this, int32_t nGameAppId, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer003_GSSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .nGameAppId = nGameAppId,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSSetServerType, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSUpdateStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer003_GSUpdateStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSUpdateStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(struct w_steam_iface *_this, CSteamID *pSteamID)
{
    struct ISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params params =
    {
        .linux_side = _this->u_iface,
        .pSteamID = pSteamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSSetUserData(struct w_steam_iface *_this, CSteamID steamID, const char *pPlayerName, uint32_t nFrags)
{
    struct ISteamGameServer_SteamGameServer003_GSSetUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pPlayerName = pPlayerName,
        .nFrags = nFrags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSSetUserData, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer003_GSSetGameType(struct w_steam_iface *_this, const char *pchType)
{
    struct ISteamGameServer_SteamGameServer003_GSSetGameType_params params =
    {
        .linux_side = _this->u_iface,
        .pchType = pchType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSSetGameType, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    struct ISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pchAchievementName = pchAchievementName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer003_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer003, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer003_vtable, 17, "SteamGameServer003");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamGameServer_SteamGameServer004_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer004_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer004_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer004_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer004_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer004_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer004_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer004_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer004_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_GetSteamID, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, CSteamID steamIDUser, uint32_t unIPClient, void *pvAuthBlob, uint32_t cubAuthBlobSize)
{
    struct ISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate, &params );
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer004_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer004_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer004_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer004_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_BUpdateUserData, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer004_BSetServerType(struct w_steam_iface *_this, int32_t nGameAppId, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer004_BSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .nGameAppId = nGameAppId,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_BSetServerType, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer004_UpdateServerStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer004_UpdateServerStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_UpdateServerStatus, &params );
}

void __thiscall winISteamGameServer_SteamGameServer004_UpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer004_UpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_UpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer004_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    struct ISteamGameServer_SteamGameServer004_SetGameType_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameType = pchGameType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_SetGameType, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    struct ISteamGameServer_SteamGameServer004_BGetUserAchievementStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pchAchievementName = pchAchievementName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer004_BGetUserAchievementStatus, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer004_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer004, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer004_vtable, 14, "SteamGameServer004");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamGameServer_SteamGameServer005_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer005_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer005_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer005_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer005_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer005_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer005_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer005_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer005_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer005_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer005_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer005_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer005_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_BUpdateUserData, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer005_BSetServerType(struct w_steam_iface *_this, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer005_BSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_BSetServerType, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer005_UpdateServerStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer005_UpdateServerStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_UpdateServerStatus, &params );
}

void __thiscall winISteamGameServer_SteamGameServer005_UpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer005_UpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_UpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer005_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    struct ISteamGameServer_SteamGameServer005_SetGameType_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameType = pchGameType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_SetGameType, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer005_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    struct ISteamGameServer_SteamGameServer005_BGetUserAchievementStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pchAchievementName = pchAchievementName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer005_BGetUserAchievementStatus, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer005_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer005, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer005_vtable, 14, "SteamGameServer005");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamGameServer_SteamGameServer008_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer008_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer008_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer008_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer008_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer008_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer008_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer008_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer008_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer008_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_BUpdateUserData, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_BSetServerType(struct w_steam_iface *_this, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer008_BSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_BSetServerType, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer008_UpdateServerStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer008_UpdateServerStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_UpdateServerStatus, &params );
}

void __thiscall winISteamGameServer_SteamGameServer008_UpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer008_UpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_UpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer008_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    struct ISteamGameServer_SteamGameServer008_SetGameType_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameType = pchGameType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_SetGameType, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    struct ISteamGameServer_SteamGameServer008_BGetUserAchievementStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pchAchievementName = pchAchievementName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_BGetUserAchievementStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer008_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer008_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_GetGameplayStats, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer008_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer008_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_RequestUserGroupStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer008_GetPublicIP(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer008_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer008_GetPublicIP, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer008_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer008, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer008_vtable, 17, "SteamGameServer008");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamGameServer_SteamGameServer009_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer009_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer009_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer009_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer009_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer009_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer009_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer009_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer009_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_BUpdateUserData, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_BSetServerType(struct w_steam_iface *_this, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer009_BSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_BSetServerType, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_UpdateServerStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer009_UpdateServerStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_UpdateServerStatus, &params );
}

void __thiscall winISteamGameServer_SteamGameServer009_UpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer009_UpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_UpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer009_SetGameType(struct w_steam_iface *_this, const char *pchGameType)
{
    struct ISteamGameServer_SteamGameServer009_SetGameType_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameType = pchGameType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_SetGameType, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_BGetUserAchievementStatus(struct w_steam_iface *_this, CSteamID steamID, const char *pchAchievementName)
{
    struct ISteamGameServer_SteamGameServer009_BGetUserAchievementStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pchAchievementName = pchAchievementName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_BGetUserAchievementStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer009_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_GetGameplayStats, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer009_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer009_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_RequestUserGroupStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer009_GetPublicIP(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer009_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_GetPublicIP, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer009_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer009_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_SetGameData, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer009_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer009_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer009_UserHasLicenseForApp, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer009_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer009, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer009_vtable, 19, "SteamGameServer009");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamGameServer_SteamGameServer010_LogOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer010_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer010_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer010_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer010_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer010_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer010_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer010_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer010_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer010_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer010_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer010_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_BUpdateUserData, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer010_BSetServerType(struct w_steam_iface *_this, uint32_t unServerFlags, uint32_t unGameIP, uint16_t unGamePort, uint16_t unSpectatorPort, uint16_t usQueryPort, const char *pchGameDir, const char *pchVersion, int8_t bLANMode)
{
    struct ISteamGameServer_SteamGameServer010_BSetServerType_params params =
    {
        .linux_side = _this->u_iface,
        .unServerFlags = unServerFlags,
        .unGameIP = unGameIP,
        .unGamePort = unGamePort,
        .unSpectatorPort = unSpectatorPort,
        .usQueryPort = usQueryPort,
        .pchGameDir = pchGameDir,
        .pchVersion = pchVersion,
        .bLANMode = bLANMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_BSetServerType, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_UpdateServerStatus(struct w_steam_iface *_this, int32_t cPlayers, int32_t cPlayersMax, int32_t cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    struct ISteamGameServer_SteamGameServer010_UpdateServerStatus_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayers = cPlayers,
        .cPlayersMax = cPlayersMax,
        .cBotPlayers = cBotPlayers,
        .pchServerName = pchServerName,
        .pSpectatorServerName = pSpectatorServerName,
        .pchMapName = pchMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_UpdateServerStatus, &params );
}

void __thiscall winISteamGameServer_SteamGameServer010_UpdateSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_UpdateSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer010_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    struct ISteamGameServer_SteamGameServer010_SetGameTags_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameTags = pchGameTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_SetGameTags, &params );
}

void __thiscall winISteamGameServer_SteamGameServer010_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer010_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_GetGameplayStats, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer010_GetServerReputation(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer010_GetServerReputation_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_GetServerReputation, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer010_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_RequestUserGroupStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer010_GetPublicIP(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer010_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_GetPublicIP, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer010_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_SetGameData, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer010_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_UserHasLicenseForApp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer010_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
    struct ISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_GetAuthSessionTicket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer010_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int32_t cbAuthTicket, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer010_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_BeginAuthSession, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer010_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer010_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_EndAuthSession, &params );
}

void __thiscall winISteamGameServer_SteamGameServer010_CancelAuthTicket(struct w_steam_iface *_this, uint32_t hAuthTicket)
{
    struct ISteamGameServer_SteamGameServer010_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer010_CancelAuthTicket, &params );
}

extern vtable_ptr winISteamGameServer_SteamGameServer010_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer010, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer010_vtable, 23, "SteamGameServer010");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamGameServer_SteamGameServer011_InitGameServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usGamePort, uint16_t usQueryPort, uint32_t unFlags, uint32_t nGameAppId, const char *pchVersionString)
{
    struct ISteamGameServer_SteamGameServer011_InitGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usGamePort = usGamePort,
        .usQueryPort = usQueryPort,
        .unFlags = unFlags,
        .nGameAppId = nGameAppId,
        .pchVersionString = pchVersionString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_InitGameServer, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    struct ISteamGameServer_SteamGameServer011_SetProduct_params params =
    {
        .linux_side = _this->u_iface,
        .pszProduct = pszProduct,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetProduct, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    struct ISteamGameServer_SteamGameServer011_SetGameDescription_params params =
    {
        .linux_side = _this->u_iface,
        .pszGameDescription = pszGameDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetGameDescription, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    struct ISteamGameServer_SteamGameServer011_SetModDir_params params =
    {
        .linux_side = _this->u_iface,
        .pszModDir = pszModDir,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetModDir, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetDedicatedServer(struct w_steam_iface *_this, int8_t bDedicated)
{
    struct ISteamGameServer_SteamGameServer011_SetDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .bDedicated = bDedicated,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetDedicatedServer, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_LogOn(struct w_steam_iface *_this, const char *pszAccountName, const char *pszPassword)
{
    struct ISteamGameServer_SteamGameServer011_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .pszAccountName = pszAccountName,
        .pszPassword = pszPassword,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_LogOnAnonymous(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_LogOnAnonymous_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_LogOnAnonymous, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer011_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer011_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_WasRestartRequested(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_WasRestartRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_WasRestartRequested, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_SetMaxPlayerCount(struct w_steam_iface *_this, int32_t cPlayersMax)
{
    struct ISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayersMax = cPlayersMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetMaxPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetBotPlayerCount(struct w_steam_iface *_this, int32_t cBotplayers)
{
    struct ISteamGameServer_SteamGameServer011_SetBotPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cBotplayers = cBotplayers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetBotPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    struct ISteamGameServer_SteamGameServer011_SetServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszServerName = pszServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    struct ISteamGameServer_SteamGameServer011_SetMapName_params params =
    {
        .linux_side = _this->u_iface,
        .pszMapName = pszMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetMapName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetPasswordProtected(struct w_steam_iface *_this, int8_t bPasswordProtected)
{
    struct ISteamGameServer_SteamGameServer011_SetPasswordProtected_params params =
    {
        .linux_side = _this->u_iface,
        .bPasswordProtected = bPasswordProtected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetPasswordProtected, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer011_SetSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    struct ISteamGameServer_SteamGameServer011_SetSpectatorServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszSpectatorServerName = pszSpectatorServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetSpectatorServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_ClearAllKeyValues(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_ClearAllKeyValues_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_ClearAllKeyValues, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    struct ISteamGameServer_SteamGameServer011_SetKeyValue_params params =
    {
        .linux_side = _this->u_iface,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetKeyValue, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    struct ISteamGameServer_SteamGameServer011_SetGameTags_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameTags = pchGameTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetGameTags, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer011_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetGameData, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    struct ISteamGameServer_SteamGameServer011_SetRegion_params params =
    {
        .linux_side = _this->u_iface,
        .pszRegion = pszRegion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetRegion, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer011_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer011_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_BUpdateUserData, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer011_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
    struct ISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_GetAuthSessionTicket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer011_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int32_t cbAuthTicket, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer011_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_BeginAuthSession, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer011_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_EndAuthSession, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_CancelAuthTicket(struct w_steam_iface *_this, uint32_t hAuthTicket)
{
    struct ISteamGameServer_SteamGameServer011_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_CancelAuthTicket, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer011_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_UserHasLicenseForApp, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_RequestUserGroupStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_GetGameplayStats, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer011_GetServerReputation(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_GetServerReputation_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_GetServerReputation, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer011_GetPublicIP(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_GetPublicIP, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer011_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort)
{
    struct ISteamGameServer_SteamGameServer011_HandleIncomingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pData = pData,
        .cbData = cbData,
        .srcIP = srcIP,
        .srcPort = srcPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_HandleIncomingPacket, &params );
    return params._ret;
}

int32_t __thiscall winISteamGameServer_SteamGameServer011_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int32_t cbMaxOut, uint32_t *pNetAdr, uint16_t *pPort)
{
    struct ISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pOut = pOut,
        .cbMaxOut = cbMaxOut,
        .pNetAdr = pNetAdr,
        .pPort = pPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_GetNextOutgoingPacket, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer011_EnableHeartbeats(struct w_steam_iface *_this, int8_t bActive)
{
    struct ISteamGameServer_SteamGameServer011_EnableHeartbeats_params params =
    {
        .linux_side = _this->u_iface,
        .bActive = bActive,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_EnableHeartbeats, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_SetHeartbeatInterval(struct w_steam_iface *_this, int32_t iHeartbeatInterval)
{
    struct ISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params params =
    {
        .linux_side = _this->u_iface,
        .iHeartbeatInterval = iHeartbeatInterval,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_SetHeartbeatInterval, &params );
}

void __thiscall winISteamGameServer_SteamGameServer011_ForceHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer011_ForceHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_ForceHeartbeat, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer011_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamGameServer_SteamGameServer011_AssociateWithClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_AssociateWithClan, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    struct ISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDNewPlayer = steamIDNewPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer011_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer011, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer011_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer011_vtable, 44, "SteamGameServer011");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamGameServer_SteamGameServer012_InitGameServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usGamePort, uint16_t usQueryPort, uint32_t unFlags, uint32_t nGameAppId, const char *pchVersionString)
{
    struct ISteamGameServer_SteamGameServer012_InitGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usGamePort = usGamePort,
        .usQueryPort = usQueryPort,
        .unFlags = unFlags,
        .nGameAppId = nGameAppId,
        .pchVersionString = pchVersionString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_InitGameServer, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    struct ISteamGameServer_SteamGameServer012_SetProduct_params params =
    {
        .linux_side = _this->u_iface,
        .pszProduct = pszProduct,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetProduct, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    struct ISteamGameServer_SteamGameServer012_SetGameDescription_params params =
    {
        .linux_side = _this->u_iface,
        .pszGameDescription = pszGameDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetGameDescription, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    struct ISteamGameServer_SteamGameServer012_SetModDir_params params =
    {
        .linux_side = _this->u_iface,
        .pszModDir = pszModDir,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetModDir, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetDedicatedServer(struct w_steam_iface *_this, int8_t bDedicated)
{
    struct ISteamGameServer_SteamGameServer012_SetDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .bDedicated = bDedicated,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetDedicatedServer, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    struct ISteamGameServer_SteamGameServer012_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .pszToken = pszToken,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_LogOnAnonymous(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_LogOnAnonymous_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_LogOnAnonymous, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer012_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer012_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_WasRestartRequested(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_WasRestartRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_WasRestartRequested, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_SetMaxPlayerCount(struct w_steam_iface *_this, int32_t cPlayersMax)
{
    struct ISteamGameServer_SteamGameServer012_SetMaxPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayersMax = cPlayersMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetMaxPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetBotPlayerCount(struct w_steam_iface *_this, int32_t cBotplayers)
{
    struct ISteamGameServer_SteamGameServer012_SetBotPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cBotplayers = cBotplayers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetBotPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    struct ISteamGameServer_SteamGameServer012_SetServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszServerName = pszServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    struct ISteamGameServer_SteamGameServer012_SetMapName_params params =
    {
        .linux_side = _this->u_iface,
        .pszMapName = pszMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetMapName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetPasswordProtected(struct w_steam_iface *_this, int8_t bPasswordProtected)
{
    struct ISteamGameServer_SteamGameServer012_SetPasswordProtected_params params =
    {
        .linux_side = _this->u_iface,
        .bPasswordProtected = bPasswordProtected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetPasswordProtected, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer012_SetSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    struct ISteamGameServer_SteamGameServer012_SetSpectatorServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszSpectatorServerName = pszSpectatorServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetSpectatorServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_ClearAllKeyValues(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_ClearAllKeyValues_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_ClearAllKeyValues, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    struct ISteamGameServer_SteamGameServer012_SetKeyValue_params params =
    {
        .linux_side = _this->u_iface,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetKeyValue, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    struct ISteamGameServer_SteamGameServer012_SetGameTags_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameTags = pchGameTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetGameTags, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer012_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetGameData, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    struct ISteamGameServer_SteamGameServer012_SetRegion_params params =
    {
        .linux_side = _this->u_iface,
        .pszRegion = pszRegion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetRegion, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer012_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer012_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_BUpdateUserData, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer012_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
    struct ISteamGameServer_SteamGameServer012_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_GetAuthSessionTicket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer012_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int32_t cbAuthTicket, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer012_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_BeginAuthSession, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer012_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_EndAuthSession, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_CancelAuthTicket(struct w_steam_iface *_this, uint32_t hAuthTicket)
{
    struct ISteamGameServer_SteamGameServer012_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_CancelAuthTicket, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer012_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer012_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_UserHasLicenseForApp, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer012_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_RequestUserGroupStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_GetGameplayStats, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer012_GetServerReputation(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_GetServerReputation_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_GetServerReputation, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer012_GetPublicIP(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_GetPublicIP, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer012_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort)
{
    struct ISteamGameServer_SteamGameServer012_HandleIncomingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pData = pData,
        .cbData = cbData,
        .srcIP = srcIP,
        .srcPort = srcPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_HandleIncomingPacket, &params );
    return params._ret;
}

int32_t __thiscall winISteamGameServer_SteamGameServer012_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int32_t cbMaxOut, uint32_t *pNetAdr, uint16_t *pPort)
{
    struct ISteamGameServer_SteamGameServer012_GetNextOutgoingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pOut = pOut,
        .cbMaxOut = cbMaxOut,
        .pNetAdr = pNetAdr,
        .pPort = pPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_GetNextOutgoingPacket, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer012_EnableHeartbeats(struct w_steam_iface *_this, int8_t bActive)
{
    struct ISteamGameServer_SteamGameServer012_EnableHeartbeats_params params =
    {
        .linux_side = _this->u_iface,
        .bActive = bActive,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_EnableHeartbeats, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_SetHeartbeatInterval(struct w_steam_iface *_this, int32_t iHeartbeatInterval)
{
    struct ISteamGameServer_SteamGameServer012_SetHeartbeatInterval_params params =
    {
        .linux_side = _this->u_iface,
        .iHeartbeatInterval = iHeartbeatInterval,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_SetHeartbeatInterval, &params );
}

void __thiscall winISteamGameServer_SteamGameServer012_ForceHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer012_ForceHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_ForceHeartbeat, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer012_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamGameServer_SteamGameServer012_AssociateWithClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_AssociateWithClan, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    struct ISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDNewPlayer = steamIDNewPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer012_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer012, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer012_vtable, 44, "SteamGameServer012");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamGameServer_SteamGameServer013_InitGameServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usGamePort, uint16_t usQueryPort, uint32_t unFlags, uint32_t nGameAppId, const char *pchVersionString)
{
    struct ISteamGameServer_SteamGameServer013_InitGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usGamePort = usGamePort,
        .usQueryPort = usQueryPort,
        .unFlags = unFlags,
        .nGameAppId = nGameAppId,
        .pchVersionString = pchVersionString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_InitGameServer, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    struct ISteamGameServer_SteamGameServer013_SetProduct_params params =
    {
        .linux_side = _this->u_iface,
        .pszProduct = pszProduct,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetProduct, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    struct ISteamGameServer_SteamGameServer013_SetGameDescription_params params =
    {
        .linux_side = _this->u_iface,
        .pszGameDescription = pszGameDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetGameDescription, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    struct ISteamGameServer_SteamGameServer013_SetModDir_params params =
    {
        .linux_side = _this->u_iface,
        .pszModDir = pszModDir,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetModDir, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetDedicatedServer(struct w_steam_iface *_this, int8_t bDedicated)
{
    struct ISteamGameServer_SteamGameServer013_SetDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .bDedicated = bDedicated,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetDedicatedServer, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    struct ISteamGameServer_SteamGameServer013_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .pszToken = pszToken,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_LogOnAnonymous(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_LogOnAnonymous_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_LogOnAnonymous, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer013_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer013_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_WasRestartRequested(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_WasRestartRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_WasRestartRequested, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_SetMaxPlayerCount(struct w_steam_iface *_this, int32_t cPlayersMax)
{
    struct ISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayersMax = cPlayersMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetMaxPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetBotPlayerCount(struct w_steam_iface *_this, int32_t cBotplayers)
{
    struct ISteamGameServer_SteamGameServer013_SetBotPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cBotplayers = cBotplayers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetBotPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    struct ISteamGameServer_SteamGameServer013_SetServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszServerName = pszServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    struct ISteamGameServer_SteamGameServer013_SetMapName_params params =
    {
        .linux_side = _this->u_iface,
        .pszMapName = pszMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetMapName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetPasswordProtected(struct w_steam_iface *_this, int8_t bPasswordProtected)
{
    struct ISteamGameServer_SteamGameServer013_SetPasswordProtected_params params =
    {
        .linux_side = _this->u_iface,
        .bPasswordProtected = bPasswordProtected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetPasswordProtected, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer013_SetSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    struct ISteamGameServer_SteamGameServer013_SetSpectatorServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszSpectatorServerName = pszSpectatorServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetSpectatorServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_ClearAllKeyValues(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_ClearAllKeyValues_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_ClearAllKeyValues, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    struct ISteamGameServer_SteamGameServer013_SetKeyValue_params params =
    {
        .linux_side = _this->u_iface,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetKeyValue, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    struct ISteamGameServer_SteamGameServer013_SetGameTags_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameTags = pchGameTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetGameTags, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer013_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetGameData, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    struct ISteamGameServer_SteamGameServer013_SetRegion_params params =
    {
        .linux_side = _this->u_iface,
        .pszRegion = pszRegion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetRegion, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_SendUserDisconnect(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer013_SendUserDisconnect_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SendUserDisconnect, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer013_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_BUpdateUserData, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer013_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
    struct ISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_GetAuthSessionTicket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer013_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int32_t cbAuthTicket, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer013_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_BeginAuthSession, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer013_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_EndAuthSession, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_CancelAuthTicket(struct w_steam_iface *_this, uint32_t hAuthTicket)
{
    struct ISteamGameServer_SteamGameServer013_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_CancelAuthTicket, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer013_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_UserHasLicenseForApp, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_RequestUserGroupStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_GetGameplayStats, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer013_GetServerReputation(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_GetServerReputation_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_GetServerReputation, &params );
    return params._ret;
}

SteamIPAddress_t * __thiscall winISteamGameServer_SteamGameServer013_GetPublicIP(struct w_steam_iface *_this, SteamIPAddress_t *_ret)
{
    struct ISteamGameServer_SteamGameServer013_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_GetPublicIP, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer013_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort)
{
    struct ISteamGameServer_SteamGameServer013_HandleIncomingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pData = pData,
        .cbData = cbData,
        .srcIP = srcIP,
        .srcPort = srcPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_HandleIncomingPacket, &params );
    return params._ret;
}

int32_t __thiscall winISteamGameServer_SteamGameServer013_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int32_t cbMaxOut, uint32_t *pNetAdr, uint16_t *pPort)
{
    struct ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pOut = pOut,
        .cbMaxOut = cbMaxOut,
        .pNetAdr = pNetAdr,
        .pPort = pPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_GetNextOutgoingPacket, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer013_EnableHeartbeats(struct w_steam_iface *_this, int8_t bActive)
{
    struct ISteamGameServer_SteamGameServer013_EnableHeartbeats_params params =
    {
        .linux_side = _this->u_iface,
        .bActive = bActive,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_EnableHeartbeats, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_SetHeartbeatInterval(struct w_steam_iface *_this, int32_t iHeartbeatInterval)
{
    struct ISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params params =
    {
        .linux_side = _this->u_iface,
        .iHeartbeatInterval = iHeartbeatInterval,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_SetHeartbeatInterval, &params );
}

void __thiscall winISteamGameServer_SteamGameServer013_ForceHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer013_ForceHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_ForceHeartbeat, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer013_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamGameServer_SteamGameServer013_AssociateWithClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_AssociateWithClan, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    struct ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDNewPlayer = steamIDNewPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServer_SteamGameServer013_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer013, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer013_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer013_vtable, 44, "SteamGameServer013");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamGameServer_SteamGameServer014_InitGameServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usGamePort, uint16_t usQueryPort, uint32_t unFlags, uint32_t nGameAppId, const char *pchVersionString)
{
    struct ISteamGameServer_SteamGameServer014_InitGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usGamePort = usGamePort,
        .usQueryPort = usQueryPort,
        .unFlags = unFlags,
        .nGameAppId = nGameAppId,
        .pchVersionString = pchVersionString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_InitGameServer, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    struct ISteamGameServer_SteamGameServer014_SetProduct_params params =
    {
        .linux_side = _this->u_iface,
        .pszProduct = pszProduct,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetProduct, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    struct ISteamGameServer_SteamGameServer014_SetGameDescription_params params =
    {
        .linux_side = _this->u_iface,
        .pszGameDescription = pszGameDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetGameDescription, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    struct ISteamGameServer_SteamGameServer014_SetModDir_params params =
    {
        .linux_side = _this->u_iface,
        .pszModDir = pszModDir,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetModDir, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetDedicatedServer(struct w_steam_iface *_this, int8_t bDedicated)
{
    struct ISteamGameServer_SteamGameServer014_SetDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .bDedicated = bDedicated,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetDedicatedServer, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    struct ISteamGameServer_SteamGameServer014_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .pszToken = pszToken,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_LogOnAnonymous(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_LogOnAnonymous_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_LogOnAnonymous, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer014_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer014_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_WasRestartRequested(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_WasRestartRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_WasRestartRequested, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SetMaxPlayerCount(struct w_steam_iface *_this, int32_t cPlayersMax)
{
    struct ISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayersMax = cPlayersMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetMaxPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetBotPlayerCount(struct w_steam_iface *_this, int32_t cBotplayers)
{
    struct ISteamGameServer_SteamGameServer014_SetBotPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cBotplayers = cBotplayers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetBotPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    struct ISteamGameServer_SteamGameServer014_SetServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszServerName = pszServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    struct ISteamGameServer_SteamGameServer014_SetMapName_params params =
    {
        .linux_side = _this->u_iface,
        .pszMapName = pszMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetMapName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetPasswordProtected(struct w_steam_iface *_this, int8_t bPasswordProtected)
{
    struct ISteamGameServer_SteamGameServer014_SetPasswordProtected_params params =
    {
        .linux_side = _this->u_iface,
        .bPasswordProtected = bPasswordProtected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetPasswordProtected, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer014_SetSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    struct ISteamGameServer_SteamGameServer014_SetSpectatorServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszSpectatorServerName = pszSpectatorServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetSpectatorServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_ClearAllKeyValues(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_ClearAllKeyValues_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_ClearAllKeyValues, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    struct ISteamGameServer_SteamGameServer014_SetKeyValue_params params =
    {
        .linux_side = _this->u_iface,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetKeyValue, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    struct ISteamGameServer_SteamGameServer014_SetGameTags_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameTags = pchGameTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetGameTags, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer014_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetGameData, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    struct ISteamGameServer_SteamGameServer014_SetRegion_params params =
    {
        .linux_side = _this->u_iface,
        .pszRegion = pszRegion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetRegion, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_SetAdvertiseServerActive(struct w_steam_iface *_this, int8_t bActive)
{
    struct ISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params params =
    {
        .linux_side = _this->u_iface,
        .bActive = bActive,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetAdvertiseServerActive, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer014_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
    struct ISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_GetAuthSessionTicket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer014_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int32_t cbAuthTicket, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer014_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_BeginAuthSession, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer014_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_EndAuthSession, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_CancelAuthTicket(struct w_steam_iface *_this, uint32_t hAuthTicket)
{
    struct ISteamGameServer_SteamGameServer014_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_CancelAuthTicket, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer014_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_UserHasLicenseForApp, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_RequestUserGroupStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_GetGameplayStats, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer014_GetServerReputation(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_GetServerReputation_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_GetServerReputation, &params );
    return params._ret;
}

SteamIPAddress_t * __thiscall winISteamGameServer_SteamGameServer014_GetPublicIP(struct w_steam_iface *_this, SteamIPAddress_t *_ret)
{
    struct ISteamGameServer_SteamGameServer014_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_GetPublicIP, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort)
{
    struct ISteamGameServer_SteamGameServer014_HandleIncomingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pData = pData,
        .cbData = cbData,
        .srcIP = srcIP,
        .srcPort = srcPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_HandleIncomingPacket, &params );
    return params._ret;
}

int32_t __thiscall winISteamGameServer_SteamGameServer014_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int32_t cbMaxOut, uint32_t *pNetAdr, uint16_t *pPort)
{
    struct ISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pOut = pOut,
        .cbMaxOut = cbMaxOut,
        .pNetAdr = pNetAdr,
        .pPort = pPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_GetNextOutgoingPacket, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer014_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamGameServer_SteamGameServer014_AssociateWithClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_AssociateWithClan, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    struct ISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDNewPlayer = steamIDNewPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer014_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer014_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_BUpdateUserData, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED(struct w_steam_iface *_this, int32_t iHeartbeatInterval)
{
    struct ISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .iHeartbeatInterval = iHeartbeatInterval,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED, &params );
}

void __thiscall winISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED, &params );
}

extern vtable_ptr winISteamGameServer_SteamGameServer014_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer014, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer014_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer014_vtable, 44, "SteamGameServer014");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamGameServer_SteamGameServer015_InitGameServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usGamePort, uint16_t usQueryPort, uint32_t unFlags, uint32_t nGameAppId, const char *pchVersionString)
{
    struct ISteamGameServer_SteamGameServer015_InitGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usGamePort = usGamePort,
        .usQueryPort = usQueryPort,
        .unFlags = unFlags,
        .nGameAppId = nGameAppId,
        .pchVersionString = pchVersionString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_InitGameServer, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SetProduct(struct w_steam_iface *_this, const char *pszProduct)
{
    struct ISteamGameServer_SteamGameServer015_SetProduct_params params =
    {
        .linux_side = _this->u_iface,
        .pszProduct = pszProduct,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetProduct, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetGameDescription(struct w_steam_iface *_this, const char *pszGameDescription)
{
    struct ISteamGameServer_SteamGameServer015_SetGameDescription_params params =
    {
        .linux_side = _this->u_iface,
        .pszGameDescription = pszGameDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetGameDescription, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetModDir(struct w_steam_iface *_this, const char *pszModDir)
{
    struct ISteamGameServer_SteamGameServer015_SetModDir_params params =
    {
        .linux_side = _this->u_iface,
        .pszModDir = pszModDir,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetModDir, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetDedicatedServer(struct w_steam_iface *_this, int8_t bDedicated)
{
    struct ISteamGameServer_SteamGameServer015_SetDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .bDedicated = bDedicated,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetDedicatedServer, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_LogOn(struct w_steam_iface *_this, const char *pszToken)
{
    struct ISteamGameServer_SteamGameServer015_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .pszToken = pszToken,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_LogOn, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_LogOnAnonymous(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_LogOnAnonymous_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_LogOnAnonymous, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_LogOff(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_LogOff, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_BLoggedOn(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_BLoggedOn, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_BSecure(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_BSecure_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_BSecure, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer015_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer015_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_GetSteamID, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_WasRestartRequested(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_WasRestartRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_WasRestartRequested, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SetMaxPlayerCount(struct w_steam_iface *_this, int32_t cPlayersMax)
{
    struct ISteamGameServer_SteamGameServer015_SetMaxPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cPlayersMax = cPlayersMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetMaxPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetBotPlayerCount(struct w_steam_iface *_this, int32_t cBotplayers)
{
    struct ISteamGameServer_SteamGameServer015_SetBotPlayerCount_params params =
    {
        .linux_side = _this->u_iface,
        .cBotplayers = cBotplayers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetBotPlayerCount, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetServerName(struct w_steam_iface *_this, const char *pszServerName)
{
    struct ISteamGameServer_SteamGameServer015_SetServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszServerName = pszServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetMapName(struct w_steam_iface *_this, const char *pszMapName)
{
    struct ISteamGameServer_SteamGameServer015_SetMapName_params params =
    {
        .linux_side = _this->u_iface,
        .pszMapName = pszMapName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetMapName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetPasswordProtected(struct w_steam_iface *_this, int8_t bPasswordProtected)
{
    struct ISteamGameServer_SteamGameServer015_SetPasswordProtected_params params =
    {
        .linux_side = _this->u_iface,
        .bPasswordProtected = bPasswordProtected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetPasswordProtected, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetSpectatorPort(struct w_steam_iface *_this, uint16_t unSpectatorPort)
{
    struct ISteamGameServer_SteamGameServer015_SetSpectatorPort_params params =
    {
        .linux_side = _this->u_iface,
        .unSpectatorPort = unSpectatorPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetSpectatorPort, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetSpectatorServerName(struct w_steam_iface *_this, const char *pszSpectatorServerName)
{
    struct ISteamGameServer_SteamGameServer015_SetSpectatorServerName_params params =
    {
        .linux_side = _this->u_iface,
        .pszSpectatorServerName = pszSpectatorServerName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetSpectatorServerName, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_ClearAllKeyValues(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_ClearAllKeyValues_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_ClearAllKeyValues, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetKeyValue(struct w_steam_iface *_this, const char *pKey, const char *pValue)
{
    struct ISteamGameServer_SteamGameServer015_SetKeyValue_params params =
    {
        .linux_side = _this->u_iface,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetKeyValue, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetGameTags(struct w_steam_iface *_this, const char *pchGameTags)
{
    struct ISteamGameServer_SteamGameServer015_SetGameTags_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameTags = pchGameTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetGameTags, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetGameData(struct w_steam_iface *_this, const char *pchGameData)
{
    struct ISteamGameServer_SteamGameServer015_SetGameData_params params =
    {
        .linux_side = _this->u_iface,
        .pchGameData = pchGameData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetGameData, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetRegion(struct w_steam_iface *_this, const char *pszRegion)
{
    struct ISteamGameServer_SteamGameServer015_SetRegion_params params =
    {
        .linux_side = _this->u_iface,
        .pszRegion = pszRegion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetRegion, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_SetAdvertiseServerActive(struct w_steam_iface *_this, int8_t bActive)
{
    struct ISteamGameServer_SteamGameServer015_SetAdvertiseServerActive_params params =
    {
        .linux_side = _this->u_iface,
        .bActive = bActive,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetAdvertiseServerActive, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer015_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket, const SteamNetworkingIdentity_144 *pSnid)
{
    struct ISteamGameServer_SteamGameServer015_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
        .pSnid = pSnid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_GetAuthSessionTicket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameServer_SteamGameServer015_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int32_t cbAuthTicket, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer015_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_BeginAuthSession, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamGameServer_SteamGameServer015_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_EndAuthSession, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_CancelAuthTicket(struct w_steam_iface *_this, uint32_t hAuthTicket)
{
    struct ISteamGameServer_SteamGameServer015_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_CancelAuthTicket, &params );
}

uint32_t __thiscall winISteamGameServer_SteamGameServer015_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, uint32_t appID)
{
    struct ISteamGameServer_SteamGameServer015_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_UserHasLicenseForApp, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_RequestUserGroupStatus(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    struct ISteamGameServer_SteamGameServer015_RequestUserGroupStatus_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDGroup = steamIDGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_RequestUserGroupStatus, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_GetGameplayStats(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_GetGameplayStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_GetGameplayStats, &params );
}

uint64_t __thiscall winISteamGameServer_SteamGameServer015_GetServerReputation(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_GetServerReputation_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_GetServerReputation, &params );
    return params._ret;
}

SteamIPAddress_t * __thiscall winISteamGameServer_SteamGameServer015_GetPublicIP(struct w_steam_iface *_this, SteamIPAddress_t *_ret)
{
    struct ISteamGameServer_SteamGameServer015_GetPublicIP_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_GetPublicIP, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_HandleIncomingPacket(struct w_steam_iface *_this, const void *pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort)
{
    struct ISteamGameServer_SteamGameServer015_HandleIncomingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pData = pData,
        .cbData = cbData,
        .srcIP = srcIP,
        .srcPort = srcPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_HandleIncomingPacket, &params );
    return params._ret;
}

int32_t __thiscall winISteamGameServer_SteamGameServer015_GetNextOutgoingPacket(struct w_steam_iface *_this, void *pOut, int32_t cbMaxOut, uint32_t *pNetAdr, uint16_t *pPort)
{
    struct ISteamGameServer_SteamGameServer015_GetNextOutgoingPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pOut = pOut,
        .cbMaxOut = cbMaxOut,
        .pNetAdr = pNetAdr,
        .pPort = pPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_GetNextOutgoingPacket, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer015_AssociateWithClan(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamGameServer_SteamGameServer015_AssociateWithClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_AssociateWithClan, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility(struct w_steam_iface *_this, CSteamID steamIDNewPlayer)
{
    struct ISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDNewPlayer = steamIDNewPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED(struct w_steam_iface *_this, uint32_t unIPClient, const void *pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    struct ISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .unIPClient = unIPClient,
        .pvAuthBlob = pvAuthBlob,
        .cubAuthBlobSize = cubAuthBlobSize,
        .pSteamIDUser = pSteamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct ISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED, &params );
}

int8_t __thiscall winISteamGameServer_SteamGameServer015_BUpdateUserData(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchPlayerName, uint32_t uScore)
{
    struct ISteamGameServer_SteamGameServer015_BUpdateUserData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchPlayerName = pchPlayerName,
        .uScore = uScore,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_BUpdateUserData, &params );
    return params._ret;
}

void __thiscall winISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED(struct w_steam_iface *_this, int32_t iHeartbeatInterval)
{
    struct ISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .iHeartbeatInterval = iHeartbeatInterval,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED, &params );
}

void __thiscall winISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED(struct w_steam_iface *_this)
{
    struct ISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED, &params );
}

extern vtable_ptr winISteamGameServer_SteamGameServer015_vtable;

DEFINE_RTTI_DATA0(winISteamGameServer_SteamGameServer015, 0, ".?AVISteamGameServer@@")

__ASM_BLOCK_BEGIN(winISteamGameServer_SteamGameServer015_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServer_SteamGameServer015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServer015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServer_SteamGameServer015_vtable, 44, "SteamGameServer015");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamGameServer_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamGameServer_SteamGameServer002_rtti( base );
    init_winISteamGameServer_SteamGameServer003_rtti( base );
    init_winISteamGameServer_SteamGameServer004_rtti( base );
    init_winISteamGameServer_SteamGameServer005_rtti( base );
    init_winISteamGameServer_SteamGameServer008_rtti( base );
    init_winISteamGameServer_SteamGameServer009_rtti( base );
    init_winISteamGameServer_SteamGameServer010_rtti( base );
    init_winISteamGameServer_SteamGameServer011_rtti( base );
    init_winISteamGameServer_SteamGameServer012_rtti( base );
    init_winISteamGameServer_SteamGameServer013_rtti( base );
    init_winISteamGameServer_SteamGameServer014_rtti( base );
    init_winISteamGameServer_SteamGameServer015_rtti( base );
#endif /* __x86_64__ */
}
