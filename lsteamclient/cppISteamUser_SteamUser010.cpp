/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser010.h"

struct u_ISteamUser_SteamUser010
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser010_GetHSteamUser( struct cppISteamUser_SteamUser010_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser010 *iface = (struct u_ISteamUser_SteamUser010 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser010_BLoggedOn( struct cppISteamUser_SteamUser010_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser010 *iface = (struct u_ISteamUser_SteamUser010 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser010_GetSteamID( struct cppISteamUser_SteamUser010_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser010 *iface = (struct u_ISteamUser_SteamUser010 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser010_InitiateGameConnection( struct cppISteamUser_SteamUser010_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser010 *iface = (struct u_ISteamUser_SteamUser010 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser010_TerminateGameConnection( struct cppISteamUser_SteamUser010_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser010 *iface = (struct u_ISteamUser_SteamUser010 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser010_TrackAppUsageEvent( struct cppISteamUser_SteamUser010_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser010 *iface = (struct u_ISteamUser_SteamUser010 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

