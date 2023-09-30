/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001.h"

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsEnabled(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsPlaying(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetPlaybackStatus(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->Play(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->Pause(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->PlayPrevious(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->PlayNext(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->SetVolume( params->flVolume );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume_params *params )
{
    struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct u_ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetVolume(  );
}

