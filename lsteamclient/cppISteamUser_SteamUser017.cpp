/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser017.h"

struct u_ISteamUser_SteamUser017
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
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
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
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser017_GetHSteamUser( struct cppISteamUser_SteamUser017_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser017_BLoggedOn( struct cppISteamUser_SteamUser017_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser017_GetSteamID( struct cppISteamUser_SteamUser017_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser017_InitiateGameConnection( struct cppISteamUser_SteamUser017_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser017_TerminateGameConnection( struct cppISteamUser_SteamUser017_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser017_TrackAppUsageEvent( struct cppISteamUser_SteamUser017_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser017_GetUserDataFolder( struct cppISteamUser_SteamUser017_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser017_StartVoiceRecording( struct cppISteamUser_SteamUser017_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser017_StopVoiceRecording( struct cppISteamUser_SteamUser017_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser017_GetAvailableVoice( struct cppISteamUser_SteamUser017_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed, params->nUncompressedVoiceDesiredSampleRate );
}

void cppISteamUser_SteamUser017_GetVoice( struct cppISteamUser_SteamUser017_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten, params->nUncompressedVoiceDesiredSampleRate );
}

void cppISteamUser_SteamUser017_DecompressVoice( struct cppISteamUser_SteamUser017_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser017_GetAuthSessionTicket( struct cppISteamUser_SteamUser017_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser017_BeginAuthSession( struct cppISteamUser_SteamUser017_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser017_EndAuthSession( struct cppISteamUser_SteamUser017_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser017_CancelAuthTicket( struct cppISteamUser_SteamUser017_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser017_UserHasLicenseForApp( struct cppISteamUser_SteamUser017_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser017_BIsBehindNAT( struct cppISteamUser_SteamUser017_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser017_AdvertiseGame( struct cppISteamUser_SteamUser017_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser017_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser017_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser017_GetEncryptedAppTicket( struct cppISteamUser_SteamUser017_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser017_GetGameBadgeLevel( struct cppISteamUser_SteamUser017_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser017_GetPlayerSteamLevel( struct cppISteamUser_SteamUser017_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

