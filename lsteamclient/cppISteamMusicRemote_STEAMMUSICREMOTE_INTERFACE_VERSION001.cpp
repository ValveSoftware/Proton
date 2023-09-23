#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001.h"
bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(void *linux_side, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->RegisterSteamMusicRemote((const char *)pchName);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->DeregisterSteamMusicRemote();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->BIsCurrentMusicRemote();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->BActivationSuccess((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(void *linux_side, const char *pchDisplayName)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->SetDisplayName((const char *)pchDisplayName);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(void *linux_side, void *pvBuffer, uint32 cbBufferLength)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->SetPNGIcon_64x64((void *)pvBuffer, (uint32)cbBufferLength);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->EnablePlayPrevious((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->EnablePlayNext((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->EnableShuffled((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->EnableLooped((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->EnableQueue((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->EnablePlaylists((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(void *linux_side, AudioPlayback_Status nStatus)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdatePlaybackStatus((AudioPlayback_Status)nStatus);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdateShuffled((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(void *linux_side, bool bValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdateLooped((bool)bValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(void *linux_side, float flValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdateVolume((float)flValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->CurrentEntryWillChange();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(void *linux_side, bool bAvailable)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->CurrentEntryIsAvailable((bool)bAvailable);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(void *linux_side, const char *pchText)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdateCurrentEntryText((const char *)pchText);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(void *linux_side, int nValue)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdateCurrentEntryElapsedSeconds((int)nValue);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(void *linux_side, void *pvBuffer, uint32 cbBufferLength)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->UpdateCurrentEntryCoverArt((void *)pvBuffer, (uint32)cbBufferLength);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->CurrentEntryDidChange();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->QueueWillChange();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->ResetQueueEntries();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(void *linux_side, int nID, int nPosition, const char *pchEntryText)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->SetQueueEntry((int)nID, (int)nPosition, (const char *)pchEntryText);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(void *linux_side, int nID)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->SetCurrentQueueEntry((int)nID);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->QueueDidChange();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->PlaylistWillChange();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->ResetPlaylistEntries();
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(void *linux_side, int nID, int nPosition, const char *pchEntryText)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->SetPlaylistEntry((int)nID, (int)nPosition, (const char *)pchEntryText);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(void *linux_side, int nID)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->SetCurrentPlaylistEntry((int)nID);
    return (_ret);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMusicRemote*)linux_side)->PlaylistDidChange();
    return (_ret);
}

#ifdef __cplusplus
}
#endif
