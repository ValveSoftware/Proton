/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary, 20)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot, 4)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots, 8)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation, 12)
DEFINE_THISCALL_WRAPPER(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser, 16)

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(struct w_steam_iface *_this, void *pubRGB, uint32_t cubRGB, int32_t nWidth, int32_t nHeight)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .pubRGB = pubRGB,
        .cubRGB = cubRGB,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot( &params );
    return params._ret;
}

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(struct w_steam_iface *_this, const char *pchFilename, const char *pchThumbnailFilename, int32_t nWidth, int32_t nHeight)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params params =
    {
        .linux_side = _this->u_iface,
        .pchFilename = pchFilename,
        .pchThumbnailFilename = pchThumbnailFilename,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    params.pchFilename = steamclient_dos_to_unix_path( pchFilename, 0 );
    params.pchThumbnailFilename = steamclient_dos_to_unix_path( pchThumbnailFilename, 0 );
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary( &params );
    steamclient_free_path( params.pchFilename );
    steamclient_free_path( params.pchThumbnailFilename );
    return params._ret;
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot(struct w_steam_iface *_this)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot( &params );
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(struct w_steam_iface *_this, bool bHook)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .bHook = bHook,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots( &params );
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(struct w_steam_iface *_this, uint32_t hScreenshot, const char *pchLocation)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .pchLocation = pchLocation,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation( &params );
    return params._ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(struct w_steam_iface *_this, uint32_t hScreenshot, CSteamID steamID)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser( &params );
    return params._ret;
}

extern vtable_ptr winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001, 0, ".?AVISteamScreenshots@@")

__ASM_BLOCK_BEGIN(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_vtables)
    __ASM_VTABLE(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser)
    );
__ASM_BLOCK_END

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

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(struct w_steam_iface *_this, void *pubRGB, uint32_t cubRGB, int32_t nWidth, int32_t nHeight)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .pubRGB = pubRGB,
        .cubRGB = cubRGB,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot( &params );
    return params._ret;
}

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(struct w_steam_iface *_this, const char *pchFilename, const char *pchThumbnailFilename, int32_t nWidth, int32_t nHeight)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary_params params =
    {
        .linux_side = _this->u_iface,
        .pchFilename = pchFilename,
        .pchThumbnailFilename = pchThumbnailFilename,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    params.pchFilename = steamclient_dos_to_unix_path( pchFilename, 0 );
    params.pchThumbnailFilename = steamclient_dos_to_unix_path( pchThumbnailFilename, 0 );
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary( &params );
    steamclient_free_path( params.pchFilename );
    steamclient_free_path( params.pchThumbnailFilename );
    return params._ret;
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(struct w_steam_iface *_this)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot( &params );
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(struct w_steam_iface *_this, bool bHook)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .bHook = bHook,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots( &params );
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(struct w_steam_iface *_this, uint32_t hScreenshot, const char *pchLocation)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .pchLocation = pchLocation,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation( &params );
    return params._ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(struct w_steam_iface *_this, uint32_t hScreenshot, CSteamID steamID)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser( &params );
    return params._ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(struct w_steam_iface *_this, uint32_t hScreenshot, uint64_t unPublishedFileID)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .unPublishedFileID = unPublishedFileID,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile( &params );
    return params._ret;
}

extern vtable_ptr winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_vtable;

DEFINE_RTTI_DATA0(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002, 0, ".?AVISteamScreenshots@@")

__ASM_BLOCK_BEGIN(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_vtables)
    __ASM_VTABLE(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser)
        VTABLE_ADD_FUNC(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile)
    );
__ASM_BLOCK_END

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

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(struct w_steam_iface *_this, void *pubRGB, uint32_t cubRGB, int32_t nWidth, int32_t nHeight)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .pubRGB = pubRGB,
        .cubRGB = cubRGB,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot( &params );
    return params._ret;
}

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(struct w_steam_iface *_this, const char *pchFilename, const char *pchThumbnailFilename, int32_t nWidth, int32_t nHeight)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary_params params =
    {
        .linux_side = _this->u_iface,
        .pchFilename = pchFilename,
        .pchThumbnailFilename = pchThumbnailFilename,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    params.pchFilename = steamclient_dos_to_unix_path( pchFilename, 0 );
    params.pchThumbnailFilename = steamclient_dos_to_unix_path( pchThumbnailFilename, 0 );
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary( &params );
    steamclient_free_path( params.pchFilename );
    steamclient_free_path( params.pchThumbnailFilename );
    return params._ret;
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(struct w_steam_iface *_this)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot( &params );
}

void __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(struct w_steam_iface *_this, bool bHook)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .bHook = bHook,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots( &params );
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(struct w_steam_iface *_this, uint32_t hScreenshot, const char *pchLocation)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .pchLocation = pchLocation,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation( &params );
    return params._ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(struct w_steam_iface *_this, uint32_t hScreenshot, CSteamID steamID)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser( &params );
    return params._ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(struct w_steam_iface *_this, uint32_t hScreenshot, uint64_t unPublishedFileID)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .hScreenshot = hScreenshot,
        .unPublishedFileID = unPublishedFileID,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile( &params );
    return params._ret;
}

bool __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(struct w_steam_iface *_this)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked( &params );
    return params._ret;
}

uint32_t __thiscall winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(struct w_steam_iface *_this, uint32_t eType, const char *pchFilename, const char *pchVRFilename)
{
    struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
        .pchFilename = pchFilename,
        .pchVRFilename = pchVRFilename,
    };
    params.pchFilename = steamclient_dos_to_unix_path( pchFilename, 0 );
    params.pchVRFilename = steamclient_dos_to_unix_path( pchVRFilename, 0 );
    TRACE("%p\n", _this);
    cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary( &params );
    steamclient_free_path( params.pchFilename );
    steamclient_free_path( params.pchVRFilename );
    return params._ret;
}

extern vtable_ptr winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_vtable;

DEFINE_RTTI_DATA0(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003, 0, ".?AVISteamScreenshots@@")

__ASM_BLOCK_BEGIN(winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMSCREENSHOTS_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_vtable, 9, "STEAMSCREENSHOTS_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamScreenshots_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_rtti( base );
    init_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_rtti( base );
    init_winISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_rtti( base );
#endif /* __x86_64__ */
}
