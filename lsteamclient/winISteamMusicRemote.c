/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001.h"

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

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(struct w_steam_iface *_this, const char *pchDisplayName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(_this->u_iface, pchDisplayName);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(struct w_steam_iface *_this, void *pvBuffer, uint32 cbBufferLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(_this->u_iface, pvBuffer, cbBufferLength);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(struct w_steam_iface *_this, AudioPlayback_Status nStatus)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(_this->u_iface, nStatus);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(struct w_steam_iface *_this, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(_this->u_iface, bValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(struct w_steam_iface *_this, float flValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(_this->u_iface, flValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(struct w_steam_iface *_this, bool bAvailable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(_this->u_iface, bAvailable);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(struct w_steam_iface *_this, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(_this->u_iface, pchText);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(struct w_steam_iface *_this, int nValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(_this->u_iface, nValue);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(struct w_steam_iface *_this, void *pvBuffer, uint32 cbBufferLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(_this->u_iface, pvBuffer, cbBufferLength);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(struct w_steam_iface *_this, int nID, int nPosition, const char *pchEntryText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(_this->u_iface, nID, nPosition, pchEntryText);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(struct w_steam_iface *_this, int nID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(_this->u_iface, nID);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(struct w_steam_iface *_this, int nID, int nPosition, const char *pchEntryText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(_this->u_iface, nID, nPosition, pchEntryText);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(struct w_steam_iface *_this, int nID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(_this->u_iface, nID);
    return _ret;
}

bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMMUSICREMOTE_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_vtable, 32, "STEAMMUSICREMOTE_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

