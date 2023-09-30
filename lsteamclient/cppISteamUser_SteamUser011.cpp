/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser011.h"

void cppISteamUser_SteamUser011_GetHSteamUser( struct cppISteamUser_SteamUser011_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser011_BLoggedOn( struct cppISteamUser_SteamUser011_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser011_GetSteamID( struct cppISteamUser_SteamUser011_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser011_InitiateGameConnection( struct cppISteamUser_SteamUser011_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser011_TerminateGameConnection( struct cppISteamUser_SteamUser011_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser011_TrackAppUsageEvent( struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser011_GetUserDataFolder( struct cppISteamUser_SteamUser011_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser011_StartVoiceRecording( struct cppISteamUser_SteamUser011_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser011_StopVoiceRecording( struct cppISteamUser_SteamUser011_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser011_GetCompressedVoice( struct cppISteamUser_SteamUser011_GetCompressedVoice_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetCompressedVoice( params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

void cppISteamUser_SteamUser011_DecompressVoice( struct cppISteamUser_SteamUser011_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser011 *iface = (struct u_ISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

