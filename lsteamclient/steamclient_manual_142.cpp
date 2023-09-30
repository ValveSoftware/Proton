#include "unix_private.h"

extern "C"
{
#define SDK_VERSION 1420
#include "steamclient_manual_common.h"
}

#include "cppISteamController_SteamController006.hpp"

void cppISteamController_SteamController006_GetGlyphForActionOrigin( struct cppISteamController_SteamController006_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}
