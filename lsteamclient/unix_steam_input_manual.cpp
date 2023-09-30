#include "unix_private.h"

#include <unordered_map>

#include "cppISteamController_SteamController005.hpp"
#include "cppISteamController_SteamController006.hpp"
#include "cppISteamController_SteamController007.hpp"
#include "cppISteamController_SteamController008.hpp"
#include "cppISteamInput_SteamInput001.hpp"
#include "cppISteamInput_SteamInput002.hpp"
#include "cppISteamInput_SteamInput005.hpp"
#include "cppISteamInput_SteamInput006.hpp"

typedef std::unordered_map< uint64_t, char * > glyph_cache;
static glyph_cache input_cache, input_cache_svg, input_cache_png, xbox_cache, controller_cache;

static const char *glyph_cache_lookup( glyph_cache &cache, const char *lin_path, uint16_t origin,
                                       uint32_t flags, uint16_t size )
{
    uint64_t key = (uint64_t)flags << 32 | (uint64_t)size << 16 | origin;

    if (cache.find( key ) == cache.end())
    {
        char *dos_path = (char *)HeapAlloc( GetProcessHeap(), 0, PATH_MAX );
        steamclient_unix_path_to_dos_path( 1, lin_path, dos_path, PATH_MAX, 0 );
        cache[key] = dos_path;
    }

    return cache[key];
}

/* ISteamController_SteamController005 */

void cppISteamController_SteamController005_GetGlyphForActionOrigin( struct cppISteamController_SteamController005_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController005 *iface = (struct u_ISteamController_SteamController005 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( controller_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamController_SteamController006 */

void cppISteamController_SteamController006_GetGlyphForActionOrigin( struct cppISteamController_SteamController006_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( controller_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamController_SteamController007 */

void cppISteamController_SteamController007_GetGlyphForActionOrigin( struct cppISteamController_SteamController007_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( controller_cache, params->_ret, params->eOrigin, 0, 0 );
}

void cppISteamController_SteamController007_GetGlyphForXboxOrigin( struct cppISteamController_SteamController007_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( xbox_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamController_SteamController008 */

void cppISteamController_SteamController008_GetGlyphForActionOrigin( struct cppISteamController_SteamController008_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( controller_cache, params->_ret, params->eOrigin, 0, 0 );
}

void cppISteamController_SteamController008_GetGlyphForXboxOrigin( struct cppISteamController_SteamController008_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( xbox_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamInput_SteamInput001 */

void cppISteamInput_SteamInput001_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput001_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( input_cache, params->_ret, params->eOrigin, 0, 0 );
}

void cppISteamInput_SteamInput001_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput001_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( xbox_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamInput_SteamInput002 */

void cppISteamInput_SteamInput002_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput002_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( input_cache, params->_ret, params->eOrigin, 0, 0 );
}

void cppISteamInput_SteamInput002_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput002_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput002 *iface = (struct u_ISteamInput_SteamInput002 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( xbox_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamInput_SteamInput005 */

static void (W_STDCALL *w_EnableActionEventCallbacks)( SteamInputActionEvent_t * );
static void u_SteamInputActionEventCallbackPointer( SteamInputActionEvent_t *dat )
{
    if (w_EnableActionEventCallbacks) w_EnableActionEventCallbacks( dat );
}

void cppISteamInput_SteamInput005_EnableActionEventCallbacks( struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    w_EnableActionEventCallbacks = params->pCallback;
    iface->EnableActionEventCallbacks( params->pCallback ? &u_SteamInputActionEventCallbackPointer : NULL );
}

void cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphPNGForActionOrigin( params->eOrigin, params->eSize, params->unFlags ))) return;
    params->_ret = glyph_cache_lookup( input_cache_png, params->_ret, params->eOrigin, params->unFlags, params->eSize );
}

void cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphSVGForActionOrigin( params->eOrigin, params->unFlags ))) return;
    params->_ret = glyph_cache_lookup( input_cache_svg, params->_ret, params->eOrigin, params->unFlags, 0 );
}

void cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin_Legacy( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( input_cache, params->_ret, params->eOrigin, 0, 0 );
}

void cppISteamInput_SteamInput005_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( xbox_cache, params->_ret, params->eOrigin, 0, 0 );
}

/* ISteamInput_SteamInput006 */

void cppISteamInput_SteamInput006_EnableActionEventCallbacks( struct cppISteamInput_SteamInput006_EnableActionEventCallbacks_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    w_EnableActionEventCallbacks = params->pCallback;
    iface->EnableActionEventCallbacks( params->pCallback ? &u_SteamInputActionEventCallbackPointer : NULL );
}

void cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphPNGForActionOrigin( params->eOrigin, params->eSize, params->unFlags ))) return;
    params->_ret = glyph_cache_lookup( input_cache_png, params->_ret, params->eOrigin, params->unFlags, params->eSize );
}

void cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphSVGForActionOrigin( params->eOrigin, params->unFlags ))) return;
    params->_ret = glyph_cache_lookup( input_cache_svg, params->_ret, params->eOrigin, params->unFlags, 0 );
}

void cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForActionOrigin_Legacy( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( input_cache, params->_ret, params->eOrigin, 0, 0 );
}

void cppISteamInput_SteamInput006_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput006_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput006 *iface = (struct u_ISteamInput_SteamInput006 *)params->linux_side;
    if (!(params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin ))) return;
    params->_ret = glyph_cache_lookup( xbox_cache, params->_ret, params->eOrigin, 0, 0 );
}
