/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown, &params );
    return params._ret;
}

uint64_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .pchUserAgent = pchUserAgent,
        .pchUserCSS = pchUserCSS,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser, &params );
    return params._ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchURL = pchURL,
        .pchPostData = pchPostData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t unWidth, uint32_t unHeight)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .unWidth = unWidth,
        .unHeight = unHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchKey, const char *pchValue)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchScript)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchScript = pchScript,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t nDelta)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nDelta = nDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t cUnicodeChar, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .cUnicodeChar = cUnicodeChar,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bHasKeyFocus)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bHasKeyFocus = bHasKeyFocus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchSearchStr, int8_t bCurrentlyInFind, int8_t bReverse)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSearchStr = pchSearchStr,
        .bCurrentlyInFind = bCurrentlyInFind,
        .bReverse = bReverse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bAllowed)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bAllowed = bAllowed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bResult)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bResult = bResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char **pchSelectedFiles)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSelectedFiles = pchSelectedFiles,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse, &params );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_vtable;

DEFINE_RTTI_DATA0(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001, 0, ".?AVISteamHTMLSurface@@")

__ASM_BLOCK_BEGIN(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_vtable, 33, "STEAMHTMLSURFACE_INTERFACE_VERSION_001");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown, &params );
    return params._ret;
}

uint64_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .pchUserAgent = pchUserAgent,
        .pchUserCSS = pchUserCSS,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser, &params );
    return params._ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchURL = pchURL,
        .pchPostData = pchPostData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t unWidth, uint32_t unHeight)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .unWidth = unWidth,
        .unHeight = unHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchKey, const char *pchValue)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchScript)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchScript = pchScript,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t nDelta)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nDelta = nDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t cUnicodeChar, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .cUnicodeChar = cUnicodeChar,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bHasKeyFocus)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bHasKeyFocus = bHasKeyFocus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchSearchStr, int8_t bCurrentlyInFind, int8_t bReverse)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSearchStr = pchSearchStr,
        .bCurrentlyInFind = bCurrentlyInFind,
        .bReverse = bReverse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, uint32_t nExpires, int8_t bSecure, int8_t bHTTPOnly)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params params =
    {
        .linux_side = _this->u_iface,
        .pchHostname = pchHostname,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .pchPath = pchPath,
        .nExpires = nExpires,
        .bSecure = bSecure,
        .bHTTPOnly = bHTTPOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(struct w_steam_iface *_this, uint32_t unBrowserHandle, float flZoom, int32_t nPointX, int32_t nPointY)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .flZoom = flZoom,
        .nPointX = nPointX,
        .nPointY = nPointY,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bAllowed)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bAllowed = bAllowed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bResult)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bResult = bResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char **pchSelectedFiles)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSelectedFiles = pchSelectedFiles,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse, &params );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_vtable;

DEFINE_RTTI_DATA0(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002, 0, ".?AVISteamHTMLSurface@@")

__ASM_BLOCK_BEGIN(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_vtable, 35, "STEAMHTMLSURFACE_INTERFACE_VERSION_002");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown, &params );
    return params._ret;
}

uint64_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .pchUserAgent = pchUserAgent,
        .pchUserCSS = pchUserCSS,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser, &params );
    return params._ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchURL = pchURL,
        .pchPostData = pchPostData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t unWidth, uint32_t unHeight)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .unWidth = unWidth,
        .unHeight = unHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchKey, const char *pchValue)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchScript)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchScript = pchScript,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t nDelta)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nDelta = nDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t cUnicodeChar, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .cUnicodeChar = cUnicodeChar,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bHasKeyFocus)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bHasKeyFocus = bHasKeyFocus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchSearchStr, int8_t bCurrentlyInFind, int8_t bReverse)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSearchStr = pchSearchStr,
        .bCurrentlyInFind = bCurrentlyInFind,
        .bReverse = bReverse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, uint32_t nExpires, int8_t bSecure, int8_t bHTTPOnly)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie_params params =
    {
        .linux_side = _this->u_iface,
        .pchHostname = pchHostname,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .pchPath = pchPath,
        .nExpires = nExpires,
        .bSecure = bSecure,
        .bHTTPOnly = bHTTPOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(struct w_steam_iface *_this, uint32_t unBrowserHandle, float flZoom, int32_t nPointX, int32_t nPointY)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .flZoom = flZoom,
        .nPointX = nPointX,
        .nPointY = nPointY,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bBackgroundMode)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bBackgroundMode = bBackgroundMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bAllowed)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bAllowed = bAllowed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bResult)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bResult = bResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char **pchSelectedFiles)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSelectedFiles = pchSelectedFiles,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse, &params );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_vtable;

DEFINE_RTTI_DATA0(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003, 0, ".?AVISteamHTMLSurface@@")

__ASM_BLOCK_BEGIN(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_vtable, 36, "STEAMHTMLSURFACE_INTERFACE_VERSION_003");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown, &params );
    return params._ret;
}

