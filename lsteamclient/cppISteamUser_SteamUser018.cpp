/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser018_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser018_GetHSteamUser_params *params = (struct ISteamUser_SteamUser018_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser018_BLoggedOn_params *params = (struct ISteamUser_SteamUser018_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser018_GetSteamID_params *params = (struct ISteamUser_SteamUser018_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser018_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser018_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser018_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser018_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser018_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser018_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser018_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser018_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser018_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser018_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser018_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser018_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetAvailableVoice( void *args )
{
    struct ISteamUser_SteamUser018_GetAvailableVoice_params *params = (struct ISteamUser_SteamUser018_GetAvailableVoice_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed, params->nUncompressedVoiceDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetVoice( void *args )
{
    struct ISteamUser_SteamUser018_GetVoice_params *params = (struct ISteamUser_SteamUser018_GetVoice_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten, params->nUncompressedVoiceDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser018_DecompressVoice_params *params = (struct ISteamUser_SteamUser018_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetVoiceOptimalSampleRate( void *args )
{
    struct ISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params *params = (struct ISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser018_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser018_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser018_BeginAuthSession_params *params = (struct ISteamUser_SteamUser018_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser018_EndAuthSession_params *params = (struct ISteamUser_SteamUser018_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser018_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser018_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser018_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser018_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_BIsBehindNAT( void *args )
{
    struct ISteamUser_SteamUser018_BIsBehindNAT_params *params = (struct ISteamUser_SteamUser018_BIsBehindNAT_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_AdvertiseGame( void *args )
{
    struct ISteamUser_SteamUser018_AdvertiseGame_params *params = (struct ISteamUser_SteamUser018_AdvertiseGame_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_RequestEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser018_RequestEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser018_RequestEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser018_GetEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser018_GetEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetGameBadgeLevel( void *args )
{
    struct ISteamUser_SteamUser018_GetGameBadgeLevel_params *params = (struct ISteamUser_SteamUser018_GetGameBadgeLevel_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_GetPlayerSteamLevel( void *args )
{
    struct ISteamUser_SteamUser018_GetPlayerSteamLevel_params *params = (struct ISteamUser_SteamUser018_GetPlayerSteamLevel_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser018_RequestStoreAuthURL( void *args )
{
    struct ISteamUser_SteamUser018_RequestStoreAuthURL_params *params = (struct ISteamUser_SteamUser018_RequestStoreAuthURL_params *)args;
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
    return 0;
}

