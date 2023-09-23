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

struct cppISteamGameCoordinator_SteamGameCoordinator001
{
#ifdef __cplusplus
    virtual uint32_t SendMessage( uint32_t, const void *, uint32_t ) = 0;
    virtual bool IsMessageAvailable( uint32_t * ) = 0;
    virtual uint32_t RetrieveMessage( uint32_t *, void *, uint32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *params )
{
    struct cppISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct cppISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->SendMessage( params->unMsgType, params->pubData, params->cubData );
}

void cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *params )
{
    struct cppISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct cppISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->IsMessageAvailable( params->pcubMsgSize );
}

void cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *params )
{
    struct cppISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct cppISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->RetrieveMessage( params->punMsgType, params->pubDest, params->cubDest, params->pcubMsgSize );
}

#ifdef __cplusplus
}
#endif
