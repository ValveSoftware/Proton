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

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003.h"

typedef struct __winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003;

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot, 20)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, void * pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(_this->linux_side, pubRGB, cubRGB, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary, 20)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight)
{
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchThumbnailFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchThumbnailFilename, lin_pchThumbnailFilename, 0);
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(_this->linux_side, pchFilename ? lin_pchFilename : NULL, pchThumbnailFilename ? lin_pchThumbnailFilename : NULL, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot, 4)
void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots, 8)
void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, bool bHook)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(_this->linux_side, bHook);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation, 12)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, ScreenshotHandle hScreenshot, const char * pchLocation)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(_this->linux_side, hScreenshot, pchLocation);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser, 16)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(_this->linux_side, hScreenshot, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile, 16)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(_this->linux_side, hScreenshot, unPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked, 4)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary, 16)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *_this, EVRScreenshotType eType, const char * pchFilename, const char * pchVRFilename)
{
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchVRFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchVRFilename, lin_pchVRFilename, 0);
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(_this->linux_side, eType, pchFilename ? lin_pchFilename : NULL, pchVRFilename ? lin_pchVRFilename : NULL);
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

winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003(void *linux_side)
{
    winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002.h"

typedef struct __winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002;

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot, 20)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this, void * pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(_this->linux_side, pubRGB, cubRGB, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary, 20)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this, const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight)
{
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchThumbnailFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchThumbnailFilename, lin_pchThumbnailFilename, 0);
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(_this->linux_side, pchFilename ? lin_pchFilename : NULL, pchThumbnailFilename ? lin_pchThumbnailFilename : NULL, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot, 4)
void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots, 8)
void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this, bool bHook)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(_this->linux_side, bHook);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation, 12)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this, ScreenshotHandle hScreenshot, const char * pchLocation)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(_this->linux_side, hScreenshot, pchLocation);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser, 16)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(_this->linux_side, hScreenshot, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile, 16)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *_this, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(_this->linux_side, hScreenshot, unPublishedFileID);
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

winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002(void *linux_side)
{
    winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001.h"

typedef struct __winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot, 20)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *_this, void * pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(_this->linux_side, pubRGB, cubRGB, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary, 20)
ScreenshotHandle __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *_this, const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight)
{
    char lin_pchFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFilename, lin_pchFilename, 0);
    char lin_pchThumbnailFilename[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchThumbnailFilename, lin_pchThumbnailFilename, 0);
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(_this->linux_side, pchFilename ? lin_pchFilename : NULL, pchThumbnailFilename ? lin_pchThumbnailFilename : NULL, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot, 4)
void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots, 8)
void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *_this, bool bHook)
{
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(_this->linux_side, bHook);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation, 12)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *_this, ScreenshotHandle hScreenshot, const char * pchLocation)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(_this->linux_side, hScreenshot, pchLocation);
}

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser, 16)
bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *_this, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(_this->linux_side, hScreenshot, steamID);
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

winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001(void *linux_side)
{
    winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

