/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils002.h"

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetRelayNetworkStatus( params->pDetails );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetLocalPingLocation( params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeBetweenTwoLocations( params->location1, params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeFromLocalHost( params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    iface->ConvertPingLocationToString( params->location, params->pszBuf, params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->ParsePingLocationString( params->pszString, params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->CheckPingDataUpToDate( params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetPingToDataCenter( params->popID, params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetDirectPingToPOP( params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetPOPList( params->list, params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    void (*U_STDCALL u_pfnFunc)(uint32_t, const char *) = manual_convert_SetDebugOutputFunction_pfnFunc( params->pfnFunc );
    iface->SetDebugOutputFunction( params->eDetailLevel, u_pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->eDataType, params->pArg );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->pOutDataType, params->pResult, params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutName, params->pOutDataType, params->pOutScope, params->pOutNextValue );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->GetFirstConfigValue(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    iface->SteamNetworkingIPAddr_ToString( params->addr, params->buf, params->cbBuf, params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_ParseString( params->pAddr, params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    iface->SteamNetworkingIdentity_ToString( params->identity, params->buf, params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils002 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIdentity_ParseString( params->pIdentity, params->pszStr );
}

