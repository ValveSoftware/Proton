/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser021.h"

void cppISteamUser_SteamUser021_GetHSteamUser( struct cppISteamUser_SteamUser021_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser021_BLoggedOn( struct cppISteamUser_SteamUser021_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser021_GetSteamID( struct cppISteamUser_SteamUser021_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection_DEPRECATED( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->TerminateGameConnection_DEPRECATED( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser021_TrackAppUsageEvent( struct cppISteamUser_SteamUser021_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser021_GetUserDataFolder( struct cppISteamUser_SteamUser021_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser021_StartVoiceRecording( struct cppISteamUser_SteamUser021_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser021_StopVoiceRecording( struct cppISteamUser_SteamUser021_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser021_GetAvailableVoice( struct cppISteamUser_SteamUser021_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser021_GetVoice( struct cppISteamUser_SteamUser021_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser021_DecompressVoice( struct cppISteamUser_SteamUser021_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser021_GetAuthSessionTicket( struct cppISteamUser_SteamUser021_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser021_BeginAuthSession( struct cppISteamUser_SteamUser021_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser021_EndAuthSession( struct cppISteamUser_SteamUser021_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser021_CancelAuthTicket( struct cppISteamUser_SteamUser021_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser021_UserHasLicenseForApp( struct cppISteamUser_SteamUser021_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser021_BIsBehindNAT( struct cppISteamUser_SteamUser021_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser021_AdvertiseGame( struct cppISteamUser_SteamUser021_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser021_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser021_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser021_GetEncryptedAppTicket( struct cppISteamUser_SteamUser021_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser021_GetGameBadgeLevel( struct cppISteamUser_SteamUser021_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser021_GetPlayerSteamLevel( struct cppISteamUser_SteamUser021_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser021_RequestStoreAuthURL( struct cppISteamUser_SteamUser021_RequestStoreAuthURL_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

void cppISteamUser_SteamUser021_BIsPhoneVerified( struct cppISteamUser_SteamUser021_BIsPhoneVerified_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser021_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser021_BIsTwoFactorEnabled_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser021_BIsPhoneIdentifying( struct cppISteamUser_SteamUser021_BIsPhoneIdentifying_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser021_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser021_BIsPhoneRequiringVerification_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
}

void cppISteamUser_SteamUser021_GetMarketEligibility( struct cppISteamUser_SteamUser021_GetMarketEligibility_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
}

void cppISteamUser_SteamUser021_GetDurationControl( struct cppISteamUser_SteamUser021_GetDurationControl_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
}

void cppISteamUser_SteamUser021_BSetDurationControlOnlineState( struct cppISteamUser_SteamUser021_BSetDurationControlOnlineState_params *params )
{
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BSetDurationControlOnlineState( params->eNewState );
}

