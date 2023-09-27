#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099v/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099v
#include "struct_converters.h"
#include "cppISteamUser_SteamUser005.h"
void cppISteamUser_SteamUser005_GetHSteamUser( struct cppISteamUser_SteamUser005_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser005_LogOn( struct cppISteamUser_SteamUser005_LogOn_params *params )
{
    ((ISteamUser*)params->linux_side)->LogOn( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser005_LogOff( struct cppISteamUser_SteamUser005_LogOff_params *params )
{
    ((ISteamUser*)params->linux_side)->LogOff(  );
}

void cppISteamUser_SteamUser005_BLoggedOn( struct cppISteamUser_SteamUser005_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser005_GetLogonState( struct cppISteamUser_SteamUser005_GetLogonState_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetLogonState(  );
}

void cppISteamUser_SteamUser005_BConnected( struct cppISteamUser_SteamUser005_BConnected_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BConnected(  );
}

void cppISteamUser_SteamUser005_GetSteamID( struct cppISteamUser_SteamUser005_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser005_IsVACBanned( struct cppISteamUser_SteamUser005_IsVACBanned_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->IsVACBanned( (int)params->nGameID );
}

void cppISteamUser_SteamUser005_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser005_RequireShowVACBannedMessage_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequireShowVACBannedMessage( (int)params->nAppID );
}

void cppISteamUser_SteamUser005_AcknowledgeVACBanning( struct cppISteamUser_SteamUser005_AcknowledgeVACBanning_params *params )
{
    ((ISteamUser*)params->linux_side)->AcknowledgeVACBanning( (int)params->nAppID );
}

void cppISteamUser_SteamUser005_SetSteam2Ticket( struct cppISteamUser_SteamUser005_SetSteam2Ticket_params *params )
{
    ((ISteamUser*)params->linux_side)->SetSteam2Ticket( (uint8 *)params->pubTicket, (int)params->cubTicket );
}

void cppISteamUser_SteamUser005_AddServerNetAddress( struct cppISteamUser_SteamUser005_AddServerNetAddress_params *params )
{
    ((ISteamUser*)params->linux_side)->AddServerNetAddress( (uint32)params->unIP, (uint16)params->unPort );
}

void cppISteamUser_SteamUser005_SetEmail( struct cppISteamUser_SteamUser005_SetEmail_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetEmail( (const char *)params->pchEmail );
}

void cppISteamUser_SteamUser005_SetRegistryString( struct cppISteamUser_SteamUser005_SetRegistryString_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetRegistryString( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUser_SteamUser005_GetRegistryString( struct cppISteamUser_SteamUser005_GetRegistryString_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetRegistryString( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (char *)params->pchValue, (int)params->cbValue );
}

void cppISteamUser_SteamUser005_SetRegistryInt( struct cppISteamUser_SteamUser005_SetRegistryInt_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetRegistryInt( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (int)params->iValue );
}

void cppISteamUser_SteamUser005_GetRegistryInt( struct cppISteamUser_SteamUser005_GetRegistryInt_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetRegistryInt( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (int *)params->piValue );
}

void cppISteamUser_SteamUser005_InitiateGameConnection( struct cppISteamUser_SteamUser005_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pBlob, (int)params->cbMaxBlob, (CSteamID)params->steamID, (CGameID)params->gameID, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser005_TerminateGameConnection( struct cppISteamUser_SteamUser005_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params *params )
{
    ((ISteamUser*)params->linux_side)->SetSelfAsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser005_IsPrimaryChatDestination( struct cppISteamUser_SteamUser005_IsPrimaryChatDestination_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->IsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser005_RequestLegacyCDKey( struct cppISteamUser_SteamUser005_RequestLegacyCDKey_params *params )
{
    ((ISteamUser*)params->linux_side)->RequestLegacyCDKey( (uint32)params->nAppID );
}

void cppISteamUser_SteamUser005_SendGuestPassByEmail( struct cppISteamUser_SteamUser005_SendGuestPassByEmail_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SendGuestPassByEmail( (const char *)params->pchEmailAccount, (GID_t)params->gidGuestPassID, (bool)params->bResending );
}

void cppISteamUser_SteamUser005_SendGuestPassByAccountID( struct cppISteamUser_SteamUser005_SendGuestPassByAccountID_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SendGuestPassByAccountID( (uint32)params->uAccountID, (GID_t)params->gidGuestPassID, (bool)params->bResending );
}

void cppISteamUser_SteamUser005_AckGuestPass( struct cppISteamUser_SteamUser005_AckGuestPass_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->AckGuestPass( (const char *)params->pchGuestPassCode );
}

void cppISteamUser_SteamUser005_RedeemGuestPass( struct cppISteamUser_SteamUser005_RedeemGuestPass_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RedeemGuestPass( (const char *)params->pchGuestPassCode );
}

void cppISteamUser_SteamUser005_GetGuestPassToGiveCount( struct cppISteamUser_SteamUser005_GetGuestPassToGiveCount_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassToGiveCount(  );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemCount( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemCount_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassToRedeemCount(  );
}

void cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime( struct cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassLastUpdateTime(  );
}

void cppISteamUser_SteamUser005_GetGuestPassToGiveInfo( struct cppISteamUser_SteamUser005_GetGuestPassToGiveInfo_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassToGiveInfo( (uint32)params->nPassIndex, (GID_t *)params->pgidGuestPassID, (PackageId_t *)params->pnPackageID, (RTime32 *)params->pRTime32Created, (RTime32 *)params->pRTime32Expiration, (RTime32 *)params->pRTime32Sent, (RTime32 *)params->pRTime32Redeemed, (char *)params->pchRecipientAddress, (int)params->cRecipientAddressSize );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassToRedeemInfo( (uint32)params->nPassIndex, (GID_t *)params->pgidGuestPassID, (PackageId_t *)params->pnPackageID, (RTime32 *)params->pRTime32Created, (RTime32 *)params->pRTime32Expiration, (RTime32 *)params->pRTime32Sent, (RTime32 *)params->pRTime32Redeemed );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassToRedeemSenderAddress( (uint32)params->nPassIndex, (char *)params->pchSenderAddress, (int)params->cSenderAddressSize );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGuestPassToRedeemSenderName( (uint32)params->nPassIndex, (char *)params->pchSenderName, (int)params->cSenderNameSize );
}

void cppISteamUser_SteamUser005_AcknowledgeMessageByGID( struct cppISteamUser_SteamUser005_AcknowledgeMessageByGID_params *params )
{
    ((ISteamUser*)params->linux_side)->AcknowledgeMessageByGID( (const char *)params->pchMessageGID );
}

void cppISteamUser_SteamUser005_SetLanguage( struct cppISteamUser_SteamUser005_SetLanguage_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetLanguage( (const char *)params->pchLanguage );
}

void cppISteamUser_SteamUser005_TrackAppUsageEvent( struct cppISteamUser_SteamUser005_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

void cppISteamUser_SteamUser005_SetAccountName( struct cppISteamUser_SteamUser005_SetAccountName_params *params )
{
    ((ISteamUser*)params->linux_side)->SetAccountName( (const char *)params->pchAccountName );
}

void cppISteamUser_SteamUser005_SetPassword( struct cppISteamUser_SteamUser005_SetPassword_params *params )
{
    ((ISteamUser*)params->linux_side)->SetPassword( (const char *)params->pchPassword );
}

void cppISteamUser_SteamUser005_SetAccountCreationTime( struct cppISteamUser_SteamUser005_SetAccountCreationTime_params *params )
{
    ((ISteamUser*)params->linux_side)->SetAccountCreationTime( (RTime32)params->rt );
}

#ifdef __cplusplus
}
#endif
