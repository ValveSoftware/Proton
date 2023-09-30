/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser023.h"

void cppISteamUser_SteamUser023_GetHSteamUser( struct cppISteamUser_SteamUser023_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser023_BLoggedOn( struct cppISteamUser_SteamUser023_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser023_GetSteamID( struct cppISteamUser_SteamUser023_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection_DEPRECATED( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->TerminateGameConnection_DEPRECATED( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser023_TrackAppUsageEvent( struct cppISteamUser_SteamUser023_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser023_GetUserDataFolder( struct cppISteamUser_SteamUser023_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser023_StartVoiceRecording( struct cppISteamUser_SteamUser023_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser023_StopVoiceRecording( struct cppISteamUser_SteamUser023_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser023_GetAvailableVoice( struct cppISteamUser_SteamUser023_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser023_GetVoice( struct cppISteamUser_SteamUser023_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser023_DecompressVoice( struct cppISteamUser_SteamUser023_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser023_GetAuthSessionTicket( struct cppISteamUser_SteamUser023_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket, params->pSteamNetworkingIdentity );
}

void cppISteamUser_SteamUser023_GetAuthTicketForWebApi( struct cppISteamUser_SteamUser023_GetAuthTicketForWebApi_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetAuthTicketForWebApi( params->pchIdentity );
}

void cppISteamUser_SteamUser023_BeginAuthSession( struct cppISteamUser_SteamUser023_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser023_EndAuthSession( struct cppISteamUser_SteamUser023_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser023_CancelAuthTicket( struct cppISteamUser_SteamUser023_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser023_UserHasLicenseForApp( struct cppISteamUser_SteamUser023_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser023_BIsBehindNAT( struct cppISteamUser_SteamUser023_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser023_AdvertiseGame( struct cppISteamUser_SteamUser023_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser023_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser023_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser023_GetEncryptedAppTicket( struct cppISteamUser_SteamUser023_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser023_GetGameBadgeLevel( struct cppISteamUser_SteamUser023_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser023_GetPlayerSteamLevel( struct cppISteamUser_SteamUser023_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser023_RequestStoreAuthURL( struct cppISteamUser_SteamUser023_RequestStoreAuthURL_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

void cppISteamUser_SteamUser023_BIsPhoneVerified( struct cppISteamUser_SteamUser023_BIsPhoneVerified_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser023_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser023_BIsTwoFactorEnabled_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser023_BIsPhoneIdentifying( struct cppISteamUser_SteamUser023_BIsPhoneIdentifying_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser023_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser023_BIsPhoneRequiringVerification_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
}

void cppISteamUser_SteamUser023_GetMarketEligibility( struct cppISteamUser_SteamUser023_GetMarketEligibility_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
}

void cppISteamUser_SteamUser023_GetDurationControl( struct cppISteamUser_SteamUser023_GetDurationControl_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
}

void cppISteamUser_SteamUser023_BSetDurationControlOnlineState( struct cppISteamUser_SteamUser023_BSetDurationControlOnlineState_params *params )
{
    struct u_ISteamUser_SteamUser023 *iface = (struct u_ISteamUser_SteamUser023 *)params->linux_side;
    params->_ret = iface->BSetDurationControlOnlineState( params->eNewState );
}

