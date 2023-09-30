/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser013.h"

void cppISteamUser_SteamUser013_GetHSteamUser( struct cppISteamUser_SteamUser013_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser013_BLoggedOn( struct cppISteamUser_SteamUser013_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser013_GetSteamID( struct cppISteamUser_SteamUser013_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser013_InitiateGameConnection( struct cppISteamUser_SteamUser013_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser013_TerminateGameConnection( struct cppISteamUser_SteamUser013_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser013_TrackAppUsageEvent( struct cppISteamUser_SteamUser013_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser013_GetUserDataFolder( struct cppISteamUser_SteamUser013_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser013_StartVoiceRecording( struct cppISteamUser_SteamUser013_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser013_StopVoiceRecording( struct cppISteamUser_SteamUser013_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser013_GetAvailableVoice( struct cppISteamUser_SteamUser013_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed );
}

void cppISteamUser_SteamUser013_GetVoice( struct cppISteamUser_SteamUser013_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten );
}

void cppISteamUser_SteamUser013_DecompressVoice( struct cppISteamUser_SteamUser013_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

void cppISteamUser_SteamUser013_GetAuthSessionTicket( struct cppISteamUser_SteamUser013_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser013_BeginAuthSession( struct cppISteamUser_SteamUser013_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser013_EndAuthSession( struct cppISteamUser_SteamUser013_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser013_CancelAuthTicket( struct cppISteamUser_SteamUser013_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser013_UserHasLicenseForApp( struct cppISteamUser_SteamUser013_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser013 *iface = (struct u_ISteamUser_SteamUser013 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

