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

#include "cppISteamUtils_SteamUtils009.h"

typedef struct __winISteamUtils_SteamUtils009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils009;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils009_GetSecondsSinceAppActive(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils009_GetConnectedUniverse(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils009_GetServerRealTime(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils009_GetIPCountry(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils009_GetImageSize(winISteamUtils_SteamUtils009 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils009_GetImageRGBA(winISteamUtils_SteamUtils009 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils009_GetCSERIPPort(winISteamUtils_SteamUtils009 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils009_GetCurrentBatteryPower(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils009_GetAppID(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils009_SetOverlayNotificationPosition(winISteamUtils_SteamUtils009 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils009_IsAPICallCompleted(winISteamUtils_SteamUtils009 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils009_GetAPICallFailureReason(winISteamUtils_SteamUtils009 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils009_GetAPICallResult(winISteamUtils_SteamUtils009 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils009_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_RunFrame, 4)
void __thiscall winISteamUtils_SteamUtils009_RunFrame(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPCCallCount, 4)
uint32 __thiscall winISteamUtils_SteamUtils009_GetIPCCallCount(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetWarningMessageHook, 8)
void __thiscall winISteamUtils_SteamUtils009_SetWarningMessageHook(winISteamUtils_SteamUtils009 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsOverlayEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils009_IsOverlayEnabled(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_IsOverlayEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_BOverlayNeedsPresent, 4)
bool __thiscall winISteamUtils_SteamUtils009_BOverlayNeedsPresent(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_BOverlayNeedsPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_CheckFileSignature, 8)
SteamAPICall_t __thiscall winISteamUtils_SteamUtils009_CheckFileSignature(winISteamUtils_SteamUtils009 *_this, const char * szFileName)
{
    char lin_szFileName[PATH_MAX];
    steamclient_dos_path_to_unix_path(szFileName, lin_szFileName, 0);
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_CheckFileSignature(_this->linux_side, szFileName ? lin_szFileName : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_ShowGamepadTextInput, 24)
bool __thiscall winISteamUtils_SteamUtils009_ShowGamepadTextInput(winISteamUtils_SteamUtils009 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_ShowGamepadTextInput(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength, 4)
uint32 __thiscall winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput, 12)
bool __thiscall winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(winISteamUtils_SteamUtils009 *_this, char * pchText, uint32 cchText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSteamUILanguage, 4)
const char * __thiscall winISteamUtils_SteamUtils009_GetSteamUILanguage(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetSteamUILanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamRunningInVR, 4)
bool __thiscall winISteamUtils_SteamUtils009_IsSteamRunningInVR(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_IsSteamRunningInVR(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetOverlayNotificationInset, 12)
void __thiscall winISteamUtils_SteamUtils009_SetOverlayNotificationInset(winISteamUtils_SteamUtils009 *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetOverlayNotificationInset(_this->linux_side, nHorizontalInset, nVerticalInset);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamInBigPictureMode, 4)
bool __thiscall winISteamUtils_SteamUtils009_IsSteamInBigPictureMode(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_StartVRDashboard, 4)
void __thiscall winISteamUtils_SteamUtils009_StartVRDashboard(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_StartVRDashboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled, 8)
void __thiscall winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(winISteamUtils_SteamUtils009 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamChinaLauncher, 4)
bool __thiscall winISteamUtils_SteamUtils009_IsSteamChinaLauncher(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_IsSteamChinaLauncher(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_InitFilterText, 4)
bool __thiscall winISteamUtils_SteamUtils009_InitFilterText(winISteamUtils_SteamUtils009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_InitFilterText(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_FilterText, 20)
int __thiscall winISteamUtils_SteamUtils009_FilterText(winISteamUtils_SteamUtils009 *_this, char * pchOutFilteredText, uint32 nByteSizeOutFilteredText, const char * pchInputMessage, bool bLegalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_FilterText(_this->linux_side, pchOutFilteredText, nByteSizeOutFilteredText, pchInputMessage, bLegalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPv6ConnectivityState, 8)
ESteamIPv6ConnectivityState __thiscall winISteamUtils_SteamUtils009_GetIPv6ConnectivityState(winISteamUtils_SteamUtils009 *_this, ESteamIPv6ConnectivityProtocol eProtocol)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState(_this->linux_side, eProtocol);
}

extern vtable_ptr winISteamUtils_SteamUtils009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils009,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetOverlayNotificationInset)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsSteamInBigPictureMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_StartVRDashboard)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsSteamChinaLauncher)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_InitFilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_FilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetIPv6ConnectivityState)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils009 *create_winISteamUtils_SteamUtils009(void *linux_side)
{
    winISteamUtils_SteamUtils009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUtils_SteamUtils008.h"

typedef struct __winISteamUtils_SteamUtils008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils008;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils008_GetSecondsSinceAppActive(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils008_GetConnectedUniverse(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils008_GetServerRealTime(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils008_GetIPCountry(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils008_GetImageSize(winISteamUtils_SteamUtils008 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils008_GetImageRGBA(winISteamUtils_SteamUtils008 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils008_GetCSERIPPort(winISteamUtils_SteamUtils008 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils008_GetCurrentBatteryPower(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils008_GetAppID(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils008_SetOverlayNotificationPosition(winISteamUtils_SteamUtils008 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils008_IsAPICallCompleted(winISteamUtils_SteamUtils008 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils008_GetAPICallFailureReason(winISteamUtils_SteamUtils008 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils008_GetAPICallResult(winISteamUtils_SteamUtils008 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils008_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_RunFrame, 4)
void __thiscall winISteamUtils_SteamUtils008_RunFrame(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetIPCCallCount, 4)
uint32 __thiscall winISteamUtils_SteamUtils008_GetIPCCallCount(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetWarningMessageHook, 8)
void __thiscall winISteamUtils_SteamUtils008_SetWarningMessageHook(winISteamUtils_SteamUtils008 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsOverlayEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils008_IsOverlayEnabled(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_IsOverlayEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_BOverlayNeedsPresent, 4)
bool __thiscall winISteamUtils_SteamUtils008_BOverlayNeedsPresent(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_BOverlayNeedsPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_CheckFileSignature, 8)
SteamAPICall_t __thiscall winISteamUtils_SteamUtils008_CheckFileSignature(winISteamUtils_SteamUtils008 *_this, const char * szFileName)
{
    char lin_szFileName[PATH_MAX];
    steamclient_dos_path_to_unix_path(szFileName, lin_szFileName, 0);
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_CheckFileSignature(_this->linux_side, szFileName ? lin_szFileName : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_ShowGamepadTextInput, 24)
bool __thiscall winISteamUtils_SteamUtils008_ShowGamepadTextInput(winISteamUtils_SteamUtils008 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_ShowGamepadTextInput(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength, 4)
uint32 __thiscall winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput, 12)
bool __thiscall winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput(winISteamUtils_SteamUtils008 *_this, char * pchText, uint32 cchText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSteamUILanguage, 4)
const char * __thiscall winISteamUtils_SteamUtils008_GetSteamUILanguage(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_GetSteamUILanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsSteamRunningInVR, 4)
bool __thiscall winISteamUtils_SteamUtils008_IsSteamRunningInVR(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_IsSteamRunningInVR(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetOverlayNotificationInset, 12)
void __thiscall winISteamUtils_SteamUtils008_SetOverlayNotificationInset(winISteamUtils_SteamUtils008 *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_SetOverlayNotificationInset(_this->linux_side, nHorizontalInset, nVerticalInset);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsSteamInBigPictureMode, 4)
bool __thiscall winISteamUtils_SteamUtils008_IsSteamInBigPictureMode(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_StartVRDashboard, 4)
void __thiscall winISteamUtils_SteamUtils008_StartVRDashboard(winISteamUtils_SteamUtils008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_StartVRDashboard(_this->linux_side);
}

extern vtable_ptr winISteamUtils_SteamUtils008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils008,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_SetOverlayNotificationInset)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsSteamInBigPictureMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_StartVRDashboard)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils008 *create_winISteamUtils_SteamUtils008(void *linux_side)
{
    winISteamUtils_SteamUtils008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUtils_SteamUtils007.h"

typedef struct __winISteamUtils_SteamUtils007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils007;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils007_GetSecondsSinceAppActive(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils007_GetConnectedUniverse(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils007_GetServerRealTime(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils007_GetIPCountry(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils007_GetImageSize(winISteamUtils_SteamUtils007 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils007_GetImageRGBA(winISteamUtils_SteamUtils007 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils007_GetCSERIPPort(winISteamUtils_SteamUtils007 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils007_GetCurrentBatteryPower(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils007_GetAppID(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils007_SetOverlayNotificationPosition(winISteamUtils_SteamUtils007 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils007_IsAPICallCompleted(winISteamUtils_SteamUtils007 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils007_GetAPICallFailureReason(winISteamUtils_SteamUtils007 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils007_GetAPICallResult(winISteamUtils_SteamUtils007 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils007_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_RunFrame, 4)
void __thiscall winISteamUtils_SteamUtils007_RunFrame(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetIPCCallCount, 4)
uint32 __thiscall winISteamUtils_SteamUtils007_GetIPCCallCount(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetWarningMessageHook, 8)
void __thiscall winISteamUtils_SteamUtils007_SetWarningMessageHook(winISteamUtils_SteamUtils007 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsOverlayEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils007_IsOverlayEnabled(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_IsOverlayEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_BOverlayNeedsPresent, 4)
bool __thiscall winISteamUtils_SteamUtils007_BOverlayNeedsPresent(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_BOverlayNeedsPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_CheckFileSignature, 8)
SteamAPICall_t __thiscall winISteamUtils_SteamUtils007_CheckFileSignature(winISteamUtils_SteamUtils007 *_this, const char * szFileName)
{
    char lin_szFileName[PATH_MAX];
    steamclient_dos_path_to_unix_path(szFileName, lin_szFileName, 0);
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_CheckFileSignature(_this->linux_side, szFileName ? lin_szFileName : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_ShowGamepadTextInput, 24)
bool __thiscall winISteamUtils_SteamUtils007_ShowGamepadTextInput(winISteamUtils_SteamUtils007 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_ShowGamepadTextInput(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength, 4)
uint32 __thiscall winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput, 12)
bool __thiscall winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput(winISteamUtils_SteamUtils007 *_this, char * pchText, uint32 cchText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSteamUILanguage, 4)
const char * __thiscall winISteamUtils_SteamUtils007_GetSteamUILanguage(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_GetSteamUILanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsSteamRunningInVR, 4)
bool __thiscall winISteamUtils_SteamUtils007_IsSteamRunningInVR(winISteamUtils_SteamUtils007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils007_IsSteamRunningInVR(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetOverlayNotificationInset, 12)
void __thiscall winISteamUtils_SteamUtils007_SetOverlayNotificationInset(winISteamUtils_SteamUtils007 *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_SetOverlayNotificationInset(_this->linux_side, nHorizontalInset, nVerticalInset);
}

extern vtable_ptr winISteamUtils_SteamUtils007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils007,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_SetOverlayNotificationInset)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils007 *create_winISteamUtils_SteamUtils007(void *linux_side)
{
    winISteamUtils_SteamUtils007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUtils_SteamUtils006.h"

typedef struct __winISteamUtils_SteamUtils006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils006;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils006_GetSecondsSinceAppActive(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils006_GetConnectedUniverse(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils006_GetServerRealTime(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils006_GetIPCountry(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils006_GetImageSize(winISteamUtils_SteamUtils006 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils006_GetImageRGBA(winISteamUtils_SteamUtils006 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils006_GetCSERIPPort(winISteamUtils_SteamUtils006 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils006_GetCurrentBatteryPower(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils006_GetAppID(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils006_SetOverlayNotificationPosition(winISteamUtils_SteamUtils006 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils006_IsAPICallCompleted(winISteamUtils_SteamUtils006 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils006_GetAPICallFailureReason(winISteamUtils_SteamUtils006 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils006_GetAPICallResult(winISteamUtils_SteamUtils006 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils006_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_RunFrame, 4)
void __thiscall winISteamUtils_SteamUtils006_RunFrame(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils006_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetIPCCallCount, 4)
uint32 __thiscall winISteamUtils_SteamUtils006_GetIPCCallCount(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_SetWarningMessageHook, 8)
void __thiscall winISteamUtils_SteamUtils006_SetWarningMessageHook(winISteamUtils_SteamUtils006 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils006_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsOverlayEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils006_IsOverlayEnabled(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_IsOverlayEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_BOverlayNeedsPresent, 4)
bool __thiscall winISteamUtils_SteamUtils006_BOverlayNeedsPresent(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_BOverlayNeedsPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_CheckFileSignature, 8)
SteamAPICall_t __thiscall winISteamUtils_SteamUtils006_CheckFileSignature(winISteamUtils_SteamUtils006 *_this, const char * szFileName)
{
    char lin_szFileName[PATH_MAX];
    steamclient_dos_path_to_unix_path(szFileName, lin_szFileName, 0);
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_CheckFileSignature(_this->linux_side, szFileName ? lin_szFileName : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_ShowGamepadTextInput, 20)
bool __thiscall winISteamUtils_SteamUtils006_ShowGamepadTextInput(winISteamUtils_SteamUtils006 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_ShowGamepadTextInput(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength, 4)
uint32 __thiscall winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput, 12)
bool __thiscall winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput(winISteamUtils_SteamUtils006 *_this, char * pchText, uint32 cchText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSteamUILanguage, 4)
const char * __thiscall winISteamUtils_SteamUtils006_GetSteamUILanguage(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_GetSteamUILanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsSteamRunningInVR, 4)
bool __thiscall winISteamUtils_SteamUtils006_IsSteamRunningInVR(winISteamUtils_SteamUtils006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils006_IsSteamRunningInVR(_this->linux_side);
}

extern vtable_ptr winISteamUtils_SteamUtils006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils006,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_IsSteamRunningInVR)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils006 *create_winISteamUtils_SteamUtils006(void *linux_side)
{
    winISteamUtils_SteamUtils006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUtils_SteamUtils005.h"

typedef struct __winISteamUtils_SteamUtils005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils005;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils005_GetSecondsSinceAppActive(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils005_GetConnectedUniverse(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils005_GetServerRealTime(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils005_GetIPCountry(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils005_GetImageSize(winISteamUtils_SteamUtils005 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils005_GetImageRGBA(winISteamUtils_SteamUtils005 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils005_GetCSERIPPort(winISteamUtils_SteamUtils005 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils005_GetCurrentBatteryPower(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils005_GetAppID(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils005_SetOverlayNotificationPosition(winISteamUtils_SteamUtils005 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils005_IsAPICallCompleted(winISteamUtils_SteamUtils005 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils005_GetAPICallFailureReason(winISteamUtils_SteamUtils005 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils005_GetAPICallResult(winISteamUtils_SteamUtils005 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils005_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_RunFrame, 4)
void __thiscall winISteamUtils_SteamUtils005_RunFrame(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils005_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetIPCCallCount, 4)
uint32 __thiscall winISteamUtils_SteamUtils005_GetIPCCallCount(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_SetWarningMessageHook, 8)
void __thiscall winISteamUtils_SteamUtils005_SetWarningMessageHook(winISteamUtils_SteamUtils005 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils005_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_IsOverlayEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils005_IsOverlayEnabled(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_IsOverlayEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_BOverlayNeedsPresent, 4)
bool __thiscall winISteamUtils_SteamUtils005_BOverlayNeedsPresent(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_BOverlayNeedsPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_CheckFileSignature, 8)
SteamAPICall_t __thiscall winISteamUtils_SteamUtils005_CheckFileSignature(winISteamUtils_SteamUtils005 *_this, const char * szFileName)
{
    char lin_szFileName[PATH_MAX];
    steamclient_dos_path_to_unix_path(szFileName, lin_szFileName, 0);
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_CheckFileSignature(_this->linux_side, szFileName ? lin_szFileName : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_ShowGamepadTextInput, 20)
bool __thiscall winISteamUtils_SteamUtils005_ShowGamepadTextInput(winISteamUtils_SteamUtils005 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_ShowGamepadTextInput(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength, 4)
uint32 __thiscall winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(winISteamUtils_SteamUtils005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput, 12)
bool __thiscall winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(winISteamUtils_SteamUtils005 *_this, char * pchText, uint32 cchText)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(_this->linux_side, pchText, cchText);
}

extern vtable_ptr winISteamUtils_SteamUtils005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils005,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils005 *create_winISteamUtils_SteamUtils005(void *linux_side)
{
    winISteamUtils_SteamUtils005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUtils_SteamUtils004.h"

typedef struct __winISteamUtils_SteamUtils004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils004;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils004_GetSecondsSinceAppActive(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils004_GetConnectedUniverse(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils004_GetServerRealTime(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils004_GetIPCountry(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils004_GetImageSize(winISteamUtils_SteamUtils004 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils004_GetImageRGBA(winISteamUtils_SteamUtils004 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils004_GetCSERIPPort(winISteamUtils_SteamUtils004 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils004_GetCurrentBatteryPower(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils004_GetAppID(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils004_SetOverlayNotificationPosition(winISteamUtils_SteamUtils004 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils004_IsAPICallCompleted(winISteamUtils_SteamUtils004 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils004_GetAPICallFailureReason(winISteamUtils_SteamUtils004 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils004_GetAPICallResult(winISteamUtils_SteamUtils004 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils004_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_RunFrame, 4)
void __thiscall winISteamUtils_SteamUtils004_RunFrame(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils004_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetIPCCallCount, 4)
uint32 __thiscall winISteamUtils_SteamUtils004_GetIPCCallCount(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_SetWarningMessageHook, 8)
void __thiscall winISteamUtils_SteamUtils004_SetWarningMessageHook(winISteamUtils_SteamUtils004 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils004_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_IsOverlayEnabled, 4)
bool __thiscall winISteamUtils_SteamUtils004_IsOverlayEnabled(winISteamUtils_SteamUtils004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils004_IsOverlayEnabled(_this->linux_side);
}

extern vtable_ptr winISteamUtils_SteamUtils004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils004,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_IsOverlayEnabled)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils004 *create_winISteamUtils_SteamUtils004(void *linux_side)
{
    winISteamUtils_SteamUtils004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUtils_SteamUtils002.h"

typedef struct __winISteamUtils_SteamUtils002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUtils_SteamUtils002;

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetSecondsSinceAppActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils002_GetSecondsSinceAppActive(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive, 4)
uint32 __thiscall winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetConnectedUniverse, 4)
EUniverse __thiscall winISteamUtils_SteamUtils002_GetConnectedUniverse(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetConnectedUniverse(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetServerRealTime, 4)
uint32 __thiscall winISteamUtils_SteamUtils002_GetServerRealTime(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetServerRealTime(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetIPCountry, 4)
const char * __thiscall winISteamUtils_SteamUtils002_GetIPCountry(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetIPCountry(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetImageSize, 16)
bool __thiscall winISteamUtils_SteamUtils002_GetImageSize(winISteamUtils_SteamUtils002 *_this, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetImageSize(_this->linux_side, iImage, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetImageRGBA, 16)
bool __thiscall winISteamUtils_SteamUtils002_GetImageRGBA(winISteamUtils_SteamUtils002 *_this, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetImageRGBA(_this->linux_side, iImage, pubDest, nDestBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetCSERIPPort, 12)
bool __thiscall winISteamUtils_SteamUtils002_GetCSERIPPort(winISteamUtils_SteamUtils002 *_this, uint32 * unIP, uint16 * usPort)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetCSERIPPort(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetCurrentBatteryPower, 4)
uint8 __thiscall winISteamUtils_SteamUtils002_GetCurrentBatteryPower(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetCurrentBatteryPower(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAppID, 4)
uint32 __thiscall winISteamUtils_SteamUtils002_GetAppID(winISteamUtils_SteamUtils002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetAppID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_SetOverlayNotificationPosition, 8)
void __thiscall winISteamUtils_SteamUtils002_SetOverlayNotificationPosition(winISteamUtils_SteamUtils002 *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition(_this->linux_side, eNotificationPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_IsAPICallCompleted, 16)
bool __thiscall winISteamUtils_SteamUtils002_IsAPICallCompleted(winISteamUtils_SteamUtils002 *_this, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_IsAPICallCompleted(_this->linux_side, hSteamAPICall, pbFailed);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAPICallFailureReason, 12)
ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils002_GetAPICallFailureReason(winISteamUtils_SteamUtils002 *_this, SteamAPICall_t hSteamAPICall)
{
    TRACE("%p\n", _this);
    return cppISteamUtils_SteamUtils002_GetAPICallFailureReason(_this->linux_side, hSteamAPICall);
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAPICallResult, 28)
bool __thiscall winISteamUtils_SteamUtils002_GetAPICallResult(winISteamUtils_SteamUtils002 *_this, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    TRACE("%p\n", _this);
    return do_cb_wrap(0, _this->linux_side, &cppISteamUtils_SteamUtils002_GetAPICallResult, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

extern vtable_ptr winISteamUtils_SteamUtils002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils002,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetAPICallResult)
    );
#ifndef __GNUC__
}
#endif

winISteamUtils_SteamUtils002 *create_winISteamUtils_SteamUtils002(void *linux_side)
{
    winISteamUtils_SteamUtils002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUtils_SteamUtils002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUtils_SteamUtils002_vtable;
    r->linux_side = linux_side;
    return r;
}

