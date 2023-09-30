/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser004.h"

struct u_ISteamUser_SteamUser004
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
    virtual int32_t NClientGameIDAdd( int32_t ) = 0;
    virtual void RemoveClientGame( int32_t ) = 0;
    virtual void SetClientGameServer( int32_t, uint32_t, uint16_t ) = 0;
    virtual void SetSteam2Ticket( uint8_t *, int32_t ) = 0;
    virtual void AddServerNetAddress( uint32_t, uint16_t ) = 0;
    virtual bool SetEmail( const char * ) = 0;
    virtual int32_t GetSteamGameConnectToken( void *, int32_t ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void SetSelfAsPrimaryChatDestination(  ) = 0;
    virtual bool IsPrimaryChatDestination(  ) = 0;
    virtual void RequestLegacyCDKey( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser004_GetHSteamUser( struct cppISteamUser_SteamUser004_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser004_LogOn( struct cppISteamUser_SteamUser004_LogOn_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->LogOn( params->steamID );
}

void cppISteamUser_SteamUser004_LogOff( struct cppISteamUser_SteamUser004_LogOff_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamUser_SteamUser004_BLoggedOn( struct cppISteamUser_SteamUser004_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser004_GetLogonState( struct cppISteamUser_SteamUser004_GetLogonState_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetLogonState(  );
}

void cppISteamUser_SteamUser004_BConnected( struct cppISteamUser_SteamUser004_BConnected_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->BConnected(  );
}

void cppISteamUser_SteamUser004_GetSteamID( struct cppISteamUser_SteamUser004_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser004_IsVACBanned( struct cppISteamUser_SteamUser004_IsVACBanned_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->IsVACBanned( params->nGameID );
}

void cppISteamUser_SteamUser004_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser004_RequireShowVACBannedMessage_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->RequireShowVACBannedMessage( params->nGameID );
}

void cppISteamUser_SteamUser004_AcknowledgeVACBanning( struct cppISteamUser_SteamUser004_AcknowledgeVACBanning_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->AcknowledgeVACBanning( params->nGameID );
}

void cppISteamUser_SteamUser004_NClientGameIDAdd( struct cppISteamUser_SteamUser004_NClientGameIDAdd_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->NClientGameIDAdd( params->nGameID );
}

void cppISteamUser_SteamUser004_RemoveClientGame( struct cppISteamUser_SteamUser004_RemoveClientGame_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->RemoveClientGame( params->nClientGameID );
}

void cppISteamUser_SteamUser004_SetClientGameServer( struct cppISteamUser_SteamUser004_SetClientGameServer_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->SetClientGameServer( params->nClientGameID, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser004_SetSteam2Ticket( struct cppISteamUser_SteamUser004_SetSteam2Ticket_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->SetSteam2Ticket( params->pubTicket, params->cubTicket );
}

void cppISteamUser_SteamUser004_AddServerNetAddress( struct cppISteamUser_SteamUser004_AddServerNetAddress_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->AddServerNetAddress( params->unIP, params->unPort );
}

void cppISteamUser_SteamUser004_SetEmail( struct cppISteamUser_SteamUser004_SetEmail_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->SetEmail( params->pchEmail );
}

void cppISteamUser_SteamUser004_GetSteamGameConnectToken( struct cppISteamUser_SteamUser004_GetSteamGameConnectToken_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetSteamGameConnectToken( params->pBlob, params->cbMaxBlob );
}

void cppISteamUser_SteamUser004_SetRegistryString( struct cppISteamUser_SteamUser004_SetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
}

void cppISteamUser_SteamUser004_GetRegistryString( struct cppISteamUser_SteamUser004_GetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
}

void cppISteamUser_SteamUser004_SetRegistryInt( struct cppISteamUser_SteamUser004_SetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
}

void cppISteamUser_SteamUser004_GetRegistryInt( struct cppISteamUser_SteamUser004_GetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
}

void cppISteamUser_SteamUser004_InitiateGameConnection( struct cppISteamUser_SteamUser004_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->nGameAppID, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser004_TerminateGameConnection( struct cppISteamUser_SteamUser004_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->SetSelfAsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser004_IsPrimaryChatDestination( struct cppISteamUser_SteamUser004_IsPrimaryChatDestination_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    params->_ret = iface->IsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser004_RequestLegacyCDKey( struct cppISteamUser_SteamUser004_RequestLegacyCDKey_params *params )
{
    struct u_ISteamUser_SteamUser004 *iface = (struct u_ISteamUser_SteamUser004 *)params->linux_side;
    iface->RequestLegacyCDKey( params->iAppID );
}

