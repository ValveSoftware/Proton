/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser008_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser008_GetHSteamUser_params *params = (struct ISteamUser_SteamUser008_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser008_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser008_BLoggedOn_params *params = (struct ISteamUser_SteamUser008_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser008_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser008_GetSteamID_params *params = (struct ISteamUser_SteamUser008_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser008_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser008_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser008_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, &params->gameID, params->unIPServer, params->usPortServer, params->bSecure, params->pvSteam2GetEncryptionKey, params->cbSteam2GetEncryptionKey );
    return 0;
}

NTSTATUS ISteamUser_SteamUser008_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser008_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser008_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser008_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser008_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser008_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser008_RefreshSteam2Login( void *args )
{
    struct ISteamUser_SteamUser008_RefreshSteam2Login_params *params = (struct ISteamUser_SteamUser008_RefreshSteam2Login_params *)args;
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    iface->RefreshSteam2Login(  );
    return 0;
}

