#include "steamclient_private.h"

extern "C"
{
#define SDK_VERSION 1410
#include "steamclient_manual_common.h"
}

#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "cppISteamController_SteamController005.hpp"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

void cppISteamController_SteamController005_GetGlyphForActionOrigin( struct cppISteamController_SteamController005_GetGlyphForActionOrigin_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}
