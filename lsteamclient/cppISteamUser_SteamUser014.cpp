#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_112/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_112
#include "struct_converters.h"
#include "cppISteamUser_SteamUser014.h"
void cppISteamUser_SteamUser014_GetHSteamUser( struct cppISteamUser_SteamUser014_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser014_BLoggedOn( struct cppISteamUser_SteamUser014_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser014_GetSteamID( struct cppISteamUser_SteamUser014_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser014_InitiateGameConnection( struct cppISteamUser_SteamUser014_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pAuthBlob, (int)params->cbMaxAuthBlob, (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser014_TerminateGameConnection( struct cppISteamUser_SteamUser014_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser014_TrackAppUsageEvent( struct cppISteamUser_SteamUser014_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

void cppISteamUser_SteamUser014_GetUserDataFolder( struct cppISteamUser_SteamUser014_GetUserDataFolder_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetUserDataFolder( (char *)params->pchBuffer, (int)params->cubBuffer );
}

void cppISteamUser_SteamUser014_StartVoiceRecording( struct cppISteamUser_SteamUser014_StartVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser014_StopVoiceRecording( struct cppISteamUser_SteamUser014_StopVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser014_GetAvailableVoice( struct cppISteamUser_SteamUser014_GetAvailableVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAvailableVoice( (uint32 *)params->pcbCompressed, (uint32 *)params->pcbUncompressed );
}

void cppISteamUser_SteamUser014_GetVoice( struct cppISteamUser_SteamUser014_GetVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetVoice( (bool)params->bWantCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten, (bool)params->bWantUncompressed, (void *)params->pUncompressedDestBuffer, (uint32)params->cbUncompressedDestBufferSize, (uint32 *)params->nUncompressBytesWritten );
}

void cppISteamUser_SteamUser014_DecompressVoice( struct cppISteamUser_SteamUser014_DecompressVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->DecompressVoice( (const void *)params->pCompressed, (uint32)params->cbCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten );
}

void cppISteamUser_SteamUser014_GetAuthSessionTicket( struct cppISteamUser_SteamUser014_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamUser_SteamUser014_BeginAuthSession( struct cppISteamUser_SteamUser014_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser014_EndAuthSession( struct cppISteamUser_SteamUser014_EndAuthSession_params *params )
{
    ((ISteamUser*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser014_CancelAuthTicket( struct cppISteamUser_SteamUser014_CancelAuthTicket_params *params )
{
    ((ISteamUser*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamUser_SteamUser014_UserHasLicenseForApp( struct cppISteamUser_SteamUser014_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamUser_SteamUser014_BIsBehindNAT( struct cppISteamUser_SteamUser014_BIsBehindNAT_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser014_AdvertiseGame( struct cppISteamUser_SteamUser014_AdvertiseGame_params *params )
{
    ((ISteamUser*)params->linux_side)->AdvertiseGame( (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser014_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser014_RequestEncryptedAppTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequestEncryptedAppTicket( (void *)params->pDataToInclude, (int)params->cbDataToInclude );
}

void cppISteamUser_SteamUser014_GetEncryptedAppTicket( struct cppISteamUser_SteamUser014_GetEncryptedAppTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetEncryptedAppTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

#ifdef __cplusplus
}
#endif
