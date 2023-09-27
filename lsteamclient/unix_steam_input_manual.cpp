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

#ifdef __linux__
#include <X11/keysym.h>
#endif

#ifdef __linux__
static const uint32_t vk_to_xkeysym[0xFF] =
{
    0,            /* 0x0  Undefined */
    0,            /* VK_LBUTTON */
    0,            /* VK_RBUTTON */
    XK_Cancel,    /* VK_CANCEL */
    0,            /* VK_MBUTTON */
    0,            /* VK_XBUTTON1 */
    0,            /* VK_XBUTTON2 */
    0,            /* 0x07 Undefined */
    XK_BackSpace, /* VK_BACK */
    XK_Tab,       /* VK_TAB */
    0,            /* 0x0A-0x0B  Undefined */
    0,
    XK_Clear,  /* VK_CLEAR */
    XK_Return, /* VK_RETURN */
    0,         /* 0x0E-0x0F  Undefined */
    0,
    XK_Shift_L,     /* VK_SHIFT */
    XK_Control_L,   /* VK_CONTROL */
    XK_Alt_L,       /* VK_MENU */
    XK_Pause,       /* VK_PAUSE */
    XK_Caps_Lock,   /* VK_CAPITAL */
    0,              /* VK_KANA */
    0,              /* 0x16  Undefined */
    0,              /* VK_JUNJA */
    0,              /* VK_FINAL */
    0,              /* VK_HANJA */
    0,              /* 0x1A  Undefined */
    XK_Escape,      /* VK_ESCAPE */
    XK_Henkan_Mode, /* VK_CONVERT */
    XK_Muhenkan,    /* VK_NONCONVERT */
    0,              /* VK_ACCEPT */
    0,              /* VK_MODECHANGE */
    ' ',            /* VK_SPACE */
    XK_Prior,       /* VK_PRIOR */
    XK_Next,        /* VK_NEXT */
    XK_End,         /* VK_END */
    XK_Home,        /* VK_HOME */
    XK_Left,        /* VK_LEFT */
    XK_Up,          /* VK_UP */
    XK_Right,       /* VK_RIGHT */
    XK_Down,        /* VK_DOWN */
    XK_Select,      /* VK_SELECT */
    XK_Print,       /* VK_PRINT */
    XK_Execute,     /* VK_EXECUTE */
    XK_Print,       /* VK_SNAPSHOT */
    XK_Insert,      /* VK_INSERT */
    XK_Delete,      /* VK_DELETE */
    XK_Help,        /* VK_HELP */

    '0',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
    0,
    0,
    0,
    0,
    0,
    0,
    0, /* 0x3A-0x40  Undefined */
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z',

    XK_Super_L,      /* VK_LWIN */
    XK_Super_R,      /* VK_RWIN */
    XK_Menu,         /* VK_APPS */
    0,               /* 0x5E  Unassigned */
    0,               /* VK_SLEEP */
    XK_KP_0,         /* VK_NUMPAD0 */
    XK_KP_1,         /* VK_NUMPAD1 */
    XK_KP_2,         /* VK_NUMPAD2 */
    XK_KP_3,         /* VK_NUMPAD3 */
    XK_KP_4,         /* VK_NUMPAD4 */
    XK_KP_5,         /* VK_NUMPAD5 */
    XK_KP_6,         /* VK_NUMPAD6 */
    XK_KP_7,         /* VK_NUMPAD7 */
    XK_KP_8,         /* VK_NUMPAD8 */
    XK_KP_9,         /* VK_NUMPAD9 */
    XK_KP_Multiply,  /* VK_MULTIPLY */
    XK_KP_Add,       /* VK_ADD */
    XK_KP_Separator, /* VK_SEPARATOR */
    XK_KP_Subtract,  /* VK_SUBTRACT */
    XK_KP_Decimal,   /* VK_DECIMAL */
    XK_KP_Divide,    /* VK_DIVIDE */
    XK_F1,           /* VK_F1 */
    XK_F2,           /* VK_F2 */
    XK_F3,           /* VK_F3 */
    XK_F4,           /* VK_F4 */
    XK_F5,           /* VK_F5 */
    XK_F6,           /* VK_F6 */
    XK_F7,           /* VK_F7 */
    XK_F8,           /* VK_F8 */
    XK_F9,           /* VK_F9 */
    XK_F10,          /* VK_F10 */
    XK_F11,          /* VK_F11 */
    XK_F12,          /* VK_F12 */
    XK_F13,          /* VK_F13 */
    XK_F14,          /* VK_F14 */
    XK_F15,          /* VK_F15 */
    XK_F16,          /* VK_F16 */
    XK_F17,          /* VK_F17 */
    XK_F18,          /* VK_F18 */
    XK_F19,          /* VK_F19 */
    XK_F20,          /* VK_F20 */
    XK_F21,          /* VK_F21 */
    XK_F22,          /* VK_F22 */
    XK_F23,          /* VK_F23 */
    XK_F24,          /* VK_F24 */
    0,               /* VK_NAVIGATION_VIEW */
    0,               /* VK_NAVIGATION_MENU */
    0,               /* VK_NAVIGATION_UP */
    0,               /* VK_NAVIGATION_DOWN */
    0,               /* VK_NAVIGATION_LEFT */
    0,               /* VK_NAVIGATION_RIGHT */
    0,               /* VK_NAVIGATION_ACCEPT */
    0,               /* VK_NAVIGATION_CANCEL */
    XK_Num_Lock,     /* VK_NUMLOCK */
    XK_Scroll_Lock,  /* VK_SCROLL */
    XK_KP_Equal,     /* VK_OEM_NEC_EQUAL */
    0,               /* VK_OEM_FJ_JISHO */
    0,               /* VK_OEM_FJ_MASSHOU */
    0,               /* VK_OEM_FJ_TOUROKU */
    0,               /* VK_OEM_FJ_LOYA */
    0,               /* VK_OEM_FJ_ROYA */
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,            /* 0x97-0x9F  Unassigned */
    XK_Shift_L,   /* VK_LSHIFT */
    XK_Shift_R,   /* VK_RSHIFT */
    XK_Control_L, /* VK_LCONTROL */
    XK_Control_R, /* VK_RCONTROL */
    XK_Alt_L,     /* VK_LMENU */
    XK_Alt_R,     /* VK_RMENU */

    /* below are OEM, browser keys, etc */
};

uint32_t manual_convert_nNativeKeyCode( uint32_t win_vk )
{
    if(win_vk < sizeof(vk_to_xkeysym) / sizeof(*vk_to_xkeysym))
        return vk_to_xkeysym[win_vk];
    return 0;
}
#else
#error You must implement VK<->Native keysym conversion for this platform.
#endif

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
