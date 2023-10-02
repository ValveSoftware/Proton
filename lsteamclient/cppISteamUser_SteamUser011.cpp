/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUser_SteamUser011_GetHSteamUser( void *args )
{
    struct ISteamUser_SteamUser011_GetHSteamUser_params *params = (struct ISteamUser_SteamUser011_GetHSteamUser_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_BLoggedOn( void *args )
{
    struct ISteamUser_SteamUser011_BLoggedOn_params *params = (struct ISteamUser_SteamUser011_BLoggedOn_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_GetSteamID( void *args )
{
    struct ISteamUser_SteamUser011_GetSteamID_params *params = (struct ISteamUser_SteamUser011_GetSteamID_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_InitiateGameConnection( void *args )
{
    struct ISteamUser_SteamUser011_InitiateGameConnection_params *params = (struct ISteamUser_SteamUser011_InitiateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_TerminateGameConnection( void *args )
{
    struct ISteamUser_SteamUser011_TerminateGameConnection_params *params = (struct ISteamUser_SteamUser011_TerminateGameConnection_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_TrackAppUsageEvent( void *args )
{
    struct ISteamUser_SteamUser011_TrackAppUsageEvent_params *params = (struct ISteamUser_SteamUser011_TrackAppUsageEvent_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_GetUserDataFolder( void *args )
{
    struct ISteamUser_SteamUser011_GetUserDataFolder_params *params = (struct ISteamUser_SteamUser011_GetUserDataFolder_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchBuffer, params->pchBuffer, params->cubBuffer, 0 );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_StartVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser011_StartVoiceRecording_params *params = (struct ISteamUser_SteamUser011_StartVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->StartVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_StopVoiceRecording( void *args )
{
    struct ISteamUser_SteamUser011_StopVoiceRecording_params *params = (struct ISteamUser_SteamUser011_StopVoiceRecording_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->StopVoiceRecording(  );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_GetCompressedVoice( void *args )
{
    struct ISteamUser_SteamUser011_GetCompressedVoice_params *params = (struct ISteamUser_SteamUser011_GetCompressedVoice_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetCompressedVoice( params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
    return 0;
}

NTSTATUS ISteamUser_SteamUser011_DecompressVoice( void *args )
{
    struct ISteamUser_SteamUser011_DecompressVoice_params *params = (struct ISteamUser_SteamUser011_DecompressVoice_params *)args;
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
    return 0;
}

