/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer008.h"

struct u_ISteamGameServer_SteamGameServer008
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameType( const char * ) = 0;
    virtual bool BGetUserAchievementStatus( CSteamID, const char * ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServer_SteamGameServer008_LogOn( struct cppISteamGameServer_SteamGameServer008_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer008_LogOff( struct cppISteamGameServer_SteamGameServer008_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer008_BLoggedOn( struct cppISteamGameServer_SteamGameServer008_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer008_BSecure( struct cppISteamGameServer_SteamGameServer008_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer008_GetSteamID( struct cppISteamGameServer_SteamGameServer008_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer008_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer008_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer008_BUpdateUserData( struct cppISteamGameServer_SteamGameServer008_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer008_BSetServerType( struct cppISteamGameServer_SteamGameServer008_BSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer008_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer008_UpdateServerStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer008_SetGameType( struct cppISteamGameServer_SteamGameServer008_SetGameType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
}

void cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

void cppISteamGameServer_SteamGameServer008_GetGameplayStats( struct cppISteamGameServer_SteamGameServer008_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer008_GetPublicIP( struct cppISteamGameServer_SteamGameServer008_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
}

