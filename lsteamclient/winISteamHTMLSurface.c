/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004.h"

typedef struct __winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004;

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_destructor, 4)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_destructor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this)
{/* never called */}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init, 4)
bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown, 4)
bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser, 12)
SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, const char * pchUserAgent, const char * pchUserCSS)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(_this->linux_side, pchUserAgent, pchUserCSS);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(_this->linux_side, unBrowserHandle, pchURL, pchPostData);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(_this->linux_side, unBrowserHandle, unWidth, unHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(_this->linux_side, unBrowserHandle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, const char * pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(_this->linux_side, unBrowserHandle, pchScript);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(_this->linux_side, unBrowserHandle, x, y);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(_this->linux_side, unBrowserHandle, nDelta);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(_this->linux_side, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(_this->linux_side, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(_this->linux_side, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(_this->linux_side, unBrowserHandle, nAbsolutePixelScroll);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(_this->linux_side, unBrowserHandle, nAbsolutePixelScroll);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(_this->linux_side, unBrowserHandle, bHasKeyFocus);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find, 14)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(_this->linux_side, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(_this->linux_side, unBrowserHandle, x, y);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie, 26)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(_this->linux_side, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor, 20)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(_this->linux_side, unBrowserHandle, flZoom, nPointX, nPointY);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(_this->linux_side, unBrowserHandle, bBackgroundMode);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, float flDPIScaling)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(_this->linux_side, unBrowserHandle, flDPIScaling);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(_this->linux_side, unBrowserHandle, bAllowed);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(_this->linux_side, unBrowserHandle, bResult);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *_this, HHTMLBrowser unBrowserHandle, const char ** pchSelectedFiles)
{
    const char **lin_pchSelectedFiles = steamclient_dos_to_unix_stringlist(pchSelectedFiles);
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(_this->linux_side, unBrowserHandle, pchSelectedFiles ? lin_pchSelectedFiles : NULL);
    steamclient_free_stringlist(lin_pchSelectedFiles);
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004,
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_destructor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse)
    );
#ifndef __GNUC__
}
#endif

winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004(void *linux_side)
{
    winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003.h"

typedef struct __winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003;

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_destructor, 4)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_destructor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this)
{/* never called */}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init, 4)
bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown, 4)
bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser, 12)
SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, const char * pchUserAgent, const char * pchUserCSS)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(_this->linux_side, pchUserAgent, pchUserCSS);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(_this->linux_side, unBrowserHandle, pchURL, pchPostData);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(_this->linux_side, unBrowserHandle, unWidth, unHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(_this->linux_side, unBrowserHandle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, const char * pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(_this->linux_side, unBrowserHandle, pchScript);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(_this->linux_side, unBrowserHandle, x, y);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(_this->linux_side, unBrowserHandle, nDelta);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(_this->linux_side, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(_this->linux_side, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(_this->linux_side, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(_this->linux_side, unBrowserHandle, nAbsolutePixelScroll);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(_this->linux_side, unBrowserHandle, nAbsolutePixelScroll);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(_this->linux_side, unBrowserHandle, bHasKeyFocus);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find, 14)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(_this->linux_side, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(_this->linux_side, unBrowserHandle, x, y);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie, 26)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(_this->linux_side, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor, 20)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(_this->linux_side, unBrowserHandle, flZoom, nPointX, nPointY);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(_this->linux_side, unBrowserHandle, bBackgroundMode);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(_this->linux_side, unBrowserHandle, bAllowed);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(_this->linux_side, unBrowserHandle, bResult);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *_this, HHTMLBrowser unBrowserHandle, const char ** pchSelectedFiles)
{
    const char **lin_pchSelectedFiles = steamclient_dos_to_unix_stringlist(pchSelectedFiles);
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(_this->linux_side, unBrowserHandle, pchSelectedFiles ? lin_pchSelectedFiles : NULL);
    steamclient_free_stringlist(lin_pchSelectedFiles);
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003,
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_destructor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse)
    );
#ifndef __GNUC__
}
#endif

winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003(void *linux_side)
{
    winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002.h"

typedef struct __winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002;

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_destructor, 4)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_destructor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this)
{/* never called */}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init, 4)
bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown, 4)
bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser, 12)
SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, const char * pchUserAgent, const char * pchUserCSS)
{
    TRACE("%p\n", _this);
    return cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(_this->linux_side, pchUserAgent, pchUserCSS);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(_this->linux_side, unBrowserHandle, pchURL, pchPostData);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(_this->linux_side, unBrowserHandle, unWidth, unHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(_this->linux_side, unBrowserHandle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, const char * pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(_this->linux_side, unBrowserHandle, pchScript);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(_this->linux_side, unBrowserHandle, eMouseButton);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(_this->linux_side, unBrowserHandle, x, y);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(_this->linux_side, unBrowserHandle, nDelta);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(_this->linux_side, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(_this->linux_side, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(_this->linux_side, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(_this->linux_side, unBrowserHandle, nAbsolutePixelScroll);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(_this->linux_side, unBrowserHandle, nAbsolutePixelScroll);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(_this->linux_side, unBrowserHandle, bHasKeyFocus);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find, 14)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(_this->linux_side, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind, 8)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(_this->linux_side, unBrowserHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition, 16)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(_this->linux_side, unBrowserHandle, x, y);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie, 26)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(_this->linux_side, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor, 20)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(_this->linux_side, unBrowserHandle, flZoom, nPointX, nPointY);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(_this->linux_side, unBrowserHandle, bAllowed);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse, 9)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(_this->linux_side, unBrowserHandle, bResult);
}

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse, 12)
void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *_this, HHTMLBrowser unBrowserHandle, const char ** pchSelectedFiles)
{
    const char **lin_pchSelectedFiles = steamclient_dos_to_unix_stringlist(pchSelectedFiles);
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(_this->linux_side, unBrowserHandle, pchSelectedFiles ? lin_pchSelectedFiles : NULL);
    steamclient_free_stringlist(lin_pchSelectedFiles);
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002,
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_destructor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse)
    );
#ifndef __GNUC__
}
#endif

winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002(void *linux_side)
{
    winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_vtable;
    r->linux_side = linux_side;
    return r;
}

