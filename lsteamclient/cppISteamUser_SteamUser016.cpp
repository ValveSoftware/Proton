/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser016_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser016_GetHSteamUser_params *params = (struct ISteamUser_SteamUser016_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser016_BLoggedOn_params *params = (struct ISteamUser_SteamUser016_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser016_GetSteamID_params *params = (struct ISteamUser_SteamUser016_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser016_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser016_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser016_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser016_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser016_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser016_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser016_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser016_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser016_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser016_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser016_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser016_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetAvailableVoice( void *args )
{
    struct ISteamUser_SteamUser016_GetAvailableVoice_params *params = (struct ISteamUser_SteamUser016_GetAvailableVoice_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed, params->nUncompressedVoiceDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetVoice( void *args )
{
    struct ISteamUser_SteamUser016_GetVoice_params *params = (struct ISteamUser_SteamUser016_GetVoice_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten, params->nUncompressedVoiceDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser016_DecompressVoice_params *params = (struct ISteamUser_SteamUser016_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetVoiceOptimalSampleRate( void *args )
{
    struct ISteamUser_SteamUser016_GetVoiceOptimalSampleRate_params *params = (struct ISteamUser_SteamUser016_GetVoiceOptimalSampleRate_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser016_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser016_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser016_BeginAuthSession_params *params = (struct ISteamUser_SteamUser016_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser016_EndAuthSession_params *params = (struct ISteamUser_SteamUser016_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser016_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser016_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser016_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser016_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_BIsBehindNAT( void *args )
{
    struct ISteamUser_SteamUser016_BIsBehindNAT_params *params = (struct ISteamUser_SteamUser016_BIsBehindNAT_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_AdvertiseGame( void *args )
{
    struct ISteamUser_SteamUser016_AdvertiseGame_params *params = (struct ISteamUser_SteamUser016_AdvertiseGame_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_RequestEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser016_RequestEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser016_RequestEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
    return 0;
}

NTSTATUS ISteamUser_SteamUser016_GetEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser016_GetEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser016_GetEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser016 *iface = (struct u_ISteamUser_SteamUser016 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

