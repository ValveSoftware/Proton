/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser020.h"

void cppISteamUser_SteamUser020_GetHSteamUser( struct cppISteamUser_SteamUser020_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser020_BLoggedOn( struct cppISteamUser_SteamUser020_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser020_GetSteamID( struct cppISteamUser_SteamUser020_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser020_InitiateGameConnection( struct cppISteamUser_SteamUser020_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser020_TerminateGameConnection( struct cppISteamUser_SteamUser020_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser020_TrackAppUsageEvent( struct cppISteamUser_SteamUser020_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser020_GetUserDataFolder( struct cppISteamUser_SteamUser020_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser020_StartVoiceRecording( struct cppISteamUser_SteamUser020_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser020_StopVoiceRecording( struct cppISteamUser_SteamUser020_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser020_GetAvailableVoice( struct cppISteamUser_SteamUser020_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser020_GetVoice( struct cppISteamUser_SteamUser020_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser020_DecompressVoice( struct cppISteamUser_SteamUser020_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser020_GetAuthSessionTicket( struct cppISteamUser_SteamUser020_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser020_BeginAuthSession( struct cppISteamUser_SteamUser020_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser020_EndAuthSession( struct cppISteamUser_SteamUser020_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser020_CancelAuthTicket( struct cppISteamUser_SteamUser020_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser020_UserHasLicenseForApp( struct cppISteamUser_SteamUser020_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser020_BIsBehindNAT( struct cppISteamUser_SteamUser020_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser020_AdvertiseGame( struct cppISteamUser_SteamUser020_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser020_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser020_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser020_GetEncryptedAppTicket( struct cppISteamUser_SteamUser020_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser020_GetGameBadgeLevel( struct cppISteamUser_SteamUser020_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser020_GetPlayerSteamLevel( struct cppISteamUser_SteamUser020_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser020_RequestStoreAuthURL( struct cppISteamUser_SteamUser020_RequestStoreAuthURL_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

void cppISteamUser_SteamUser020_BIsPhoneVerified( struct cppISteamUser_SteamUser020_BIsPhoneVerified_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser020_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser020_BIsTwoFactorEnabled_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser020_BIsPhoneIdentifying( struct cppISteamUser_SteamUser020_BIsPhoneIdentifying_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser020_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser020_BIsPhoneRequiringVerification_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
}

void cppISteamUser_SteamUser020_GetMarketEligibility( struct cppISteamUser_SteamUser020_GetMarketEligibility_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
}

void cppISteamUser_SteamUser020_GetDurationControl( struct cppISteamUser_SteamUser020_GetDurationControl_params *params )
{
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
}

