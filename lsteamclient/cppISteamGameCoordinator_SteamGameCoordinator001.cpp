#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamgamecoordinator.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamGameCoordinator_SteamGameCoordinator001.h"
void cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *params )
{
    params->_ret = ((ISteamGameCoordinator*)params->linux_side)->SendMessage( (uint32)params->unMsgType, (const void *)params->pubData, (uint32)params->cubData );
}

void cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *params )
{
    params->_ret = ((ISteamGameCoordinator*)params->linux_side)->IsMessageAvailable( (uint32 *)params->pcubMsgSize );
}

void cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *params )
{
    params->_ret = ((ISteamGameCoordinator*)params->linux_side)->RetrieveMessage( (uint32 *)params->punMsgType, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize );
}

#ifdef __cplusplus
}
#endif
