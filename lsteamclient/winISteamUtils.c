/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUtils_SteamUtils002.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAPICallResult, 28)

uint32 __thiscall winISteamUtils_SteamUtils002_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils002_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils002_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils002_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils002_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils002_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils002_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils002_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils002_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils002_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils002_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils002_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils002_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils002_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils002_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
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

struct w_steam_iface *create_winISteamUtils_SteamUtils002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils002_vtable, 14, "SteamUtils002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils004.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_IsOverlayEnabled, 4)

uint32 __thiscall winISteamUtils_SteamUtils004_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils004_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils004_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils004_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils004_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils004_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils004_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils004_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils004_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils004_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils004_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils004_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils004_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils004_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils004_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils004_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils004_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils004_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils004_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils004_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils004_IsOverlayEnabled(_this->u_iface);
    return _ret;
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

struct w_steam_iface *create_winISteamUtils_SteamUtils004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils004_vtable, 18, "SteamUtils004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils005.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_ShowGamepadTextInput, 20)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput, 12)

uint32 __thiscall winISteamUtils_SteamUtils005_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils005_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils005_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils005_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils005_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils005_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils005_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils005_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils005_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils005_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils005_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils005_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils005_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils005_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils005_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils005_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_IsOverlayEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_BOverlayNeedsPresent(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUtils_SteamUtils005_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    SteamAPICall_t _ret;
    const char *u_szFileName = steamclient_dos_to_unix_path( szFileName, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_CheckFileSignature(_this->u_iface, szFileName ? u_szFileName : NULL);
    steamclient_free_path( u_szFileName );
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_ShowGamepadTextInput(struct w_steam_iface *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_ShowGamepadTextInput(_this->u_iface, eInputMode, eLineInputMode, pchDescription, unCharMax);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32 cchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(_this->u_iface, pchText, cchText);
    return _ret;
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

struct w_steam_iface *create_winISteamUtils_SteamUtils005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils005_vtable, 23, "SteamUtils005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils006.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_ShowGamepadTextInput, 20)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsSteamRunningInVR, 4)

uint32 __thiscall winISteamUtils_SteamUtils006_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils006_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils006_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils006_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils006_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils006_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils006_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils006_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils006_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils006_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils006_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils006_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils006_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils006_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils006_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils006_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_IsOverlayEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_BOverlayNeedsPresent(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUtils_SteamUtils006_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    SteamAPICall_t _ret;
    const char *u_szFileName = steamclient_dos_to_unix_path( szFileName, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_CheckFileSignature(_this->u_iface, szFileName ? u_szFileName : NULL);
    steamclient_free_path( u_szFileName );
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_ShowGamepadTextInput(struct w_steam_iface *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_ShowGamepadTextInput(_this->u_iface, eInputMode, eLineInputMode, pchDescription, unCharMax);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32 cchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput(_this->u_iface, pchText, cchText);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils006_GetSteamUILanguage(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_GetSteamUILanguage(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils006_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils006_IsSteamRunningInVR(_this->u_iface);
    return _ret;
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

struct w_steam_iface *create_winISteamUtils_SteamUtils006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils006_vtable, 25, "SteamUtils006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils007.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetOverlayNotificationInset, 12)

uint32 __thiscall winISteamUtils_SteamUtils007_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils007_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils007_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils007_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils007_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils007_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils007_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils007_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils007_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils007_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils007_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils007_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils007_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils007_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_IsOverlayEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_BOverlayNeedsPresent(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUtils_SteamUtils007_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    SteamAPICall_t _ret;
    const char *u_szFileName = steamclient_dos_to_unix_path( szFileName, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_CheckFileSignature(_this->u_iface, szFileName ? u_szFileName : NULL);
    steamclient_free_path( u_szFileName );
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_ShowGamepadTextInput(struct w_steam_iface *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_ShowGamepadTextInput(_this->u_iface, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32 cchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput(_this->u_iface, pchText, cchText);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils007_GetSteamUILanguage(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_GetSteamUILanguage(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils007_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils007_IsSteamRunningInVR(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils007_SetOverlayNotificationInset(struct w_steam_iface *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils007_SetOverlayNotificationInset(_this->u_iface, nHorizontalInset, nVerticalInset);
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

struct w_steam_iface *create_winISteamUtils_SteamUtils007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils007_vtable, 26, "SteamUtils007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils008.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetOverlayNotificationInset, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsSteamInBigPictureMode, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_StartVRDashboard, 4)

uint32 __thiscall winISteamUtils_SteamUtils008_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils008_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils008_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils008_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils008_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils008_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils008_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils008_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils008_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils008_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils008_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils008_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils008_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils008_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_IsOverlayEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_BOverlayNeedsPresent(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUtils_SteamUtils008_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    SteamAPICall_t _ret;
    const char *u_szFileName = steamclient_dos_to_unix_path( szFileName, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_CheckFileSignature(_this->u_iface, szFileName ? u_szFileName : NULL);
    steamclient_free_path( u_szFileName );
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_ShowGamepadTextInput(struct w_steam_iface *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_ShowGamepadTextInput(_this->u_iface, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32 cchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput(_this->u_iface, pchText, cchText);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils008_GetSteamUILanguage(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_GetSteamUILanguage(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils008_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_IsSteamRunningInVR(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils008_SetOverlayNotificationInset(struct w_steam_iface *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_SetOverlayNotificationInset(_this->u_iface, nHorizontalInset, nVerticalInset);
}

bool __thiscall winISteamUtils_SteamUtils008_IsSteamInBigPictureMode(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils008_StartVRDashboard(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils008_StartVRDashboard(_this->u_iface);
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

struct w_steam_iface *create_winISteamUtils_SteamUtils008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils008_vtable, 28, "SteamUtils008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils009.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetOverlayNotificationInset, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamInBigPictureMode, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_StartVRDashboard, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamChinaLauncher, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_InitFilterText, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_FilterText, 20)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPv6ConnectivityState, 8)

uint32 __thiscall winISteamUtils_SteamUtils009_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils009_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils009_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils009_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils009_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils009_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils009_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils009_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils009_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils009_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils009_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils009_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_IsOverlayEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_BOverlayNeedsPresent(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUtils_SteamUtils009_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    SteamAPICall_t _ret;
    const char *u_szFileName = steamclient_dos_to_unix_path( szFileName, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_CheckFileSignature(_this->u_iface, szFileName ? u_szFileName : NULL);
    steamclient_free_path( u_szFileName );
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_ShowGamepadTextInput(struct w_steam_iface *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_ShowGamepadTextInput(_this->u_iface, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32 cchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(_this->u_iface, pchText, cchText);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils009_GetSteamUILanguage(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetSteamUILanguage(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_IsSteamRunningInVR(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetOverlayNotificationInset(struct w_steam_iface *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetOverlayNotificationInset(_this->u_iface, nHorizontalInset, nVerticalInset);
}

bool __thiscall winISteamUtils_SteamUtils009_IsSteamInBigPictureMode(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils009_StartVRDashboard(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_StartVRDashboard(_this->u_iface);
}

bool __thiscall winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(_this->u_iface, bEnabled);
}

bool __thiscall winISteamUtils_SteamUtils009_IsSteamChinaLauncher(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_IsSteamChinaLauncher(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils009_InitFilterText(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_InitFilterText(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUtils_SteamUtils009_FilterText(struct w_steam_iface *_this, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText, const char *pchInputMessage, bool bLegalOnly)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_FilterText(_this->u_iface, pchOutFilteredText, nByteSizeOutFilteredText, pchInputMessage, bLegalOnly);
    return _ret;
}

ESteamIPv6ConnectivityState __thiscall winISteamUtils_SteamUtils009_GetIPv6ConnectivityState(struct w_steam_iface *_this, ESteamIPv6ConnectivityProtocol eProtocol)
{
    ESteamIPv6ConnectivityState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState(_this->u_iface, eProtocol);
    return _ret;
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

struct w_steam_iface *create_winISteamUtils_SteamUtils009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils009_vtable, 34, "SteamUtils009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUtils_SteamUtils010.h"

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetOverlayNotificationInset, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamInBigPictureMode, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_StartVRDashboard, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamChinaLauncher, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_InitFilterText, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_FilterText, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetIPv6ConnectivityState, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetGameLauncherMode, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput, 4)

uint32 __thiscall winISteamUtils_SteamUtils010_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils010_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive(_this->u_iface);
    return _ret;
}

EUniverse __thiscall winISteamUtils_SteamUtils010_GetConnectedUniverse(struct w_steam_iface *_this)
{
    EUniverse _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetConnectedUniverse(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils010_GetServerRealTime(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetServerRealTime(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils010_GetIPCountry(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetIPCountry(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_GetImageSize(struct w_steam_iface *_this, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetImageSize(_this->u_iface, iImage, pnWidth, pnHeight);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_GetImageRGBA(struct w_steam_iface *_this, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetImageRGBA(_this->u_iface, iImage, pubDest, nDestBufferSize);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_GetCSERIPPort(struct w_steam_iface *_this, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetCSERIPPort(_this->u_iface, unIP, usPort);
    return _ret;
}

uint8 __thiscall winISteamUtils_SteamUtils010_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    uint8 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetCurrentBatteryPower(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils010_GetAppID(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetAppID(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetOverlayNotificationPosition(struct w_steam_iface *_this, ENotificationPosition eNotificationPosition)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition(_this->u_iface, eNotificationPosition);
}

bool __thiscall winISteamUtils_SteamUtils010_IsAPICallCompleted(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsAPICallCompleted(_this->u_iface, hSteamAPICall, pbFailed);
    return _ret;
}

ESteamAPICallFailure __thiscall winISteamUtils_SteamUtils010_GetAPICallFailureReason(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetAPICallFailureReason(_this->u_iface, hSteamAPICall);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_GetAPICallResult(struct w_steam_iface *_this, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    int u_callback_len = cubCallback, w_callback_len = cubCallback;
    void *u_callback, *w_callback = pCallback;
    TRACE("%p\n", _this);
    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;
    cubCallback = u_callback_len;
    pCallback = u_callback;

    _ret = cppISteamUtils_SteamUtils010_GetAPICallResult(_this->u_iface, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
    if (_ret && u_callback != w_callback)
    {
        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);
        HeapFree(GetProcessHeap(), 0, u_callback);
    }

    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamUtils_SteamUtils010_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamUtils_SteamUtils010_IsOverlayEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsOverlayEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_BOverlayNeedsPresent(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUtils_SteamUtils010_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    SteamAPICall_t _ret;
    const char *u_szFileName = steamclient_dos_to_unix_path( szFileName, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_CheckFileSignature(_this->u_iface, szFileName ? u_szFileName : NULL);
    steamclient_free_path( u_szFileName );
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_ShowGamepadTextInput(struct w_steam_iface *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_ShowGamepadTextInput(_this->u_iface, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
    return _ret;
}

uint32 __thiscall winISteamUtils_SteamUtils010_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32 cchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput(_this->u_iface, pchText, cchText);
    return _ret;
}

const char * __thiscall winISteamUtils_SteamUtils010_GetSteamUILanguage(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetSteamUILanguage(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsSteamRunningInVR(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetOverlayNotificationInset(struct w_steam_iface *_this, int nHorizontalInset, int nVerticalInset)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_SetOverlayNotificationInset(_this->u_iface, nHorizontalInset, nVerticalInset);
}

bool __thiscall winISteamUtils_SteamUtils010_IsSteamInBigPictureMode(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_StartVRDashboard(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_StartVRDashboard(_this->u_iface);
}

bool __thiscall winISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled(_this->u_iface);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled(_this->u_iface, bEnabled);
}

bool __thiscall winISteamUtils_SteamUtils010_IsSteamChinaLauncher(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsSteamChinaLauncher(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_InitFilterText(struct w_steam_iface *_this, uint32 unFilterOptions)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_InitFilterText(_this->u_iface, unFilterOptions);
    return _ret;
}

int __thiscall winISteamUtils_SteamUtils010_FilterText(struct w_steam_iface *_this, ETextFilteringContext eContext, CSteamID sourceSteamID, const char *pchInputMessage, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_FilterText(_this->u_iface, eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);
    return _ret;
}

ESteamIPv6ConnectivityState __thiscall winISteamUtils_SteamUtils010_GetIPv6ConnectivityState(struct w_steam_iface *_this, ESteamIPv6ConnectivityProtocol eProtocol)
{
    ESteamIPv6ConnectivityState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState(_this->u_iface, eProtocol);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput(struct w_steam_iface *_this, EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput(_this->u_iface, eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);
    return _ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetGameLauncherMode(struct w_steam_iface *_this, bool bLauncherMode)
{
    TRACE("%p\n", _this);
    cppISteamUtils_SteamUtils010_SetGameLauncherMode(_this->u_iface, bLauncherMode);
}

bool __thiscall winISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUtils_SteamUtils010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUtils_SteamUtils010,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetOverlayNotificationInset)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamInBigPictureMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_StartVRDashboard)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamChinaLauncher)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_InitFilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_FilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetIPv6ConnectivityState)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetGameLauncherMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUtils_SteamUtils010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils010_vtable, 38, "SteamUtils010");
    r->u_iface = u_iface;
    return r;
}

