/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription, 12)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription, 8)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode, 8)

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription(struct w_steam_iface *_this, const char *pchDescription, float flTimeDelta)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription_params params =
    {
        .linux_side = _this->u_iface,
        .pchDescription = pchDescription,
        .flTimeDelta = flTimeDelta,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription(struct w_steam_iface *_this, float flTimeDelta)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription_params params =
    {
        .linux_side = _this->u_iface,
        .flTimeDelta = flTimeDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent(struct w_steam_iface *_this, const char *pchIcon, const char *pchTitle, const char *pchDescription, uint32_t unPriority, float flStartOffsetSeconds, float flDurationSeconds, uint32_t ePossibleClip)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pchIcon = pchIcon,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .unPriority = unPriority,
        .flStartOffsetSeconds = flStartOffsetSeconds,
        .flDurationSeconds = flDurationSeconds,
        .ePossibleClip = ePossibleClip,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchIcon, -1);
    IsBadStringPtrA(pchTitle, -1);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode(struct w_steam_iface *_this, uint32_t eMode)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode_params params =
    {
        .linux_side = _this->u_iface,
        .eMode = eMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode, &params );
}

extern vtable_ptr winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_vtable;

DEFINE_RTTI_DATA0(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001, 0, ".?AVISteamTimeline@@")

__ASM_BLOCK_BEGIN(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_vtables)
    __ASM_VTABLE(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001,
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamTimeline_STEAMTIMELINE_INTERFACE_V001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMTIMELINE_INTERFACE_V001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_vtable, 4, "STEAMTIMELINE_INTERFACE_V001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamTimeline_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_rtti( base );
#endif /* __x86_64__ */
}
