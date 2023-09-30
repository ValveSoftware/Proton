/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser006.h"

void cppISteamUser_SteamUser006_GetHSteamUser( struct cppISteamUser_SteamUser006_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser006_LogOn( struct cppISteamUser_SteamUser006_LogOn_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->LogOn( params->steamID );
}

void cppISteamUser_SteamUser006_LogOff( struct cppISteamUser_SteamUser006_LogOff_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamUser_SteamUser006_BLoggedOn( struct cppISteamUser_SteamUser006_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser006_GetSteamID( struct cppISteamUser_SteamUser006_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser006_SetRegistryString( struct cppISteamUser_SteamUser006_SetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
}

void cppISteamUser_SteamUser006_GetRegistryString( struct cppISteamUser_SteamUser006_GetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
}

void cppISteamUser_SteamUser006_SetRegistryInt( struct cppISteamUser_SteamUser006_SetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
}

void cppISteamUser_SteamUser006_GetRegistryInt( struct cppISteamUser_SteamUser006_GetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
}

void cppISteamUser_SteamUser006_InitiateGameConnection( struct cppISteamUser_SteamUser006_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser006_TerminateGameConnection( struct cppISteamUser_SteamUser006_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser006_TrackAppUsageEvent( struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser006 *iface = (struct u_ISteamUser_SteamUser006 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

