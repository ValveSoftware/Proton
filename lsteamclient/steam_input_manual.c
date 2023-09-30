#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

/* ISteamController_SteamController005 */

const char *__thiscall winISteamController_SteamController005_GetGlyphForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamController_SteamController005_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamController_SteamController005_GetGlyphForActionOrigin, &params );
    return params._ret;
}

/* ISteamController_SteamController006 */

const char *__thiscall winISteamController_SteamController006_GetGlyphForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamController_SteamController006_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamController_SteamController006_GetGlyphForActionOrigin, &params );
    return params._ret;
}

/* ISteamController_SteamController007 */

const char *__thiscall winISteamController_SteamController007_GetGlyphForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamController_SteamController007_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamController_SteamController007_GetGlyphForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamController_SteamController007_GetGlyphForXboxOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamController_SteamController007_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamController_SteamController007_GetGlyphForXboxOrigin, &params );
    return params._ret;
}

/* ISteamController_SteamController008 */

const char *__thiscall winISteamController_SteamController008_GetGlyphForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamController_SteamController008_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamController_SteamController008_GetGlyphForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamController_SteamController008_GetGlyphForXboxOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamController_SteamController008_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamController_SteamController008_GetGlyphForXboxOrigin, &params );
    return params._ret;
}

/* ISteamInput_SteamInput001 */

const char *__thiscall winISteamInput_SteamInput001_GetGlyphForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput001_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput001_GetGlyphForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput001_GetGlyphForXboxOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput001_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput001_GetGlyphForXboxOrigin, &params );
    return params._ret;
}

/* ISteamInput_SteamInput002 */

const char *__thiscall winISteamInput_SteamInput002_GetGlyphForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput002_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput002_GetGlyphForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput002_GetGlyphForXboxOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput002_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput002_GetGlyphForXboxOrigin, &params );
    return params._ret;
}

/* ISteamInput_SteamInput005 */

const char *__thiscall winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin,
                                                                                uint32_t eSize, uint32_t unFlags )
{
    struct ISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .eSize = eSize,
        .unFlags = unFlags,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput005_GetGlyphPNGForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( struct w_steam_iface *_this,
                                                                                uint32_t eOrigin, uint32_t unFlags )
{
    struct ISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unFlags = unFlags,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput005_GetGlyphSVGForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput005_GetGlyphForXboxOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput005_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput005_GetGlyphForXboxOrigin, &params );
    return params._ret;
}

/* ISteamInput_SteamInput006 */

const char *__thiscall winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin( struct w_steam_iface *_this, uint32_t eOrigin,
                                                                                uint32_t eSize, uint32_t unFlags )
{
    struct ISteamInput_SteamInput006_GetGlyphPNGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .eSize = eSize,
        .unFlags = unFlags,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput006_GetGlyphPNGForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin( struct w_steam_iface *_this,
                                                                                uint32_t eOrigin, uint32_t unFlags )
{
    struct ISteamInput_SteamInput006_GetGlyphSVGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unFlags = unFlags,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput006_GetGlyphSVGForActionOrigin, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy, &params );
    return params._ret;
}

const char *__thiscall winISteamInput_SteamInput006_GetGlyphForXboxOrigin( struct w_steam_iface *_this, uint32_t eOrigin )
{
    struct ISteamInput_SteamInput006_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };

    TRACE( "%p\n", _this );

    STEAMCLIENT_CALL( ISteamInput_SteamInput006_GetGlyphForXboxOrigin, &params );
    return params._ret;
}
