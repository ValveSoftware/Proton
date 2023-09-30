/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->RegisterSteamMusicRemote( params->pchName );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->DeregisterSteamMusicRemote(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsCurrentMusicRemote(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BActivationSuccess( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetDisplayName( params->pchDisplayName );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetPNGIcon_64x64( params->pvBuffer, params->cbBufferLength );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlayPrevious( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlayNext( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableShuffled( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableLooped( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableQueue( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlaylists( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdatePlaybackStatus( params->nStatus );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateShuffled( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateLooped( params->bValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateVolume( params->flValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryWillChange(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryIsAvailable( params->bAvailable );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryText( params->pchText );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryElapsedSeconds( params->nValue );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryCoverArt( params->pvBuffer, params->cbBufferLength );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryDidChange(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->QueueWillChange(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ResetQueueEntries(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetQueueEntry( params->nID, params->nPosition, params->pchEntryText );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCurrentQueueEntry( params->nID );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->QueueDidChange(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PlaylistWillChange(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ResetPlaylistEntries(  );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetPlaylistEntry( params->nID, params->nPosition, params->pchEntryText );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCurrentPlaylistEntry( params->nID );
    return 0;
}

NTSTATUS ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange( void *args )
{
    struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params *params = (struct ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params *)args;
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PlaylistDidChange(  );
    return 0;
}

