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

struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool RegisterSteamMusicRemote( const char * ) = 0;
    virtual bool DeregisterSteamMusicRemote(  ) = 0;
    virtual bool BIsCurrentMusicRemote(  ) = 0;
    virtual bool BActivationSuccess( bool ) = 0;
    virtual bool SetDisplayName( const char * ) = 0;
    virtual bool SetPNGIcon_64x64( void *, uint32_t ) = 0;
    virtual bool EnablePlayPrevious( bool ) = 0;
    virtual bool EnablePlayNext( bool ) = 0;
    virtual bool EnableShuffled( bool ) = 0;
    virtual bool EnableLooped( bool ) = 0;
    virtual bool EnableQueue( bool ) = 0;
    virtual bool EnablePlaylists( bool ) = 0;
    virtual bool UpdatePlaybackStatus( uint32_t ) = 0;
    virtual bool UpdateShuffled( bool ) = 0;
    virtual bool UpdateLooped( bool ) = 0;
    virtual bool UpdateVolume( float ) = 0;
    virtual bool CurrentEntryWillChange(  ) = 0;
    virtual bool CurrentEntryIsAvailable( bool ) = 0;
    virtual bool UpdateCurrentEntryText( const char * ) = 0;
    virtual bool UpdateCurrentEntryElapsedSeconds( int32_t ) = 0;
    virtual bool UpdateCurrentEntryCoverArt( void *, uint32_t ) = 0;
    virtual bool CurrentEntryDidChange(  ) = 0;
    virtual bool QueueWillChange(  ) = 0;
    virtual bool ResetQueueEntries(  ) = 0;
    virtual bool SetQueueEntry( int32_t, int32_t, const char * ) = 0;
    virtual bool SetCurrentQueueEntry( int32_t ) = 0;
    virtual bool QueueDidChange(  ) = 0;
    virtual bool PlaylistWillChange(  ) = 0;
    virtual bool ResetPlaylistEntries(  ) = 0;
    virtual bool SetPlaylistEntry( int32_t, int32_t, const char * ) = 0;
    virtual bool SetCurrentPlaylistEntry( int32_t ) = 0;
    virtual bool PlaylistDidChange(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_RegisterSteamMusicRemote_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->RegisterSteamMusicRemote( params->pchName );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_DeregisterSteamMusicRemote_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->DeregisterSteamMusicRemote(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BIsCurrentMusicRemote_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsCurrentMusicRemote(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_BActivationSuccess_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BActivationSuccess( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetDisplayName_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetDisplayName( params->pchDisplayName );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPNGIcon_64x64_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetPNGIcon_64x64( params->pvBuffer, params->cbBufferLength );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayPrevious_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlayPrevious( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlayNext_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlayNext( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableShuffled_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableShuffled( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableLooped_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableLooped( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnableQueue_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnableQueue( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_EnablePlaylists_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->EnablePlaylists( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdatePlaybackStatus_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdatePlaybackStatus( params->nStatus );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateShuffled_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateShuffled( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateLooped_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateLooped( params->bValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateVolume_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateVolume( params->flValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryWillChange_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryIsAvailable_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryIsAvailable( params->bAvailable );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryText_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryText( params->pchText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryElapsedSeconds_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryElapsedSeconds( params->nValue );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_UpdateCurrentEntryCoverArt_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateCurrentEntryCoverArt( params->pvBuffer, params->cbBufferLength );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_CurrentEntryDidChange_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CurrentEntryDidChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueWillChange_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->QueueWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetQueueEntries_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ResetQueueEntries(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetQueueEntry_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetQueueEntry( params->nID, params->nPosition, params->pchEntryText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentQueueEntry_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCurrentQueueEntry( params->nID );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_QueueDidChange_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->QueueDidChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistWillChange_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PlaylistWillChange(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_ResetPlaylistEntries_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ResetPlaylistEntries(  );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetPlaylistEntry_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetPlaylistEntry( params->nID, params->nPosition, params->pchEntryText );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_SetCurrentPlaylistEntry_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCurrentPlaylistEntry( params->nID );
}

void cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange( struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001_PlaylistDidChange_params *params )
{
    struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *iface = (struct cppISteamMusicRemote_STEAMMUSICREMOTE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PlaylistDidChange(  );
}

#ifdef __cplusplus
}
#endif
