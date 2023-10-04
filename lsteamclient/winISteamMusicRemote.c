/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64, 12)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt, 12)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry, 16)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry, 16)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange, 4)

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(struct w_steam_iface *_this, const char *pchDisplayName)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params params =
    {
        .linux_side = _this->u_iface,
        .pchDisplayName = pchDisplayName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(struct w_steam_iface *_this, void *pvBuffer, uint32_t cbBufferLength)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params params =
    {
        .linux_side = _this->u_iface,
        .pvBuffer = pvBuffer,
        .cbBufferLength = cbBufferLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(struct w_steam_iface *_this, uint32_t nStatus)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params params =
    {
        .linux_side = _this->u_iface,
        .nStatus = nStatus,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(struct w_steam_iface *_this, int8_t bValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params params =
    {
        .linux_side = _this->u_iface,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(struct w_steam_iface *_this, float flValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params params =
    {
        .linux_side = _this->u_iface,
        .flValue = flValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(struct w_steam_iface *_this, int8_t bAvailable)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .bAvailable = bAvailable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(struct w_steam_iface *_this, const char *pchText)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(struct w_steam_iface *_this, int32_t nValue)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params params =
    {
        .linux_side = _this->u_iface,
        .nValue = nValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(struct w_steam_iface *_this, void *pvBuffer, uint32_t cbBufferLength)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params params =
    {
        .linux_side = _this->u_iface,
        .pvBuffer = pvBuffer,
        .cbBufferLength = cbBufferLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(struct w_steam_iface *_this, int32_t nID, int32_t nPosition, const char *pchEntryText)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params params =
    {
        .linux_side = _this->u_iface,
        .nID = nID,
        .nPosition = nPosition,
        .pchEntryText = pchEntryText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(struct w_steam_iface *_this, int32_t nID)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params params =
    {
        .linux_side = _this->u_iface,
        .nID = nID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(struct w_steam_iface *_this, int32_t nID, int32_t nPosition, const char *pchEntryText)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params params =
    {
        .linux_side = _this->u_iface,
        .nID = nID,
        .nPosition = nPosition,
        .pchEntryText = pchEntryText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(struct w_steam_iface *_this, int32_t nID)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params params =
    {
        .linux_side = _this->u_iface,
        .nID = nID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(struct w_steam_iface *_this)
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange, &params );
    return params._ret;
}

extern vtable_ptr winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001, 0, ".?AVISteamMusicRemote@@")

__ASM_BLOCK_BEGIN(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_vtables)
    __ASM_VTABLE(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry)
        VTABLE_ADD_FUNC(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMMUSICREMOTE_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_vtable, 32, "STEAMMUSICREMOTE_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamMusicRemote_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_rtti( base );
#endif /* __x86_64__ */
}
