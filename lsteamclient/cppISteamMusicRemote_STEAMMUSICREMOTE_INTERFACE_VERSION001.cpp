#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001.h"
bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote(void *linux_side, const char * pchName)
{
    return ((ISteamMusicRemote*)linux_side)->RegisterSteamMusicRemote((const char *)pchName);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->DeregisterSteamMusicRemote();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->BIsCurrentMusicRemote();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->BActivationSuccess((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName(void *linux_side, const char * pchDisplayName)
{
    return ((ISteamMusicRemote*)linux_side)->SetDisplayName((const char *)pchDisplayName);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64(void *linux_side, void * pvBuffer, uint32 cbBufferLength)
{
    return ((ISteamMusicRemote*)linux_side)->SetPNGIcon_64x64((void *)pvBuffer, (uint32)cbBufferLength);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->EnablePlayPrevious((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->EnablePlayNext((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->EnableShuffled((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->EnableLooped((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->EnableQueue((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->EnablePlaylists((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus(void *linux_side, AudioPlayback_Status nStatus)
{
    return ((ISteamMusicRemote*)linux_side)->UpdatePlaybackStatus((AudioPlayback_Status)nStatus);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->UpdateShuffled((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped(void *linux_side, bool bValue)
{
    return ((ISteamMusicRemote*)linux_side)->UpdateLooped((bool)bValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume(void *linux_side, float flValue)
{
    return ((ISteamMusicRemote*)linux_side)->UpdateVolume((float)flValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->CurrentEntryWillChange();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable(void *linux_side, bool bAvailable)
{
    return ((ISteamMusicRemote*)linux_side)->CurrentEntryIsAvailable((bool)bAvailable);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText(void *linux_side, const char * pchText)
{
    return ((ISteamMusicRemote*)linux_side)->UpdateCurrentEntryText((const char *)pchText);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds(void *linux_side, int nValue)
{
    return ((ISteamMusicRemote*)linux_side)->UpdateCurrentEntryElapsedSeconds((int)nValue);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt(void *linux_side, void * pvBuffer, uint32 cbBufferLength)
{
    return ((ISteamMusicRemote*)linux_side)->UpdateCurrentEntryCoverArt((void *)pvBuffer, (uint32)cbBufferLength);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->CurrentEntryDidChange();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->QueueWillChange();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->ResetQueueEntries();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry(void *linux_side, int nID, int nPosition, const char * pchEntryText)
{
    return ((ISteamMusicRemote*)linux_side)->SetQueueEntry((int)nID, (int)nPosition, (const char *)pchEntryText);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry(void *linux_side, int nID)
{
    return ((ISteamMusicRemote*)linux_side)->SetCurrentQueueEntry((int)nID);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->QueueDidChange();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->PlaylistWillChange();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->ResetPlaylistEntries();
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry(void *linux_side, int nID, int nPosition, const char * pchEntryText)
{
    return ((ISteamMusicRemote*)linux_side)->SetPlaylistEntry((int)nID, (int)nPosition, (const char *)pchEntryText);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry(void *linux_side, int nID)
{
    return ((ISteamMusicRemote*)linux_side)->SetCurrentPlaylistEntry((int)nID);
}

bool cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange(void *linux_side)
{
    return ((ISteamMusicRemote*)linux_side)->PlaylistDidChange();
}

#ifdef __cplusplus
}
#endif
