/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsEnabled(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsPlaying(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetPlaybackStatus(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->Play(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->Pause(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->PlayPrevious(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->PlayNext(  );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->SetVolume( params->flVolume );
    return 0;
}

NTSTATUS ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume( void *args )
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume_params *params = (struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume_params *)args;
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetVolume(  );
    return 0;
}

