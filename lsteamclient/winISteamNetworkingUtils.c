/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_destructor, 4)

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation_params params =
    {
        .linux_side = _this->u_iface,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations_params params =
    {
        .linux_side = _this->u_iface,
        .location1 = location1,
        .location2 = location2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost_params params =
    {
        .linux_side = _this->u_iface,
        .remoteLocation = remoteLocation,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int32_t cchBufSize)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString_params params =
    {
        .linux_side = _this->u_iface,
        .location = location,
        .pszBuf = pszBuf,
        .cchBufSize = cchBufSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString_params params =
    {
        .linux_side = _this->u_iface,
        .pszString = pszString,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate_params params =
    {
        .linux_side = _this->u_iface,
        .flMaxAgeSeconds = flMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(struct w_steam_iface *_this, uint32_t popID, uint32_t *pViaRelayPoP)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
        .pViaRelayPoP = pViaRelayPoP,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(struct w_steam_iface *_this, uint32_t popID)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(struct w_steam_iface *_this, uint32_t *list, int32_t nListSz)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList_params params =
    {
        .linux_side = _this->u_iface,
        .list = list,
        .nListSz = nListSz,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(struct w_steam_iface *_this, uint32_t eDetailLevel, void (*W_CDECL pfnFunc)(uint32_t, const char *))
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction_params params =
    {
        .linux_side = _this->u_iface,
        .eDetailLevel = eDetailLevel,
        .pfnFunc = pfnFunc,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t eDataType, const void *pArg)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .eDataType = eDataType,
        .pArg = pArg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t *pOutDataType, void *pResult, uint32_t *cbResult)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .pOutDataType = pOutDataType,
        .pResult = pResult,
        .cbResult = cbResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(struct w_steam_iface *_this, uint32_t eValue, const char **pOutName, uint32_t *pOutDataType, uint32_t *pOutScope, uint32_t *pOutNextValue)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .pOutName = pOutName,
        .pOutDataType = pOutDataType,
        .pOutScope = pOutScope,
        .pOutNextValue = pOutNextValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, uint32_t cbBuf, int8_t bWithPort)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .addr = addr,
        .buf = buf,
        .cbBuf = cbBuf,
        .bWithPort = bWithPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pAddr = pAddr,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identity, char *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .identity = identity,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils001_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingUtils_SteamNetworkingUtils001, 0, ".?AVISteamNetworkingUtils@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingUtils_SteamNetworkingUtils001_vtables)
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils001,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_destructor)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils001_vtable, 22, "SteamNetworkingUtils001");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_destructor, 4)

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus(struct w_steam_iface *_this, SteamRelayNetworkStatus_t *pDetails)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus, &params );
    return params._ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation_params params =
    {
        .linux_side = _this->u_iface,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations_params params =
    {
        .linux_side = _this->u_iface,
        .location1 = location1,
        .location2 = location2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost_params params =
    {
        .linux_side = _this->u_iface,
        .remoteLocation = remoteLocation,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int32_t cchBufSize)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString_params params =
    {
        .linux_side = _this->u_iface,
        .location = location,
        .pszBuf = pszBuf,
        .cchBufSize = cchBufSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString_params params =
    {
        .linux_side = _this->u_iface,
        .pszString = pszString,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate_params params =
    {
        .linux_side = _this->u_iface,
        .flMaxAgeSeconds = flMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter(struct w_steam_iface *_this, uint32_t popID, uint32_t *pViaRelayPoP)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
        .pViaRelayPoP = pViaRelayPoP,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP(struct w_steam_iface *_this, uint32_t popID)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList(struct w_steam_iface *_this, uint32_t *list, int32_t nListSz)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList_params params =
    {
        .linux_side = _this->u_iface,
        .list = list,
        .nListSz = nListSz,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction(struct w_steam_iface *_this, uint32_t eDetailLevel, void (*W_CDECL pfnFunc)(uint32_t, const char *))
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction_params params =
    {
        .linux_side = _this->u_iface,
        .eDetailLevel = eDetailLevel,
        .pfnFunc = pfnFunc,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t eDataType, const void *pArg)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .eDataType = eDataType,
        .pArg = pArg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t *pOutDataType, void *pResult, uint32_t *cbResult)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .pOutDataType = pOutDataType,
        .pResult = pResult,
        .cbResult = cbResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo(struct w_steam_iface *_this, uint32_t eValue, const char **pOutName, uint32_t *pOutDataType, uint32_t *pOutScope, uint32_t *pOutNextValue)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .pOutName = pOutName,
        .pOutDataType = pOutDataType,
        .pOutScope = pOutScope,
        .pOutNextValue = pOutNextValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, uint32_t cbBuf, int8_t bWithPort)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .addr = addr,
        .buf = buf,
        .cbBuf = cbBuf,
        .bWithPort = bWithPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pAddr = pAddr,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identity, char *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .identity = identity,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils002_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingUtils_SteamNetworkingUtils002, 0, ".?AVISteamNetworkingUtils@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingUtils_SteamNetworkingUtils002_vtables)
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils002,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_destructor)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils002_vtable, 22, "SteamNetworkingUtils002");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_destructor, 4)

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(struct w_steam_iface *_this, SteamRelayNetworkStatus_t *pDetails)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus, &params );
    return params._ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation_params params =
    {
        .linux_side = _this->u_iface,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations_params params =
    {
        .linux_side = _this->u_iface,
        .location1 = location1,
        .location2 = location2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost_params params =
    {
        .linux_side = _this->u_iface,
        .remoteLocation = remoteLocation,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int32_t cchBufSize)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString_params params =
    {
        .linux_side = _this->u_iface,
        .location = location,
        .pszBuf = pszBuf,
        .cchBufSize = cchBufSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString_params params =
    {
        .linux_side = _this->u_iface,
        .pszString = pszString,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate_params params =
    {
        .linux_side = _this->u_iface,
        .flMaxAgeSeconds = flMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(struct w_steam_iface *_this, uint32_t popID, uint32_t *pViaRelayPoP)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
        .pViaRelayPoP = pViaRelayPoP,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(struct w_steam_iface *_this, uint32_t popID)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(struct w_steam_iface *_this, uint32_t *list, int32_t nListSz)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList_params params =
    {
        .linux_side = _this->u_iface,
        .list = list,
        .nListSz = nListSz,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(struct w_steam_iface *_this, uint32_t eDetailLevel, void (*W_CDECL pfnFunc)(uint32_t, const char *))
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction_params params =
    {
        .linux_side = _this->u_iface,
        .eDetailLevel = eDetailLevel,
        .pfnFunc = pfnFunc,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t eDataType, const void *pArg)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .eDataType = eDataType,
        .pArg = pArg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t *pOutDataType, void *pResult, uint32_t *cbResult)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .pOutDataType = pOutDataType,
        .pResult = pResult,
        .cbResult = cbResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(struct w_steam_iface *_this, uint32_t eValue, const char **pOutName, uint32_t *pOutDataType, uint32_t *pOutScope, uint32_t *pOutNextValue)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .pOutName = pOutName,
        .pOutDataType = pOutDataType,
        .pOutScope = pOutScope,
        .pOutNextValue = pOutNextValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, uint32_t cbBuf, int8_t bWithPort)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .addr = addr,
        .buf = buf,
        .cbBuf = cbBuf,
        .bWithPort = bWithPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pAddr = pAddr,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identity, char *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .identity = identity,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils003_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingUtils_SteamNetworkingUtils003, 0, ".?AVISteamNetworkingUtils@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingUtils_SteamNetworkingUtils003_vtables)
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils003,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_destructor)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils003_vtable, 23, "SteamNetworkingUtils003");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_destructor, 4)

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(struct w_steam_iface *_this, SteamRelayNetworkStatus_t *pDetails)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus, &params );
    return params._ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation_params params =
    {
        .linux_side = _this->u_iface,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations_params params =
    {
        .linux_side = _this->u_iface,
        .location1 = location1,
        .location2 = location2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost_params params =
    {
        .linux_side = _this->u_iface,
        .remoteLocation = remoteLocation,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int32_t cchBufSize)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString_params params =
    {
        .linux_side = _this->u_iface,
        .location = location,
        .pszBuf = pszBuf,
        .cchBufSize = cchBufSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString_params params =
    {
        .linux_side = _this->u_iface,
        .pszString = pszString,
        .result = result,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate_params params =
    {
        .linux_side = _this->u_iface,
        .flMaxAgeSeconds = flMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(struct w_steam_iface *_this, uint32_t popID, uint32_t *pViaRelayPoP)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
        .pViaRelayPoP = pViaRelayPoP,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(struct w_steam_iface *_this, uint32_t popID)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP_params params =
    {
        .linux_side = _this->u_iface,
        .popID = popID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(struct w_steam_iface *_this, uint32_t *list, int32_t nListSz)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList_params params =
    {
        .linux_side = _this->u_iface,
        .list = list,
        .nListSz = nListSz,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(struct w_steam_iface *_this)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(struct w_steam_iface *_this, uint32_t eDetailLevel, void (*W_CDECL pfnFunc)(uint32_t, const char *))
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction_params params =
    {
        .linux_side = _this->u_iface,
        .eDetailLevel = eDetailLevel,
        .pfnFunc = pfnFunc,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction, &params );
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(struct w_steam_iface *_this, uint32_t nIPv4)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType_params params =
    {
        .linux_side = _this->u_iface,
        .nIPv4 = nIPv4,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *fakeIP, SteamNetworkingIdentity_144 *pOutRealIdentity)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .fakeIP = fakeIP,
        .pOutRealIdentity = pOutRealIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t eDataType, const void *pArg)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .eDataType = eDataType,
        .pArg = pArg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(struct w_steam_iface *_this, uint32_t eValue, uint32_t eScopeType, int32_t scopeObj, uint32_t *pOutDataType, void *pResult, uint32_t *cbResult)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .eScopeType = eScopeType,
        .scopeObj = scopeObj,
        .pOutDataType = pOutDataType,
        .pResult = pResult,
        .cbResult = cbResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue, &params );
    return params._ret;
}

const char * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(struct w_steam_iface *_this, uint32_t eValue, uint32_t *pOutDataType, uint32_t *pOutScope)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo_params params =
    {
        .linux_side = _this->u_iface,
        .eValue = eValue,
        .pOutDataType = pOutDataType,
        .pOutScope = pOutScope,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(struct w_steam_iface *_this, uint32_t eCurrent, int8_t bEnumerateDevVars)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues_params params =
    {
        .linux_side = _this->u_iface,
        .eCurrent = eCurrent,
        .bEnumerateDevVars = bEnumerateDevVars,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, uint32_t cbBuf, int8_t bWithPort)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .addr = addr,
        .buf = buf,
        .cbBuf = cbBuf,
        .bWithPort = bWithPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pAddr = pAddr,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType_params params =
    {
        .linux_side = _this->u_iface,
        .addr = addr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identity, char *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString_params params =
    {
        .linux_side = _this->u_iface,
        .identity = identity,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString, &params );
}

int8_t __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity, const char *pszStr)
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
        .pszStr = pszStr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils004_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingUtils_SteamNetworkingUtils004, 0, ".?AVISteamNetworkingUtils@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingUtils_SteamNetworkingUtils004_vtables)
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils004,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_destructor)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils004_vtable, 26, "SteamNetworkingUtils004");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamNetworkingUtils_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamNetworkingUtils_SteamNetworkingUtils001_rtti( base );
    init_winISteamNetworkingUtils_SteamNetworkingUtils002_rtti( base );
    init_winISteamNetworkingUtils_SteamNetworkingUtils003_rtti( base );
    init_winISteamNetworkingUtils_SteamNetworkingUtils004_rtti( base );
#endif /* __x86_64__ */
}
