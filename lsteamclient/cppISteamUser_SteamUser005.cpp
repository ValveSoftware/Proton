/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser005.h"

void cppISteamUser_SteamUser005_GetHSteamUser( struct cppISteamUser_SteamUser005_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser005_LogOn( struct cppISteamUser_SteamUser005_LogOn_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->LogOn( params->steamID );
}

void cppISteamUser_SteamUser005_LogOff( struct cppISteamUser_SteamUser005_LogOff_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamUser_SteamUser005_BLoggedOn( struct cppISteamUser_SteamUser005_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser005_GetLogonState( struct cppISteamUser_SteamUser005_GetLogonState_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetLogonState(  );
}

void cppISteamUser_SteamUser005_BConnected( struct cppISteamUser_SteamUser005_BConnected_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->BConnected(  );
}

void cppISteamUser_SteamUser005_GetSteamID( struct cppISteamUser_SteamUser005_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser005_IsVACBanned( struct cppISteamUser_SteamUser005_IsVACBanned_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->IsVACBanned( params->nGameID );
}

void cppISteamUser_SteamUser005_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser005_RequireShowVACBannedMessage_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->RequireShowVACBannedMessage( params->nAppID );
}

void cppISteamUser_SteamUser005_AcknowledgeVACBanning( struct cppISteamUser_SteamUser005_AcknowledgeVACBanning_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->AcknowledgeVACBanning( params->nAppID );
}

void cppISteamUser_SteamUser005_SetSteam2Ticket( struct cppISteamUser_SteamUser005_SetSteam2Ticket_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetSteam2Ticket( params->pubTicket, params->cubTicket );
}

void cppISteamUser_SteamUser005_AddServerNetAddress( struct cppISteamUser_SteamUser005_AddServerNetAddress_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->AddServerNetAddress( params->unIP, params->unPort );
}

void cppISteamUser_SteamUser005_SetEmail( struct cppISteamUser_SteamUser005_SetEmail_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetEmail( params->pchEmail );
}

void cppISteamUser_SteamUser005_SetRegistryString( struct cppISteamUser_SteamUser005_SetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
}

void cppISteamUser_SteamUser005_GetRegistryString( struct cppISteamUser_SteamUser005_GetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
}

void cppISteamUser_SteamUser005_SetRegistryInt( struct cppISteamUser_SteamUser005_SetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
}

void cppISteamUser_SteamUser005_GetRegistryInt( struct cppISteamUser_SteamUser005_GetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
}

void cppISteamUser_SteamUser005_InitiateGameConnection( struct cppISteamUser_SteamUser005_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser005_TerminateGameConnection( struct cppISteamUser_SteamUser005_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetSelfAsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser005_IsPrimaryChatDestination( struct cppISteamUser_SteamUser005_IsPrimaryChatDestination_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->IsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser005_RequestLegacyCDKey( struct cppISteamUser_SteamUser005_RequestLegacyCDKey_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->RequestLegacyCDKey( params->nAppID );
}

void cppISteamUser_SteamUser005_SendGuestPassByEmail( struct cppISteamUser_SteamUser005_SendGuestPassByEmail_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SendGuestPassByEmail( params->pchEmailAccount, params->gidGuestPassID, params->bResending );
}

void cppISteamUser_SteamUser005_SendGuestPassByAccountID( struct cppISteamUser_SteamUser005_SendGuestPassByAccountID_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SendGuestPassByAccountID( params->uAccountID, params->gidGuestPassID, params->bResending );
}

void cppISteamUser_SteamUser005_AckGuestPass( struct cppISteamUser_SteamUser005_AckGuestPass_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->AckGuestPass( params->pchGuestPassCode );
}

void cppISteamUser_SteamUser005_RedeemGuestPass( struct cppISteamUser_SteamUser005_RedeemGuestPass_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->RedeemGuestPass( params->pchGuestPassCode );
}

void cppISteamUser_SteamUser005_GetGuestPassToGiveCount( struct cppISteamUser_SteamUser005_GetGuestPassToGiveCount_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToGiveCount(  );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemCount( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemCount_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemCount(  );
}

void cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime( struct cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassLastUpdateTime(  );
}

void cppISteamUser_SteamUser005_GetGuestPassToGiveInfo( struct cppISteamUser_SteamUser005_GetGuestPassToGiveInfo_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToGiveInfo( params->nPassIndex, params->pgidGuestPassID, params->pnPackageID, params->pRTime32Created, params->pRTime32Expiration, params->pRTime32Sent, params->pRTime32Redeemed, params->pchRecipientAddress, params->cRecipientAddressSize );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemInfo( params->nPassIndex, params->pgidGuestPassID, params->pnPackageID, params->pRTime32Created, params->pRTime32Expiration, params->pRTime32Sent, params->pRTime32Redeemed );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemSenderAddress( params->nPassIndex, params->pchSenderAddress, params->cSenderAddressSize );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemSenderName( params->nPassIndex, params->pchSenderName, params->cSenderNameSize );
}

void cppISteamUser_SteamUser005_AcknowledgeMessageByGID( struct cppISteamUser_SteamUser005_AcknowledgeMessageByGID_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->AcknowledgeMessageByGID( params->pchMessageGID );
}

void cppISteamUser_SteamUser005_SetLanguage( struct cppISteamUser_SteamUser005_SetLanguage_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->pchLanguage );
}

void cppISteamUser_SteamUser005_TrackAppUsageEvent( struct cppISteamUser_SteamUser005_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser005_SetAccountName( struct cppISteamUser_SteamUser005_SetAccountName_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetAccountName( params->pchAccountName );
}

void cppISteamUser_SteamUser005_SetPassword( struct cppISteamUser_SteamUser005_SetPassword_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetPassword( params->pchPassword );
}

void cppISteamUser_SteamUser005_SetAccountCreationTime( struct cppISteamUser_SteamUser005_SetAccountCreationTime_params *params )
{
    struct u_ISteamUser_SteamUser005 *iface = (struct u_ISteamUser_SteamUser005 *)params->linux_side;
    iface->SetAccountCreationTime( params->rt );
}

