#include "steamclient_private.h"

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_141/steam_api.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

#define SDK_VERSION 1410
#include "steamclient_manual_common.h"

extern "C" {
#include "cppISteamController_SteamController005.h"
}

void cppISteamController_SteamController005_GetGlyphForActionOrigin( struct cppISteamController_SteamController005_GetGlyphForActionOrigin_params *params )
{
    ISteamController *iface = (ISteamController *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( (EControllerActionOrigin)params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}
