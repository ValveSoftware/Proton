/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser021_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser021_GetHSteamUser_params *params = (struct ISteamUser_SteamUser021_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser021_BLoggedOn_params *params = (struct ISteamUser_SteamUser021_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser021_GetSteamID_params *params = (struct ISteamUser_SteamUser021_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED( void *args )
{
    struct ISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params *params = (struct ISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection_DEPRECATED( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED( void *args )
{
    struct ISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params *params = (struct ISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->TerminateGameConnection_DEPRECATED( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser021_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser021_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser021_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser021_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser021_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser021_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser021_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser021_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetAvailableVoice( void *args )
{
    struct ISteamUser_SteamUser021_GetAvailableVoice_params *params = (struct ISteamUser_SteamUser021_GetAvailableVoice_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetVoice( void *args )
{
    struct ISteamUser_SteamUser021_GetVoice_params *params = (struct ISteamUser_SteamUser021_GetVoice_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser021_DecompressVoice_params *params = (struct ISteamUser_SteamUser021_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetVoiceOptimalSampleRate( void *args )
{
    struct ISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params *params = (struct ISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser021_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser021_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser021_BeginAuthSession_params *params = (struct ISteamUser_SteamUser021_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser021_EndAuthSession_params *params = (struct ISteamUser_SteamUser021_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser021_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser021_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser021_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser021_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BIsBehindNAT( void *args )
{
    struct ISteamUser_SteamUser021_BIsBehindNAT_params *params = (struct ISteamUser_SteamUser021_BIsBehindNAT_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_AdvertiseGame( void *args )
{
    struct ISteamUser_SteamUser021_AdvertiseGame_params *params = (struct ISteamUser_SteamUser021_AdvertiseGame_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_RequestEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser021_RequestEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser021_RequestEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser021_GetEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser021_GetEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetGameBadgeLevel( void *args )
{
    struct ISteamUser_SteamUser021_GetGameBadgeLevel_params *params = (struct ISteamUser_SteamUser021_GetGameBadgeLevel_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetPlayerSteamLevel( void *args )
{
    struct ISteamUser_SteamUser021_GetPlayerSteamLevel_params *params = (struct ISteamUser_SteamUser021_GetPlayerSteamLevel_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_RequestStoreAuthURL( void *args )
{
    struct ISteamUser_SteamUser021_RequestStoreAuthURL_params *params = (struct ISteamUser_SteamUser021_RequestStoreAuthURL_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BIsPhoneVerified( void *args )
{
    struct ISteamUser_SteamUser021_BIsPhoneVerified_params *params = (struct ISteamUser_SteamUser021_BIsPhoneVerified_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BIsTwoFactorEnabled( void *args )
{
    struct ISteamUser_SteamUser021_BIsTwoFactorEnabled_params *params = (struct ISteamUser_SteamUser021_BIsTwoFactorEnabled_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BIsPhoneIdentifying( void *args )
{
    struct ISteamUser_SteamUser021_BIsPhoneIdentifying_params *params = (struct ISteamUser_SteamUser021_BIsPhoneIdentifying_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BIsPhoneRequiringVerification( void *args )
{
    struct ISteamUser_SteamUser021_BIsPhoneRequiringVerification_params *params = (struct ISteamUser_SteamUser021_BIsPhoneRequiringVerification_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetMarketEligibility( void *args )
{
    struct ISteamUser_SteamUser021_GetMarketEligibility_params *params = (struct ISteamUser_SteamUser021_GetMarketEligibility_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_GetDurationControl( void *args )
{
    struct ISteamUser_SteamUser021_GetDurationControl_params *params = (struct ISteamUser_SteamUser021_GetDurationControl_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser021_BSetDurationControlOnlineState( void *args )
{
    struct ISteamUser_SteamUser021_BSetDurationControlOnlineState_params *params = (struct ISteamUser_SteamUser021_BSetDurationControlOnlineState_params *)args;
    struct u_ISteamUser_SteamUser021 *iface = (struct u_ISteamUser_SteamUser021 *)params->linux_side;
    params->_ret = iface->BSetDurationControlOnlineState( params->eNewState );
    return 0;
}

