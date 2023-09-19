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

struct cppISteamNetworkingUtils_SteamNetworkingUtils004
{
#ifdef __cplusplus
    virtual SteamNetworkingMessage_t * AllocateMessage( int32_t ) = 0;
    virtual uint32_t GetRelayNetworkStatus( SteamRelayNetworkStatus_t * ) = 0;
    virtual float GetLocalPingLocation( SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeBetweenTwoLocations( const SteamNetworkPingLocation_t *, const SteamNetworkPingLocation_t * ) = 0;
    virtual int32_t EstimatePingTimeFromLocalHost( const SteamNetworkPingLocation_t * ) = 0;
    virtual void ConvertPingLocationToString( const SteamNetworkPingLocation_t *, char *, int32_t ) = 0;
    virtual bool ParsePingLocationString( const char *, SteamNetworkPingLocation_t * ) = 0;
    virtual bool CheckPingDataUpToDate( float ) = 0;
    virtual int32_t GetPingToDataCenter( uint32_t, uint32_t * ) = 0;
    virtual int32_t GetDirectPingToPOP( uint32_t ) = 0;
    virtual int32_t GetPOPCount(  ) = 0;
    virtual int32_t GetPOPList( uint32_t *, int32_t ) = 0;
    virtual int64_t GetLocalTimestamp(  ) = 0;
    virtual void SetDebugOutputFunction( uint32_t, void (*)(uint32_t, const char *) ) = 0;
    virtual uint32_t GetIPv4FakeIPType( uint32_t ) = 0;
    virtual uint32_t GetRealIdentityForFakeIP( const SteamNetworkingIPAddr *, SteamNetworkingIdentity * ) = 0;
    virtual bool SetConfigValue( uint32_t, uint32_t, int32_t, uint32_t, const void * ) = 0;
    virtual uint32_t GetConfigValue( uint32_t, uint32_t, int32_t, uint32_t *, void *, uint32_t * ) = 0;
    virtual const char * GetConfigValueInfo( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t IterateGenericEditableConfigValues( uint32_t, bool ) = 0;
    virtual void SteamNetworkingIPAddr_ToString( const SteamNetworkingIPAddr *, char *, uint32_t, bool ) = 0;
    virtual bool SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *, const char * ) = 0;
    virtual uint32_t SteamNetworkingIPAddr_GetFakeIPType( const SteamNetworkingIPAddr * ) = 0;
    virtual void SteamNetworkingIdentity_ToString( const SteamNetworkingIdentity *, char *, uint32_t ) = 0;
    virtual bool SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity *, const char * ) = 0;
    virtual ~cppISteamNetworkingUtils_SteamNetworkingUtils004(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetRelayNetworkStatus( params->pDetails );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetLocalPingLocation( params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeBetweenTwoLocations( params->location1, params->location2 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->EstimatePingTimeFromLocalHost( params->remoteLocation );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    iface->ConvertPingLocationToString( params->location, params->pszBuf, params->cchBufSize );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->ParsePingLocationString( params->pszString, params->result );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->CheckPingDataUpToDate( params->flMaxAgeSeconds );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetPingToDataCenter( params->popID, params->pViaRelayPoP );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetDirectPingToPOP( params->popID );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetPOPCount(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetPOPList( params->list, params->nListSz );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetLocalTimestamp(  );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    void (*U_STDCALL lin_pfnFunc)(uint32_t, const char *) = manual_convert_SetDebugOutputFunction_pfnFunc( params->pfnFunc );
    iface->SetDebugOutputFunction( params->eDetailLevel, lin_pfnFunc );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetIPv4FakeIPType( params->nIPv4 );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetRealIdentityForFakeIP( params->fakeIP, params->pOutRealIdentity );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetConfigValue( params->eValue, params->eScopeType, params->scopeObj, params->pOutDataType, params->pResult, params->cbResult );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->GetConfigValueInfo( params->eValue, params->pOutDataType, params->pOutScope );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->IterateGenericEditableConfigValues( params->eCurrent, params->bEnumerateDevVars );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    iface->SteamNetworkingIPAddr_ToString( params->addr, params->buf, params->cbBuf, params->bWithPort );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_ParseString( params->pAddr, params->pszStr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIPAddr_GetFakeIPType( params->addr );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    iface->SteamNetworkingIdentity_ToString( params->identity, params->buf, params->cbBuf );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = iface->SteamNetworkingIdentity_ParseString( params->pIdentity, params->pszStr );
}

#ifdef __cplusplus
}
#endif
