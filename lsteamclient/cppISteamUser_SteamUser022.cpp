/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser022.h"

void cppISteamUser_SteamUser022_GetHSteamUser( struct cppISteamUser_SteamUser022_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser022_BLoggedOn( struct cppISteamUser_SteamUser022_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser022_GetSteamID( struct cppISteamUser_SteamUser022_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection_DEPRECATED( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->TerminateGameConnection_DEPRECATED( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser022_TrackAppUsageEvent( struct cppISteamUser_SteamUser022_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser022_GetUserDataFolder( struct cppISteamUser_SteamUser022_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser022_StartVoiceRecording( struct cppISteamUser_SteamUser022_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser022_StopVoiceRecording( struct cppISteamUser_SteamUser022_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser022_GetAvailableVoice( struct cppISteamUser_SteamUser022_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser022_GetVoice( struct cppISteamUser_SteamUser022_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser022_DecompressVoice( struct cppISteamUser_SteamUser022_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser022_GetAuthSessionTicket( struct cppISteamUser_SteamUser022_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket, params->pSteamNetworkingIdentity );
}

void cppISteamUser_SteamUser022_BeginAuthSession( struct cppISteamUser_SteamUser022_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser022_EndAuthSession( struct cppISteamUser_SteamUser022_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser022_CancelAuthTicket( struct cppISteamUser_SteamUser022_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser022_UserHasLicenseForApp( struct cppISteamUser_SteamUser022_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser022_BIsBehindNAT( struct cppISteamUser_SteamUser022_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser022_AdvertiseGame( struct cppISteamUser_SteamUser022_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser022_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser022_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser022_GetEncryptedAppTicket( struct cppISteamUser_SteamUser022_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser022_GetGameBadgeLevel( struct cppISteamUser_SteamUser022_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser022_GetPlayerSteamLevel( struct cppISteamUser_SteamUser022_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser022_RequestStoreAuthURL( struct cppISteamUser_SteamUser022_RequestStoreAuthURL_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

void cppISteamUser_SteamUser022_BIsPhoneVerified( struct cppISteamUser_SteamUser022_BIsPhoneVerified_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser022_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser022_BIsTwoFactorEnabled_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser022_BIsPhoneIdentifying( struct cppISteamUser_SteamUser022_BIsPhoneIdentifying_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser022_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser022_BIsPhoneRequiringVerification_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
}

void cppISteamUser_SteamUser022_GetMarketEligibility( struct cppISteamUser_SteamUser022_GetMarketEligibility_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
}

void cppISteamUser_SteamUser022_GetDurationControl( struct cppISteamUser_SteamUser022_GetDurationControl_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
}

void cppISteamUser_SteamUser022_BSetDurationControlOnlineState( struct cppISteamUser_SteamUser022_BSetDurationControlOnlineState_params *params )
{
    struct u_ISteamUser_SteamUser022 *iface = (struct u_ISteamUser_SteamUser022 *)params->linux_side;
    params->_ret = iface->BSetDurationControlOnlineState( params->eNewState );
}

