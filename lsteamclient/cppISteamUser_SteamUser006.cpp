/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser006_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser006_GetHSteamUser_params *params = (struct ISteamUser_SteamUser006_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_LogOn( void *args )
{
    struct ISteamUser_SteamUser006_LogOn_params *params = (struct ISteamUser_SteamUser006_LogOn_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->LogOn( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_LogOff( void *args )
{
    struct ISteamUser_SteamUser006_LogOff_params *params = (struct ISteamUser_SteamUser006_LogOff_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser006_BLoggedOn_params *params = (struct ISteamUser_SteamUser006_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser006_GetSteamID_params *params = (struct ISteamUser_SteamUser006_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_SetRegistryString( void *args )
{
    struct ISteamUser_SteamUser006_SetRegistryString_params *params = (struct ISteamUser_SteamUser006_SetRegistryString_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_GetRegistryString( void *args )
{
    struct ISteamUser_SteamUser006_GetRegistryString_params *params = (struct ISteamUser_SteamUser006_GetRegistryString_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_SetRegistryInt( void *args )
{
    struct ISteamUser_SteamUser006_SetRegistryInt_params *params = (struct ISteamUser_SteamUser006_SetRegistryInt_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_GetRegistryInt( void *args )
{
    struct ISteamUser_SteamUser006_GetRegistryInt_params *params = (struct ISteamUser_SteamUser006_GetRegistryInt_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser006_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser006_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser006_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser006_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser006_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser006_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser006_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

