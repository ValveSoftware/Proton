/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingUtils_SteamNetworkingUtils001.h"

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
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation(_this->u_iface, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(_this->u_iface, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(_this->u_iface, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(_this->u_iface, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(_this->u_iface, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(_this->u_iface, flMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(_this->u_iface);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(struct w_steam_iface *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(_this->u_iface, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(struct w_steam_iface *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(_this->u_iface, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(_this->u_iface);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(struct w_steam_iface *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(_this->u_iface, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(struct w_steam_iface *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(struct w_steam_iface *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(_this->u_iface, eDetailLevel, pfnFunc);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(_this->u_iface, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(struct w_steam_iface *_this)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(_this->u_iface, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(_this->u_iface, pAddr, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(_this->u_iface, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(_this->u_iface, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils001_vtable, 22, "SteamNetworkingUtils001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingUtils_SteamNetworkingUtils002.h"

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

ESteamNetworkingAvailability __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus(struct w_steam_iface *_this, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus(_this->u_iface, pDetails);
    return _ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation(_this->u_iface, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations(_this->u_iface, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost(_this->u_iface, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString(_this->u_iface, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString(_this->u_iface, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate(_this->u_iface, flMaxAgeSeconds);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter(struct w_steam_iface *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter(_this->u_iface, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP(struct w_steam_iface *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP(_this->u_iface, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount(_this->u_iface);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList(struct w_steam_iface *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList(_this->u_iface, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp(struct w_steam_iface *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction(struct w_steam_iface *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction(_this->u_iface, eDetailLevel, pfnFunc);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo(_this->u_iface, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue(struct w_steam_iface *_this)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString(_this->u_iface, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString(_this->u_iface, pAddr, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString(_this->u_iface, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString(_this->u_iface, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils002_vtable, 22, "SteamNetworkingUtils002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.h"

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

winSteamNetworkingMessage_t_152 * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage(struct w_steam_iface *_this, int cbAllocateBuffer)
{
    winSteamNetworkingMessage_t_152 * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage(_this->u_iface, cbAllocateBuffer);
    return _ret;
}

ESteamNetworkingAvailability __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(struct w_steam_iface *_this, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(_this->u_iface, pDetails);
    return _ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(_this->u_iface, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(_this->u_iface, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(_this->u_iface, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(_this->u_iface, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(_this->u_iface, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(_this->u_iface, flMaxAgeSeconds);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(struct w_steam_iface *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(_this->u_iface, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(struct w_steam_iface *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(_this->u_iface, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(_this->u_iface);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(struct w_steam_iface *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(_this->u_iface, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(struct w_steam_iface *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(struct w_steam_iface *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(_this->u_iface, eDetailLevel, pfnFunc);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(_this->u_iface, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(struct w_steam_iface *_this)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(_this->u_iface, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(_this->u_iface, pAddr, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(_this->u_iface, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(_this->u_iface, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils003_vtable, 23, "SteamNetworkingUtils003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingUtils_SteamNetworkingUtils004.h"

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

winSteamNetworkingMessage_t_158 * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage(struct w_steam_iface *_this, int cbAllocateBuffer)
{
    winSteamNetworkingMessage_t_158 * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage(_this->u_iface, cbAllocateBuffer);
    return _ret;
}

ESteamNetworkingAvailability __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(struct w_steam_iface *_this, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(_this->u_iface, pDetails);
    return _ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(struct w_steam_iface *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(_this->u_iface, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(_this->u_iface, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(_this->u_iface, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(struct w_steam_iface *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(_this->u_iface, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(struct w_steam_iface *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(_this->u_iface, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(struct w_steam_iface *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(_this->u_iface, flMaxAgeSeconds);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(struct w_steam_iface *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(_this->u_iface, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(struct w_steam_iface *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(_this->u_iface, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(_this->u_iface);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(struct w_steam_iface *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(_this->u_iface, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(struct w_steam_iface *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(struct w_steam_iface *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(_this->u_iface, eDetailLevel, pfnFunc);
}

ESteamNetworkingFakeIPType __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(struct w_steam_iface *_this, uint32 nIPv4)
{
    ESteamNetworkingFakeIPType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(_this->u_iface, nIPv4);
    return _ret;
}

EResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *fakeIP, SteamNetworkingIdentity *pOutRealIdentity)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(_this->u_iface, fakeIP, pOutRealIdentity);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(_this->u_iface, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

const char * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(struct w_steam_iface *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(_this->u_iface, eValue, pOutDataType, pOutScope);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(struct w_steam_iface *_this, ESteamNetworkingConfigValue eCurrent, bool bEnumerateDevVars)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(_this->u_iface, eCurrent, bEnumerateDevVars);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(_this->u_iface, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(struct w_steam_iface *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(_this->u_iface, pAddr, pszStr);
    return _ret;
}

ESteamNetworkingFakeIPType __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(struct w_steam_iface *_this, const SteamNetworkingIPAddr *addr)
{
    ESteamNetworkingFakeIPType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(_this->u_iface, addr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(struct w_steam_iface *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(_this->u_iface, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(_this->u_iface, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingUtils_SteamNetworkingUtils004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingUtils004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils004_vtable, 26, "SteamNetworkingUtils004");
    r->u_iface = u_iface;
    return r;
}

