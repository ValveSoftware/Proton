/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001.h"

typedef struct __winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, const char * pchDisplayName)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(_this->linux_side, pchDisplayName);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64, 12)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, void * pvBuffer, uint32 cbBufferLength)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(_this->linux_side, pvBuffer, cbBufferLength);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, AudioPlayback_Status nStatus)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(_this->linux_side, nStatus);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(_this->linux_side, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, float flValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(_this->linux_side, flValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, bool bAvailable)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(_this->linux_side, bAvailable);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, const char * pchText)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(_this->linux_side, pchText);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, int nValue)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(_this->linux_side, nValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt, 12)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, void * pvBuffer, uint32 cbBufferLength)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(_this->linux_side, pvBuffer, cbBufferLength);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry, 16)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, int nID, int nPosition, const char * pchEntryText)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(_this->linux_side, nID, nPosition, pchEntryText);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, int nID)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(_this->linux_side, nID);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry, 16)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, int nID, int nPosition, const char * pchEntryText)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(_this->linux_side, nID, nPosition, pchEntryText);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry, 8)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this, int nID)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(_this->linux_side, nID);
}

DEFINE_THISCALL_WRAPPER(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange, 4)
bool __thiscall winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(_this->linux_side);
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

winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *create_winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001(void *linux_side)
{
    winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

