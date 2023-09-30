/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils004.h"

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetRelayNetworkStatus( params->pDetails );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetLocalPingLocation( params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeBetweenTwoLocations( params->location1, params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeFromLocalHost( params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    iface->ConvertPingLocationToString( params->location, params->pszBuf, params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->ParsePingLocationString( params->pszString, params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->CheckPingDataUpToDate( params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetPingToDataCenter( params->popID, params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetDirectPingToPOP( params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetPOPList( params->list, params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    void (*U_STDCALL u_pfnFunc)(uint32_t, const char *) = manual_convert_SetDebugOutputFunction_pfnFunc( params->pfnFunc );
    iface->SetDebugOutputFunction( params->eDetailLevel, u_pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetIPv4FakeIPType( params->nIPv4 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetRealIdentityForFakeIP( params->fakeIP, params->pOutRealIdentity );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->pOutDataType, params->pResult, params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutDataType, params->pOutScope );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->IterateGenericEditableConfigValues( params->eCurrent, params->bEnumerateDevVars );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    iface->SteamNetworkingIPAddr_ToString( params->addr, params->buf, params->cbBuf, params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_ParseString( params->pAddr, params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_GetFakeIPType( params->addr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    iface->SteamNetworkingIdentity_ToString( params->identity, params->buf, params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIdentity_ParseString( params->pIdentity, params->pszStr );
}

