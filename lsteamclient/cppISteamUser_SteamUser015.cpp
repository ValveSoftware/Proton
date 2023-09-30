/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser015.h"

void cppISteamUser_SteamUser015_GetHSteamUser( struct cppISteamUser_SteamUser015_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser015_BLoggedOn( struct cppISteamUser_SteamUser015_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser015_GetSteamID( struct cppISteamUser_SteamUser015_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser015_InitiateGameConnection( struct cppISteamUser_SteamUser015_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser015_TerminateGameConnection( struct cppISteamUser_SteamUser015_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser015_TrackAppUsageEvent( struct cppISteamUser_SteamUser015_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser015_GetUserDataFolder( struct cppISteamUser_SteamUser015_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser015_StartVoiceRecording( struct cppISteamUser_SteamUser015_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser015_StopVoiceRecording( struct cppISteamUser_SteamUser015_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser015_GetAvailableVoice( struct cppISteamUser_SteamUser015_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed );
}

void cppISteamUser_SteamUser015_GetVoice( struct cppISteamUser_SteamUser015_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten );
}

void cppISteamUser_SteamUser015_DecompressVoice( struct cppISteamUser_SteamUser015_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser015_GetAuthSessionTicket( struct cppISteamUser_SteamUser015_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser015_BeginAuthSession( struct cppISteamUser_SteamUser015_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser015_EndAuthSession( struct cppISteamUser_SteamUser015_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser015_CancelAuthTicket( struct cppISteamUser_SteamUser015_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser015_UserHasLicenseForApp( struct cppISteamUser_SteamUser015_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser015_BIsBehindNAT( struct cppISteamUser_SteamUser015_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser015_AdvertiseGame( struct cppISteamUser_SteamUser015_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser015_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser015_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser015_GetEncryptedAppTicket( struct cppISteamUser_SteamUser015_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser015 *iface = (struct u_ISteamUser_SteamUser015 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

