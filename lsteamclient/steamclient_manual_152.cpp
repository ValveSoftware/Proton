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
#include "steamworks_sdk_152/steam_api.h"
#include "steamworks_sdk_152/isteaminput.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_152
#include "struct_converters.h"
#include "cb_converters.h"

/***** manual fn wrapper for ISteamInput::EnableActionEventCallbacks *****/
typedef void (*CDECL win_SteamInputActionEventCallbackPointer)(SteamInputActionEvent_t *);
win_SteamInputActionEventCallbackPointer win_EnableActionEventCallbacks;

void lin_SteamInputActionEventCallbackPointer(SteamInputActionEvent_t *dat)
{
    win_SteamInputActionEventCallbackPointer fn = win_EnableActionEventCallbacks;
    if(fn)
        fn(dat);
}

void cppISteamInput_SteamInput005_EnableActionEventCallbacks(void *linux_side, win_SteamInputActionEventCallbackPointer pCallback)
{
    win_EnableActionEventCallbacks = pCallback;
    ((ISteamInput*)linux_side)->EnableActionEventCallbacks(pCallback ? &lin_SteamInputActionEventCallbackPointer : NULL);
}

}
