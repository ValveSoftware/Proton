/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser017_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser017_GetHSteamUser_params *params = (struct ISteamUser_SteamUser017_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser017_BLoggedOn_params *params = (struct ISteamUser_SteamUser017_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser017_GetSteamID_params *params = (struct ISteamUser_SteamUser017_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser017_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser017_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser017_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser017_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser017_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser017_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser017_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser017_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser017_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser017_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser017_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser017_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetAvailableVoice( void *args )
{
    struct ISteamUser_SteamUser017_GetAvailableVoice_params *params = (struct ISteamUser_SteamUser017_GetAvailableVoice_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed, params->nUncompressedVoiceDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetVoice( void *args )
{
    struct ISteamUser_SteamUser017_GetVoice_params *params = (struct ISteamUser_SteamUser017_GetVoice_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten, params->nUncompressedVoiceDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser017_DecompressVoice_params *params = (struct ISteamUser_SteamUser017_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetVoiceOptimalSampleRate( void *args )
{
    struct ISteamUser_SteamUser017_GetVoiceOptimalSampleRate_params *params = (struct ISteamUser_SteamUser017_GetVoiceOptimalSampleRate_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser017_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser017_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser017_BeginAuthSession_params *params = (struct ISteamUser_SteamUser017_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser017_EndAuthSession_params *params = (struct ISteamUser_SteamUser017_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser017_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser017_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser017_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser017_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_BIsBehindNAT( void *args )
{
    struct ISteamUser_SteamUser017_BIsBehindNAT_params *params = (struct ISteamUser_SteamUser017_BIsBehindNAT_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_AdvertiseGame( void *args )
{
    struct ISteamUser_SteamUser017_AdvertiseGame_params *params = (struct ISteamUser_SteamUser017_AdvertiseGame_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_RequestEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser017_RequestEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser017_RequestEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser017_GetEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser017_GetEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetGameBadgeLevel( void *args )
{
    struct ISteamUser_SteamUser017_GetGameBadgeLevel_params *params = (struct ISteamUser_SteamUser017_GetGameBadgeLevel_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
    return 0;
}

NTSTATUS ISteamUser_SteamUser017_GetPlayerSteamLevel( void *args )
{
    struct ISteamUser_SteamUser017_GetPlayerSteamLevel_params *params = (struct ISteamUser_SteamUser017_GetPlayerSteamLevel_params *)args;
    struct u_ISteamUser_SteamUser017 *iface = (struct u_ISteamUser_SteamUser017 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
    return 0;
}

