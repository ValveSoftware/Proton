/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUser_SteamUser023.h"

typedef struct __winISteamUser_SteamUser023 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser023;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser023_GetHSteamUser(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser023_BLoggedOn(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser023_GetSteamID(winISteamUser_SteamUser023 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser023_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED, 32)
int __thiscall winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(winISteamUser_SteamUser023 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED, 12)
void __thiscall winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(winISteamUser_SteamUser023 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser023_TrackAppUsageEvent(winISteamUser_SteamUser023 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser023_GetUserDataFolder(winISteamUser_SteamUser023 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser023_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser023_StartVoiceRecording(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser023_StopVoiceRecording(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser023_GetAvailableVoice(winISteamUser_SteamUser023 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser023_GetVoice(winISteamUser_SteamUser023 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser023_DecompressVoice(winISteamUser_SteamUser023 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser023_GetVoiceOptimalSampleRate(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAuthSessionTicket, 20)
HAuthTicket __thiscall winISteamUser_SteamUser023_GetAuthSessionTicket(winISteamUser_SteamUser023 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket, const SteamNetworkingIdentity * pSteamNetworkingIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAuthTicketForWebApi, 8)
HAuthTicket __thiscall winISteamUser_SteamUser023_GetAuthTicketForWebApi(winISteamUser_SteamUser023 *_this, const char * pchIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetAuthTicketForWebApi(_this->linux_side, pchIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser023_BeginAuthSession(winISteamUser_SteamUser023 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser023_EndAuthSession(winISteamUser_SteamUser023 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser023_CancelAuthTicket(winISteamUser_SteamUser023 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser023_UserHasLicenseForApp(winISteamUser_SteamUser023 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser023_BIsBehindNAT(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser023_AdvertiseGame(winISteamUser_SteamUser023 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser023_RequestEncryptedAppTicket(winISteamUser_SteamUser023 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser023_GetEncryptedAppTicket(winISteamUser_SteamUser023 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser023_GetGameBadgeLevel(winISteamUser_SteamUser023 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser023_GetPlayerSteamLevel(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetPlayerSteamLevel(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_RequestStoreAuthURL, 8)
SteamAPICall_t __thiscall winISteamUser_SteamUser023_RequestStoreAuthURL(winISteamUser_SteamUser023 *_this, const char * pchRedirectURL)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_RequestStoreAuthURL(_this->linux_side, pchRedirectURL);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneVerified, 4)
bool __thiscall winISteamUser_SteamUser023_BIsPhoneVerified(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BIsPhoneVerified(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsTwoFactorEnabled, 4)
bool __thiscall winISteamUser_SteamUser023_BIsTwoFactorEnabled(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BIsTwoFactorEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneIdentifying, 4)
bool __thiscall winISteamUser_SteamUser023_BIsPhoneIdentifying(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BIsPhoneIdentifying(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneRequiringVerification, 4)
bool __thiscall winISteamUser_SteamUser023_BIsPhoneRequiringVerification(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BIsPhoneRequiringVerification(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetMarketEligibility, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser023_GetMarketEligibility(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetMarketEligibility(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetDurationControl, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser023_GetDurationControl(winISteamUser_SteamUser023 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_GetDurationControl(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BSetDurationControlOnlineState, 8)
bool __thiscall winISteamUser_SteamUser023_BSetDurationControlOnlineState(winISteamUser_SteamUser023 *_this, EDurationControlOnlineState eNewState)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser023_BSetDurationControlOnlineState(_this->linux_side, eNewState);
}

extern vtable_ptr winISteamUser_SteamUser023_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser023,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAuthTicketForWebApi)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser023 *create_winISteamUser_SteamUser023(void *linux_side)
{
    winISteamUser_SteamUser023 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser023), "SteamUser023");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser023_vtable, 33, "SteamUser023");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser022.h"

typedef struct __winISteamUser_SteamUser022 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser022;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser022_GetHSteamUser(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser022_BLoggedOn(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser022_GetSteamID(winISteamUser_SteamUser022 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser022_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED, 32)
int __thiscall winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED(winISteamUser_SteamUser022 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED, 12)
void __thiscall winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED(winISteamUser_SteamUser022 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser022_TrackAppUsageEvent(winISteamUser_SteamUser022 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser022_GetUserDataFolder(winISteamUser_SteamUser022 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser022_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser022_StartVoiceRecording(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser022_StopVoiceRecording(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser022_GetAvailableVoice(winISteamUser_SteamUser022 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser022_GetVoice(winISteamUser_SteamUser022 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser022_DecompressVoice(winISteamUser_SteamUser022 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser022_GetVoiceOptimalSampleRate(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetAuthSessionTicket, 20)
HAuthTicket __thiscall winISteamUser_SteamUser022_GetAuthSessionTicket(winISteamUser_SteamUser022 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket, const SteamNetworkingIdentity * pSteamNetworkingIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser022_BeginAuthSession(winISteamUser_SteamUser022 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser022_EndAuthSession(winISteamUser_SteamUser022 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser022_CancelAuthTicket(winISteamUser_SteamUser022 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser022_UserHasLicenseForApp(winISteamUser_SteamUser022 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser022_BIsBehindNAT(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser022_AdvertiseGame(winISteamUser_SteamUser022 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser022_RequestEncryptedAppTicket(winISteamUser_SteamUser022 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser022_GetEncryptedAppTicket(winISteamUser_SteamUser022 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser022_GetGameBadgeLevel(winISteamUser_SteamUser022 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser022_GetPlayerSteamLevel(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetPlayerSteamLevel(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_RequestStoreAuthURL, 8)
SteamAPICall_t __thiscall winISteamUser_SteamUser022_RequestStoreAuthURL(winISteamUser_SteamUser022 *_this, const char * pchRedirectURL)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_RequestStoreAuthURL(_this->linux_side, pchRedirectURL);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneVerified, 4)
bool __thiscall winISteamUser_SteamUser022_BIsPhoneVerified(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BIsPhoneVerified(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsTwoFactorEnabled, 4)
bool __thiscall winISteamUser_SteamUser022_BIsTwoFactorEnabled(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BIsTwoFactorEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneIdentifying, 4)
bool __thiscall winISteamUser_SteamUser022_BIsPhoneIdentifying(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BIsPhoneIdentifying(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneRequiringVerification, 4)
bool __thiscall winISteamUser_SteamUser022_BIsPhoneRequiringVerification(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BIsPhoneRequiringVerification(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetMarketEligibility, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser022_GetMarketEligibility(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetMarketEligibility(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetDurationControl, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser022_GetDurationControl(winISteamUser_SteamUser022 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_GetDurationControl(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BSetDurationControlOnlineState, 8)
bool __thiscall winISteamUser_SteamUser022_BSetDurationControlOnlineState(winISteamUser_SteamUser022 *_this, EDurationControlOnlineState eNewState)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser022_BSetDurationControlOnlineState(_this->linux_side, eNewState);
}

extern vtable_ptr winISteamUser_SteamUser022_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser022,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser022 *create_winISteamUser_SteamUser022(void *linux_side)
{
    winISteamUser_SteamUser022 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser022), "SteamUser022");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser022_vtable, 32, "SteamUser022");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser021.h"

typedef struct __winISteamUser_SteamUser021 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser021;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser021_GetHSteamUser(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser021_BLoggedOn(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser021_GetSteamID(winISteamUser_SteamUser021 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser021_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED, 32)
int __thiscall winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED(winISteamUser_SteamUser021 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED, 12)
void __thiscall winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED(winISteamUser_SteamUser021 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser021_TrackAppUsageEvent(winISteamUser_SteamUser021 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser021_GetUserDataFolder(winISteamUser_SteamUser021 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser021_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser021_StartVoiceRecording(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser021_StopVoiceRecording(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser021_GetAvailableVoice(winISteamUser_SteamUser021 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser021_GetVoice(winISteamUser_SteamUser021 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser021_DecompressVoice(winISteamUser_SteamUser021 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser021_GetVoiceOptimalSampleRate(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser021_GetAuthSessionTicket(winISteamUser_SteamUser021 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser021_BeginAuthSession(winISteamUser_SteamUser021 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser021_EndAuthSession(winISteamUser_SteamUser021 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser021_CancelAuthTicket(winISteamUser_SteamUser021 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser021_UserHasLicenseForApp(winISteamUser_SteamUser021 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser021_BIsBehindNAT(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser021_AdvertiseGame(winISteamUser_SteamUser021 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser021_RequestEncryptedAppTicket(winISteamUser_SteamUser021 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser021_GetEncryptedAppTicket(winISteamUser_SteamUser021 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser021_GetGameBadgeLevel(winISteamUser_SteamUser021 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser021_GetPlayerSteamLevel(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetPlayerSteamLevel(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_RequestStoreAuthURL, 8)
SteamAPICall_t __thiscall winISteamUser_SteamUser021_RequestStoreAuthURL(winISteamUser_SteamUser021 *_this, const char * pchRedirectURL)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_RequestStoreAuthURL(_this->linux_side, pchRedirectURL);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneVerified, 4)
bool __thiscall winISteamUser_SteamUser021_BIsPhoneVerified(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BIsPhoneVerified(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsTwoFactorEnabled, 4)
bool __thiscall winISteamUser_SteamUser021_BIsTwoFactorEnabled(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BIsTwoFactorEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneIdentifying, 4)
bool __thiscall winISteamUser_SteamUser021_BIsPhoneIdentifying(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BIsPhoneIdentifying(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneRequiringVerification, 4)
bool __thiscall winISteamUser_SteamUser021_BIsPhoneRequiringVerification(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BIsPhoneRequiringVerification(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetMarketEligibility, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser021_GetMarketEligibility(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetMarketEligibility(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetDurationControl, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser021_GetDurationControl(winISteamUser_SteamUser021 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_GetDurationControl(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BSetDurationControlOnlineState, 8)
bool __thiscall winISteamUser_SteamUser021_BSetDurationControlOnlineState(winISteamUser_SteamUser021 *_this, EDurationControlOnlineState eNewState)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser021_BSetDurationControlOnlineState(_this->linux_side, eNewState);
}

extern vtable_ptr winISteamUser_SteamUser021_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser021,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser021 *create_winISteamUser_SteamUser021(void *linux_side)
{
    winISteamUser_SteamUser021 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser021), "SteamUser021");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser021_vtable, 32, "SteamUser021");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser020.h"

typedef struct __winISteamUser_SteamUser020 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser020;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser020_GetHSteamUser(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser020_BLoggedOn(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser020_GetSteamID(winISteamUser_SteamUser020 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser020_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser020_InitiateGameConnection(winISteamUser_SteamUser020 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser020_TerminateGameConnection(winISteamUser_SteamUser020 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser020_TrackAppUsageEvent(winISteamUser_SteamUser020 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser020_GetUserDataFolder(winISteamUser_SteamUser020 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser020_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser020_StartVoiceRecording(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser020_StopVoiceRecording(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser020_GetAvailableVoice(winISteamUser_SteamUser020 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser020_GetVoice(winISteamUser_SteamUser020 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser020_DecompressVoice(winISteamUser_SteamUser020 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser020_GetVoiceOptimalSampleRate(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser020_GetAuthSessionTicket(winISteamUser_SteamUser020 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser020_BeginAuthSession(winISteamUser_SteamUser020 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser020_EndAuthSession(winISteamUser_SteamUser020 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser020_CancelAuthTicket(winISteamUser_SteamUser020 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser020_UserHasLicenseForApp(winISteamUser_SteamUser020 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser020_BIsBehindNAT(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser020_AdvertiseGame(winISteamUser_SteamUser020 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser020_RequestEncryptedAppTicket(winISteamUser_SteamUser020 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser020_GetEncryptedAppTicket(winISteamUser_SteamUser020 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser020_GetGameBadgeLevel(winISteamUser_SteamUser020 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser020_GetPlayerSteamLevel(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetPlayerSteamLevel(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_RequestStoreAuthURL, 8)
SteamAPICall_t __thiscall winISteamUser_SteamUser020_RequestStoreAuthURL(winISteamUser_SteamUser020 *_this, const char * pchRedirectURL)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_RequestStoreAuthURL(_this->linux_side, pchRedirectURL);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneVerified, 4)
bool __thiscall winISteamUser_SteamUser020_BIsPhoneVerified(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BIsPhoneVerified(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsTwoFactorEnabled, 4)
bool __thiscall winISteamUser_SteamUser020_BIsTwoFactorEnabled(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BIsTwoFactorEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneIdentifying, 4)
bool __thiscall winISteamUser_SteamUser020_BIsPhoneIdentifying(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BIsPhoneIdentifying(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneRequiringVerification, 4)
bool __thiscall winISteamUser_SteamUser020_BIsPhoneRequiringVerification(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_BIsPhoneRequiringVerification(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetMarketEligibility, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser020_GetMarketEligibility(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetMarketEligibility(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetDurationControl, 4)
SteamAPICall_t __thiscall winISteamUser_SteamUser020_GetDurationControl(winISteamUser_SteamUser020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser020_GetDurationControl(_this->linux_side);
}

extern vtable_ptr winISteamUser_SteamUser020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser020,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetDurationControl)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser020 *create_winISteamUser_SteamUser020(void *linux_side)
{
    winISteamUser_SteamUser020 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser020), "SteamUser020");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser020_vtable, 31, "SteamUser020");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser019.h"

typedef struct __winISteamUser_SteamUser019 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser019;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser019_GetHSteamUser(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser019_BLoggedOn(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser019_GetSteamID(winISteamUser_SteamUser019 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser019_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser019_InitiateGameConnection(winISteamUser_SteamUser019 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser019_TerminateGameConnection(winISteamUser_SteamUser019 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser019_TrackAppUsageEvent(winISteamUser_SteamUser019 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser019_GetUserDataFolder(winISteamUser_SteamUser019 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser019_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser019_StartVoiceRecording(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser019_StopVoiceRecording(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser019_GetAvailableVoice(winISteamUser_SteamUser019 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser019_GetVoice(winISteamUser_SteamUser019 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser019_DecompressVoice(winISteamUser_SteamUser019 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser019_GetVoiceOptimalSampleRate(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser019_GetAuthSessionTicket(winISteamUser_SteamUser019 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser019_BeginAuthSession(winISteamUser_SteamUser019 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser019_EndAuthSession(winISteamUser_SteamUser019 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser019_CancelAuthTicket(winISteamUser_SteamUser019 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser019_UserHasLicenseForApp(winISteamUser_SteamUser019 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser019_BIsBehindNAT(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser019_AdvertiseGame(winISteamUser_SteamUser019 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser019_RequestEncryptedAppTicket(winISteamUser_SteamUser019 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser019_GetEncryptedAppTicket(winISteamUser_SteamUser019 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser019_GetGameBadgeLevel(winISteamUser_SteamUser019 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser019_GetPlayerSteamLevel(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_GetPlayerSteamLevel(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_RequestStoreAuthURL, 8)
SteamAPICall_t __thiscall winISteamUser_SteamUser019_RequestStoreAuthURL(winISteamUser_SteamUser019 *_this, const char * pchRedirectURL)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_RequestStoreAuthURL(_this->linux_side, pchRedirectURL);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneVerified, 4)
bool __thiscall winISteamUser_SteamUser019_BIsPhoneVerified(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BIsPhoneVerified(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsTwoFactorEnabled, 4)
bool __thiscall winISteamUser_SteamUser019_BIsTwoFactorEnabled(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BIsTwoFactorEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneIdentifying, 4)
bool __thiscall winISteamUser_SteamUser019_BIsPhoneIdentifying(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BIsPhoneIdentifying(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneRequiringVerification, 4)
bool __thiscall winISteamUser_SteamUser019_BIsPhoneRequiringVerification(winISteamUser_SteamUser019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_BIsPhoneRequiringVerification(_this->linux_side);
}

extern vtable_ptr winISteamUser_SteamUser019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser019,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneRequiringVerification)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser019 *create_winISteamUser_SteamUser019(void *linux_side)
{
    winISteamUser_SteamUser019 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser019), "SteamUser019");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser019_vtable, 29, "SteamUser019");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser018.h"

typedef struct __winISteamUser_SteamUser018 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser018;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser018_GetHSteamUser(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser018_BLoggedOn(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser018_GetSteamID(winISteamUser_SteamUser018 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser018_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser018_InitiateGameConnection(winISteamUser_SteamUser018 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser018_TerminateGameConnection(winISteamUser_SteamUser018 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser018_TrackAppUsageEvent(winISteamUser_SteamUser018 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser018_GetUserDataFolder(winISteamUser_SteamUser018 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser018_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser018_StartVoiceRecording(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser018_StopVoiceRecording(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser018_GetAvailableVoice(winISteamUser_SteamUser018 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser018_GetVoice(winISteamUser_SteamUser018 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed, void * pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 * nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser018_DecompressVoice(winISteamUser_SteamUser018 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser018_GetVoiceOptimalSampleRate(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser018_GetAuthSessionTicket(winISteamUser_SteamUser018 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser018_BeginAuthSession(winISteamUser_SteamUser018 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser018_EndAuthSession(winISteamUser_SteamUser018 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser018_CancelAuthTicket(winISteamUser_SteamUser018 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser018_UserHasLicenseForApp(winISteamUser_SteamUser018 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser018_BIsBehindNAT(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser018_AdvertiseGame(winISteamUser_SteamUser018 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser018_RequestEncryptedAppTicket(winISteamUser_SteamUser018 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser018_GetEncryptedAppTicket(winISteamUser_SteamUser018 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser018_GetGameBadgeLevel(winISteamUser_SteamUser018 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser018_GetPlayerSteamLevel(winISteamUser_SteamUser018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_GetPlayerSteamLevel(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_RequestStoreAuthURL, 8)
SteamAPICall_t __thiscall winISteamUser_SteamUser018_RequestStoreAuthURL(winISteamUser_SteamUser018 *_this, const char * pchRedirectURL)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_RequestStoreAuthURL(_this->linux_side, pchRedirectURL);
}

extern vtable_ptr winISteamUser_SteamUser018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser018,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_RequestStoreAuthURL)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser018 *create_winISteamUser_SteamUser018(void *linux_side)
{
    winISteamUser_SteamUser018 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser018), "SteamUser018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser018_vtable, 25, "SteamUser018");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser017.h"

typedef struct __winISteamUser_SteamUser017 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser017;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser017_GetHSteamUser(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser017_BLoggedOn(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser017_GetSteamID(winISteamUser_SteamUser017 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser017_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser017_InitiateGameConnection(winISteamUser_SteamUser017 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser017_TerminateGameConnection(winISteamUser_SteamUser017 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser017_TrackAppUsageEvent(winISteamUser_SteamUser017 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser017_GetUserDataFolder(winISteamUser_SteamUser017 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser017_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser017_StartVoiceRecording(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser017_StopVoiceRecording(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser017_GetAvailableVoice(winISteamUser_SteamUser017 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser017_GetVoice(winISteamUser_SteamUser017 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed, void * pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 * nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser017_DecompressVoice(winISteamUser_SteamUser017 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser017_GetVoiceOptimalSampleRate(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser017_GetAuthSessionTicket(winISteamUser_SteamUser017 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser017_BeginAuthSession(winISteamUser_SteamUser017 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser017_EndAuthSession(winISteamUser_SteamUser017 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser017_CancelAuthTicket(winISteamUser_SteamUser017 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser017_UserHasLicenseForApp(winISteamUser_SteamUser017 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser017_BIsBehindNAT(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser017_AdvertiseGame(winISteamUser_SteamUser017 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser017_RequestEncryptedAppTicket(winISteamUser_SteamUser017 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser017_GetEncryptedAppTicket(winISteamUser_SteamUser017 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetGameBadgeLevel, 12)
int __thiscall winISteamUser_SteamUser017_GetGameBadgeLevel(winISteamUser_SteamUser017 *_this, int nSeries, bool bFoil)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetGameBadgeLevel(_this->linux_side, nSeries, bFoil);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetPlayerSteamLevel, 4)
int __thiscall winISteamUser_SteamUser017_GetPlayerSteamLevel(winISteamUser_SteamUser017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_GetPlayerSteamLevel(_this->linux_side);
}

extern vtable_ptr winISteamUser_SteamUser017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser017,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetPlayerSteamLevel)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser017 *create_winISteamUser_SteamUser017(void *linux_side)
{
    winISteamUser_SteamUser017 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser017), "SteamUser017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser017_vtable, 24, "SteamUser017");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser016.h"

typedef struct __winISteamUser_SteamUser016 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser016;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser016_GetHSteamUser(winISteamUser_SteamUser016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser016_BLoggedOn(winISteamUser_SteamUser016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser016_GetSteamID(winISteamUser_SteamUser016 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser016_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser016_InitiateGameConnection(winISteamUser_SteamUser016 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser016_TerminateGameConnection(winISteamUser_SteamUser016 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser016_TrackAppUsageEvent(winISteamUser_SteamUser016 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser016_GetUserDataFolder(winISteamUser_SteamUser016 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser016_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser016_StartVoiceRecording(winISteamUser_SteamUser016 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser016_StopVoiceRecording(winISteamUser_SteamUser016 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetAvailableVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser016_GetAvailableVoice(winISteamUser_SteamUser016 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoice, 40)
EVoiceResult __thiscall winISteamUser_SteamUser016_GetVoice(winISteamUser_SteamUser016 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed, void * pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 * nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser016_DecompressVoice(winISteamUser_SteamUser016 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser016_GetVoiceOptimalSampleRate(winISteamUser_SteamUser016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser016_GetAuthSessionTicket(winISteamUser_SteamUser016 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser016_BeginAuthSession(winISteamUser_SteamUser016 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser016_EndAuthSession(winISteamUser_SteamUser016 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser016_CancelAuthTicket(winISteamUser_SteamUser016 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser016_UserHasLicenseForApp(winISteamUser_SteamUser016 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser016_BIsBehindNAT(winISteamUser_SteamUser016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser016_AdvertiseGame(winISteamUser_SteamUser016 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser016_RequestEncryptedAppTicket(winISteamUser_SteamUser016 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser016_GetEncryptedAppTicket(winISteamUser_SteamUser016 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

extern vtable_ptr winISteamUser_SteamUser016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser016,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser016 *create_winISteamUser_SteamUser016(void *linux_side)
{
    winISteamUser_SteamUser016 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser016), "SteamUser016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser016_vtable, 22, "SteamUser016");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser015.h"

typedef struct __winISteamUser_SteamUser015 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser015;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser015_GetHSteamUser(winISteamUser_SteamUser015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser015_BLoggedOn(winISteamUser_SteamUser015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser015_GetSteamID(winISteamUser_SteamUser015 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser015_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser015_InitiateGameConnection(winISteamUser_SteamUser015 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser015_TerminateGameConnection(winISteamUser_SteamUser015 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser015_TrackAppUsageEvent(winISteamUser_SteamUser015 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser015_GetUserDataFolder(winISteamUser_SteamUser015 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser015_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser015_StartVoiceRecording(winISteamUser_SteamUser015 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser015_StopVoiceRecording(winISteamUser_SteamUser015 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetAvailableVoice, 12)
EVoiceResult __thiscall winISteamUser_SteamUser015_GetAvailableVoice(winISteamUser_SteamUser015 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetVoice, 36)
EVoiceResult __thiscall winISteamUser_SteamUser015_GetVoice(winISteamUser_SteamUser015 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed, void * pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 * nUncompressBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_DecompressVoice, 28)
EVoiceResult __thiscall winISteamUser_SteamUser015_DecompressVoice(winISteamUser_SteamUser015 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetVoiceOptimalSampleRate, 4)
uint32 __thiscall winISteamUser_SteamUser015_GetVoiceOptimalSampleRate(winISteamUser_SteamUser015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser015_GetAuthSessionTicket(winISteamUser_SteamUser015 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser015_BeginAuthSession(winISteamUser_SteamUser015 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser015_EndAuthSession(winISteamUser_SteamUser015 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser015_CancelAuthTicket(winISteamUser_SteamUser015 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser015_UserHasLicenseForApp(winISteamUser_SteamUser015 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser015_BIsBehindNAT(winISteamUser_SteamUser015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser015_AdvertiseGame(winISteamUser_SteamUser015 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser015_RequestEncryptedAppTicket(winISteamUser_SteamUser015 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser015_GetEncryptedAppTicket(winISteamUser_SteamUser015 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser015_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

extern vtable_ptr winISteamUser_SteamUser015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser015,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser015 *create_winISteamUser_SteamUser015(void *linux_side)
{
    winISteamUser_SteamUser015 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser015), "SteamUser015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser015_vtable, 22, "SteamUser015");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser014.h"

typedef struct __winISteamUser_SteamUser014 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser014;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser014_GetHSteamUser(winISteamUser_SteamUser014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser014_BLoggedOn(winISteamUser_SteamUser014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser014_GetSteamID(winISteamUser_SteamUser014 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser014_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser014_InitiateGameConnection(winISteamUser_SteamUser014 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser014_TerminateGameConnection(winISteamUser_SteamUser014 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser014_TrackAppUsageEvent(winISteamUser_SteamUser014 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser014_GetUserDataFolder(winISteamUser_SteamUser014 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser014_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser014_StartVoiceRecording(winISteamUser_SteamUser014 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser014_StopVoiceRecording(winISteamUser_SteamUser014 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetAvailableVoice, 12)
EVoiceResult __thiscall winISteamUser_SteamUser014_GetAvailableVoice(winISteamUser_SteamUser014 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetVoice, 36)
EVoiceResult __thiscall winISteamUser_SteamUser014_GetVoice(winISteamUser_SteamUser014 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed, void * pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 * nUncompressBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_DecompressVoice, 24)
EVoiceResult __thiscall winISteamUser_SteamUser014_DecompressVoice(winISteamUser_SteamUser014 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser014_GetAuthSessionTicket(winISteamUser_SteamUser014 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser014_BeginAuthSession(winISteamUser_SteamUser014 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser014_EndAuthSession(winISteamUser_SteamUser014 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser014_CancelAuthTicket(winISteamUser_SteamUser014 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser014_UserHasLicenseForApp(winISteamUser_SteamUser014 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BIsBehindNAT, 4)
bool __thiscall winISteamUser_SteamUser014_BIsBehindNAT(winISteamUser_SteamUser014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_BIsBehindNAT(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_AdvertiseGame, 20)
void __thiscall winISteamUser_SteamUser014_AdvertiseGame(winISteamUser_SteamUser014 *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_AdvertiseGame(_this->linux_side, steamIDGameServer, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_RequestEncryptedAppTicket, 12)
SteamAPICall_t __thiscall winISteamUser_SteamUser014_RequestEncryptedAppTicket(winISteamUser_SteamUser014 *_this, void * pDataToInclude, int cbDataToInclude)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_RequestEncryptedAppTicket(_this->linux_side, pDataToInclude, cbDataToInclude);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetEncryptedAppTicket, 16)
bool __thiscall winISteamUser_SteamUser014_GetEncryptedAppTicket(winISteamUser_SteamUser014 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_GetEncryptedAppTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

extern vtable_ptr winISteamUser_SteamUser014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser014,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser014 *create_winISteamUser_SteamUser014(void *linux_side)
{
    winISteamUser_SteamUser014 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser014), "SteamUser014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser014_vtable, 21, "SteamUser014");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser013.h"

typedef struct __winISteamUser_SteamUser013 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser013;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser013_GetHSteamUser(winISteamUser_SteamUser013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser013_BLoggedOn(winISteamUser_SteamUser013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser013_GetSteamID(winISteamUser_SteamUser013 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser013_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser013_InitiateGameConnection(winISteamUser_SteamUser013 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser013_TerminateGameConnection(winISteamUser_SteamUser013 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser013_TrackAppUsageEvent(winISteamUser_SteamUser013 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser013_GetUserDataFolder(winISteamUser_SteamUser013 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser013_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser013_StartVoiceRecording(winISteamUser_SteamUser013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser013_StopVoiceRecording(winISteamUser_SteamUser013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetAvailableVoice, 12)
EVoiceResult __thiscall winISteamUser_SteamUser013_GetAvailableVoice(winISteamUser_SteamUser013 *_this, uint32 * pcbCompressed, uint32 * pcbUncompressed)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_GetAvailableVoice(_this->linux_side, pcbCompressed, pcbUncompressed);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetVoice, 36)
EVoiceResult __thiscall winISteamUser_SteamUser013_GetVoice(winISteamUser_SteamUser013 *_this, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed, void * pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 * nUncompressBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_GetVoice(_this->linux_side, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_DecompressVoice, 24)
EVoiceResult __thiscall winISteamUser_SteamUser013_DecompressVoice(winISteamUser_SteamUser013 *_this, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser013_GetAuthSessionTicket(winISteamUser_SteamUser013 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser013_BeginAuthSession(winISteamUser_SteamUser013 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser013_EndAuthSession(winISteamUser_SteamUser013 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser013_CancelAuthTicket(winISteamUser_SteamUser013 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser013_UserHasLicenseForApp(winISteamUser_SteamUser013 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

extern vtable_ptr winISteamUser_SteamUser013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser013,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser013 *create_winISteamUser_SteamUser013(void *linux_side)
{
    winISteamUser_SteamUser013 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser013), "SteamUser013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser013_vtable, 17, "SteamUser013");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser012.h"

typedef struct __winISteamUser_SteamUser012 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser012;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser012_GetHSteamUser(winISteamUser_SteamUser012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser012_BLoggedOn(winISteamUser_SteamUser012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser012_GetSteamID(winISteamUser_SteamUser012 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser012_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser012_InitiateGameConnection(winISteamUser_SteamUser012 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser012_TerminateGameConnection(winISteamUser_SteamUser012 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser012_TrackAppUsageEvent(winISteamUser_SteamUser012 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser012_GetUserDataFolder(winISteamUser_SteamUser012 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser012_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser012_StartVoiceRecording(winISteamUser_SteamUser012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser012_StopVoiceRecording(winISteamUser_SteamUser012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetCompressedVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser012_GetCompressedVoice(winISteamUser_SteamUser012 *_this, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_GetCompressedVoice(_this->linux_side, pDestBuffer, cbDestBufferSize, nBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_DecompressVoice, 24)
EVoiceResult __thiscall winISteamUser_SteamUser012_DecompressVoice(winISteamUser_SteamUser012 *_this, void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetAuthSessionTicket, 16)
HAuthTicket __thiscall winISteamUser_SteamUser012_GetAuthSessionTicket(winISteamUser_SteamUser012 *_this, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_GetAuthSessionTicket(_this->linux_side, pTicket, cbMaxTicket, pcbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_BeginAuthSession, 20)
EBeginAuthSessionResult __thiscall winISteamUser_SteamUser012_BeginAuthSession(winISteamUser_SteamUser012 *_this, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_BeginAuthSession(_this->linux_side, pAuthTicket, cbAuthTicket, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_EndAuthSession, 12)
void __thiscall winISteamUser_SteamUser012_EndAuthSession(winISteamUser_SteamUser012 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_EndAuthSession(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_CancelAuthTicket, 8)
void __thiscall winISteamUser_SteamUser012_CancelAuthTicket(winISteamUser_SteamUser012 *_this, HAuthTicket hAuthTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_CancelAuthTicket(_this->linux_side, hAuthTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_UserHasLicenseForApp, 16)
EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser012_UserHasLicenseForApp(winISteamUser_SteamUser012 *_this, CSteamID steamID, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_UserHasLicenseForApp(_this->linux_side, steamID, appID);
}

extern vtable_ptr winISteamUser_SteamUser012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser012,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetCompressedVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser012 *create_winISteamUser_SteamUser012(void *linux_side)
{
    winISteamUser_SteamUser012 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser012), "SteamUser012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser012_vtable, 16, "SteamUser012");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser011.h"

typedef struct __winISteamUser_SteamUser011 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser011;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser011_GetHSteamUser(winISteamUser_SteamUser011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser011_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser011_BLoggedOn(winISteamUser_SteamUser011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser011_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser011_GetSteamID(winISteamUser_SteamUser011 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser011_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser011_InitiateGameConnection(winISteamUser_SteamUser011 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser011_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser011_TerminateGameConnection(winISteamUser_SteamUser011 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser011_TrackAppUsageEvent(winISteamUser_SteamUser011 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetUserDataFolder, 12)
bool __thiscall winISteamUser_SteamUser011_GetUserDataFolder(winISteamUser_SteamUser011 *_this, char * pchBuffer, int cubBuffer)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUser_SteamUser011_GetUserDataFolder(_this->linux_side, pchBuffer, cubBuffer);
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_StartVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser011_StartVoiceRecording(winISteamUser_SteamUser011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_StartVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_StopVoiceRecording, 4)
void __thiscall winISteamUser_SteamUser011_StopVoiceRecording(winISteamUser_SteamUser011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_StopVoiceRecording(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetCompressedVoice, 16)
EVoiceResult __thiscall winISteamUser_SteamUser011_GetCompressedVoice(winISteamUser_SteamUser011 *_this, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser011_GetCompressedVoice(_this->linux_side, pDestBuffer, cbDestBufferSize, nBytesWritten);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_DecompressVoice, 24)
EVoiceResult __thiscall winISteamUser_SteamUser011_DecompressVoice(winISteamUser_SteamUser011 *_this, void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser011_DecompressVoice(_this->linux_side, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
}

extern vtable_ptr winISteamUser_SteamUser011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser011,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetCompressedVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_DecompressVoice)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser011 *create_winISteamUser_SteamUser011(void *linux_side)
{
    winISteamUser_SteamUser011 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser011), "SteamUser011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser011_vtable, 11, "SteamUser011");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser010.h"

typedef struct __winISteamUser_SteamUser010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser010;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser010_GetHSteamUser(winISteamUser_SteamUser010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser010_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser010_BLoggedOn(winISteamUser_SteamUser010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser010_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser010_GetSteamID(winISteamUser_SteamUser010 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser010_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_InitiateGameConnection, 32)
int __thiscall winISteamUser_SteamUser010_InitiateGameConnection(winISteamUser_SteamUser010 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser010_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser010_TerminateGameConnection(winISteamUser_SteamUser010 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser010_TrackAppUsageEvent(winISteamUser_SteamUser010 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

extern vtable_ptr winISteamUser_SteamUser010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser010,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_TrackAppUsageEvent)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser010 *create_winISteamUser_SteamUser010(void *linux_side)
{
    winISteamUser_SteamUser010 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser010), "SteamUser010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser010_vtable, 6, "SteamUser010");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser009.h"

typedef struct __winISteamUser_SteamUser009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser009;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser009_GetHSteamUser(winISteamUser_SteamUser009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser009_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser009_BLoggedOn(winISteamUser_SteamUser009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser009_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser009_GetSteamID(winISteamUser_SteamUser009 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser009_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_InitiateGameConnection, 40)
int __thiscall winISteamUser_SteamUser009_InitiateGameConnection(winISteamUser_SteamUser009 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser009_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, gameID, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser009_TerminateGameConnection(winISteamUser_SteamUser009 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser009_TrackAppUsageEvent(winISteamUser_SteamUser009 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_RefreshSteam2Login, 4)
void __thiscall winISteamUser_SteamUser009_RefreshSteam2Login(winISteamUser_SteamUser009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_RefreshSteam2Login(_this->linux_side);
}

extern vtable_ptr winISteamUser_SteamUser009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser009,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser009 *create_winISteamUser_SteamUser009(void *linux_side)
{
    winISteamUser_SteamUser009 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser009), "SteamUser009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser009_vtable, 7, "SteamUser009");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser008.h"

typedef struct __winISteamUser_SteamUser008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser008;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser008_GetHSteamUser(winISteamUser_SteamUser008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser008_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser008_BLoggedOn(winISteamUser_SteamUser008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser008_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser008_GetSteamID(winISteamUser_SteamUser008 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser008_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_InitiateGameConnection, 48)
int __thiscall winISteamUser_SteamUser008_InitiateGameConnection(winISteamUser_SteamUser008 *_this, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void * pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser008_InitiateGameConnection(_this->linux_side, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure, pvSteam2GetEncryptionKey, cbSteam2GetEncryptionKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser008_TerminateGameConnection(winISteamUser_SteamUser008 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser008_TrackAppUsageEvent(winISteamUser_SteamUser008 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_RefreshSteam2Login, 4)
void __thiscall winISteamUser_SteamUser008_RefreshSteam2Login(winISteamUser_SteamUser008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_RefreshSteam2Login(_this->linux_side);
}

extern vtable_ptr winISteamUser_SteamUser008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser008,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser008 *create_winISteamUser_SteamUser008(void *linux_side)
{
    winISteamUser_SteamUser008 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser008), "SteamUser008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser008_vtable, 7, "SteamUser008");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser007.h"

typedef struct __winISteamUser_SteamUser007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser007;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser007_GetHSteamUser(winISteamUser_SteamUser007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_LogOn, 12)
void __thiscall winISteamUser_SteamUser007_LogOn(winISteamUser_SteamUser007 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_LogOn(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_LogOff, 4)
void __thiscall winISteamUser_SteamUser007_LogOff(winISteamUser_SteamUser007 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser007_BLoggedOn(winISteamUser_SteamUser007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser007_GetSteamID(winISteamUser_SteamUser007 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser007_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_SetRegistryString, 16)
bool __thiscall winISteamUser_SteamUser007_SetRegistryString(winISteamUser_SteamUser007 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_SetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetRegistryString, 20)
bool __thiscall winISteamUser_SteamUser007_GetRegistryString(winISteamUser_SteamUser007 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, char * pchValue, int cbValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_GetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue, cbValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_SetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser007_SetRegistryInt(winISteamUser_SteamUser007 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int iValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_SetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, iValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser007_GetRegistryInt(winISteamUser_SteamUser007 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int * piValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_GetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, piValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_InitiateGameConnection, 48)
int __thiscall winISteamUser_SteamUser007_InitiateGameConnection(winISteamUser_SteamUser007 *_this, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void * pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser007_InitiateGameConnection(_this->linux_side, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure, pvSteam2GetEncryptionKey, cbSteam2GetEncryptionKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser007_TerminateGameConnection(winISteamUser_SteamUser007 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser007_TrackAppUsageEvent(winISteamUser_SteamUser007 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_RefreshSteam2Login, 4)
void __thiscall winISteamUser_SteamUser007_RefreshSteam2Login(winISteamUser_SteamUser007 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_RefreshSteam2Login(_this->linux_side);
}

extern vtable_ptr winISteamUser_SteamUser007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser007,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser007 *create_winISteamUser_SteamUser007(void *linux_side)
{
    winISteamUser_SteamUser007 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser007), "SteamUser007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser007_vtable, 13, "SteamUser007");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser006.h"

typedef struct __winISteamUser_SteamUser006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser006;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser006_GetHSteamUser(winISteamUser_SteamUser006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_LogOn, 12)
void __thiscall winISteamUser_SteamUser006_LogOn(winISteamUser_SteamUser006 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_LogOn(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_LogOff, 4)
void __thiscall winISteamUser_SteamUser006_LogOff(winISteamUser_SteamUser006 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser006_BLoggedOn(winISteamUser_SteamUser006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser006_GetSteamID(winISteamUser_SteamUser006 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser006_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_SetRegistryString, 16)
bool __thiscall winISteamUser_SteamUser006_SetRegistryString(winISteamUser_SteamUser006 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_SetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetRegistryString, 20)
bool __thiscall winISteamUser_SteamUser006_GetRegistryString(winISteamUser_SteamUser006 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, char * pchValue, int cbValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_GetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue, cbValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_SetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser006_SetRegistryInt(winISteamUser_SteamUser006 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int iValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_SetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, iValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser006_GetRegistryInt(winISteamUser_SteamUser006 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int * piValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_GetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, piValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_InitiateGameConnection, 40)
int __thiscall winISteamUser_SteamUser006_InitiateGameConnection(winISteamUser_SteamUser006 *_this, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser006_InitiateGameConnection(_this->linux_side, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser006_TerminateGameConnection(winISteamUser_SteamUser006 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser006_TrackAppUsageEvent(winISteamUser_SteamUser006 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

extern vtable_ptr winISteamUser_SteamUser006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser006,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_TrackAppUsageEvent)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser006 *create_winISteamUser_SteamUser006(void *linux_side)
{
    winISteamUser_SteamUser006 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser006), "SteamUser006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser006_vtable, 12, "SteamUser006");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser005.h"

typedef struct __winISteamUser_SteamUser005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser005;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser005_GetHSteamUser(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_LogOn, 12)
void __thiscall winISteamUser_SteamUser005_LogOn(winISteamUser_SteamUser005 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_LogOn(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_LogOff, 4)
void __thiscall winISteamUser_SteamUser005_LogOff(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser005_BLoggedOn(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetLogonState, 4)
ELogonState __thiscall winISteamUser_SteamUser005_GetLogonState(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetLogonState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_BConnected, 4)
bool __thiscall winISteamUser_SteamUser005_BConnected(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_BConnected(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser005_GetSteamID(winISteamUser_SteamUser005 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser005_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_IsVACBanned, 8)
bool __thiscall winISteamUser_SteamUser005_IsVACBanned(winISteamUser_SteamUser005 *_this, int nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_IsVACBanned(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RequireShowVACBannedMessage, 8)
bool __thiscall winISteamUser_SteamUser005_RequireShowVACBannedMessage(winISteamUser_SteamUser005 *_this, int nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_RequireShowVACBannedMessage(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AcknowledgeVACBanning, 8)
void __thiscall winISteamUser_SteamUser005_AcknowledgeVACBanning(winISteamUser_SteamUser005 *_this, int nAppID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AcknowledgeVACBanning(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetSteam2Ticket, 12)
void __thiscall winISteamUser_SteamUser005_SetSteam2Ticket(winISteamUser_SteamUser005 *_this, uint8 * pubTicket, int cubTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetSteam2Ticket(_this->linux_side, pubTicket, cubTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AddServerNetAddress, 12)
void __thiscall winISteamUser_SteamUser005_AddServerNetAddress(winISteamUser_SteamUser005 *_this, uint32 unIP, uint16 unPort)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AddServerNetAddress(_this->linux_side, unIP, unPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetEmail, 8)
bool __thiscall winISteamUser_SteamUser005_SetEmail(winISteamUser_SteamUser005 *_this, const char * pchEmail)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_SetEmail(_this->linux_side, pchEmail);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetRegistryString, 16)
bool __thiscall winISteamUser_SteamUser005_SetRegistryString(winISteamUser_SteamUser005 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_SetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetRegistryString, 20)
bool __thiscall winISteamUser_SteamUser005_GetRegistryString(winISteamUser_SteamUser005 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, char * pchValue, int cbValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue, cbValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser005_SetRegistryInt(winISteamUser_SteamUser005 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int iValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_SetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, iValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser005_GetRegistryInt(winISteamUser_SteamUser005 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int * piValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, piValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_InitiateGameConnection, 40)
int __thiscall winISteamUser_SteamUser005_InitiateGameConnection(winISteamUser_SteamUser005 *_this, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_InitiateGameConnection(_this->linux_side, pBlob, cbMaxBlob, steamID, gameID, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser005_TerminateGameConnection(winISteamUser_SteamUser005 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination, 4)
void __thiscall winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_IsPrimaryChatDestination, 4)
bool __thiscall winISteamUser_SteamUser005_IsPrimaryChatDestination(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_IsPrimaryChatDestination(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RequestLegacyCDKey, 8)
void __thiscall winISteamUser_SteamUser005_RequestLegacyCDKey(winISteamUser_SteamUser005 *_this, uint32 nAppID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_RequestLegacyCDKey(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SendGuestPassByEmail, 20)
bool __thiscall winISteamUser_SteamUser005_SendGuestPassByEmail(winISteamUser_SteamUser005 *_this, const char * pchEmailAccount, GID_t gidGuestPassID, bool bResending)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_SendGuestPassByEmail(_this->linux_side, pchEmailAccount, gidGuestPassID, bResending);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SendGuestPassByAccountID, 20)
bool __thiscall winISteamUser_SteamUser005_SendGuestPassByAccountID(winISteamUser_SteamUser005 *_this, uint32 uAccountID, GID_t gidGuestPassID, bool bResending)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_SendGuestPassByAccountID(_this->linux_side, uAccountID, gidGuestPassID, bResending);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AckGuestPass, 8)
bool __thiscall winISteamUser_SteamUser005_AckGuestPass(winISteamUser_SteamUser005 *_this, const char * pchGuestPassCode)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_AckGuestPass(_this->linux_side, pchGuestPassCode);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RedeemGuestPass, 8)
bool __thiscall winISteamUser_SteamUser005_RedeemGuestPass(winISteamUser_SteamUser005 *_this, const char * pchGuestPassCode)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_RedeemGuestPass(_this->linux_side, pchGuestPassCode);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToGiveCount, 4)
uint32 __thiscall winISteamUser_SteamUser005_GetGuestPassToGiveCount(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassToGiveCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemCount, 4)
uint32 __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemCount(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassToRedeemCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassLastUpdateTime, 4)
RTime32 __thiscall winISteamUser_SteamUser005_GetGuestPassLastUpdateTime(winISteamUser_SteamUser005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToGiveInfo, 40)
bool __thiscall winISteamUser_SteamUser005_GetGuestPassToGiveInfo(winISteamUser_SteamUser005 *_this, uint32 nPassIndex, GID_t * pgidGuestPassID, PackageId_t * pnPackageID, RTime32 * pRTime32Created, RTime32 * pRTime32Expiration, RTime32 * pRTime32Sent, RTime32 * pRTime32Redeemed, char * pchRecipientAddress, int cRecipientAddressSize)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassToGiveInfo(_this->linux_side, nPassIndex, pgidGuestPassID, pnPackageID, pRTime32Created, pRTime32Expiration, pRTime32Sent, pRTime32Redeemed, pchRecipientAddress, cRecipientAddressSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemInfo, 32)
bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemInfo(winISteamUser_SteamUser005 *_this, uint32 nPassIndex, GID_t * pgidGuestPassID, PackageId_t * pnPackageID, RTime32 * pRTime32Created, RTime32 * pRTime32Expiration, RTime32 * pRTime32Sent, RTime32 * pRTime32Redeemed)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo(_this->linux_side, nPassIndex, pgidGuestPassID, pnPackageID, pRTime32Created, pRTime32Expiration, pRTime32Sent, pRTime32Redeemed);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress, 16)
bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(winISteamUser_SteamUser005 *_this, uint32 nPassIndex, char * pchSenderAddress, int cSenderAddressSize)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(_this->linux_side, nPassIndex, pchSenderAddress, cSenderAddressSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName, 16)
bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(winISteamUser_SteamUser005 *_this, uint32 nPassIndex, char * pchSenderName, int cSenderNameSize)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(_this->linux_side, nPassIndex, pchSenderName, cSenderNameSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AcknowledgeMessageByGID, 8)
void __thiscall winISteamUser_SteamUser005_AcknowledgeMessageByGID(winISteamUser_SteamUser005 *_this, const char * pchMessageGID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AcknowledgeMessageByGID(_this->linux_side, pchMessageGID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetLanguage, 8)
bool __thiscall winISteamUser_SteamUser005_SetLanguage(winISteamUser_SteamUser005 *_this, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser005_SetLanguage(_this->linux_side, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_TrackAppUsageEvent, 20)
void __thiscall winISteamUser_SteamUser005_TrackAppUsageEvent(winISteamUser_SteamUser005 *_this, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_TrackAppUsageEvent(_this->linux_side, gameID, eAppUsageEvent, pchExtraInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetAccountName, 8)
void __thiscall winISteamUser_SteamUser005_SetAccountName(winISteamUser_SteamUser005 *_this, const char * pchAccountName)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetAccountName(_this->linux_side, pchAccountName);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetPassword, 8)
void __thiscall winISteamUser_SteamUser005_SetPassword(winISteamUser_SteamUser005 *_this, const char * pchPassword)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetPassword(_this->linux_side, pchPassword);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetAccountCreationTime, 8)
void __thiscall winISteamUser_SteamUser005_SetAccountCreationTime(winISteamUser_SteamUser005 *_this, RTime32 rt)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetAccountCreationTime(_this->linux_side, rt);
}

extern vtable_ptr winISteamUser_SteamUser005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser005,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetLogonState)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_BConnected)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_IsVACBanned)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RequireShowVACBannedMessage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AcknowledgeVACBanning)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetSteam2Ticket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AddServerNetAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_IsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RequestLegacyCDKey)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SendGuestPassByEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SendGuestPassByAccountID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AckGuestPass)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RedeemGuestPass)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToGiveCount)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemCount)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassLastUpdateTime)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToGiveInfo)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemInfo)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AcknowledgeMessageByGID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetAccountName)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetPassword)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetAccountCreationTime)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser005 *create_winISteamUser_SteamUser005(void *linux_side)
{
    winISteamUser_SteamUser005 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser005), "SteamUser005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser005_vtable, 39, "SteamUser005");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUser_SteamUser004.h"

typedef struct __winISteamUser_SteamUser004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUser_SteamUser004;

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetHSteamUser, 4)
HSteamUser __thiscall winISteamUser_SteamUser004_GetHSteamUser(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_GetHSteamUser(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_LogOn, 12)
void __thiscall winISteamUser_SteamUser004_LogOn(winISteamUser_SteamUser004 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_LogOn(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_LogOff, 4)
void __thiscall winISteamUser_SteamUser004_LogOff(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_LogOff(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_BLoggedOn, 4)
bool __thiscall winISteamUser_SteamUser004_BLoggedOn(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_BLoggedOn(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetLogonState, 4)
ELogonState __thiscall winISteamUser_SteamUser004_GetLogonState(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_GetLogonState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_BConnected, 4)
bool __thiscall winISteamUser_SteamUser004_BConnected(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_BConnected(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetSteamID, 8)
CSteamID *__thiscall winISteamUser_SteamUser004_GetSteamID(winISteamUser_SteamUser004 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamUser_SteamUser004_GetSteamID(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_IsVACBanned, 8)
bool __thiscall winISteamUser_SteamUser004_IsVACBanned(winISteamUser_SteamUser004 *_this, int nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_IsVACBanned(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RequireShowVACBannedMessage, 8)
bool __thiscall winISteamUser_SteamUser004_RequireShowVACBannedMessage(winISteamUser_SteamUser004 *_this, int nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_RequireShowVACBannedMessage(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_AcknowledgeVACBanning, 8)
void __thiscall winISteamUser_SteamUser004_AcknowledgeVACBanning(winISteamUser_SteamUser004 *_this, int nGameID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_AcknowledgeVACBanning(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_NClientGameIDAdd, 8)
int __thiscall winISteamUser_SteamUser004_NClientGameIDAdd(winISteamUser_SteamUser004 *_this, int nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_NClientGameIDAdd(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RemoveClientGame, 8)
void __thiscall winISteamUser_SteamUser004_RemoveClientGame(winISteamUser_SteamUser004 *_this, int nClientGameID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RemoveClientGame(_this->linux_side, nClientGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetClientGameServer, 16)
void __thiscall winISteamUser_SteamUser004_SetClientGameServer(winISteamUser_SteamUser004 *_this, int nClientGameID, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetClientGameServer(_this->linux_side, nClientGameID, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetSteam2Ticket, 12)
void __thiscall winISteamUser_SteamUser004_SetSteam2Ticket(winISteamUser_SteamUser004 *_this, uint8 * pubTicket, int cubTicket)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetSteam2Ticket(_this->linux_side, pubTicket, cubTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_AddServerNetAddress, 12)
void __thiscall winISteamUser_SteamUser004_AddServerNetAddress(winISteamUser_SteamUser004 *_this, uint32 unIP, uint16 unPort)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_AddServerNetAddress(_this->linux_side, unIP, unPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetEmail, 8)
bool __thiscall winISteamUser_SteamUser004_SetEmail(winISteamUser_SteamUser004 *_this, const char * pchEmail)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_SetEmail(_this->linux_side, pchEmail);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetSteamGameConnectToken, 12)
int __thiscall winISteamUser_SteamUser004_GetSteamGameConnectToken(winISteamUser_SteamUser004 *_this, void * pBlob, int cbMaxBlob)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_GetSteamGameConnectToken(_this->linux_side, pBlob, cbMaxBlob);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetRegistryString, 16)
bool __thiscall winISteamUser_SteamUser004_SetRegistryString(winISteamUser_SteamUser004 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_SetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetRegistryString, 20)
bool __thiscall winISteamUser_SteamUser004_GetRegistryString(winISteamUser_SteamUser004 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, char * pchValue, int cbValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_GetRegistryString(_this->linux_side, eRegistrySubTree, pchKey, pchValue, cbValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser004_SetRegistryInt(winISteamUser_SteamUser004 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int iValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_SetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, iValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetRegistryInt, 16)
bool __thiscall winISteamUser_SteamUser004_GetRegistryInt(winISteamUser_SteamUser004 *_this, EConfigSubTree eRegistrySubTree, const char * pchKey, int * piValue)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_GetRegistryInt(_this->linux_side, eRegistrySubTree, pchKey, piValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_InitiateGameConnection, 36)
int __thiscall winISteamUser_SteamUser004_InitiateGameConnection(winISteamUser_SteamUser004 *_this, void * pBlob, int cbMaxBlob, CSteamID steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_InitiateGameConnection(_this->linux_side, pBlob, cbMaxBlob, steamID, nGameAppID, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_TerminateGameConnection, 12)
void __thiscall winISteamUser_SteamUser004_TerminateGameConnection(winISteamUser_SteamUser004 *_this, uint32 unIPServer, uint16 usPortServer)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_TerminateGameConnection(_this->linux_side, unIPServer, usPortServer);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination, 4)
void __thiscall winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_IsPrimaryChatDestination, 4)
bool __thiscall winISteamUser_SteamUser004_IsPrimaryChatDestination(winISteamUser_SteamUser004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser004_IsPrimaryChatDestination(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RequestLegacyCDKey, 8)
void __thiscall winISteamUser_SteamUser004_RequestLegacyCDKey(winISteamUser_SteamUser004 *_this, uint32 iAppID)
{
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RequestLegacyCDKey(_this->linux_side, iAppID);
}

extern vtable_ptr winISteamUser_SteamUser004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser004,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetLogonState)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_BConnected)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_IsVACBanned)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RequireShowVACBannedMessage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_AcknowledgeVACBanning)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_NClientGameIDAdd)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RemoveClientGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetClientGameServer)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetSteam2Ticket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_AddServerNetAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetSteamGameConnectToken)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_IsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RequestLegacyCDKey)
    );
#ifndef __GNUC__
}
#endif

winISteamUser_SteamUser004 *create_winISteamUser_SteamUser004(void *linux_side)
{
    winISteamUser_SteamUser004 *r = alloc_mem_for_iface(sizeof(winISteamUser_SteamUser004), "SteamUser004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser004_vtable, 26, "SteamUser004");
    r->linux_side = linux_side;
    return r;
}

