/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser005_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser005_GetHSteamUser_params *params = (struct ISteamUser_SteamUser005_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_LogOn( void *args )
{
    struct ISteamUser_SteamUser005_LogOn_params *params = (struct ISteamUser_SteamUser005_LogOn_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->LogOn( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_LogOff( void *args )
{
    struct ISteamUser_SteamUser005_LogOff_params *params = (struct ISteamUser_SteamUser005_LogOff_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser005_BLoggedOn_params *params = (struct ISteamUser_SteamUser005_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetLogonState( void *args )
{
    struct ISteamUser_SteamUser005_GetLogonState_params *params = (struct ISteamUser_SteamUser005_GetLogonState_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetLogonState(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_BConnected( void *args )
{
    struct ISteamUser_SteamUser005_BConnected_params *params = (struct ISteamUser_SteamUser005_BConnected_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->BConnected(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser005_GetSteamID_params *params = (struct ISteamUser_SteamUser005_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_IsVACBanned( void *args )
{
    struct ISteamUser_SteamUser005_IsVACBanned_params *params = (struct ISteamUser_SteamUser005_IsVACBanned_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->IsVACBanned( params->nGameID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_RequireShowVACBannedMessage( void *args )
{
    struct ISteamUser_SteamUser005_RequireShowVACBannedMessage_params *params = (struct ISteamUser_SteamUser005_RequireShowVACBannedMessage_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->RequireShowVACBannedMessage( params->nAppID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_AcknowledgeVACBanning( void *args )
{
    struct ISteamUser_SteamUser005_AcknowledgeVACBanning_params *params = (struct ISteamUser_SteamUser005_AcknowledgeVACBanning_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->AcknowledgeVACBanning( params->nAppID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetSteam2Ticket( void *args )
{
    struct ISteamUser_SteamUser005_SetSteam2Ticket_params *params = (struct ISteamUser_SteamUser005_SetSteam2Ticket_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetSteam2Ticket( params->pubTicket, params->cubTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_AddServerNetAddress( void *args )
{
    struct ISteamUser_SteamUser005_AddServerNetAddress_params *params = (struct ISteamUser_SteamUser005_AddServerNetAddress_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->AddServerNetAddress( params->unIP, params->unPort );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetEmail( void *args )
{
    struct ISteamUser_SteamUser005_SetEmail_params *params = (struct ISteamUser_SteamUser005_SetEmail_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetEmail( params->pchEmail );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetRegistryString( void *args )
{
    struct ISteamUser_SteamUser005_SetRegistryString_params *params = (struct ISteamUser_SteamUser005_SetRegistryString_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetRegistryString( void *args )
{
    struct ISteamUser_SteamUser005_GetRegistryString_params *params = (struct ISteamUser_SteamUser005_GetRegistryString_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetRegistryInt( void *args )
{
    struct ISteamUser_SteamUser005_SetRegistryInt_params *params = (struct ISteamUser_SteamUser005_SetRegistryInt_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetRegistryInt( void *args )
{
    struct ISteamUser_SteamUser005_GetRegistryInt_params *params = (struct ISteamUser_SteamUser005_GetRegistryInt_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser005_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser005_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser005_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser005_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination( void *args )
{
    struct ISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params *params = (struct ISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetSelfAsPrimaryChatDestination(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_IsPrimaryChatDestination( void *args )
{
    struct ISteamUser_SteamUser005_IsPrimaryChatDestination_params *params = (struct ISteamUser_SteamUser005_IsPrimaryChatDestination_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->IsPrimaryChatDestination(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_RequestLegacyCDKey( void *args )
{
    struct ISteamUser_SteamUser005_RequestLegacyCDKey_params *params = (struct ISteamUser_SteamUser005_RequestLegacyCDKey_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->RequestLegacyCDKey( params->nAppID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SendGuestPassByEmail( void *args )
{
    struct ISteamUser_SteamUser005_SendGuestPassByEmail_params *params = (struct ISteamUser_SteamUser005_SendGuestPassByEmail_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SendGuestPassByEmail( params->pchEmailAccount, params->gidGuestPassID, params->bResending );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SendGuestPassByAccountID( void *args )
{
    struct ISteamUser_SteamUser005_SendGuestPassByAccountID_params *params = (struct ISteamUser_SteamUser005_SendGuestPassByAccountID_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SendGuestPassByAccountID( params->uAccountID, params->gidGuestPassID, params->bResending );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_AckGuestPass( void *args )
{
    struct ISteamUser_SteamUser005_AckGuestPass_params *params = (struct ISteamUser_SteamUser005_AckGuestPass_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->AckGuestPass( params->pchGuestPassCode );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_RedeemGuestPass( void *args )
{
    struct ISteamUser_SteamUser005_RedeemGuestPass_params *params = (struct ISteamUser_SteamUser005_RedeemGuestPass_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->RedeemGuestPass( params->pchGuestPassCode );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassToGiveCount( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassToGiveCount_params *params = (struct ISteamUser_SteamUser005_GetGuestPassToGiveCount_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToGiveCount(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassToRedeemCount( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassToRedeemCount_params *params = (struct ISteamUser_SteamUser005_GetGuestPassToRedeemCount_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemCount(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassLastUpdateTime( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params *params = (struct ISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassLastUpdateTime(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassToGiveInfo( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassToGiveInfo_params *params = (struct ISteamUser_SteamUser005_GetGuestPassToGiveInfo_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToGiveInfo( params->nPassIndex, params->pgidGuestPassID, params->pnPackageID, params->pRTime32Created, params->pRTime32Expiration, params->pRTime32Sent, params->pRTime32Redeemed, params->pchRecipientAddress, params->cRecipientAddressSize );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassToRedeemInfo( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params *params = (struct ISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemInfo( params->nPassIndex, params->pgidGuestPassID, params->pnPackageID, params->pRTime32Created, params->pRTime32Expiration, params->pRTime32Sent, params->pRTime32Redeemed );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params *params = (struct ISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemSenderAddress( params->nPassIndex, params->pchSenderAddress, params->cSenderAddressSize );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_GetGuestPassToRedeemSenderName( void *args )
{
    struct ISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params *params = (struct ISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemSenderName( params->nPassIndex, params->pchSenderName, params->cSenderNameSize );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_AcknowledgeMessageByGID( void *args )
{
    struct ISteamUser_SteamUser005_AcknowledgeMessageByGID_params *params = (struct ISteamUser_SteamUser005_AcknowledgeMessageByGID_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->AcknowledgeMessageByGID( params->pchMessageGID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetLanguage( void *args )
{
    struct ISteamUser_SteamUser005_SetLanguage_params *params = (struct ISteamUser_SteamUser005_SetLanguage_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->pchLanguage );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser005_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser005_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetAccountName( void *args )
{
    struct ISteamUser_SteamUser005_SetAccountName_params *params = (struct ISteamUser_SteamUser005_SetAccountName_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetAccountName( params->pchAccountName );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetPassword( void *args )
{
    struct ISteamUser_SteamUser005_SetPassword_params *params = (struct ISteamUser_SteamUser005_SetPassword_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetPassword( params->pchPassword );
    return 0;
}

NTSTATUS ISteamUser_SteamUser005_SetAccountCreationTime( void *args )
{
    struct ISteamUser_SteamUser005_SetAccountCreationTime_params *params = (struct ISteamUser_SteamUser005_SetAccountCreationTime_params *)args;
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetAccountCreationTime( params->rt );
    return 0;
}

