/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg, 12)

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32_t unConnectionIDSrc, const void *pMsgRendezvous, uint32_t cbRendezvous)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDSrc = unConnectionIDSrc,
        .pMsgRendezvous = pMsgRendezvous,
        .cbRendezvous = cbRendezvous,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous, &params );
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32_t unConnectionIDDest, uint32_t nReason, const char *pszReason)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDDest = unConnectionIDDest,
        .nReason = nReason,
        .pszReason = pszReason,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure, &params );
}

uint64_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(struct w_steam_iface *_this, void *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON_params params =
    {
        .linux_side = _this->u_iface,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(struct w_steam_iface *_this, const void *pTicket, uint32_t cbTicket)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbTicket = cbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket, &params );
}

uint32_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(struct w_steam_iface *_this, uint32_t idxTicket, void *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .idxTicket = idxTicket,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(struct w_steam_iface *_this, const void *pMsg, uint32_t cbMsg)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg, &params );
}

extern vtable_ptr winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002, 0, ".?AVISteamNetworkingSocketsSerialized@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtables)
    __ASM_VTABLE(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002,
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSocketsSerialized002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtable, 8, "SteamNetworkingSocketsSerialized002");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg, 12)

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32_t unConnectionIDSrc, const void *pMsgRendezvous, uint32_t cbRendezvous)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDSrc = unConnectionIDSrc,
        .pMsgRendezvous = pMsgRendezvous,
        .cbRendezvous = cbRendezvous,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous, &params );
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32_t unConnectionIDDest, uint32_t nReason, const char *pszReason)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDDest = unConnectionIDDest,
        .nReason = nReason,
        .pszReason = pszReason,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure, &params );
}

uint64_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON(struct w_steam_iface *_this, void *buf, uint32_t cbBuf, const char *pszLauncherPartner)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON_params params =
    {
        .linux_side = _this->u_iface,
        .buf = buf,
        .cbBuf = cbBuf,
        .pszLauncherPartner = pszLauncherPartner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket(struct w_steam_iface *_this, const void *pTicket, uint32_t cbTicket)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbTicket = cbTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket, &params );
}

uint32_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket(struct w_steam_iface *_this, uint32_t idxTicket, void *buf, uint32_t cbBuf)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .idxTicket = idxTicket,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg(struct w_steam_iface *_this, const void *pMsg, uint32_t cbMsg)
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg, &params );
}

extern vtable_ptr winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003, 0, ".?AVISteamNetworkingSocketsSerialized@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtables)
    __ASM_VTABLE(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003,
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSocketsSerialized003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtable, 8, "SteamNetworkingSocketsSerialized003");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamNetworkingSocketsSerialized_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_rtti( base );
    init_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_rtti( base );
#endif /* __x86_64__ */
}
