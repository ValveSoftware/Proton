#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamUser_SteamUser023.h"
HSteamUser cppISteamUser_SteamUser023_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

bool cppISteamUser_SteamUser023_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

CSteamID cppISteamUser_SteamUser023_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

int cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(void *linux_side, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    return ((ISteamUser*)linux_side)->InitiateGameConnection_DEPRECATED((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
}

void cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection_DEPRECATED((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser023_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

bool cppISteamUser_SteamUser023_GetUserDataFolder(void *linux_side, char * pchBuffer, int cubBuffer)
{
    return ((ISteamUser*)linux_side)->GetUserDataFolder((char *)pchBuffer, (int)cubBuffer);
}

void cppISteamUser_SteamUser023_StartVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StartVoiceRecording();
}

void cppISteamUser_SteamUser023_StopVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StopVoiceRecording();
}

EVoiceResult cppISteamUser_SteamUser023_GetAvailableVoice(void *linux_side, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    return ((ISteamUser*)linux_side)->GetAvailableVoice((uint32 *)pcbCompressed, (uint32 *)pcbUncompressed_Deprecated, (uint32)nUncompressedVoiceDesiredSampleRate_Deprecated);
}

EVoiceResult cppISteamUser_SteamUser023_GetVoice(void *linux_side, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    return ((ISteamUser*)linux_side)->GetVoice((bool)bWantCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten, (bool)bWantUncompressed_Deprecated, (void *)pUncompressedDestBuffer_Deprecated, (uint32)cbUncompressedDestBufferSize_Deprecated, (uint32 *)nUncompressBytesWritten_Deprecated, (uint32)nUncompressedVoiceDesiredSampleRate_Deprecated);
}

EVoiceResult cppISteamUser_SteamUser023_DecompressVoice(void *linux_side, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    return ((ISteamUser*)linux_side)->DecompressVoice((const void *)pCompressed, (uint32)cbCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten, (uint32)nDesiredSampleRate);
}

uint32 cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetVoiceOptimalSampleRate();
}

HAuthTicket cppISteamUser_SteamUser023_GetAuthSessionTicket(void *linux_side, void * pTicket, int cbMaxTicket, uint32 * pcbTicket, const SteamNetworkingIdentity * pSteamNetworkingIdentity)
{
    return ((ISteamUser*)linux_side)->GetAuthSessionTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket, (const SteamNetworkingIdentity *)pSteamNetworkingIdentity);
}

HAuthTicket cppISteamUser_SteamUser023_GetAuthTicketForWebApi(void *linux_side, const char * pchIdentity)
{
    return ((ISteamUser*)linux_side)->GetAuthTicketForWebApi((const char *)pchIdentity);
}

EBeginAuthSessionResult cppISteamUser_SteamUser023_BeginAuthSession(void *linux_side, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    return ((ISteamUser*)linux_side)->BeginAuthSession((const void *)pAuthTicket, (int)cbAuthTicket, (CSteamID)steamID);
}

void cppISteamUser_SteamUser023_EndAuthSession(void *linux_side, CSteamID steamID)
{
    ((ISteamUser*)linux_side)->EndAuthSession((CSteamID)steamID);
}

void cppISteamUser_SteamUser023_CancelAuthTicket(void *linux_side, HAuthTicket hAuthTicket)
{
    ((ISteamUser*)linux_side)->CancelAuthTicket((HAuthTicket)hAuthTicket);
}

EUserHasLicenseForAppResult cppISteamUser_SteamUser023_UserHasLicenseForApp(void *linux_side, CSteamID steamID, AppId_t appID)
{
    return ((ISteamUser*)linux_side)->UserHasLicenseForApp((CSteamID)steamID, (AppId_t)appID);
}

bool cppISteamUser_SteamUser023_BIsBehindNAT(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BIsBehindNAT();
}

void cppISteamUser_SteamUser023_AdvertiseGame(void *linux_side, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->AdvertiseGame((CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer);
}

SteamAPICall_t cppISteamUser_SteamUser023_RequestEncryptedAppTicket(void *linux_side, void * pDataToInclude, int cbDataToInclude)
{
    return ((ISteamUser*)linux_side)->RequestEncryptedAppTicket((void *)pDataToInclude, (int)cbDataToInclude);
}

bool cppISteamUser_SteamUser023_GetEncryptedAppTicket(void *linux_side, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    return ((ISteamUser*)linux_side)->GetEncryptedAppTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket);
}

int cppISteamUser_SteamUser023_GetGameBadgeLevel(void *linux_side, int nSeries, bool bFoil)
{
    return ((ISteamUser*)linux_side)->GetGameBadgeLevel((int)nSeries, (bool)bFoil);
}

int cppISteamUser_SteamUser023_GetPlayerSteamLevel(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetPlayerSteamLevel();
}

SteamAPICall_t cppISteamUser_SteamUser023_RequestStoreAuthURL(void *linux_side, const char * pchRedirectURL)
{
    return ((ISteamUser*)linux_side)->RequestStoreAuthURL((const char *)pchRedirectURL);
}

bool cppISteamUser_SteamUser023_BIsPhoneVerified(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BIsPhoneVerified();
}

bool cppISteamUser_SteamUser023_BIsTwoFactorEnabled(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BIsTwoFactorEnabled();
}

bool cppISteamUser_SteamUser023_BIsPhoneIdentifying(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BIsPhoneIdentifying();
}

bool cppISteamUser_SteamUser023_BIsPhoneRequiringVerification(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BIsPhoneRequiringVerification();
}

SteamAPICall_t cppISteamUser_SteamUser023_GetMarketEligibility(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetMarketEligibility();
}

SteamAPICall_t cppISteamUser_SteamUser023_GetDurationControl(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetDurationControl();
}

bool cppISteamUser_SteamUser023_BSetDurationControlOnlineState(void *linux_side, EDurationControlOnlineState eNewState)
{
    return ((ISteamUser*)linux_side)->BSetDurationControlOnlineState((EDurationControlOnlineState)eNewState);
}

#ifdef __cplusplus
}
#endif
