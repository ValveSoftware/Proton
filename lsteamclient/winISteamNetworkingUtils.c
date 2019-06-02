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

#include "cppISteamNetworkingUtils_SteamNetworkingUtils001.h"

typedef struct __winISteamNetworkingUtils_SteamNetworkingUtils001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingUtils_SteamNetworkingUtils001;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation, 8)
float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkPingLocation_t * result)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation(_this->linux_side, result);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations, 12)
int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkPingLocation_t * location1, const SteamNetworkPingLocation_t * location2)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(_this->linux_side, location1, location2);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost, 8)
int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkPingLocation_t * remoteLocation)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(_this->linux_side, remoteLocation);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString, 16)
void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkPingLocation_t * location, char * pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(_this->linux_side, location, pszBuf, cchBufSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString, 12)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const char * pszString, SteamNetworkPingLocation_t * result)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(_this->linux_side, pszString, result);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate, 8)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, float flMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(_this->linux_side, flMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress, 4)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter, 12)
int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID * pViaRelayPoP)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(_this->linux_side, popID, pViaRelayPoP);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP, 8)
int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingPOPID popID)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(_this->linux_side, popID);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount, 4)
int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList, 12)
int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingPOPID * list, int nListSz)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(_this->linux_side, list, nListSz);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp, 4)
SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction, 12)
void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(_this->linux_side, eDetailLevel, pfnFunc);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue, 24)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void * pArg)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, eDataType, pArg);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue, 28)
ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType * pOutDataType, void * pResult, size_t * cbResult)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo, 24)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingConfigValue eValue, const char ** pOutName, ESteamNetworkingConfigDataType * pOutDataType, ESteamNetworkingConfigScope * pOutScope, ESteamNetworkingConfigValue * pOutNextValue)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(_this->linux_side, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue, 4)
ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString, 20)
void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkingIPAddr * addr, char * buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(_this->linux_side, addr, buf, cbBuf, bWithPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString, 12)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingIPAddr * pAddr, const char * pszStr)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(_this->linux_side, pAddr, pszStr);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString, 16)
void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkingIdentity * identity, char * buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(_this->linux_side, identity, buf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString, 12)
bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingIdentity * pIdentity, const char * pszStr)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(_this->linux_side, pIdentity, pszStr);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_destructor, 4)
void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_destructor(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
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

winISteamNetworkingUtils_SteamNetworkingUtils001 *create_winISteamNetworkingUtils_SteamNetworkingUtils001(void *linux_side)
{
    winISteamNetworkingUtils_SteamNetworkingUtils001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingUtils_SteamNetworkingUtils001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingUtils_SteamNetworkingUtils001_vtable;
    r->linux_side = linux_side;
    return r;
}

