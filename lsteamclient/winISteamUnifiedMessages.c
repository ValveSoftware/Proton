/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod, 24)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData, 24)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification, 16)

uint64_t __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod(struct w_steam_iface *_this, const char *pchServiceMethod, const void *pRequestBuffer, uint32_t unRequestBufferSize, uint64_t unContext)
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params params =
    {
        .linux_side = _this->u_iface,
        .pchServiceMethod = pchServiceMethod,
        .pRequestBuffer = pRequestBuffer,
        .unRequestBufferSize = unRequestBufferSize,
        .unContext = unContext,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod, &params );
    return params._ret;
}

int8_t __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo(struct w_steam_iface *_this, uint64_t hHandle, uint32_t *punResponseSize, uint32_t *peResult)
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hHandle = hHandle,
        .punResponseSize = punResponseSize,
        .peResult = peResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData(struct w_steam_iface *_this, uint64_t hHandle, void *pResponseBuffer, uint32_t unResponseBufferSize, int8_t bAutoRelease)
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params params =
    {
        .linux_side = _this->u_iface,
        .hHandle = hHandle,
        .pResponseBuffer = pResponseBuffer,
        .unResponseBufferSize = unResponseBufferSize,
        .bAutoRelease = bAutoRelease,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData, &params );
    return params._ret;
}

int8_t __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod(struct w_steam_iface *_this, uint64_t hHandle)
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hHandle = hHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod, &params );
    return params._ret;
}

int8_t __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification(struct w_steam_iface *_this, const char *pchServiceNotification, const void *pNotificationBuffer, uint32_t unNotificationBufferSize)
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params params =
    {
        .linux_side = _this->u_iface,
        .pchServiceNotification = pchServiceNotification,
        .pNotificationBuffer = pNotificationBuffer,
        .unNotificationBufferSize = unNotificationBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification, &params );
    return params._ret;
}

extern vtable_ptr winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001, 0, ".?AVISteamUnifiedMessages@@")

__ASM_BLOCK_BEGIN(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_vtables)
    __ASM_VTABLE(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_vtable, 5, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamUnifiedMessages_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_rtti( base );
#endif /* __x86_64__ */
}
