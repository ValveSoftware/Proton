/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser018.h"

void cppISteamUser_SteamUser018_GetHSteamUser( struct cppISteamUser_SteamUser018_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser018_BLoggedOn( struct cppISteamUser_SteamUser018_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser018_GetSteamID( struct cppISteamUser_SteamUser018_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser018_InitiateGameConnection( struct cppISteamUser_SteamUser018_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser018_TerminateGameConnection( struct cppISteamUser_SteamUser018_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser018_TrackAppUsageEvent( struct cppISteamUser_SteamUser018_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser018_GetUserDataFolder( struct cppISteamUser_SteamUser018_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser018_StartVoiceRecording( struct cppISteamUser_SteamUser018_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser018_StopVoiceRecording( struct cppISteamUser_SteamUser018_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser018_GetAvailableVoice( struct cppISteamUser_SteamUser018_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed, params->nUncompressedVoiceDesiredSampleRate );
}

void cppISteamUser_SteamUser018_GetVoice( struct cppISteamUser_SteamUser018_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed, params->pUncompressedDestBuffer, params->cbUncompressedDestBufferSize, params->nUncompressBytesWritten, params->nUncompressedVoiceDesiredSampleRate );
}

void cppISteamUser_SteamUser018_DecompressVoice( struct cppISteamUser_SteamUser018_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser018_GetAuthSessionTicket( struct cppISteamUser_SteamUser018_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser018_BeginAuthSession( struct cppISteamUser_SteamUser018_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser018_EndAuthSession( struct cppISteamUser_SteamUser018_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser018_CancelAuthTicket( struct cppISteamUser_SteamUser018_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser018_UserHasLicenseForApp( struct cppISteamUser_SteamUser018_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser018_BIsBehindNAT( struct cppISteamUser_SteamUser018_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser018_AdvertiseGame( struct cppISteamUser_SteamUser018_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser018_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser018_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser018_GetEncryptedAppTicket( struct cppISteamUser_SteamUser018_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser018_GetGameBadgeLevel( struct cppISteamUser_SteamUser018_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser018_GetPlayerSteamLevel( struct cppISteamUser_SteamUser018_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser018_RequestStoreAuthURL( struct cppISteamUser_SteamUser018_RequestStoreAuthURL_params *params )
{
    struct u_ISteamUser_SteamUser018 *iface = (struct u_ISteamUser_SteamUser018 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

