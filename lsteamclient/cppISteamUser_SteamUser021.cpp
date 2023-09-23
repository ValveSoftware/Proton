#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_155/steam_api.h"
#include "steamworks_sdk_155/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_155
#include "struct_converters.h"
#include "cppISteamUser_SteamUser021.h"

struct cppISteamUser_SteamUser021
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection_DEPRECATED( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection_DEPRECATED( uint32_t, uint16_t ) = 0;
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
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
    virtual uint64_t GetMarketEligibility(  ) = 0;
    virtual uint64_t GetDurationControl(  ) = 0;
    virtual bool BSetDurationControlOnlineState( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser021_GetHSteamUser( struct cppISteamUser_SteamUser021_GetHSteamUser_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser021_BLoggedOn( struct cppISteamUser_SteamUser021_BLoggedOn_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser021_GetSteamID( struct cppISteamUser_SteamUser021_GetSteamID_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection_DEPRECATED( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->TerminateGameConnection_DEPRECATED( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser021_TrackAppUsageEvent( struct cppISteamUser_SteamUser021_TrackAppUsageEvent_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser021_GetUserDataFolder( struct cppISteamUser_SteamUser021_GetUserDataFolder_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser021_StartVoiceRecording( struct cppISteamUser_SteamUser021_StartVoiceRecording_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser021_StopVoiceRecording( struct cppISteamUser_SteamUser021_StopVoiceRecording_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser021_GetAvailableVoice( struct cppISteamUser_SteamUser021_GetAvailableVoice_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser021_GetVoice( struct cppISteamUser_SteamUser021_GetVoice_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser021_DecompressVoice( struct cppISteamUser_SteamUser021_DecompressVoice_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser021_GetAuthSessionTicket( struct cppISteamUser_SteamUser021_GetAuthSessionTicket_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser021_BeginAuthSession( struct cppISteamUser_SteamUser021_BeginAuthSession_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser021_EndAuthSession( struct cppISteamUser_SteamUser021_EndAuthSession_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser021_CancelAuthTicket( struct cppISteamUser_SteamUser021_CancelAuthTicket_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser021_UserHasLicenseForApp( struct cppISteamUser_SteamUser021_UserHasLicenseForApp_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser021_BIsBehindNAT( struct cppISteamUser_SteamUser021_BIsBehindNAT_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser021_AdvertiseGame( struct cppISteamUser_SteamUser021_AdvertiseGame_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser021_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser021_RequestEncryptedAppTicket_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser021_GetEncryptedAppTicket( struct cppISteamUser_SteamUser021_GetEncryptedAppTicket_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser021_GetGameBadgeLevel( struct cppISteamUser_SteamUser021_GetGameBadgeLevel_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser021_GetPlayerSteamLevel( struct cppISteamUser_SteamUser021_GetPlayerSteamLevel_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser021_RequestStoreAuthURL( struct cppISteamUser_SteamUser021_RequestStoreAuthURL_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

void cppISteamUser_SteamUser021_BIsPhoneVerified( struct cppISteamUser_SteamUser021_BIsPhoneVerified_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser021_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser021_BIsTwoFactorEnabled_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser021_BIsPhoneIdentifying( struct cppISteamUser_SteamUser021_BIsPhoneIdentifying_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser021_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser021_BIsPhoneRequiringVerification_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
}

void cppISteamUser_SteamUser021_GetMarketEligibility( struct cppISteamUser_SteamUser021_GetMarketEligibility_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
}

void cppISteamUser_SteamUser021_GetDurationControl( struct cppISteamUser_SteamUser021_GetDurationControl_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
}

void cppISteamUser_SteamUser021_BSetDurationControlOnlineState( struct cppISteamUser_SteamUser021_BSetDurationControlOnlineState_params *params )
{
    struct cppISteamUser_SteamUser021 *iface = (struct cppISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BSetDurationControlOnlineState( params->eNewState );
}

#ifdef __cplusplus
}
#endif
