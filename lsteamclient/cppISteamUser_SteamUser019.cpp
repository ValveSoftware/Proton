#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamUser_SteamUser019.h"
void cppISteamUser_SteamUser019_GetHSteamUser( struct cppISteamUser_SteamUser019_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser019_BLoggedOn( struct cppISteamUser_SteamUser019_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser019_GetSteamID( struct cppISteamUser_SteamUser019_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser019_InitiateGameConnection( struct cppISteamUser_SteamUser019_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pAuthBlob, (int)params->cbMaxAuthBlob, (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser019_TerminateGameConnection( struct cppISteamUser_SteamUser019_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser019_TrackAppUsageEvent( struct cppISteamUser_SteamUser019_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

void cppISteamUser_SteamUser019_GetUserDataFolder( struct cppISteamUser_SteamUser019_GetUserDataFolder_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetUserDataFolder( (char *)params->pchBuffer, (int)params->cubBuffer );
}

void cppISteamUser_SteamUser019_StartVoiceRecording( struct cppISteamUser_SteamUser019_StartVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser019_StopVoiceRecording( struct cppISteamUser_SteamUser019_StopVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser019_GetAvailableVoice( struct cppISteamUser_SteamUser019_GetAvailableVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAvailableVoice( (uint32 *)params->pcbCompressed, (uint32 *)params->pcbUncompressed_Deprecated, (uint32)params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser019_GetVoice( struct cppISteamUser_SteamUser019_GetVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetVoice( (bool)params->bWantCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten, (bool)params->bWantUncompressed_Deprecated, (void *)params->pUncompressedDestBuffer_Deprecated, (uint32)params->cbUncompressedDestBufferSize_Deprecated, (uint32 *)params->nUncompressBytesWritten_Deprecated, (uint32)params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser019_DecompressVoice( struct cppISteamUser_SteamUser019_DecompressVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->DecompressVoice( (const void *)params->pCompressed, (uint32)params->cbCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten, (uint32)params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser019_GetAuthSessionTicket( struct cppISteamUser_SteamUser019_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamUser_SteamUser019_BeginAuthSession( struct cppISteamUser_SteamUser019_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser019_EndAuthSession( struct cppISteamUser_SteamUser019_EndAuthSession_params *params )
{
    ((ISteamUser*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser019_CancelAuthTicket( struct cppISteamUser_SteamUser019_CancelAuthTicket_params *params )
{
    ((ISteamUser*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamUser_SteamUser019_UserHasLicenseForApp( struct cppISteamUser_SteamUser019_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamUser_SteamUser019_BIsBehindNAT( struct cppISteamUser_SteamUser019_BIsBehindNAT_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser019_AdvertiseGame( struct cppISteamUser_SteamUser019_AdvertiseGame_params *params )
{
    ((ISteamUser*)params->linux_side)->AdvertiseGame( (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser019_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser019_RequestEncryptedAppTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequestEncryptedAppTicket( (void *)params->pDataToInclude, (int)params->cbDataToInclude );
}

void cppISteamUser_SteamUser019_GetEncryptedAppTicket( struct cppISteamUser_SteamUser019_GetEncryptedAppTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetEncryptedAppTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamUser_SteamUser019_GetGameBadgeLevel( struct cppISteamUser_SteamUser019_GetGameBadgeLevel_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGameBadgeLevel( (int)params->nSeries, (bool)params->bFoil );
}

void cppISteamUser_SteamUser019_GetPlayerSteamLevel( struct cppISteamUser_SteamUser019_GetPlayerSteamLevel_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser019_RequestStoreAuthURL( struct cppISteamUser_SteamUser019_RequestStoreAuthURL_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequestStoreAuthURL( (const char *)params->pchRedirectURL );
}

void cppISteamUser_SteamUser019_BIsPhoneVerified( struct cppISteamUser_SteamUser019_BIsPhoneVerified_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser019_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser019_BIsTwoFactorEnabled_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser019_BIsPhoneIdentifying( struct cppISteamUser_SteamUser019_BIsPhoneIdentifying_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser019_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser019_BIsPhoneRequiringVerification_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsPhoneRequiringVerification(  );
}

#ifdef __cplusplus
}
#endif
