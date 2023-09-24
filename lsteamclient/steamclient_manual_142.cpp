#include "steamclient_private.h"

extern "C"
{
#define SDK_VERSION 1420
#include "steamclient_manual_common.h"
}

#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "cppISteamController_SteamController006.hpp"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

void cppISteamController_SteamController006_GetGlyphForActionOrigin( struct cppISteamController_SteamController006_GetGlyphForActionOrigin_params *params )
{
    struct cppISteamController_SteamController006 *iface = (struct cppISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}
