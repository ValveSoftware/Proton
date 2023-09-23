#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_100/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_100
#include "struct_converters.h"
#include "cppISteamUser_SteamUser009.h"

struct cppISteamUser_SteamUser009
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void RefreshSteam2Login(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser009_GetHSteamUser( struct cppISteamUser_SteamUser009_GetHSteamUser_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser009_BLoggedOn( struct cppISteamUser_SteamUser009_BLoggedOn_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser009_GetSteamID( struct cppISteamUser_SteamUser009_GetSteamID_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser009_InitiateGameConnection( struct cppISteamUser_SteamUser009_InitiateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser009_TerminateGameConnection( struct cppISteamUser_SteamUser009_TerminateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser009_TrackAppUsageEvent( struct cppISteamUser_SteamUser009_TrackAppUsageEvent_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser009_RefreshSteam2Login( struct cppISteamUser_SteamUser009_RefreshSteam2Login_params *params )
{
    struct cppISteamUser_SteamUser009 *iface = (struct cppISteamUser_SteamUser009 *)params->linux_side;
    iface->RefreshSteam2Login(  );
}

#ifdef __cplusplus
}
#endif
