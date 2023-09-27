#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_144/steam_api.h"
#include "steamworks_sdk_144/steamnetworkingtypes.h"
#include "steamworks_sdk_144/isteamnetworkingutils.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_144
#include "struct_converters.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils001.h"
void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetLocalPingLocation( (SteamNetworkPingLocation_t *)params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->EstimatePingTimeBetweenTwoLocations( (const SteamNetworkPingLocation_t *)params->location1, (const SteamNetworkPingLocation_t *)params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->EstimatePingTimeFromLocalHost( (const SteamNetworkPingLocation_t *)params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->ConvertPingLocationToString( (const SteamNetworkPingLocation_t *)params->location, (char *)params->pszBuf, (int)params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->ParsePingLocationString( (const char *)params->pszString, (SteamNetworkPingLocation_t *)params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->CheckPingDataUpToDate( (float)params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->IsPingMeasurementInProgress(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPingToDataCenter( (SteamNetworkingPOPID)params->popID, (SteamNetworkingPOPID *)params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetDirectPingToPOP( (SteamNetworkingPOPID)params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPOPList( (SteamNetworkingPOPID *)params->list, (int)params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction_params *params )
{
    params->pfnFunc = (FSteamNetworkingSocketsDebugOutput)manual_convert_FSteamNetworkingSocketsDebugOutput( (void *)params->pfnFunc );
    ((ISteamNetworkingUtils*)params->linux_side)->SetDebugOutputFunction( (ESteamNetworkingSocketsDebugOutputType)params->eDetailLevel, (FSteamNetworkingSocketsDebugOutput)params->pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SetConfigValue( (ESteamNetworkingConfigValue)params->eValue, (ESteamNetworkingConfigScope)params->eScopeType, (intptr_t)params->scopeObj, (ESteamNetworkingConfigDataType)params->eDataType, (const void *)params->pArg );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetConfigValue( (ESteamNetworkingConfigValue)params->eValue, (ESteamNetworkingConfigScope)params->eScopeType, (intptr_t)params->scopeObj, (ESteamNetworkingConfigDataType *)params->pOutDataType, (void *)params->pResult, (size_t *)params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetConfigValueInfo( (ESteamNetworkingConfigValue)params->eValue, (const char **)params->pOutName, (ESteamNetworkingConfigDataType *)params->pOutDataType, (ESteamNetworkingConfigScope *)params->pOutScope, (ESteamNetworkingConfigValue *)params->pOutNextValue );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetFirstConfigValue(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_ToString( (const SteamNetworkingIPAddr *)params->addr, (char *)params->buf, (size_t)params->cbBuf, (bool)params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_ParseString( (SteamNetworkingIPAddr *)params->pAddr, (const char *)params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIdentity_ToString( (const SteamNetworkingIdentity *)params->identity, (char *)params->buf, (size_t)params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIdentity_ParseString( (SteamNetworkingIdentity *)params->pIdentity, (const char *)params->pszStr );
}

#ifdef __cplusplus
}
#endif
