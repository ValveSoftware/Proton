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
#include "steamworks_sdk_151/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_151
#include "struct_converters.h"
#include "cb_converters.h"

#define SDK_VERSION 1510
#include "steamclient_manual_common.h"

const char * cppISteamInput_SteamInput002_GetGlyphForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForActionOrigin((EInputActionOrigin)eOrigin);
    return steamclient_isteaminput_getglyph(eOrigin, path_result);
}

const char * cppISteamInput_SteamInput002_GetGlyphForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForXboxOrigin((EXboxOrigin)eOrigin);
    return steamclient_isteaminput_getglyph_xbox(eOrigin, path_result);
}

}
