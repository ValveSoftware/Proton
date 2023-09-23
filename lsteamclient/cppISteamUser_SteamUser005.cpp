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

struct cppISteamUser_SteamUser005
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual uint32_t GetLogonState(  ) = 0;
    virtual bool BConnected(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool IsVACBanned( int32_t ) = 0;
    virtual bool RequireShowVACBannedMessage( int32_t ) = 0;
    virtual void AcknowledgeVACBanning( int32_t ) = 0;
    virtual void SetSteam2Ticket( uint8_t *, int32_t ) = 0;
    virtual void AddServerNetAddress( uint32_t, uint16_t ) = 0;
    virtual bool SetEmail( const char * ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void SetSelfAsPrimaryChatDestination(  ) = 0;
    virtual bool IsPrimaryChatDestination(  ) = 0;
    virtual void RequestLegacyCDKey( uint32_t ) = 0;
    virtual bool SendGuestPassByEmail( const char *, uint64_t, bool ) = 0;
    virtual bool SendGuestPassByAccountID( uint32_t, uint64_t, bool ) = 0;
    virtual bool AckGuestPass( const char * ) = 0;
    virtual bool RedeemGuestPass( const char * ) = 0;
    virtual uint32_t GetGuestPassToGiveCount(  ) = 0;
    virtual uint32_t GetGuestPassToRedeemCount(  ) = 0;
    virtual uint32_t GetGuestPassLastUpdateTime(  ) = 0;
    virtual bool GetGuestPassToGiveInfo( uint32_t, uint64_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, char *, int32_t ) = 0;
    virtual bool GetGuestPassToRedeemInfo( uint32_t, uint64_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual bool GetGuestPassToRedeemSenderAddress( uint32_t, char *, int32_t ) = 0;
    virtual bool GetGuestPassToRedeemSenderName( uint32_t, char *, int32_t ) = 0;
    virtual void AcknowledgeMessageByGID( const char * ) = 0;
    virtual bool SetLanguage( const char * ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void SetAccountName( const char * ) = 0;
    virtual void SetPassword( const char * ) = 0;
    virtual void SetAccountCreationTime( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser005_GetHSteamUser( struct cppISteamUser_SteamUser005_GetHSteamUser_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser005_LogOn( struct cppISteamUser_SteamUser005_LogOn_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->LogOn( params->steamID );
}

void cppISteamUser_SteamUser005_LogOff( struct cppISteamUser_SteamUser005_LogOff_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamUser_SteamUser005_BLoggedOn( struct cppISteamUser_SteamUser005_BLoggedOn_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser005_GetLogonState( struct cppISteamUser_SteamUser005_GetLogonState_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetLogonState(  );
}

void cppISteamUser_SteamUser005_BConnected( struct cppISteamUser_SteamUser005_BConnected_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->BConnected(  );
}

void cppISteamUser_SteamUser005_GetSteamID( struct cppISteamUser_SteamUser005_GetSteamID_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser005_IsVACBanned( struct cppISteamUser_SteamUser005_IsVACBanned_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->IsVACBanned( params->nGameID );
}

void cppISteamUser_SteamUser005_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser005_RequireShowVACBannedMessage_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->RequireShowVACBannedMessage( params->nAppID );
}

void cppISteamUser_SteamUser005_AcknowledgeVACBanning( struct cppISteamUser_SteamUser005_AcknowledgeVACBanning_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->AcknowledgeVACBanning( params->nAppID );
}

void cppISteamUser_SteamUser005_SetSteam2Ticket( struct cppISteamUser_SteamUser005_SetSteam2Ticket_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->SetSteam2Ticket( params->pubTicket, params->cubTicket );
}

void cppISteamUser_SteamUser005_AddServerNetAddress( struct cppISteamUser_SteamUser005_AddServerNetAddress_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->AddServerNetAddress( params->unIP, params->unPort );
}

void cppISteamUser_SteamUser005_SetEmail( struct cppISteamUser_SteamUser005_SetEmail_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetEmail( params->pchEmail );
}

void cppISteamUser_SteamUser005_SetRegistryString( struct cppISteamUser_SteamUser005_SetRegistryString_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
}

void cppISteamUser_SteamUser005_GetRegistryString( struct cppISteamUser_SteamUser005_GetRegistryString_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
}

void cppISteamUser_SteamUser005_SetRegistryInt( struct cppISteamUser_SteamUser005_SetRegistryInt_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
}

void cppISteamUser_SteamUser005_GetRegistryInt( struct cppISteamUser_SteamUser005_GetRegistryInt_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
}

void cppISteamUser_SteamUser005_InitiateGameConnection( struct cppISteamUser_SteamUser005_InitiateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser005_TerminateGameConnection( struct cppISteamUser_SteamUser005_TerminateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->SetSelfAsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser005_IsPrimaryChatDestination( struct cppISteamUser_SteamUser005_IsPrimaryChatDestination_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->IsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser005_RequestLegacyCDKey( struct cppISteamUser_SteamUser005_RequestLegacyCDKey_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->RequestLegacyCDKey( params->nAppID );
}

void cppISteamUser_SteamUser005_SendGuestPassByEmail( struct cppISteamUser_SteamUser005_SendGuestPassByEmail_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SendGuestPassByEmail( params->pchEmailAccount, params->gidGuestPassID, params->bResending );
}

void cppISteamUser_SteamUser005_SendGuestPassByAccountID( struct cppISteamUser_SteamUser005_SendGuestPassByAccountID_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SendGuestPassByAccountID( params->uAccountID, params->gidGuestPassID, params->bResending );
}

void cppISteamUser_SteamUser005_AckGuestPass( struct cppISteamUser_SteamUser005_AckGuestPass_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->AckGuestPass( params->pchGuestPassCode );
}

void cppISteamUser_SteamUser005_RedeemGuestPass( struct cppISteamUser_SteamUser005_RedeemGuestPass_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->RedeemGuestPass( params->pchGuestPassCode );
}

void cppISteamUser_SteamUser005_GetGuestPassToGiveCount( struct cppISteamUser_SteamUser005_GetGuestPassToGiveCount_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToGiveCount(  );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemCount( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemCount_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemCount(  );
}

void cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime( struct cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassLastUpdateTime(  );
}

void cppISteamUser_SteamUser005_GetGuestPassToGiveInfo( struct cppISteamUser_SteamUser005_GetGuestPassToGiveInfo_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToGiveInfo( params->nPassIndex, params->pgidGuestPassID, params->pnPackageID, params->pRTime32Created, params->pRTime32Expiration, params->pRTime32Sent, params->pRTime32Redeemed, params->pchRecipientAddress, params->cRecipientAddressSize );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemInfo( params->nPassIndex, params->pgidGuestPassID, params->pnPackageID, params->pRTime32Created, params->pRTime32Expiration, params->pRTime32Sent, params->pRTime32Redeemed );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemSenderAddress( params->nPassIndex, params->pchSenderAddress, params->cSenderAddressSize );
}

void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->GetGuestPassToRedeemSenderName( params->nPassIndex, params->pchSenderName, params->cSenderNameSize );
}

void cppISteamUser_SteamUser005_AcknowledgeMessageByGID( struct cppISteamUser_SteamUser005_AcknowledgeMessageByGID_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->AcknowledgeMessageByGID( params->pchMessageGID );
}

void cppISteamUser_SteamUser005_SetLanguage( struct cppISteamUser_SteamUser005_SetLanguage_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->pchLanguage );
}

void cppISteamUser_SteamUser005_TrackAppUsageEvent( struct cppISteamUser_SteamUser005_TrackAppUsageEvent_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser005_SetAccountName( struct cppISteamUser_SteamUser005_SetAccountName_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->SetAccountName( params->pchAccountName );
}

void cppISteamUser_SteamUser005_SetPassword( struct cppISteamUser_SteamUser005_SetPassword_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->SetPassword( params->pchPassword );
}

void cppISteamUser_SteamUser005_SetAccountCreationTime( struct cppISteamUser_SteamUser005_SetAccountCreationTime_params *params )
{
    struct cppISteamUser_SteamUser005 *iface = (struct cppISteamUser_SteamUser005 *)params->linux_side;
    iface->SetAccountCreationTime( params->rt );
}

#ifdef __cplusplus
}
#endif
