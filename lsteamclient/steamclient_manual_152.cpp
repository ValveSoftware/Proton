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

#include <unordered_map>

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

/***** convert and cache ISteamInput glyph paths *****/
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs;
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs_svg;
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs_png[3 /* ESteamInputGlyphSize */];

static const char *steamclient_isteaminput_getglyph_png(int origin, int size, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs_png[size].find(origin) == cached_input_glyphs_png[size].end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_png[size][origin] = dos_path;
    }

    return cached_input_glyphs_png[size][origin];
}

static const char *steamclient_isteaminput_getglyph_svg(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs_svg.find(origin) == cached_input_glyphs_svg.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_svg[origin] = dos_path;
    }

    return cached_input_glyphs_svg[origin];
}

const char *steamclient_isteaminput_getglyph(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs.find(origin) == cached_input_glyphs.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs[origin] = dos_path;
    }

    return cached_input_glyphs[origin];
}

const char * cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(void *linux_side, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphPNGForActionOrigin((EInputActionOrigin)eOrigin, eSize, unFlags);
    return steamclient_isteaminput_getglyph_png(eOrigin, eSize, path_result);
}

const char * cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(void *linux_side, EInputActionOrigin eOrigin, uint32 unFlags)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphSVGForActionOrigin((EInputActionOrigin)eOrigin, unFlags);
    return steamclient_isteaminput_getglyph_svg(eOrigin, path_result);
}

const char * cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(void *linux_side, EInputActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForActionOrigin_Legacy((EInputActionOrigin)eOrigin);
    return steamclient_isteaminput_getglyph(eOrigin, path_result);
}

/***** convert and cache ISteamController glyph paths *****/
static std::unordered_map<int /*EControllerActionOrigin*/, char *> cached_controller_glyphs;

const char *steamclient_isteamcontroller_getglyph(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_controller_glyphs.find(origin) == cached_controller_glyphs.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_controller_glyphs[origin] = dos_path;
    }

    return cached_controller_glyphs[origin];
}

const char * cppISteamController_SteamController008_GetGlyphForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamController*)linux_side)->GetGlyphForActionOrigin((EControllerActionOrigin)eOrigin);
    return steamclient_isteamcontroller_getglyph(eOrigin, path_result);
}

}
