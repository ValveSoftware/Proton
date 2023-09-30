/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001.h"

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->RegisterSteamMusicRemote( params->pchName );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->DeregisterSteamMusicRemote(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsCurrentMusicRemote(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BActivationSuccess( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetDisplayName( params->pchDisplayName );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetPNGIcon_64x64( params->pvBuffer, params->cbBufferLength );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlayPrevious( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlayNext( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableShuffled( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableLooped( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableQueue( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlaylists( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdatePlaybackStatus( params->nStatus );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateShuffled( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateLooped( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateVolume( params->flValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryIsAvailable( params->bAvailable );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryText( params->pchText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryElapsedSeconds( params->nValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryCoverArt( params->pvBuffer, params->cbBufferLength );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryDidChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->QueueWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ResetQueueEntries(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetQueueEntry( params->nID, params->nPosition, params->pchEntryText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCurrentQueueEntry( params->nID );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->QueueDidChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PlaylistWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ResetPlaylistEntries(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetPlaylistEntry( params->nID, params->nPosition, params->pchEntryText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCurrentPlaylistEntry( params->nID );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params *params )
{
    struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct u_ISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PlaylistDidChange(  );
}

