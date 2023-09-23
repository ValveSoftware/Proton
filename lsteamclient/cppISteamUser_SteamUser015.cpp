#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_112x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_112x
#include "struct_converters.h"
#include "cppISteamUser_SteamUser015.h"

struct cppISteamUser_SteamUser015
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser015_GetHSteamUser( struct cppISteamUser_SteamUser015_GetHSteamUser_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser015_BLoggedOn( struct cppISteamUser_SteamUser015_BLoggedOn_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser015_GetSteamID( struct cppISteamUser_SteamUser015_GetSteamID_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser015_InitiateGameConnection( struct cppISteamUser_SteamUser015_InitiateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser015_TerminateGameConnection( struct cppISteamUser_SteamUser015_TerminateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser015_TrackAppUsageEvent( struct cppISteamUser_SteamUser015_TrackAppUsageEvent_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser015_GetUserDataFolder( struct cppISteamUser_SteamUser015_GetUserDataFolder_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser015_StartVoiceRecording( struct cppISteamUser_SteamUser015_StartVoiceRecording_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser015_StopVoiceRecording( struct cppISteamUser_SteamUser015_StopVoiceRecording_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser015_GetAvailableVoice( struct cppISteamUser_SteamUser015_GetAvailableVoice_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed );
}

void cppISteamUser_SteamUser015_GetVoice( struct cppISteamUser_SteamUser015_GetVoice_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten );
}

void cppISteamUser_SteamUser015_DecompressVoice( struct cppISteamUser_SteamUser015_DecompressVoice_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser015_GetAuthSessionTicket( struct cppISteamUser_SteamUser015_GetAuthSessionTicket_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser015_BeginAuthSession( struct cppISteamUser_SteamUser015_BeginAuthSession_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser015_EndAuthSession( struct cppISteamUser_SteamUser015_EndAuthSession_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser015_CancelAuthTicket( struct cppISteamUser_SteamUser015_CancelAuthTicket_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser015_UserHasLicenseForApp( struct cppISteamUser_SteamUser015_UserHasLicenseForApp_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser015_BIsBehindNAT( struct cppISteamUser_SteamUser015_BIsBehindNAT_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser015_AdvertiseGame( struct cppISteamUser_SteamUser015_AdvertiseGame_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser015_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser015_RequestEncryptedAppTicket_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser015_GetEncryptedAppTicket( struct cppISteamUser_SteamUser015_GetEncryptedAppTicket_params *params )
{
    struct cppISteamUser_SteamUser015 *iface = (struct cppISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

#ifdef __cplusplus
}
#endif
