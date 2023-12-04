/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetRelayNetworkStatus( params->pDetails );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetLocalPingLocation( params->result );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeBetweenTwoLocations( params->location1, params->location2 );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeFromLocalHost( params->remoteLocation );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    iface->ConvertPingLocationToString( params->location, params->pszBuf, params->cchBufSize );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->ParsePingLocationString( params->pszString, params->result );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->CheckPingDataUpToDate( params->flMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetPingToDataCenter( params->popID, params->pViaRelayPoP );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetDirectPingToPOP( params->popID );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetPOPCount(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetPOPList( params->list, params->nListSz );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetLocalTimestamp(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    void (*U_CDECL u_pfnFunc)(uint32_t, const char *) = manual_convert_SetDebugOutputFunction_pfnFunc( params->pfnFunc );
    iface->SetDebugOutputFunction( params->eDetailLevel, u_pfnFunc );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->pOutDataType, params->pResult, params->cbResult );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutName, params->pOutDataType, params->pOutScope, params->pOutNextValue );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->GetFirstConfigValue(  );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    iface->SteamNetworkingIPAddr_ToString( params->addr, params->buf, params->cbBuf, params->bWithPort );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_ParseString( params->pAddr, params->pszStr );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    iface->SteamNetworkingIdentity_ToString( params->identity, params->buf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIdentity_ParseString( params->pIdentity, params->pszStr );
    return 0;
}

