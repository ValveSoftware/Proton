/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota, 12)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtable, 8, "STEAMREMOTESTORAGE_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota, 12)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtable, 7, "STEAMREMOTESTORAGE_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle, 8)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtable, 20, "STEAMREMOTESTORAGE_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle, 8)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtable, 22, "STEAMREMOTESTORAGE_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile, 32)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile, 44)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile, 12)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(_this->u_iface, pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(struct w_steam_iface *_this, RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(_this->u_iface, updatePublishedFileRequest);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtable, 31, "STEAMREMOTESTORAGE_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo, 32)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles, 28)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(struct w_steam_iface *_this, const char *pchVideoURL, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(_this->u_iface, pchVideoURL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtable, 47, "STEAMREMOTESTORAGE_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles, 28)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtable, 47, "STEAMREMOTESTORAGE_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles, 28)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtable, 51, "STEAMREMOTESTORAGE_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles, 28)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload(_this->u_iface, hContent);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtable, 51, "STEAMREMOTESTORAGE_INTERFACE_VERSION009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation, 20)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(_this->u_iface, hContent, unPriority);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(struct w_steam_iface *_this, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(_this->u_iface, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtable, 52, "STEAMREMOTESTORAGE_INTERFACE_VERSION010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation, 20)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(_this->u_iface, hContent, unPriority);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(_this->u_iface, unPublishedFileId, unMaxSecondsOld);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(struct w_steam_iface *_this, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(_this->u_iface, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtable, 52, "STEAMREMOTESTORAGE_INTERFACE_VERSION011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation, 20)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(_this->u_iface, hContent, unPriority);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset, eAction);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(_this->u_iface, unPublishedFileId, unMaxSecondsOld);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(struct w_steam_iface *_this, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(_this->u_iface, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtable, 52, "STEAMREMOTESTORAGE_INTERFACE_VERSION012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation, 20)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(struct w_steam_iface *_this, const char *pchFile, const void *pvData, uint32 cubData)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(struct w_steam_iface *_this, const char *pchFile, uint32 nOffset, uint32 cubToRead)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(_this->u_iface, pchFile, nOffset, cubToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(struct w_steam_iface *_this, SteamAPICall_t hReadCall, void *pvBuffer, uint32 cubToRead)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(_this->u_iface, hReadCall, pvBuffer, cubToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(struct w_steam_iface *_this, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(_this->u_iface, hContent, unPriority);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset, eAction);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(_this->u_iface, unPublishedFileId, unMaxSecondsOld);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(struct w_steam_iface *_this, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(_this->u_iface, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtable, 55, "STEAMREMOTESTORAGE_INTERFACE_VERSION013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation, 20)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(struct w_steam_iface *_this, const char *pchFile, const void *pvData, uint32 cubData)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(struct w_steam_iface *_this, const char *pchFile, uint32 nOffset, uint32 cubToRead)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(_this->u_iface, pchFile, nOffset, cubToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(struct w_steam_iface *_this, SteamAPICall_t hReadCall, void *pvBuffer, uint32 cubToRead)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(_this->u_iface, hReadCall, pvBuffer, cubToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(struct w_steam_iface *_this, uint64 *pnTotalBytes, uint64 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(_this->u_iface, hContent, unPriority);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset, eAction);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(_this->u_iface, unPublishedFileId, unMaxSecondsOld);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(struct w_steam_iface *_this, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(_this->u_iface, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtable, 55, "STEAMREMOTESTORAGE_INTERFACE_VERSION014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016.h"

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile, 36)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles, 24)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo, 40)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles, 28)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation, 20)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch, 4)

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead(_this->u_iface, pchFile, pvData, cubDataToRead);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync(struct w_steam_iface *_this, const char *pchFile, const void *pvData, uint32 cubData)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync(_this->u_iface, pchFile, pvData, cubData);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync(struct w_steam_iface *_this, const char *pchFile, uint32 nOffset, uint32 cubToRead)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync(_this->u_iface, pchFile, nOffset, cubToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete(struct w_steam_iface *_this, SteamAPICall_t hReadCall, void *pvBuffer, uint32 cubToRead)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete(_this->u_iface, hReadCall, pvBuffer, cubToRead);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete(_this->u_iface, pchFile);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms(_this->u_iface, pchFile, eRemoteStoragePlatform);
    return _ret;
}

UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk(_this->u_iface, writeHandle, pvData, cubData);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel(struct w_steam_iface *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel(_this->u_iface, writeHandle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists(_this->u_iface, pchFile);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize(_this->u_iface, pchFile);
    return _ret;
}

int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    int64 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp(_this->u_iface, pchFile);
    return _ret;
}

ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms(_this->u_iface, pchFile);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize(struct w_steam_iface *_this, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize(_this->u_iface, iFile, pnFileSizeInBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota(struct w_steam_iface *_this, uint64 *pnTotalBytes, uint64 *puAvailableBytes)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota(_this->u_iface, pnTotalBytes, puAvailableBytes);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp(_this->u_iface);
    return _ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp(struct w_steam_iface *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp(_this->u_iface, bEnabled);
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload(struct w_steam_iface *_this, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload(_this->u_iface, hContent, unPriority);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress(struct w_steam_iface *_this, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress(_this->u_iface, hContent, pnBytesDownloaded, pnBytesExpected);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails(struct w_steam_iface *_this, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails(_this->u_iface, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead(struct w_steam_iface *_this, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead(_this->u_iface, hContent, pvData, cubDataToRead, cOffset, eAction);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount(_this->u_iface);
    return _ret;
}

UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle(struct w_steam_iface *_this, int32 iCachedContent)
{
    UGCHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle(_this->u_iface, iCachedContent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile(_this->u_iface, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
    return _ret;
}

PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile(_this->u_iface, updateHandle, pchFile ? lin_pchFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile(_this->u_iface, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle(_this->u_iface, updateHandle, pchTitle);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription(_this->u_iface, updateHandle, pchDescription);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility(_this->u_iface, updateHandle, eVisibility);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate(_this->u_iface, updateHandle);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails(_this->u_iface, unPublishedFileId, unMaxSecondsOld);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles(_this->u_iface, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile(_this->u_iface, unPublishedFileId);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription(_this->u_iface, updateHandle, pchChangeDescription);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote(_this->u_iface, unPublishedFileId, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails(_this->u_iface, unPublishedFileId);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles(_this->u_iface, steamId, unStartIndex, pRequiredTags, pExcludedTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo(struct w_steam_iface *_this, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo(_this->u_iface, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction(struct w_steam_iface *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction(_this->u_iface, unPublishedFileId, eAction);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction(_this->u_iface, eAction, unStartIndex);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles(_this->u_iface, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation(struct w_steam_iface *_this, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation(_this->u_iface, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
    return _ret;
}

int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount(struct w_steam_iface *_this)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange(struct w_steam_iface *_this, int iFile, ERemoteStorageLocalFileChange *pEChangeType, ERemoteStorageFilePathType *pEFilePathType)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange(_this->u_iface, iFile, pEChangeType, pEFilePathType);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_vtable, 59, "STEAMREMOTESTORAGE_INTERFACE_VERSION016");
    r->u_iface = u_iface;
    return r;
}

