/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot, 4)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots, 8)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation, 12)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser, 16)

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(struct w_steam_iface *_this, void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(_this->u_iface, pubRGB, cubRGB, nWidth, nHeight);
    return _ret;
}

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(struct w_steam_iface *_this, const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchThumbnailFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchThumbnailFilename, lin_pchThumbnailFilename, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(_this->u_iface, pchFilename ? lin_pchFilename : NULL, pchThumbnailFilename ? lin_pchThumbnailFilename : NULL, nWidth, nHeight);
    return _ret;
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot(_this->u_iface);
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(struct w_steam_iface *_this, bool bHook)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(_this->u_iface, bHook);
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, const char *pchLocation)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(_this->u_iface, hScreenshot, pchLocation);
    return _ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(_this->u_iface, hScreenshot, steamID);
    return _ret;
}

extern vtable_ptr winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMSCREENSHOTS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_vtable, 6, "STEAMSCREENSHOTS_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002.h"

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot, 4)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots, 8)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation, 12)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile, 16)

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(struct w_steam_iface *_this, void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(_this->u_iface, pubRGB, cubRGB, nWidth, nHeight);
    return _ret;
}

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(struct w_steam_iface *_this, const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchThumbnailFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchThumbnailFilename, lin_pchThumbnailFilename, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(_this->u_iface, pchFilename ? lin_pchFilename : NULL, pchThumbnailFilename ? lin_pchThumbnailFilename : NULL, nWidth, nHeight);
    return _ret;
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(_this->u_iface);
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(struct w_steam_iface *_this, bool bHook)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(_this->u_iface, bHook);
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, const char *pchLocation)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(_this->u_iface, hScreenshot, pchLocation);
    return _ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(_this->u_iface, hScreenshot, steamID);
    return _ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(_this->u_iface, hScreenshot, unPublishedFileID);
    return _ret;
}

extern vtable_ptr winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMSCREENSHOTS_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_vtable, 7, "STEAMSCREENSHOTS_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003.h"

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot, 4)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots, 8)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation, 12)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked, 4)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary, 16)

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(struct w_steam_iface *_this, void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(_this->u_iface, pubRGB, cubRGB, nWidth, nHeight);
    return _ret;
}

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(struct w_steam_iface *_this, const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchThumbnailFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchThumbnailFilename, lin_pchThumbnailFilename, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(_this->u_iface, pchFilename ? lin_pchFilename : NULL, pchThumbnailFilename ? lin_pchThumbnailFilename : NULL, nWidth, nHeight);
    return _ret;
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(_this->u_iface);
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(struct w_steam_iface *_this, bool bHook)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(_this->u_iface, bHook);
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, const char *pchLocation)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(_this->u_iface, hScreenshot, pchLocation);
    return _ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(_this->u_iface, hScreenshot, steamID);
    return _ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(struct w_steam_iface *_this, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(_this->u_iface, hScreenshot, unPublishedFileID);
    return _ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(_this->u_iface);
    return _ret;
}

ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(struct w_steam_iface *_this, EVRScreenshotType eType, const char *pchFilename, const char *pchVRFilename)
{
    ScreenshotHandle _ret;
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchVRFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchVRFilename, lin_pchVRFilename, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(_this->u_iface, eType, pchFilename ? lin_pchFilename : NULL, pchVRFilename ? lin_pchVRFilename : NULL);
    return _ret;
}

extern vtable_ptr winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMSCREENSHOTS_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_vtable, 9, "STEAMSCREENSHOTS_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

