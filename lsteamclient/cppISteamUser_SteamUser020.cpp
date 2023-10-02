/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser020_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser020_GetHSteamUser_params *params = (struct ISteamUser_SteamUser020_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser020_BLoggedOn_params *params = (struct ISteamUser_SteamUser020_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser020_GetSteamID_params *params = (struct ISteamUser_SteamUser020_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser020_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser020_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser020_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser020_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser020_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser020_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser020_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser020_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser020_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser020_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser020_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser020_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetAvailableVoice( void *args )
{
    struct ISteamUser_SteamUser020_GetAvailableVoice_params *params = (struct ISteamUser_SteamUser020_GetAvailableVoice_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetVoice( void *args )
{
    struct ISteamUser_SteamUser020_GetVoice_params *params = (struct ISteamUser_SteamUser020_GetVoice_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser020_DecompressVoice_params *params = (struct ISteamUser_SteamUser020_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetVoiceOptimalSampleRate( void *args )
{
    struct ISteamUser_SteamUser020_GetVoiceOptimalSampleRate_params *params = (struct ISteamUser_SteamUser020_GetVoiceOptimalSampleRate_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser020_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser020_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser020_BeginAuthSession_params *params = (struct ISteamUser_SteamUser020_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser020_EndAuthSession_params *params = (struct ISteamUser_SteamUser020_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser020_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser020_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser020_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser020_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BIsBehindNAT( void *args )
{
    struct ISteamUser_SteamUser020_BIsBehindNAT_params *params = (struct ISteamUser_SteamUser020_BIsBehindNAT_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_AdvertiseGame( void *args )
{
    struct ISteamUser_SteamUser020_AdvertiseGame_params *params = (struct ISteamUser_SteamUser020_AdvertiseGame_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_RequestEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser020_RequestEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser020_RequestEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser020_GetEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser020_GetEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetGameBadgeLevel( void *args )
{
    struct ISteamUser_SteamUser020_GetGameBadgeLevel_params *params = (struct ISteamUser_SteamUser020_GetGameBadgeLevel_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetPlayerSteamLevel( void *args )
{
    struct ISteamUser_SteamUser020_GetPlayerSteamLevel_params *params = (struct ISteamUser_SteamUser020_GetPlayerSteamLevel_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_RequestStoreAuthURL( void *args )
{
    struct ISteamUser_SteamUser020_RequestStoreAuthURL_params *params = (struct ISteamUser_SteamUser020_RequestStoreAuthURL_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BIsPhoneVerified( void *args )
{
    struct ISteamUser_SteamUser020_BIsPhoneVerified_params *params = (struct ISteamUser_SteamUser020_BIsPhoneVerified_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BIsTwoFactorEnabled( void *args )
{
    struct ISteamUser_SteamUser020_BIsTwoFactorEnabled_params *params = (struct ISteamUser_SteamUser020_BIsTwoFactorEnabled_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BIsPhoneIdentifying( void *args )
{
    struct ISteamUser_SteamUser020_BIsPhoneIdentifying_params *params = (struct ISteamUser_SteamUser020_BIsPhoneIdentifying_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_BIsPhoneRequiringVerification( void *args )
{
    struct ISteamUser_SteamUser020_BIsPhoneRequiringVerification_params *params = (struct ISteamUser_SteamUser020_BIsPhoneRequiringVerification_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetMarketEligibility( void *args )
{
    struct ISteamUser_SteamUser020_GetMarketEligibility_params *params = (struct ISteamUser_SteamUser020_GetMarketEligibility_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetMarketEligibility(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser020_GetDurationControl( void *args )
{
    struct ISteamUser_SteamUser020_GetDurationControl_params *params = (struct ISteamUser_SteamUser020_GetDurationControl_params *)args;
    struct u_ISteamUser_SteamUser020 *iface = (struct u_ISteamUser_SteamUser020 *)params->linux_side;
    params->_ret = iface->GetDurationControl(  );
    return 0;
}

