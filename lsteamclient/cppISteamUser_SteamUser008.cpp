/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser008.h"

struct u_ISteamUser_SteamUser008
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID *, uint32_t, uint16_t, bool, void *, int32_t ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void RefreshSteam2Login(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser008_GetHSteamUser( struct cppISteamUser_SteamUser008_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser008_BLoggedOn( struct cppISteamUser_SteamUser008_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser008_GetSteamID( struct cppISteamUser_SteamUser008_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser008_InitiateGameConnection( struct cppISteamUser_SteamUser008_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, &params->gameID, params->unIPServer, params->usPortServer, params->bSecure, params->pvSteam2GetEncryptionKey, params->cbSteam2GetEncryptionKey );
}

void cppISteamUser_SteamUser008_TerminateGameConnection( struct cppISteamUser_SteamUser008_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser008_TrackAppUsageEvent( struct cppISteamUser_SteamUser008_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser008_RefreshSteam2Login( struct cppISteamUser_SteamUser008_RefreshSteam2Login_params *params )
{
    struct u_ISteamUser_SteamUser008 *iface = (struct u_ISteamUser_SteamUser008 *)params->linux_side;
    iface->RefreshSteam2Login(  );
}

