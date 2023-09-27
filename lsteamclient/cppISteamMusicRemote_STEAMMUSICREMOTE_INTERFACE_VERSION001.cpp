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
void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->RegisterSteamMusicRemote( (const char *)params->pchName );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->DeregisterSteamMusicRemote(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->BIsCurrentMusicRemote(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->BActivationSuccess( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->SetDisplayName( (const char *)params->pchDisplayName );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->SetPNGIcon_64x64( (void *)params->pvBuffer, (uint32)params->cbBufferLength );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->EnablePlayPrevious( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->EnablePlayNext( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->EnableShuffled( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->EnableLooped( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->EnableQueue( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->EnablePlaylists( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdatePlaybackStatus( (AudioPlayback_Status)params->nStatus );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdateShuffled( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdateLooped( (bool)params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdateVolume( (float)params->flValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->CurrentEntryWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->CurrentEntryIsAvailable( (bool)params->bAvailable );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdateCurrentEntryText( (const char *)params->pchText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdateCurrentEntryElapsedSeconds( (int)params->nValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->UpdateCurrentEntryCoverArt( (void *)params->pvBuffer, (uint32)params->cbBufferLength );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->CurrentEntryDidChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->QueueWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->ResetQueueEntries(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->SetQueueEntry( (int)params->nID, (int)params->nPosition, (const char *)params->pchEntryText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->SetCurrentQueueEntry( (int)params->nID );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->QueueDidChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->PlaylistWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->ResetPlaylistEntries(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->SetPlaylistEntry( (int)params->nID, (int)params->nPosition, (const char *)params->pchEntryText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->SetCurrentPlaylistEntry( (int)params->nID );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params *params )
{
    params->_ret = ((ISteamMusicRemote*)params->linux_side)->PlaylistDidChange(  );
}

#ifdef __cplusplus
}
#endif
