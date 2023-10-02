/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser012_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser012_GetHSteamUser_params *params = (struct ISteamUser_SteamUser012_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser012_BLoggedOn_params *params = (struct ISteamUser_SteamUser012_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser012_GetSteamID_params *params = (struct ISteamUser_SteamUser012_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser012_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser012_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser012_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser012_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser012_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser012_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser012_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser012_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser012_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser012_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser012_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser012_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_GetCompressedVoice( void *args )
{
    struct ISteamUser_SteamUser012_GetCompressedVoice_params *params = (struct ISteamUser_SteamUser012_GetCompressedVoice_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetCompressedVoice( params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser012_DecompressVoice_params *params = (struct ISteamUser_SteamUser012_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_GetAuthSessionTicket( void *args )
{
    struct ISteamUser_SteamUser012_GetAuthSessionTicket_params *params = (struct ISteamUser_SteamUser012_GetAuthSessionTicket_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_BeginAuthSession( void *args )
{
    struct ISteamUser_SteamUser012_BeginAuthSession_params *params = (struct ISteamUser_SteamUser012_BeginAuthSession_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_EndAuthSession( void *args )
{
    struct ISteamUser_SteamUser012_EndAuthSession_params *params = (struct ISteamUser_SteamUser012_EndAuthSession_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_CancelAuthTicket( void *args )
{
    struct ISteamUser_SteamUser012_CancelAuthTicket_params *params = (struct ISteamUser_SteamUser012_CancelAuthTicket_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamUser_SteamUser012_UserHasLicenseForApp( void *args )
{
    struct ISteamUser_SteamUser012_UserHasLicenseForApp_params *params = (struct ISteamUser_SteamUser012_UserHasLicenseForApp_params *)args;
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

