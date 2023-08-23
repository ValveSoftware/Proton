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
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

#define SDK_VERSION 1420
#include "steamclient_manual_common.h"

extern "C" {

const char * cppISteamController_SteamController006_GetGlyphForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamController*)linux_side)->GetGlyphForActionOrigin((EControllerActionOrigin)eOrigin);
    return steamclient_isteamcontroller_getglyph(eOrigin, path_result);
}

}
