#include "unix_private.h"

extern "C"
{
#define SDK_VERSION 1510
#include "steamclient_manual_common.h"
}

#include "cppISteamInput_SteamInput002.hpp"

void cppISteamInput_SteamInput002_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput002_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph( params->eOrigin, params->_ret );
}

void cppISteamInput_SteamInput002_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput002_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}
