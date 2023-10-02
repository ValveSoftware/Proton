/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser015_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser015_GetHSteamUser_params *params = (struct ISteamUser_SteamUser015_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser015_BLoggedOn_params *params = (struct ISteamUser_SteamUser015_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser015_GetSteamID_params *params = (struct ISteamUser_SteamUser015_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser015_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser015_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser015_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser015_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser015_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser015_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser015_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser015_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser015_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser015_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser015_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser015_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetAvailableVoice( void *args )
{
    struct ISteamUser_SteamUser015_GetAvailableVoice_params *params = (struct ISteamUser_SteamUser015_GetAvailableVoice_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetVoice( void *args )
{
    struct ISteamUser_SteamUser015_GetVoice_params *params = (struct ISteamUser_SteamUser015_GetVoice_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser015_DecompressVoice_params *params = (struct ISteamUser_SteamUser015_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetVoiceOptimalSampleRate( void *args )
{
    struct ISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params *params = (struct ISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser015_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser015_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser015_BeginAuthSession_params *params = (struct ISteamUser_SteamUser015_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser015_EndAuthSession_params *params = (struct ISteamUser_SteamUser015_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser015_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser015_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser015_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser015_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_BIsBehindNAT( void *args )
{
    struct ISteamUser_SteamUser015_BIsBehindNAT_params *params = (struct ISteamUser_SteamUser015_BIsBehindNAT_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_AdvertiseGame( void *args )
{
    struct ISteamUser_SteamUser015_AdvertiseGame_params *params = (struct ISteamUser_SteamUser015_AdvertiseGame_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_RequestEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser015_RequestEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser015_RequestEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
    return 0;
}

NTSTATUS ISteamUser_SteamUser015_GetEncryptedAppTicket( void *args )
{
    struct ISteamUser_SteamUser015_GetEncryptedAppTicket_params *params = (struct ISteamUser_SteamUser015_GetEncryptedAppTicket_params *)args;
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

