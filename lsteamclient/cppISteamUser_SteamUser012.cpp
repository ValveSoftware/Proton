#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_105/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_105
#include "struct_converters.h"
#include "cppISteamUser_SteamUser012.h"
void cppISteamUser_SteamUser012_GetHSteamUser( struct cppISteamUser_SteamUser012_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser012_BLoggedOn( struct cppISteamUser_SteamUser012_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser012_GetSteamID( struct cppISteamUser_SteamUser012_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser012_InitiateGameConnection( struct cppISteamUser_SteamUser012_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pAuthBlob, (int)params->cbMaxAuthBlob, (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser012_TerminateGameConnection( struct cppISteamUser_SteamUser012_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser012_TrackAppUsageEvent( struct cppISteamUser_SteamUser012_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

void cppISteamUser_SteamUser012_GetUserDataFolder( struct cppISteamUser_SteamUser012_GetUserDataFolder_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetUserDataFolder( (char *)params->pchBuffer, (int)params->cubBuffer );
}

void cppISteamUser_SteamUser012_StartVoiceRecording( struct cppISteamUser_SteamUser012_StartVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser012_StopVoiceRecording( struct cppISteamUser_SteamUser012_StopVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser012_GetCompressedVoice( struct cppISteamUser_SteamUser012_GetCompressedVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetCompressedVoice( (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten );
}

void cppISteamUser_SteamUser012_DecompressVoice( struct cppISteamUser_SteamUser012_DecompressVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->DecompressVoice( (void *)params->pCompressed, (uint32)params->cbCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten );
}

void cppISteamUser_SteamUser012_GetAuthSessionTicket( struct cppISteamUser_SteamUser012_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamUser_SteamUser012_BeginAuthSession( struct cppISteamUser_SteamUser012_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser012_EndAuthSession( struct cppISteamUser_SteamUser012_EndAuthSession_params *params )
{
    ((ISteamUser*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser012_CancelAuthTicket( struct cppISteamUser_SteamUser012_CancelAuthTicket_params *params )
{
    ((ISteamUser*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamUser_SteamUser012_UserHasLicenseForApp( struct cppISteamUser_SteamUser012_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

#ifdef __cplusplus
}
#endif
