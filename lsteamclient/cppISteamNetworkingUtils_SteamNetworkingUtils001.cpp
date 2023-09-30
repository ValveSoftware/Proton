/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils001.h"

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetLocalPingLocation( params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeBetweenTwoLocations( params->location1, params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeFromLocalHost( params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    iface->ConvertPingLocationToString( params->location, params->pszBuf, params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->ParsePingLocationString( params->pszString, params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->CheckPingDataUpToDate( params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->IsPingMeasurementInProgress(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetPingToDataCenter( params->popID, params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetDirectPingToPOP( params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetPOPList( params->list, params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    void (*U_STDCALL u_pfnFunc)(uint32_t, const char *) = manual_convert_SetDebugOutputFunction_pfnFunc( params->pfnFunc );
    iface->SetDebugOutputFunction( params->eDetailLevel, u_pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->eDataType, params->pArg );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->pOutDataType, params->pResult, params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutName, params->pOutDataType, params->pOutScope, params->pOutNextValue );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetFirstConfigValue(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    iface->SteamNetworkingIPAddr_ToString( params->addr, params->buf, params->cbBuf, params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_ParseString( params->pAddr, params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    iface->SteamNetworkingIdentity_ToString( params->identity, params->buf, params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIdentity_ParseString( params->pIdentity, params->pszStr );
}

