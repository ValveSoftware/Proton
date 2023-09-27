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
#include "cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001.h"
void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled_params *params )
{
    params->_ret = ((ISteamMusic*)params->linux_side)->BIsEnabled(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying_params *params )
{
    params->_ret = ((ISteamMusic*)params->linux_side)->BIsPlaying(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus_params *params )
{
    params->_ret = ((ISteamMusic*)params->linux_side)->GetPlaybackStatus(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play_params *params )
{
    ((ISteamMusic*)params->linux_side)->Play(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause_params *params )
{
    ((ISteamMusic*)params->linux_side)->Pause(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious_params *params )
{
    ((ISteamMusic*)params->linux_side)->PlayPrevious(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext_params *params )
{
    ((ISteamMusic*)params->linux_side)->PlayNext(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume_params *params )
{
    ((ISteamMusic*)params->linux_side)->SetVolume( (float)params->flVolume );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume_params *params )
{
    params->_ret = ((ISteamMusic*)params->linux_side)->GetVolume(  );
}

#ifdef __cplusplus
}
#endif
