/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params
{
    void *linux_side;
    bool _ret;
    const char *pchDisplayName;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params
{
    void *linux_side;
    bool _ret;
    void *pvBuffer;
    uint32_t cbBufferLength;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params
{
    void *linux_side;
    bool _ret;
    uint32_t nStatus;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params
{
    void *linux_side;
    bool _ret;
    bool bValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params
{
    void *linux_side;
    bool _ret;
    float flValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params
{
    void *linux_side;
    bool _ret;
    bool bAvailable;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params
{
    void *linux_side;
    bool _ret;
    const char *pchText;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params
{
    void *linux_side;
    bool _ret;
    int32_t nValue;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params
{
    void *linux_side;
    bool _ret;
    void *pvBuffer;
    uint32_t cbBufferLength;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params
{
    void *linux_side;
    bool _ret;
    int32_t nID;
    int32_t nPosition;
    const char *pchEntryText;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params
{
    void *linux_side;
    bool _ret;
    int32_t nID;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params
{
    void *linux_side;
    bool _ret;
    int32_t nID;
    int32_t nPosition;
    const char *pchEntryText;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params
{
    void *linux_side;
    bool _ret;
    int32_t nID;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params *params );

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
