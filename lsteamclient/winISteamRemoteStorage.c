/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota, 12)

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtable, 8, "STEAMREMOTESTORAGE_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota, 12)

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtables)
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtable, 7, "STEAMREMOTESTORAGE_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtable, 20, "STEAMREMOTESTORAGE_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtable, 22, "STEAMREMOTESTORAGE_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(struct w_steam_iface *_this, w_RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .updatePublishedFileRequest = updatePublishedFileRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtable, 31, "STEAMREMOTESTORAGE_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(struct w_steam_iface *_this, const char *pchVideoURL, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .pchVideoURL = pchVideoURL,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtable, 47, "STEAMREMOTESTORAGE_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtable, 47, "STEAMREMOTESTORAGE_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtable, 51, "STEAMREMOTESTORAGE_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload(struct w_steam_iface *_this, uint64_t hContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtable, 51, "STEAMREMOTESTORAGE_INTERFACE_VERSION009");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(struct w_steam_iface *_this, uint64_t hContent, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(struct w_steam_iface *_this, uint64_t hContent, const char *pchLocation, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pchLocation = pchLocation,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtable, 52, "STEAMREMOTESTORAGE_INTERFACE_VERSION010");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(struct w_steam_iface *_this, uint64_t hContent, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t unMaxSecondsOld)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .unMaxSecondsOld = unMaxSecondsOld,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(struct w_steam_iface *_this, uint64_t hContent, const char *pchLocation, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pchLocation = pchLocation,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtable, 52, "STEAMREMOTESTORAGE_INTERFACE_VERSION011");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(struct w_steam_iface *_this, uint64_t hContent, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t unMaxSecondsOld)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .unMaxSecondsOld = unMaxSecondsOld,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(struct w_steam_iface *_this, uint64_t hContent, const char *pchLocation, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pchLocation = pchLocation,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtable, 52, "STEAMREMOTESTORAGE_INTERFACE_VERSION012");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(struct w_steam_iface *_this, const char *pchFile, const void *pvData, uint32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(struct w_steam_iface *_this, const char *pchFile, uint32_t nOffset, uint32_t cubToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .nOffset = nOffset,
        .cubToRead = cubToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(struct w_steam_iface *_this, uint64_t hReadCall, void *pvBuffer, uint32_t cubToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete_params params =
    {
        .linux_side = _this->u_iface,
        .hReadCall = hReadCall,
        .pvBuffer = pvBuffer,
        .cubToRead = cubToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(struct w_steam_iface *_this, int32_t *pnTotalBytes, int32_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(struct w_steam_iface *_this, uint64_t hContent, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t unMaxSecondsOld)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .unMaxSecondsOld = unMaxSecondsOld,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(struct w_steam_iface *_this, uint64_t hContent, const char *pchLocation, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pchLocation = pchLocation,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtable, 55, "STEAMREMOTESTORAGE_INTERFACE_VERSION013");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(struct w_steam_iface *_this, const char *pchFile, const void *pvData, uint32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(struct w_steam_iface *_this, const char *pchFile, uint32_t nOffset, uint32_t cubToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .nOffset = nOffset,
        .cubToRead = cubToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(struct w_steam_iface *_this, uint64_t hReadCall, void *pvBuffer, uint32_t cubToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete_params params =
    {
        .linux_side = _this->u_iface,
        .hReadCall = hReadCall,
        .pvBuffer = pvBuffer,
        .cubToRead = cubToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(struct w_steam_iface *_this, uint64_t *pnTotalBytes, uint64_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(struct w_steam_iface *_this, uint64_t hContent, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t unMaxSecondsOld)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .unMaxSecondsOld = unMaxSecondsOld,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(struct w_steam_iface *_this, uint64_t hContent, const char *pchLocation, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pchLocation = pchLocation,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtable, 55, "STEAMREMOTESTORAGE_INTERFACE_VERSION014");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite(struct w_steam_iface *_this, const char *pchFile, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWrite, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead(struct w_steam_iface *_this, const char *pchFile, void *pvData, int32_t cubDataToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileRead, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync(struct w_steam_iface *_this, const char *pchFile, const void *pvData, uint32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteAsync, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync(struct w_steam_iface *_this, const char *pchFile, uint32_t nOffset, uint32_t cubToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .nOffset = nOffset,
        .cubToRead = cubToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsync, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete(struct w_steam_iface *_this, uint64_t hReadCall, void *pvBuffer, uint32_t cubToRead)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete_params params =
    {
        .linux_side = _this->u_iface,
        .hReadCall = hReadCall,
        .pvBuffer = pvBuffer,
        .cubToRead = cubToRead,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileReadAsyncComplete, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileForget, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileDelete, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileShare, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile, uint32_t eRemoteStoragePlatform)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .eRemoteStoragePlatform = eRemoteStoragePlatform,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetSyncPlatforms, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamOpen, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk(struct w_steam_iface *_this, uint64_t writeHandle, const void *pvData, int32_t cubData)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
        .pvData = pvData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamWriteChunk, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamClose, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel(struct w_steam_iface *_this, uint64_t writeHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel_params params =
    {
        .linux_side = _this->u_iface,
        .writeHandle = writeHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileWriteStreamCancel, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FileExists, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_FilePersisted, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileSize, &params );
    return params._ret;
}

int64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileTimestamp, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms(struct w_steam_iface *_this, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetSyncPlatforms, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize(struct w_steam_iface *_this, int32_t iFile, int32_t *pnFileSizeInBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pnFileSizeInBytes = pnFileSizeInBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetFileNameAndSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota(struct w_steam_iface *_this, uint64_t *pnTotalBytes, uint64_t *puAvailableBytes)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota_params params =
    {
        .linux_side = _this->u_iface,
        .pnTotalBytes = pnTotalBytes,
        .puAvailableBytes = puAvailableBytes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetQuota, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForAccount, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_IsCloudEnabledForApp, &params );
    return params._ret;
}

void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetCloudEnabledForApp, &params );
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload(struct w_steam_iface *_this, uint64_t hContent, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownload, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress(struct w_steam_iface *_this, uint64_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnBytesDownloaded = pnBytesDownloaded,
        .pnBytesExpected = pnBytesExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDownloadProgress, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails(struct w_steam_iface *_this, uint64_t hContent, uint32_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pnAppID = pnAppID,
        .ppchName = ppchName,
        .pnFileSizeInBytes = pnFileSizeInBytes,
        .pSteamIDOwner = pSteamIDOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUGCDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead(struct w_steam_iface *_this, uint64_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pvData = pvData,
        .cubDataToRead = cubDataToRead,
        .cOffset = cOffset,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCRead, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle(struct w_steam_iface *_this, int32_t iCachedContent)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle_params params =
    {
        .linux_side = _this->u_iface,
        .iCachedContent = iCachedContent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetCachedUGCHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile(struct w_steam_iface *_this, const char *pchFile, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags, uint32_t eWorkshopFileType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFile = pchFile,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
        .eWorkshopFileType = eWorkshopFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishWorkshopFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CreatePublishedFileUpdateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchFile = pchFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchPreviewFile)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchPreviewFile = pchPreviewFile,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFilePreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchTitle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility(struct w_steam_iface *_this, uint64_t updateHandle, uint32_t eVisibility)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags(struct w_steam_iface *_this, uint64_t updateHandle, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileTags, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate(struct w_steam_iface *_this, uint64_t updateHandle)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_CommitPublishedFileUpdate, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t unMaxSecondsOld)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .unMaxSecondsOld = unMaxSecondsOld,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedFileDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_DeletePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserPublishedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SubscribePublishedFile, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSubscribedFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UnsubscribePublishedFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription(struct w_steam_iface *_this, uint64_t updateHandle, const char *pchChangeDescription)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pchChangeDescription = pchChangeDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdatePublishedFileSetChangeDescription, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote(struct w_steam_iface *_this, uint64_t unPublishedFileId, int8_t bVoteUp)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UpdateUserPublishedItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails(struct w_steam_iface *_this, uint64_t unPublishedFileId)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetUserPublishedItemVoteDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles(struct w_steam_iface *_this, CSteamID steamId, uint32_t unStartIndex, w_SteamParamStringArray_t *pRequiredTags, w_SteamParamStringArray_t *pExcludedTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .steamId = steamId,
        .unStartIndex = unStartIndex,
        .pRequiredTags = pRequiredTags,
        .pExcludedTags = pExcludedTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumerateUserSharedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo(struct w_steam_iface *_this, uint32_t eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, uint32_t nConsumerAppId, const char *pchTitle, const char *pchDescription, uint32_t eVisibility, w_SteamParamStringArray_t *pTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo_params params =
    {
        .linux_side = _this->u_iface,
        .eVideoProvider = eVideoProvider,
        .pchVideoAccount = pchVideoAccount,
        .pchVideoIdentifier = pchVideoIdentifier,
        .pchPreviewFile = pchPreviewFile,
        .nConsumerAppId = nConsumerAppId,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .eVisibility = eVisibility,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_PublishVideo, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction(struct w_steam_iface *_this, uint64_t unPublishedFileId, uint32_t eAction)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction_params params =
    {
        .linux_side = _this->u_iface,
        .unPublishedFileId = unPublishedFileId,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_SetUserPublishedFileAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction(struct w_steam_iface *_this, uint32_t eAction, uint32_t unStartIndex)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction_params params =
    {
        .linux_side = _this->u_iface,
        .eAction = eAction,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedFilesByUserAction, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles(struct w_steam_iface *_this, uint32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, w_SteamParamStringArray_t *pTags, w_SteamParamStringArray_t *pUserTags)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles_params params =
    {
        .linux_side = _this->u_iface,
        .eEnumerationType = eEnumerationType,
        .unStartIndex = unStartIndex,
        .unCount = unCount,
        .unDays = unDays,
        .pTags = pTags,
        .pUserTags = pUserTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EnumeratePublishedWorkshopFiles, &params );
    return params._ret;
}

uint64_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation(struct w_steam_iface *_this, uint64_t hContent, const char *pchLocation, uint32_t unPriority)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation_params params =
    {
        .linux_side = _this->u_iface,
        .hContent = hContent,
        .pchLocation = pchLocation,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_UGCDownloadToLocation, &params );
    return params._ret;
}

int32_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChangeCount, &params );
    return params._ret;
}

const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange(struct w_steam_iface *_this, int32_t iFile, uint32_t *pEChangeType, uint32_t *pEFilePathType)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange_params params =
    {
        .linux_side = _this->u_iface,
        .iFile = iFile,
        .pEChangeType = pEChangeType,
        .pEFilePathType = pEFilePathType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_GetLocalFileChange, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_BeginFileWriteBatch, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch(struct w_steam_iface *_this)
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_EndFileWriteBatch, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_vtable;

DEFINE_RTTI_DATA0(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016, 0, ".?AVISteamRemoteStorage@@")

__ASM_BLOCK_BEGIN(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTESTORAGE_INTERFACE_VERSION016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_vtable, 59, "STEAMREMOTESTORAGE_INTERFACE_VERSION016");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamRemoteStorage_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_rtti( base );
    init_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION016_rtti( base );
#endif /* __x86_64__ */
}
