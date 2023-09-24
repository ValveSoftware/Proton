/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001.h"

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_destructor, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse, 12)

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_destructor(struct w_steam_iface *_this)
{/* never called */}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser(_this->u_iface, pchUserAgent, pchUserCSS);
    return _ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    const char *u_pchURL = steamclient_dos_to_unix_path( pchURL, 1 );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL(_this->u_iface, unBrowserHandle, pchURL ? u_pchURL : NULL, pchPostData);
    steamclient_free_path( u_pchURL );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize(_this->u_iface, unBrowserHandle, unWidth, unHeight);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader(_this->u_iface, unBrowserHandle, pchKey, pchValue);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript(_this->u_iface, unBrowserHandle, pchScript);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel(_this->u_iface, unBrowserHandle, nDelta);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar(_this->u_iface, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus(_this->u_iface, unBrowserHandle, bHasKeyFocus);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find(_this->u_iface, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest(_this->u_iface, unBrowserHandle, bAllowed);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse(_this->u_iface, unBrowserHandle, bResult);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)
{
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( pchSelectedFiles );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse(_this->u_iface, unBrowserHandle, pchSelectedFiles ? u_pchSelectedFiles : NULL);
    steamclient_free_path_array( u_pchSelectedFiles );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001,
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_destructor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_vtable, 33, "STEAMHTMLSURFACE_INTERFACE_VERSION_001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002.h"

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_destructor, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie, 32)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse, 12)

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_destructor(struct w_steam_iface *_this)
{/* never called */}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(_this->u_iface, pchUserAgent, pchUserCSS);
    return _ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    const char *u_pchURL = steamclient_dos_to_unix_path( pchURL, 1 );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(_this->u_iface, unBrowserHandle, pchURL ? u_pchURL : NULL, pchPostData);
    steamclient_free_path( u_pchURL );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(_this->u_iface, unBrowserHandle, unWidth, unHeight);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(_this->u_iface, unBrowserHandle, pchKey, pchValue);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(_this->u_iface, unBrowserHandle, pchScript);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(_this->u_iface, unBrowserHandle, nDelta);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(_this->u_iface, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(_this->u_iface, unBrowserHandle, bHasKeyFocus);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(_this->u_iface, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(_this->u_iface, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(_this->u_iface, unBrowserHandle, flZoom, nPointX, nPointY);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(_this->u_iface, unBrowserHandle, bAllowed);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(_this->u_iface, unBrowserHandle, bResult);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)
{
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( pchSelectedFiles );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(_this->u_iface, unBrowserHandle, pchSelectedFiles ? u_pchSelectedFiles : NULL);
    steamclient_free_path_array( u_pchSelectedFiles );
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

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_vtable, 35, "STEAMHTMLSURFACE_INTERFACE_VERSION_002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003.h"

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_destructor, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie, 32)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse, 12)

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_destructor(struct w_steam_iface *_this)
{/* never called */}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(_this->u_iface, pchUserAgent, pchUserCSS);
    return _ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    const char *u_pchURL = steamclient_dos_to_unix_path( pchURL, 1 );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(_this->u_iface, unBrowserHandle, pchURL ? u_pchURL : NULL, pchPostData);
    steamclient_free_path( u_pchURL );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(_this->u_iface, unBrowserHandle, unWidth, unHeight);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(_this->u_iface, unBrowserHandle, pchKey, pchValue);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(_this->u_iface, unBrowserHandle, pchScript);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(_this->u_iface, unBrowserHandle, nDelta);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(_this->u_iface, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(_this->u_iface, unBrowserHandle, bHasKeyFocus);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(_this->u_iface, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(_this->u_iface, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(_this->u_iface, unBrowserHandle, flZoom, nPointX, nPointY);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(_this->u_iface, unBrowserHandle, bBackgroundMode);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(_this->u_iface, unBrowserHandle, bAllowed);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(_this->u_iface, unBrowserHandle, bResult);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)
{
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( pchSelectedFiles );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(_this->u_iface, unBrowserHandle, pchSelectedFiles ? u_pchSelectedFiles : NULL);
    steamclient_free_path_array( u_pchSelectedFiles );
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

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_vtable, 36, "STEAMHTMLSURFACE_INTERFACE_VERSION_003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004.h"

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_destructor, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie, 32)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse, 12)

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_destructor(struct w_steam_iface *_this)
{/* never called */}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(_this->u_iface, pchUserAgent, pchUserCSS);
    return _ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    const char *u_pchURL = steamclient_dos_to_unix_path( pchURL, 1 );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(_this->u_iface, unBrowserHandle, pchURL ? u_pchURL : NULL, pchPostData);
    steamclient_free_path( u_pchURL );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(_this->u_iface, unBrowserHandle, unWidth, unHeight);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(_this->u_iface, unBrowserHandle, pchKey, pchValue);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(_this->u_iface, unBrowserHandle, pchScript);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(_this->u_iface, unBrowserHandle, nDelta);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(_this->u_iface, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(_this->u_iface, unBrowserHandle, bHasKeyFocus);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(_this->u_iface, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(_this->u_iface, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(_this->u_iface, unBrowserHandle, flZoom, nPointX, nPointY);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(_this->u_iface, unBrowserHandle, bBackgroundMode);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, float flDPIScaling)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(_this->u_iface, unBrowserHandle, flDPIScaling);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(_this->u_iface, unBrowserHandle, bAllowed);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(_this->u_iface, unBrowserHandle, bResult);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)
{
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( pchSelectedFiles );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(_this->u_iface, unBrowserHandle, pchSelectedFiles ? u_pchSelectedFiles : NULL);
    steamclient_free_path_array( u_pchSelectedFiles );
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

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_vtable, 37, "STEAMHTMLSURFACE_INTERFACE_VERSION_004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005.h"

DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_destructor, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie, 32)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse, 12)

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_destructor(struct w_steam_iface *_this)
{/* never called */}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser(_this->u_iface, pchUserAgent, pchUserCSS);
    return _ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    const char *u_pchURL = steamclient_dos_to_unix_path( pchURL, 1 );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL(_this->u_iface, unBrowserHandle, pchURL ? u_pchURL : NULL, pchPostData);
    steamclient_free_path( u_pchURL );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize(_this->u_iface, unBrowserHandle, unWidth, unHeight);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader(_this->u_iface, unBrowserHandle, pchKey, pchValue);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchScript)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript(_this->u_iface, unBrowserHandle, pchScript);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick(_this->u_iface, unBrowserHandle, eMouseButton);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel(_this->u_iface, unBrowserHandle, nDelta);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers, bool bIsSystemKey)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers, bIsSystemKey);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp(_this->u_iface, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar(_this->u_iface, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll(_this->u_iface, unBrowserHandle, nAbsolutePixelScroll);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus(_this->u_iface, unBrowserHandle, bHasKeyFocus);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char *pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find(_this->u_iface, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, int x, int y)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition(_this->u_iface, unBrowserHandle, x, y);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie(_this->u_iface, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor(_this->u_iface, unBrowserHandle, flZoom, nPointX, nPointY);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode(_this->u_iface, unBrowserHandle, bBackgroundMode);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, float flDPIScaling)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor(_this->u_iface, unBrowserHandle, flDPIScaling);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools(_this->u_iface, unBrowserHandle);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest(_this->u_iface, unBrowserHandle, bAllowed);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, bool bResult)
{
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse(_this->u_iface, unBrowserHandle, bResult);
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse(struct w_steam_iface *_this, HHTMLBrowser unBrowserHandle, const char **pchSelectedFiles)
{
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( pchSelectedFiles );
    TRACE("%p\n", _this);
    cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse(_this->u_iface, unBrowserHandle, pchSelectedFiles ? u_pchSelectedFiles : NULL);
    steamclient_free_path_array( u_pchSelectedFiles );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005,
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_destructor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse)
        VTABLE_ADD_FUNC(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_vtable, 38, "STEAMHTMLSURFACE_INTERFACE_VERSION_005");
    r->u_iface = u_iface;
    return r;
}

