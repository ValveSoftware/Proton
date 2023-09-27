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
void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetRelayNetworkStatus( (SteamRelayNetworkStatus_t *)params->pDetails );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetLocalPingLocation( *params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->EstimatePingTimeBetweenTwoLocations( *params->location1, *params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->EstimatePingTimeFromLocalHost( *params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->ConvertPingLocationToString( *params->location, (char *)params->pszBuf, (int)params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->ParsePingLocationString( (const char *)params->pszString, *params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->CheckPingDataUpToDate( (float)params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPingToDataCenter( (SteamNetworkingPOPID)params->popID, (SteamNetworkingPOPID *)params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetDirectPingToPOP( (SteamNetworkingPOPID)params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetPOPList( (SteamNetworkingPOPID *)params->list, (int)params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction_params *params )
{
    params->pfnFunc = (FSteamNetworkingSocketsDebugOutput)manual_convert_FSteamNetworkingSocketsDebugOutput( (void *)params->pfnFunc );
    ((ISteamNetworkingUtils*)params->linux_side)->SetDebugOutputFunction( (ESteamNetworkingSocketsDebugOutputType)params->eDetailLevel, (FSteamNetworkingSocketsDebugOutput)params->pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetIPv4FakeIPType( (uint32)params->nIPv4 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetRealIdentityForFakeIP( *params->fakeIP, (SteamNetworkingIdentity *)params->pOutRealIdentity );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetConfigValue( (ESteamNetworkingConfigValue)params->eValue, (ESteamNetworkingConfigScope)params->eScopeType, (intptr_t)params->scopeObj, (ESteamNetworkingConfigDataType *)params->pOutDataType, (void *)params->pResult, (size_t *)params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->GetConfigValueInfo( (ESteamNetworkingConfigValue)params->eValue, (ESteamNetworkingConfigDataType *)params->pOutDataType, (ESteamNetworkingConfigScope *)params->pOutScope );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->IterateGenericEditableConfigValues( (ESteamNetworkingConfigValue)params->eCurrent, (bool)params->bEnumerateDevVars );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_ToString( *params->addr, (char *)params->buf, (size_t)params->cbBuf, (bool)params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_ParseString( (SteamNetworkingIPAddr *)params->pAddr, (const char *)params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIPAddr_GetFakeIPType( *params->addr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString_params *params )
{
    ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIdentity_ToString( *params->identity, (char *)params->buf, (size_t)params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString_params *params )
{
    params->_ret = ((ISteamNetworkingUtils*)params->linux_side)->SteamNetworkingIdentity_ParseString( (SteamNetworkingIdentity *)params->pIdentity, (const char *)params->pszStr );
}

#ifdef __cplusplus
}
#endif
