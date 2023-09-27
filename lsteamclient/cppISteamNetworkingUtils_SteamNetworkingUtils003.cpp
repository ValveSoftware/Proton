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
void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetRelayNetworkStatus( (SteamRelayNetworkStatus_t *)params->pDetails );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetLocalPingLocation( *params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->EstimatePingTimeBetweenTwoLocations( *params->location1, *params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->EstimatePingTimeFromLocalHost( *params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->ConvertPingLocationToString( *params->location, (char *)params->pszBuf, (int)params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->ParsePingLocationString( (const char *)params->pszString, *params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->CheckPingDataUpToDate( (float)params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPingToDataCenter( (SteamNetworkingPOPID)params->popID, (SteamNetworkingPOPID *)params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetDirectPingToPOP( (SteamNetworkingPOPID)params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPOPList( (SteamNetworkingPOPID *)params->list, (int)params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction_params *params )
{
    params->pfnFunc = (FSteamNetworkingSocketsDebugOutput)manual_convert_FSteamNetworkingSocketsDebugOutput( (void *)params->pfnFunc );
    ((ISteamNetworkingUtils*)params->linux_side)->SetDebugOutputFunction( (ESteamNetworkingSocketsDebugOutputType)params->eDetailLevel, (FSteamNetworkingSocketsDebugOutput)params->pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetConfigValue( (ESteamNetworkingConfigValue)params->eValue, (ESteamNetworkingConfigScope)params->eScopeType, (intptr_t)params->scopeObj, (ESteamNetworkingConfigDataType *)params->pOutDataType, (void *)params->pResult, (size_t *)params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetConfigValueInfo( (ESteamNetworkingConfigValue)params->eValue, (const char **)params->pOutName, (ESteamNetworkingConfigDataType *)params->pOutDataType, (ESteamNetworkingConfigScope *)params->pOutScope, (ESteamNetworkingConfigValue *)params->pOutNextValue );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetFirstConfigValue(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_ToString( *params->addr, (char *)params->buf, (size_t)params->cbBuf, (bool)params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_ParseString( (SteamNetworkingIPAddr *)params->pAddr, (const char *)params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIdentity_ToString( *params->identity, (char *)params->buf, (size_t)params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIdentity_ParseString( (SteamNetworkingIdentity *)params->pIdentity, (const char *)params->pszStr );
}

#ifdef __cplusplus
}
#endif
