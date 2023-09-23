#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamnetworkingutils.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils004.h"
ESteamNetworkingAvailability cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(void *linux_side, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetRelayNetworkStatus((SteamRelayNetworkStatus_t *)pDetails);
    return (_ret);
}

float cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(void *linux_side, SteamNetworkPingLocation_t *result)
{
    float _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetLocalPingLocation(*result);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(void *linux_side, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->EstimatePingTimeBetweenTwoLocations(*location1, *location2);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(void *linux_side, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->EstimatePingTimeFromLocalHost(*remoteLocation);
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(void *linux_side, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    ((ISteamNetworkingUtils*)linux_side)->ConvertPingLocationToString(*location, (char *)pszBuf, (int)cchBufSize);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(void *linux_side, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->ParsePingLocationString((const char *)pszString, *result);
    return (_ret);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(void *linux_side, float flMaxAgeSeconds)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->CheckPingDataUpToDate((float)flMaxAgeSeconds);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(void *linux_side, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetPingToDataCenter((SteamNetworkingPOPID)popID, (SteamNetworkingPOPID *)pViaRelayPoP);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(void *linux_side, SteamNetworkingPOPID popID)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetDirectPingToPOP((SteamNetworkingPOPID)popID);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetPOPCount();
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(void *linux_side, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetPOPList((SteamNetworkingPOPID *)list, (int)nListSz);
    return (_ret);
}

SteamNetworkingMicroseconds cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(void *linux_side)
{
    SteamNetworkingMicroseconds _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetLocalTimestamp();
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(void *linux_side, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    pfnFunc = (FSteamNetworkingSocketsDebugOutput)manual_convert_FSteamNetworkingSocketsDebugOutput((void*)pfnFunc);
    ((ISteamNetworkingUtils*)linux_side)->SetDebugOutputFunction((ESteamNetworkingSocketsDebugOutputType)eDetailLevel, (FSteamNetworkingSocketsDebugOutput)pfnFunc);
}

ESteamNetworkingFakeIPType cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(void *linux_side, uint32 nIPv4)
{
    ESteamNetworkingFakeIPType _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetIPv4FakeIPType((uint32)nIPv4);
    return (_ret);
}

EResult cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(void *linux_side, const SteamNetworkingIPAddr *fakeIP, SteamNetworkingIdentity *pOutRealIdentity)
{
    EResult _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetRealIdentityForFakeIP(*fakeIP, (SteamNetworkingIdentity *)pOutRealIdentity);
    return (_ret);
}

ESteamNetworkingGetConfigValueResult cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(void *linux_side, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetConfigValue((ESteamNetworkingConfigValue)eValue, (ESteamNetworkingConfigScope)eScopeType, (intptr_t)scopeObj, (ESteamNetworkingConfigDataType *)pOutDataType, (void *)pResult, (size_t *)cbResult);
    return (_ret);
}

const char * cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(void *linux_side, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope)
{
    const char * _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetConfigValueInfo((ESteamNetworkingConfigValue)eValue, (ESteamNetworkingConfigDataType *)pOutDataType, (ESteamNetworkingConfigScope *)pOutScope);
    return (_ret);
}

ESteamNetworkingConfigValue cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(void *linux_side, ESteamNetworkingConfigValue eCurrent, bool bEnumerateDevVars)
{
    ESteamNetworkingConfigValue _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->IterateGenericEditableConfigValues((ESteamNetworkingConfigValue)eCurrent, (bool)bEnumerateDevVars);
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(void *linux_side, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIPAddr_ToString(*addr, (char *)buf, (size_t)cbBuf, (bool)bWithPort);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(void *linux_side, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIPAddr_ParseString((SteamNetworkingIPAddr *)pAddr, (const char *)pszStr);
    return (_ret);
}

ESteamNetworkingFakeIPType cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(void *linux_side, const SteamNetworkingIPAddr *addr)
{
    ESteamNetworkingFakeIPType _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIPAddr_GetFakeIPType(*addr);
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(void *linux_side, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIdentity_ToString(*identity, (char *)buf, (size_t)cbBuf);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(void *linux_side, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIdentity_ParseString((SteamNetworkingIdentity *)pIdentity, (const char *)pszStr);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
