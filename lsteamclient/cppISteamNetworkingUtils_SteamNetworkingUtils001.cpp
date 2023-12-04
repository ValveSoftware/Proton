/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetLocalPingLocation( params->result );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeBetweenTwoLocations( params->location1, params->location2 );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeFromLocalHost( params->remoteLocation );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    iface->ConvertPingLocationToString( params->location, params->pszBuf, params->cchBufSize );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->ParsePingLocationString( params->pszString, params->result );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->CheckPingDataUpToDate( params->flMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->IsPingMeasurementInProgress(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetPingToDataCenter( params->popID, params->pViaRelayPoP );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetDirectPingToPOP( params->popID );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetPOPCount(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetPOPList( params->list, params->nListSz );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetLocalTimestamp(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    void (*U_CDECL u_pfnFunc)(uint32_t, const char *) = manual_convert_SetDebugOutputFunction_pfnFunc( params->pfnFunc );
    iface->SetDebugOutputFunction( params->eDetailLevel, u_pfnFunc );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->eDataType, params->pArg );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->pOutDataType, params->pResult, params->cbResult );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutName, params->pOutDataType, params->pOutScope, params->pOutNextValue );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->GetFirstConfigValue(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    iface->SteamNetworkingIPAddr_ToString( params->addr, params->buf, params->cbBuf, params->bWithPort );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_ParseString( params->pAddr, params->pszStr );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    iface->SteamNetworkingIdentity_ToString( params->identity, params->buf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils001 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIdentity_ParseString( params->pIdentity, params->pszStr );
    return 0;
}

