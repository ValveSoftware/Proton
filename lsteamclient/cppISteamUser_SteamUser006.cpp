#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099w/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099w
#include "struct_converters.h"
#include "cppISteamUser_SteamUser006.h"

struct cppISteamUser_SteamUser006
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser006_GetHSteamUser( struct cppISteamUser_SteamUser006_GetHSteamUser_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser006_LogOn( struct cppISteamUser_SteamUser006_LogOn_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    iface->LogOn( params->steamID );
}

void cppISteamUser_SteamUser006_LogOff( struct cppISteamUser_SteamUser006_LogOff_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamUser_SteamUser006_BLoggedOn( struct cppISteamUser_SteamUser006_BLoggedOn_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser006_GetSteamID( struct cppISteamUser_SteamUser006_GetSteamID_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser006_SetRegistryString( struct cppISteamUser_SteamUser006_SetRegistryString_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
}

void cppISteamUser_SteamUser006_GetRegistryString( struct cppISteamUser_SteamUser006_GetRegistryString_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
}

void cppISteamUser_SteamUser006_SetRegistryInt( struct cppISteamUser_SteamUser006_SetRegistryInt_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
}

void cppISteamUser_SteamUser006_GetRegistryInt( struct cppISteamUser_SteamUser006_GetRegistryInt_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
}

void cppISteamUser_SteamUser006_InitiateGameConnection( struct cppISteamUser_SteamUser006_InitiateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser006_TerminateGameConnection( struct cppISteamUser_SteamUser006_TerminateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser006_TrackAppUsageEvent( struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params *params )
{
    struct cppISteamUser_SteamUser006 *iface = (struct cppISteamUser_SteamUser006 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

#ifdef __cplusplus
}
#endif