uint64_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .pchUserAgent = pchUserAgent,
        .pchUserCSS = pchUserCSS,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser, &params );
    return params._ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchURL = pchURL,
        .pchPostData = pchPostData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t unWidth, uint32_t unHeight)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .unWidth = unWidth,
        .unHeight = unHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchKey, const char *pchValue)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchScript)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchScript = pchScript,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t nDelta)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nDelta = nDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t cUnicodeChar, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .cUnicodeChar = cUnicodeChar,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bHasKeyFocus)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bHasKeyFocus = bHasKeyFocus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchSearchStr, int8_t bCurrentlyInFind, int8_t bReverse)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSearchStr = pchSearchStr,
        .bCurrentlyInFind = bCurrentlyInFind,
        .bReverse = bReverse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, uint32_t nExpires, int8_t bSecure, int8_t bHTTPOnly)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie_params params =
    {
        .linux_side = _this->u_iface,
        .pchHostname = pchHostname,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .pchPath = pchPath,
        .nExpires = nExpires,
        .bSecure = bSecure,
        .bHTTPOnly = bHTTPOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(struct w_steam_iface *_this, uint32_t unBrowserHandle, float flZoom, int32_t nPointX, int32_t nPointY)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .flZoom = flZoom,
        .nPointX = nPointX,
        .nPointY = nPointY,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bBackgroundMode)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bBackgroundMode = bBackgroundMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(struct w_steam_iface *_this, uint32_t unBrowserHandle, float flDPIScaling)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .flDPIScaling = flDPIScaling,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bAllowed)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bAllowed = bAllowed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bResult)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bResult = bResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char **pchSelectedFiles)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSelectedFiles = pchSelectedFiles,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse, &params );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_vtable;

DEFINE_RTTI_DATA0(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004, 0, ".?AVISteamHTMLSurface@@")

__ASM_BLOCK_BEGIN(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_vtable, 37, "STEAMHTMLSURFACE_INTERFACE_VERSION_004");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown, &params );
    return params._ret;
}

uint64_t __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser(struct w_steam_iface *_this, const char *pchUserAgent, const char *pchUserCSS)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .pchUserAgent = pchUserAgent,
        .pchUserCSS = pchUserCSS,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser, &params );
    return params._ret;
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchURL, const char *pchPostData)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchURL = pchURL,
        .pchPostData = pchPostData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t unWidth, uint32_t unHeight)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .unWidth = unWidth,
        .unHeight = unHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchKey, const char *pchValue)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchScript)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchScript = pchScript,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t eMouseButton)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .eMouseButton = eMouseButton,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t nDelta)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nDelta = nDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers, int8_t bIsSystemKey)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
        .bIsSystemKey = bIsSystemKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nNativeKeyCode, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nNativeKeyCode = nNativeKeyCode,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t cUnicodeChar, uint32_t eHTMLKeyModifiers)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .cUnicodeChar = cUnicodeChar,
        .eHTMLKeyModifiers = eHTMLKeyModifiers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll(struct w_steam_iface *_this, uint32_t unBrowserHandle, uint32_t nAbsolutePixelScroll)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .nAbsolutePixelScroll = nAbsolutePixelScroll,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bHasKeyFocus)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bHasKeyFocus = bHasKeyFocus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char *pchSearchStr, int8_t bCurrentlyInFind, int8_t bReverse)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSearchStr = pchSearchStr,
        .bCurrentlyInFind = bCurrentlyInFind,
        .bReverse = bReverse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition(struct w_steam_iface *_this, uint32_t unBrowserHandle, int32_t x, int32_t y)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .x = x,
        .y = y,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie(struct w_steam_iface *_this, const char *pchHostname, const char *pchKey, const char *pchValue, const char *pchPath, uint32_t nExpires, int8_t bSecure, int8_t bHTTPOnly)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie_params params =
    {
        .linux_side = _this->u_iface,
        .pchHostname = pchHostname,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .pchPath = pchPath,
        .nExpires = nExpires,
        .bSecure = bSecure,
        .bHTTPOnly = bHTTPOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor(struct w_steam_iface *_this, uint32_t unBrowserHandle, float flZoom, int32_t nPointX, int32_t nPointY)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .flZoom = flZoom,
        .nPointX = nPointX,
        .nPointY = nPointY,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bBackgroundMode)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bBackgroundMode = bBackgroundMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor(struct w_steam_iface *_this, uint32_t unBrowserHandle, float flDPIScaling)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .flDPIScaling = flDPIScaling,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools(struct w_steam_iface *_this, uint32_t unBrowserHandle)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bAllowed)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bAllowed = bAllowed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, int8_t bResult)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .bResult = bResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse, &params );
}

void __thiscall winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse(struct w_steam_iface *_this, uint32_t unBrowserHandle, const char **pchSelectedFiles)
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse_params params =
    {
        .linux_side = _this->u_iface,
        .unBrowserHandle = unBrowserHandle,
        .pchSelectedFiles = pchSelectedFiles,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse, &params );
}

extern vtable_ptr winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_vtable;

DEFINE_RTTI_DATA0(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005, 0, ".?AVISteamHTMLSurface@@")

__ASM_BLOCK_BEGIN(winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTMLSURFACE_INTERFACE_VERSION_005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_vtable, 38, "STEAMHTMLSURFACE_INTERFACE_VERSION_005");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamHTMLSurface_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_rtti( base );
    init_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_rtti( base );
    init_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_rtti( base );
    init_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_rtti( base );
    init_winISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_rtti( base );
#endif /* __x86_64__ */
}
