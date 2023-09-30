/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser007.h"

struct u_ISteamUser_SteamUser007
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual void LogOn( CSteamID ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SetRegistryString( uint32_t, const char *, const char * ) = 0;
    virtual bool GetRegistryString( uint32_t, const char *, char *, int32_t ) = 0;
    virtual bool SetRegistryInt( uint32_t, const char *, int32_t ) = 0;
    virtual bool GetRegistryInt( uint32_t, const char *, int32_t * ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, CGameID, uint32_t, uint16_t, bool, void *, int32_t ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual void RefreshSteam2Login(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser007_GetHSteamUser( struct cppISteamUser_SteamUser007_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser007_LogOn( struct cppISteamUser_SteamUser007_LogOn_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    iface->LogOn( params->steamID );
}

void cppISteamUser_SteamUser007_LogOff( struct cppISteamUser_SteamUser007_LogOff_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamUser_SteamUser007_BLoggedOn( struct cppISteamUser_SteamUser007_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser007_GetSteamID( struct cppISteamUser_SteamUser007_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser007_SetRegistryString( struct cppISteamUser_SteamUser007_SetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->SetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue );
}

void cppISteamUser_SteamUser007_GetRegistryString( struct cppISteamUser_SteamUser007_GetRegistryString_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->GetRegistryString( params->eRegistrySubTree, params->pchKey, params->pchValue, params->cbValue );
}

void cppISteamUser_SteamUser007_SetRegistryInt( struct cppISteamUser_SteamUser007_SetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->SetRegistryInt( params->eRegistrySubTree, params->pchKey, params->iValue );
}

void cppISteamUser_SteamUser007_GetRegistryInt( struct cppISteamUser_SteamUser007_GetRegistryInt_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->GetRegistryInt( params->eRegistrySubTree, params->pchKey, params->piValue );
}

void cppISteamUser_SteamUser007_InitiateGameConnection( struct cppISteamUser_SteamUser007_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID, params->gameID, params->unIPServer, params->usPortServer, params->bSecure, params->pvSteam2GetEncryptionKey, params->cbSteam2GetEncryptionKey );
}

void cppISteamUser_SteamUser007_TerminateGameConnection( struct cppISteamUser_SteamUser007_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser007_TrackAppUsageEvent( struct cppISteamUser_SteamUser007_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser007_RefreshSteam2Login( struct cppISteamUser_SteamUser007_RefreshSteam2Login_params *params )
{
    struct u_ISteamUser_SteamUser007 *iface = (struct u_ISteamUser_SteamUser007 *)params->linux_side;
    iface->RefreshSteam2Login(  );
}

