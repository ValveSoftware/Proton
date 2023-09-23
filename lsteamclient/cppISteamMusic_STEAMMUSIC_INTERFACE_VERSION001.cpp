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

struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool BIsEnabled(  ) = 0;
    virtual bool BIsPlaying(  ) = 0;
    virtual uint32_t GetPlaybackStatus(  ) = 0;
    virtual void Play(  ) = 0;
    virtual void Pause(  ) = 0;
    virtual void PlayPrevious(  ) = 0;
    virtual void PlayNext(  ) = 0;
    virtual void SetVolume( float ) = 0;
    virtual float GetVolume(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsEnabled(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsPlaying(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetPlaybackStatus(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->Play(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->Pause(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->PlayPrevious(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->PlayNext(  );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    iface->SetVolume( params->flVolume );
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume( struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume_params *params )
{
    struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *iface = (struct cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetVolume(  );
}

#ifdef __cplusplus
}
#endif
