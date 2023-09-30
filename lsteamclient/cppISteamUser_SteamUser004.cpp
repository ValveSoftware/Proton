/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser004_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser004_GetHSteamUser_params *params = (struct ISteamUser_SteamUser004_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_LogOn( void *args )
{
    struct ISteamUser_SteamUser004_LogOn_params *params = (struct ISteamUser_SteamUser004_LogOn_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->LogOn( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_LogOff( void *args )
{
    struct ISteamUser_SteamUser004_LogOff_params *params = (struct ISteamUser_SteamUser004_LogOff_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser004_BLoggedOn_params *params = (struct ISteamUser_SteamUser004_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_GetLogonState( void *args )
{
    struct ISteamUser_SteamUser004_GetLogonState_params *params = (struct ISteamUser_SteamUser004_GetLogonState_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetLogonState(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_BConnected( void *args )
{
    struct ISteamUser_SteamUser004_BConnected_params *params = (struct ISteamUser_SteamUser004_BConnected_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->BConnected(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser004_GetSteamID_params *params = (struct ISteamUser_SteamUser004_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_IsVACBanned( void *args )
{
    struct ISteamUser_SteamUser004_IsVACBanned_params *params = (struct ISteamUser_SteamUser004_IsVACBanned_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->IsVACBanned( params->nGameID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_RequireShowVACBannedMessage( void *args )
{
    struct ISteamUser_SteamUser004_RequireShowVACBannedMessage_params *params = (struct ISteamUser_SteamUser004_RequireShowVACBannedMessage_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->RequireShowVACBannedMessage( params->nGameID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_AcknowledgeVACBanning( void *args )
{
    struct ISteamUser_SteamUser004_AcknowledgeVACBanning_params *params = (struct ISteamUser_SteamUser004_AcknowledgeVACBanning_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->AcknowledgeVACBanning( params->nGameID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_NClientGameIDAdd( void *args )
{
    struct ISteamUser_SteamUser004_NClientGameIDAdd_params *params = (struct ISteamUser_SteamUser004_NClientGameIDAdd_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->NClientGameIDAdd( params->nGameID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_RemoveClientGame( void *args )
{
    struct ISteamUser_SteamUser004_RemoveClientGame_params *params = (struct ISteamUser_SteamUser004_RemoveClientGame_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->RemoveClientGame( params->nClientGameID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_SetClientGameServer( void *args )
{
    struct ISteamUser_SteamUser004_SetClientGameServer_params *params = (struct ISteamUser_SteamUser004_SetClientGameServer_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->SetClientGameServer( params->nClientGameID, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_SetSteam2Ticket( void *args )
{
    struct ISteamUser_SteamUser004_SetSteam2Ticket_params *params = (struct ISteamUser_SteamUser004_SetSteam2Ticket_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->SetSteam2Ticket( params->pubTicket, params->cubTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_AddServerNetAddress( void *args )
{
    struct ISteamUser_SteamUser004_AddServerNetAddress_params *params = (struct ISteamUser_SteamUser004_AddServerNetAddress_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->AddServerNetAddress( params->unIP, params->unPort );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_SetEmail( void *args )
{
    struct ISteamUser_SteamUser004_SetEmail_params *params = (struct ISteamUser_SteamUser004_SetEmail_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->SetEmail( params->pchEmail );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_GetSteamGameConnectToken( void *args )
{
    struct ISteamUser_SteamUser004_GetSteamGameConnectToken_params *params = (struct ISteamUser_SteamUser004_GetSteamGameConnectToken_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetSteamGameConnectToken( params->pBlob, params->cbMaxBlob );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_SetRegistryString( void *args )
{
    struct ISteamUser_SteamUser004_SetRegistryString_params *params = (struct ISteamUser_SteamUser004_SetRegistryString_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_GetRegistryString( void *args )
{
    struct ISteamUser_SteamUser004_GetRegistryString_params *params = (struct ISteamUser_SteamUser004_GetRegistryString_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_SetRegistryInt( void *args )
{
    struct ISteamUser_SteamUser004_SetRegistryInt_params *params = (struct ISteamUser_SteamUser004_SetRegistryInt_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_GetRegistryInt( void *args )
{
    struct ISteamUser_SteamUser004_GetRegistryInt_params *params = (struct ISteamUser_SteamUser004_GetRegistryInt_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser004_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser004_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->nGameAppID, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser004_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser004_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination( void *args )
{
    struct ISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params *params = (struct ISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->SetSelfAsPrimaryChatDestination(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_IsPrimaryChatDestination( void *args )
{
    struct ISteamUser_SteamUser004_IsPrimaryChatDestination_params *params = (struct ISteamUser_SteamUser004_IsPrimaryChatDestination_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->IsPrimaryChatDestination(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser004_RequestLegacyCDKey( void *args )
{
    struct ISteamUser_SteamUser004_RequestLegacyCDKey_params *params = (struct ISteamUser_SteamUser004_RequestLegacyCDKey_params *)args;
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->RequestLegacyCDKey( params->iAppID );
    return 0;
}

