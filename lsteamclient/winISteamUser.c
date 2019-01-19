/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser019_InitiateGameConnection(winISteamUser_SteamUser019 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser019_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoice, 34)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_AdvertiseGame, 18)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetGameBadgeLevel, 9)
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
    winISteamUser_SteamUser019 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser019));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser019_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser018_InitiateGameConnection(winISteamUser_SteamUser018 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser018_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoice, 34)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_AdvertiseGame, 18)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetGameBadgeLevel, 9)
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
    winISteamUser_SteamUser018 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser018));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser018_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser017_InitiateGameConnection(winISteamUser_SteamUser017 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser017_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoice, 34)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_AdvertiseGame, 18)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetGameBadgeLevel, 9)
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
    winISteamUser_SteamUser017 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser017));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser017_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser016_InitiateGameConnection(winISteamUser_SteamUser016 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser016_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoice, 34)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_AdvertiseGame, 18)
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
    winISteamUser_SteamUser016 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser016));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser016_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser014_InitiateGameConnection(winISteamUser_SteamUser014 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser014_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetVoice, 30)
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_AdvertiseGame, 18)
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
    winISteamUser_SteamUser014 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser014));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser014_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser013_InitiateGameConnection(winISteamUser_SteamUser013 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser013_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetVoice, 30)
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
    winISteamUser_SteamUser013 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser013));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser013_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser012_InitiateGameConnection(winISteamUser_SteamUser012 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser012_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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
    winISteamUser_SteamUser012 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser012));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser012_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser011_InitiateGameConnection(winISteamUser_SteamUser011 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser011_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TerminateGameConnection, 10)
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
    steamclient_unix_path_to_dos_path(path_result, pchBuffer, pchBuffer, cubBuffer);
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
    winISteamUser_SteamUser011 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser011));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser011_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_InitiateGameConnection, 27)
int __thiscall winISteamUser_SteamUser010_InitiateGameConnection(winISteamUser_SteamUser010 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser010_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TerminateGameConnection, 10)
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
    winISteamUser_SteamUser010 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser010));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser010_vtable;
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

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_InitiateGameConnection, 35)
int __thiscall winISteamUser_SteamUser009_InitiateGameConnection(winISteamUser_SteamUser009 *_this, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    TRACE("%p\n", _this);
    return cppISteamUser_SteamUser009_InitiateGameConnection(_this->linux_side, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, gameID, unIPServer, usPortServer, bSecure);
}

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TerminateGameConnection, 10)
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
    winISteamUser_SteamUser009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUser_SteamUser009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUser_SteamUser009_vtable;
    r->linux_side = linux_side;
    return r;
}

