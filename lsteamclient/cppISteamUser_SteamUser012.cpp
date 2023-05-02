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
HSteamUser cppISteamUser_SteamUser012_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

bool cppISteamUser_SteamUser012_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

CSteamID cppISteamUser_SteamUser012_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

int cppISteamUser_SteamUser012_InitiateGameConnection(void *linux_side, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    return ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
}

void cppISteamUser_SteamUser012_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser012_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

bool cppISteamUser_SteamUser012_GetUserDataFolder(void *linux_side, char * pchBuffer, int cubBuffer)
{
    return ((ISteamUser*)linux_side)->GetUserDataFolder((char *)pchBuffer, (int)cubBuffer);
}

void cppISteamUser_SteamUser012_StartVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StartVoiceRecording();
}

void cppISteamUser_SteamUser012_StopVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StopVoiceRecording();
}

EVoiceResult cppISteamUser_SteamUser012_GetCompressedVoice(void *linux_side, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    return ((ISteamUser*)linux_side)->GetCompressedVoice((void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten);
}

EVoiceResult cppISteamUser_SteamUser012_DecompressVoice(void *linux_side, void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    return ((ISteamUser*)linux_side)->DecompressVoice((void *)pCompressed, (uint32)cbCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten);
}

HAuthTicket cppISteamUser_SteamUser012_GetAuthSessionTicket(void *linux_side, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    return ((ISteamUser*)linux_side)->GetAuthSessionTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket);
}

EBeginAuthSessionResult cppISteamUser_SteamUser012_BeginAuthSession(void *linux_side, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    return ((ISteamUser*)linux_side)->BeginAuthSession((const void *)pAuthTicket, (int)cbAuthTicket, (CSteamID)steamID);
}

void cppISteamUser_SteamUser012_EndAuthSession(void *linux_side, CSteamID steamID)
{
    ((ISteamUser*)linux_side)->EndAuthSession((CSteamID)steamID);
}

void cppISteamUser_SteamUser012_CancelAuthTicket(void *linux_side, HAuthTicket hAuthTicket)
{
    ((ISteamUser*)linux_side)->CancelAuthTicket((HAuthTicket)hAuthTicket);
}

EUserHasLicenseForAppResult cppISteamUser_SteamUser012_UserHasLicenseForApp(void *linux_side, CSteamID steamID, AppId_t appID)
{
    return ((ISteamUser*)linux_side)->UserHasLicenseForApp((CSteamID)steamID, (AppId_t)appID);
}

#ifdef __cplusplus
}
#endif
