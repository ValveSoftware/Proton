/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage, 20)

uint32_t __thiscall winISteamGameCoordinator_SteamGameCoordinator001_SendMessage(struct w_steam_iface *_this, uint32_t unMsgType, const void *pubData, uint32_t cubData)
{
    struct ISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .unMsgType = unMsgType,
        .pubData = pubData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameCoordinator_SteamGameCoordinator001_SendMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(struct w_steam_iface *_this, uint32_t *pcubMsgSize)
{
    struct ISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(struct w_steam_iface *_this, uint32_t *punMsgType, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params params =
    {
        .linux_side = _this->u_iface,
        .punMsgType = punMsgType,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameCoordinator_SteamGameCoordinator001_vtable;

DEFINE_RTTI_DATA0(winISteamGameCoordinator_SteamGameCoordinator001, 0, ".?AVISteamGameCoordinator@@")

__ASM_BLOCK_BEGIN(winISteamGameCoordinator_SteamGameCoordinator001_vtables)
    __ASM_VTABLE(winISteamGameCoordinator_SteamGameCoordinator001,
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage)
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable)
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameCoordinator_SteamGameCoordinator001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameCoordinator001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameCoordinator_SteamGameCoordinator001_vtable, 3, "SteamGameCoordinator001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamGameCoordinator_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamGameCoordinator_SteamGameCoordinator001_rtti( base );
#endif /* __x86_64__ */
}
