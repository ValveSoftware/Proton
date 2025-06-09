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

DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip, 12)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip, 8)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode, 8)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent, 28)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent, 28)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent, 16)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent, 12)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist, 12)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase, 4)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase, 4)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID, 8)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist, 8)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute, 16)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase, 8)
DEFINE_THISCALL_WRAPPER(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent, 12)

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip(struct w_steam_iface *_this, const char *pchDescription, float flTimeDelta)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip_params params =
    {
        .linux_side = _this->u_iface,
        .pchDescription = pchDescription,
        .flTimeDelta = flTimeDelta,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip(struct w_steam_iface *_this, float flTimeDelta)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip_params params =
    {
        .linux_side = _this->u_iface,
        .flTimeDelta = flTimeDelta,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode(struct w_steam_iface *_this, uint32_t eMode)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode_params params =
    {
        .linux_side = _this->u_iface,
        .eMode = eMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode, &params );
}

uint64_t __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent(struct w_steam_iface *_this, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32_t unIconPriority, float flStartOffsetSeconds, uint32_t ePossibleClip)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .pchIcon = pchIcon,
        .unIconPriority = unIconPriority,
        .flStartOffsetSeconds = flStartOffsetSeconds,
        .ePossibleClip = ePossibleClip,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    IsBadStringPtrA(pchDescription, -1);
    IsBadStringPtrA(pchIcon, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent(struct w_steam_iface *_this, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32_t unIconPriority, float flStartOffsetSeconds, float flDuration, uint32_t ePossibleClip)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .pchIcon = pchIcon,
        .unIconPriority = unIconPriority,
        .flStartOffsetSeconds = flStartOffsetSeconds,
        .flDuration = flDuration,
        .ePossibleClip = ePossibleClip,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    IsBadStringPtrA(pchDescription, -1);
    IsBadStringPtrA(pchIcon, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent(struct w_steam_iface *_this, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32_t unPriority, float flStartOffsetSeconds, uint32_t ePossibleClip)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .pchIcon = pchIcon,
        .unPriority = unPriority,
        .flStartOffsetSeconds = flStartOffsetSeconds,
        .ePossibleClip = ePossibleClip,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    IsBadStringPtrA(pchDescription, -1);
    IsBadStringPtrA(pchIcon, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent, &params );
    return params._ret;
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent(struct w_steam_iface *_this, uint64_t ulEvent, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32_t unPriority, uint32_t ePossibleClip)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .ulEvent = ulEvent,
        .pchTitle = pchTitle,
        .pchDescription = pchDescription,
        .pchIcon = pchIcon,
        .unPriority = unPriority,
        .ePossibleClip = ePossibleClip,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    IsBadStringPtrA(pchDescription, -1);
    IsBadStringPtrA(pchIcon, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent(struct w_steam_iface *_this, uint64_t ulEvent, float flEndOffsetSeconds)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .ulEvent = ulEvent,
        .flEndOffsetSeconds = flEndOffsetSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent(struct w_steam_iface *_this, uint64_t ulEvent)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .ulEvent = ulEvent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent, &params );
}

uint64_t __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist(struct w_steam_iface *_this, uint64_t ulEvent)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist_params params =
    {
        .linux_side = _this->u_iface,
        .ulEvent = ulEvent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist, &params );
    return params._ret;
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase(struct w_steam_iface *_this)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase(struct w_steam_iface *_this)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID(struct w_steam_iface *_this, const char *pchPhaseID)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID_params params =
    {
        .linux_side = _this->u_iface,
        .pchPhaseID = pchPhaseID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchPhaseID, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID, &params );
}

uint64_t __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist(struct w_steam_iface *_this, const char *pchPhaseID)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist_params params =
    {
        .linux_side = _this->u_iface,
        .pchPhaseID = pchPhaseID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchPhaseID, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist, &params );
    return params._ret;
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag(struct w_steam_iface *_this, const char *pchTagName, const char *pchTagIcon, const char *pchTagGroup, uint32_t unPriority)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag_params params =
    {
        .linux_side = _this->u_iface,
        .pchTagName = pchTagName,
        .pchTagIcon = pchTagIcon,
        .pchTagGroup = pchTagGroup,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTagName, -1);
    IsBadStringPtrA(pchTagIcon, -1);
    IsBadStringPtrA(pchTagGroup, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute(struct w_steam_iface *_this, const char *pchAttributeGroup, const char *pchAttributeValue, uint32_t unPriority)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchAttributeGroup = pchAttributeGroup,
        .pchAttributeValue = pchAttributeValue,
        .unPriority = unPriority,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchAttributeGroup, -1);
    IsBadStringPtrA(pchAttributeValue, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase(struct w_steam_iface *_this, const char *pchPhaseID)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase_params params =
    {
        .linux_side = _this->u_iface,
        .pchPhaseID = pchPhaseID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchPhaseID, -1);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase, &params );
}

void __thiscall winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent(struct w_steam_iface *_this, const uint64_t ulEvent)
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent_params params =
    {
        .linux_side = _this->u_iface,
        .ulEvent = ulEvent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent, &params );
}

extern vtable_ptr winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_vtable;

DEFINE_RTTI_DATA0(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004, 0, ".?AVISteamTimeline@@")

__ASM_BLOCK_BEGIN(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_vtables)
    __ASM_VTABLE(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004,
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase)
        VTABLE_ADD_FUNC(winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamTimeline_STEAMTIMELINE_INTERFACE_V004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMTIMELINE_INTERFACE_V004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_vtable, 18, "STEAMTIMELINE_INTERFACE_V004");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamTimeline_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamTimeline_STEAMTIMELINE_INTERFACE_V001_rtti( base );
    init_winISteamTimeline_STEAMTIMELINE_INTERFACE_V004_rtti( base );
#endif /* __x86_64__ */
}
