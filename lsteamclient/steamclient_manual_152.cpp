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
#include "steamworks_sdk_152/steam_api.h"
#include "steamworks_sdk_152/isteaminput.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")
#include "steamclient_private.h"

#include <unordered_map>

extern "C" {
#define SDKVER_152
#include "struct_converters.h"
#include "cb_converters.h"

#define SDK_VERSION 1520
#include "steamclient_manual_common.h"

#include "cppISteamInput_SteamInput005.h"
#include "cppISteamController_SteamController008.h"
}

/***** manual fn wrapper for ISteamInput::EnableActionEventCallbacks *****/
win_SteamInputActionEventCallbackPointer win_EnableActionEventCallbacks;

void lin_SteamInputActionEventCallbackPointer(SteamInputActionEvent_t *dat)
{
    win_SteamInputActionEventCallbackPointer fn = win_EnableActionEventCallbacks;
    if(fn)
        fn(dat);
}

void cppISteamInput_SteamInput005_EnableActionEventCallbacks( struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    win_EnableActionEventCallbacks = (win_SteamInputActionEventCallbackPointer)params->pCallback;
    iface->EnableActionEventCallbacks( params->pCallback ? &lin_SteamInputActionEventCallbackPointer : NULL );
}

/***** convert and cache ISteamInput glyph paths *****/
static const size_t ESteamInputGlyphSize_count = 3;
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs;
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs_xbox;
static std::unordered_map<int /*flags*/, std::unordered_map<int /*EInputActionOrigin*/, char *> > cached_input_glyphs_svg;
static std::unordered_map<int /*flags*/, std::unordered_map<int /*EInputActionOrigin*/, char *> > cached_input_glyphs_png[ESteamInputGlyphSize_count];

const char *steamclient_isteaminput_getglyph_png(int origin, int size, int flags, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(size >= ESteamInputGlyphSize_count){
        ERR("invalid glyph size: %u\n", size);
        return NULL;
    }

    if(cached_input_glyphs_png[size][flags].find(origin) == cached_input_glyphs_png[size][flags].end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_png[size][flags][origin] = dos_path;
    }

    return cached_input_glyphs_png[size][flags][origin];
}

const char *steamclient_isteaminput_getglyph_svg(int origin, int flags, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs_svg[flags].find(origin) == cached_input_glyphs_svg[flags].end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_svg[flags][origin] = dos_path;
    }

    return cached_input_glyphs_svg[flags][origin];
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

const char *steamclient_isteaminput_getglyph_xbox(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs_xbox.find(origin) == cached_input_glyphs_xbox.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_xbox[origin] = dos_path;
    }

    return cached_input_glyphs_xbox[origin];
}

void cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphPNGForActionOrigin( (EInputActionOrigin)params->eOrigin,
                                                     (ESteamInputGlyphSize)params->eSize, params->unFlags );
    params->_ret = steamclient_isteaminput_getglyph_png( params->eOrigin, params->eSize,
                                                        params->unFlags, params->_ret );
}

void cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphSVGForActionOrigin( (EInputActionOrigin)params->eOrigin, params->unFlags );
    params->_ret = steamclient_isteaminput_getglyph_svg( params->eOrigin, params->unFlags, params->_ret );
}

void cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin_Legacy( (EInputActionOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph( params->eOrigin, params->_ret );
}

void cppISteamInput_SteamInput005_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( (EXboxOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
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

void cppISteamController_SteamController008_GetGlyphForActionOrigin( struct cppISteamController_SteamController008_GetGlyphForActionOrigin_params *params )
{
    ISteamController *iface = (ISteamController *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( (EControllerActionOrigin)params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}

void cppISteamController_SteamController008_GetGlyphForXboxOrigin( struct cppISteamController_SteamController008_GetGlyphForXboxOrigin_params *params )
{
    ISteamController *iface = (ISteamController *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( (EXboxOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}
