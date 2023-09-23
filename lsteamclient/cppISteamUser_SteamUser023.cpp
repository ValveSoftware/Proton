#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamUser_SteamUser023.h"
HSteamUser cppISteamUser_SteamUser023_GetHSteamUser(void *linux_side)
{
    HSteamUser _ret;
    _ret = ((ISteamUser*)linux_side)->GetHSteamUser();
    return (_ret);
}

bool cppISteamUser_SteamUser023_BLoggedOn(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BLoggedOn();
    return (_ret);
}

CSteamID cppISteamUser_SteamUser023_GetSteamID(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamUser*)linux_side)->GetSteamID();
    return (_ret);
}

int cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(void *linux_side, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->InitiateGameConnection_DEPRECATED((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
    return (_ret);
}

void cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection_DEPRECATED((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser023_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

bool cppISteamUser_SteamUser023_GetUserDataFolder(void *linux_side, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetUserDataFolder((char *)pchBuffer, (int)cubBuffer);
    return (_ret);
}

void cppISteamUser_SteamUser023_StartVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StartVoiceRecording();
}

void cppISteamUser_SteamUser023_StopVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StopVoiceRecording();
}

EVoiceResult cppISteamUser_SteamUser023_GetAvailableVoice(void *linux_side, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->GetAvailableVoice((uint32 *)pcbCompressed, (uint32 *)pcbUncompressed_Deprecated, (uint32)nUncompressedVoiceDesiredSampleRate_Deprecated);
    return (_ret);
}

EVoiceResult cppISteamUser_SteamUser023_GetVoice(void *linux_side, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->GetVoice((bool)bWantCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten, (bool)bWantUncompressed_Deprecated, (void *)pUncompressedDestBuffer_Deprecated, (uint32)cbUncompressedDestBufferSize_Deprecated, (uint32 *)nUncompressBytesWritten_Deprecated, (uint32)nUncompressedVoiceDesiredSampleRate_Deprecated);
    return (_ret);
}

EVoiceResult cppISteamUser_SteamUser023_DecompressVoice(void *linux_side, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->DecompressVoice((const void *)pCompressed, (uint32)cbCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten, (uint32)nDesiredSampleRate);
    return (_ret);
}

uint32 cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUser*)linux_side)->GetVoiceOptimalSampleRate();
    return (_ret);
}

HAuthTicket cppISteamUser_SteamUser023_GetAuthSessionTicket(void *linux_side, void *pTicket, int cbMaxTicket, uint32 *pcbTicket, const SteamNetworkingIdentity *pSteamNetworkingIdentity)
{
    HAuthTicket _ret;
    _ret = ((ISteamUser*)linux_side)->GetAuthSessionTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket, (const SteamNetworkingIdentity *)pSteamNetworkingIdentity);
    return (_ret);
}

HAuthTicket cppISteamUser_SteamUser023_GetAuthTicketForWebApi(void *linux_side, const char *pchIdentity)
{
    HAuthTicket _ret;
    _ret = ((ISteamUser*)linux_side)->GetAuthTicketForWebApi((const char *)pchIdentity);
    return (_ret);
}

EBeginAuthSessionResult cppISteamUser_SteamUser023_BeginAuthSession(void *linux_side, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    _ret = ((ISteamUser*)linux_side)->BeginAuthSession((const void *)pAuthTicket, (int)cbAuthTicket, (CSteamID)steamID);
    return (_ret);
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
    EUserHasLicenseForAppResult _ret;
    _ret = ((ISteamUser*)linux_side)->UserHasLicenseForApp((CSteamID)steamID, (AppId_t)appID);
    return (_ret);
}

bool cppISteamUser_SteamUser023_BIsBehindNAT(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BIsBehindNAT();
    return (_ret);
}

void cppISteamUser_SteamUser023_AdvertiseGame(void *linux_side, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->AdvertiseGame((CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer);
}

SteamAPICall_t cppISteamUser_SteamUser023_RequestEncryptedAppTicket(void *linux_side, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUser*)linux_side)->RequestEncryptedAppTicket((void *)pDataToInclude, (int)cbDataToInclude);
    return (_ret);
}

bool cppISteamUser_SteamUser023_GetEncryptedAppTicket(void *linux_side, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetEncryptedAppTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket);
    return (_ret);
}

int cppISteamUser_SteamUser023_GetGameBadgeLevel(void *linux_side, int nSeries, bool bFoil)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->GetGameBadgeLevel((int)nSeries, (bool)bFoil);
    return (_ret);
}

int cppISteamUser_SteamUser023_GetPlayerSteamLevel(void *linux_side)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->GetPlayerSteamLevel();
    return (_ret);
}

SteamAPICall_t cppISteamUser_SteamUser023_RequestStoreAuthURL(void *linux_side, const char *pchRedirectURL)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUser*)linux_side)->RequestStoreAuthURL((const char *)pchRedirectURL);
    return (_ret);
}

bool cppISteamUser_SteamUser023_BIsPhoneVerified(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BIsPhoneVerified();
    return (_ret);
}

bool cppISteamUser_SteamUser023_BIsTwoFactorEnabled(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BIsTwoFactorEnabled();
    return (_ret);
}

bool cppISteamUser_SteamUser023_BIsPhoneIdentifying(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BIsPhoneIdentifying();
    return (_ret);
}

bool cppISteamUser_SteamUser023_BIsPhoneRequiringVerification(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BIsPhoneRequiringVerification();
    return (_ret);
}

SteamAPICall_t cppISteamUser_SteamUser023_GetMarketEligibility(void *linux_side)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUser*)linux_side)->GetMarketEligibility();
    return (_ret);
}

SteamAPICall_t cppISteamUser_SteamUser023_GetDurationControl(void *linux_side)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUser*)linux_side)->GetDurationControl();
    return (_ret);
}

bool cppISteamUser_SteamUser023_BSetDurationControlOnlineState(void *linux_side, EDurationControlOnlineState eNewState)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BSetDurationControlOnlineState((EDurationControlOnlineState)eNewState);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
