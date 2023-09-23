#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_152/steam_api.h"
#include "steamworks_sdk_152/steamnetworkingtypes.h"
#include "steamworks_sdk_152/isteamnetworkingutils.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_152
#include "struct_converters.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.h"
ESteamNetworkingAvailability cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(void *linux_side, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetRelayNetworkStatus((SteamRelayNetworkStatus_t *)pDetails);
    return (_ret);
}

float cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(void *linux_side, SteamNetworkPingLocation_t *result)
{
    float _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetLocalPingLocation(*result);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(void *linux_side, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->EstimatePingTimeBetweenTwoLocations(*location1, *location2);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(void *linux_side, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->EstimatePingTimeFromLocalHost(*remoteLocation);
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(void *linux_side, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    ((ISteamNetworkingUtils*)linux_side)->ConvertPingLocationToString(*location, (char *)pszBuf, (int)cchBufSize);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(void *linux_side, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->ParsePingLocationString((const char *)pszString, *result);
    return (_ret);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(void *linux_side, float flMaxAgeSeconds)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->CheckPingDataUpToDate((float)flMaxAgeSeconds);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(void *linux_side, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetPingToDataCenter((SteamNetworkingPOPID)popID, (SteamNetworkingPOPID *)pViaRelayPoP);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(void *linux_side, SteamNetworkingPOPID popID)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetDirectPingToPOP((SteamNetworkingPOPID)popID);
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetPOPCount();
    return (_ret);
}

int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(void *linux_side, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetPOPList((SteamNetworkingPOPID *)list, (int)nListSz);
    return (_ret);
}

SteamNetworkingMicroseconds cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(void *linux_side)
{
    SteamNetworkingMicroseconds _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetLocalTimestamp();
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(void *linux_side, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    pfnFunc = (FSteamNetworkingSocketsDebugOutput)manual_convert_FSteamNetworkingSocketsDebugOutput((void*)pfnFunc);
    ((ISteamNetworkingUtils*)linux_side)->SetDebugOutputFunction((ESteamNetworkingSocketsDebugOutputType)eDetailLevel, (FSteamNetworkingSocketsDebugOutput)pfnFunc);
}

ESteamNetworkingGetConfigValueResult cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(void *linux_side, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetConfigValue((ESteamNetworkingConfigValue)eValue, (ESteamNetworkingConfigScope)eScopeType, (intptr_t)scopeObj, (ESteamNetworkingConfigDataType *)pOutDataType, (void *)pResult, (size_t *)cbResult);
    return (_ret);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(void *linux_side, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetConfigValueInfo((ESteamNetworkingConfigValue)eValue, (const char **)pOutName, (ESteamNetworkingConfigDataType *)pOutDataType, (ESteamNetworkingConfigScope *)pOutScope, (ESteamNetworkingConfigValue *)pOutNextValue);
    return (_ret);
}

ESteamNetworkingConfigValue cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(void *linux_side)
{
    ESteamNetworkingConfigValue _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->GetFirstConfigValue();
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(void *linux_side, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIPAddr_ToString(*addr, (char *)buf, (size_t)cbBuf, (bool)bWithPort);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(void *linux_side, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIPAddr_ParseString((SteamNetworkingIPAddr *)pAddr, (const char *)pszStr);
    return (_ret);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(void *linux_side, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIdentity_ToString(*identity, (char *)buf, (size_t)cbBuf);
}

bool cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(void *linux_side, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    _ret = ((ISteamNetworkingUtils*)linux_side)->SteamNetworkingIdentity_ParseString((SteamNetworkingIdentity *)pIdentity, (const char *)pszStr);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
