/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser009.h"

void cppISteamUser_SteamUser009_GetHSteamUser( struct cppISteamUser_SteamUser009_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser009_BLoggedOn( struct cppISteamUser_SteamUser009_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser009_GetSteamID( struct cppISteamUser_SteamUser009_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser009_InitiateGameConnection( struct cppISteamUser_SteamUser009_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser009_TerminateGameConnection( struct cppISteamUser_SteamUser009_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser009_TrackAppUsageEvent( struct cppISteamUser_SteamUser009_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser009_RefreshSteam2Login( struct cppISteamUser_SteamUser009_RefreshSteam2Login_params *params )
{
    struct u_ISteamUser_SteamUser009 *iface = (struct u_ISteamUser_SteamUser009 *)params->linux_side;
    iface->RefreshSteam2Login(  );
}

