#include "unix_private.h"

extern "C"
{
#define SDK_VERSION 1410
#include "steamclient_manual_common.h"
}

#include "cppISteamController_SteamController005.hpp"

void cppISteamController_SteamController005_GetGlyphForActionOrigin( struct cppISteamController_SteamController005_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController005 *iface = (struct u_ISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}
