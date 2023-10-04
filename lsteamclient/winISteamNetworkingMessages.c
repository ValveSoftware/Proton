/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo, 16)

uint32_t __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, const void *pubData, uint32_t cubData, int32_t nSendFlags, int32_t nRemoteChannel)
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .pubData = pubData,
        .cubData = cubData,
        .nSendFlags = nSendFlags,
        .nRemoteChannel = nRemoteChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote)
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote)
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nLocalChannel)
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nLocalChannel = nLocalChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, SteamNetConnectionInfo_t_153a *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus)
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .pConnectionInfo = pConnectionInfo,
        .pQuickStatus = pQuickStatus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworkingMessages_SteamNetworkingMessages002_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingMessages_SteamNetworkingMessages002, 0, ".?AVISteamNetworkingMessages@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingMessages_SteamNetworkingMessages002_vtables)
    __ASM_VTABLE(winISteamNetworkingMessages_SteamNetworkingMessages002,
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingMessages_SteamNetworkingMessages002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingMessages002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingMessages_SteamNetworkingMessages002_vtable, 6, "SteamNetworkingMessages002");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamNetworkingMessages_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamNetworkingMessages_SteamNetworkingMessages002_rtti( base );
#endif /* __x86_64__ */
}
