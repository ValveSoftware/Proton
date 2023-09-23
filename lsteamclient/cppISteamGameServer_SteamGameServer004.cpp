#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_100/steam_api.h"
#include "steamworks_sdk_100/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_100
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer004.h"

struct cppISteamGameServer_SteamGameServer004
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual void SendUserConnectAndAuthenticate( CSteamID, uint32_t, void *, uint32_t ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( int32_t, uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameType( const char * ) = 0;
    virtual bool BGetUserAchievementStatus( CSteamID, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServer_SteamGameServer004_LogOn( struct cppISteamGameServer_SteamGameServer004_LogOn_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer004_LogOff( struct cppISteamGameServer_SteamGameServer004_LogOff_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer004_BLoggedOn( struct cppISteamGameServer_SteamGameServer004_BLoggedOn_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer004_BSecure( struct cppISteamGameServer_SteamGameServer004_BSecure_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer004_GetSteamID( struct cppISteamGameServer_SteamGameServer004_GetSteamID_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->SendUserConnectAndAuthenticate( params->steamIDUser, params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize );
}

void cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer004_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer004_SendUserDisconnect_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer004_BUpdateUserData( struct cppISteamGameServer_SteamGameServer004_BUpdateUserData_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer004_BSetServerType( struct cppISteamGameServer_SteamGameServer004_BSetServerType_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer004_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer004_UpdateServerStatus_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer004_SetGameType( struct cppISteamGameServer_SteamGameServer004_SetGameType_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
}

void cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus_params *params )
{
    struct cppISteamGameServer_SteamGameServer004 *iface = (struct cppISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

#ifdef __cplusplus
}
#endif
