extern "C" {
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);
}

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_151/steam_api.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_151
#include "struct_converters.h"
#include "cb_converters.h"

#define SDK_VERSION 1510
#include "steamclient_manual_common.h"

#include "cppISteamInput_SteamInput002.h"
}

void cppISteamInput_SteamInput002_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput002_GetGlyphForActionOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( (EInputActionOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph( params->eOrigin, params->_ret );
}

void cppISteamInput_SteamInput002_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput002_GetGlyphForXboxOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( (EXboxOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}
