#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <assert.h>

#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "winuser.h"
#include "winternl.h"

#ifdef __linux__
#include <X11/keysym.h>
#endif

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

char g_tmppath[PATH_MAX];

static CRITICAL_SECTION steamclient_cs = { NULL, -1, 0, 0, 0, 0 };
static HANDLE steam_overlay_event;

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            steam_overlay_event = CreateEventA(NULL, TRUE, FALSE, "__wine_steamclient_GameOverlayActivated");
            break;
        case DLL_PROCESS_DETACH:
            CloseHandle(steam_overlay_event);
            break;
    }

    return TRUE;
}

/* Returns:
 *  - if successful, the number of bytes written to dst, including the NULL terminator;
 *  - 0 if failed;
 *  - PATH_MAX if insufficient output buffer (TODO: should be actual required length including NULL terminator). */
unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst, uint32_t dst_bytes, int is_url )
{
    static const char file_prot[] = "file://";
    WCHAR *dosW;
    uint32_t r;

    if (!api_result)
    {
        if (dst && dst_bytes)
            *dst = 0;
        return 0;
    }

    if (!dst || !dst_bytes)
        return PATH_MAX;

    if (!src || !*src)
    {
        *dst = 0;
        return PATH_MAX;
    }

    if (is_url)
    {
        /* convert only file: URLs */
        if (strncmp(src, file_prot, 7))
        {
            r = strlen(src) + 1;
            if (r > dst_bytes)
                *dst = 0;
            else
                memmove(dst, src, r);
            return r;
        }
        if (dst_bytes < sizeof(file_prot))
        {
            *dst = 0;
            return PATH_MAX;
        }
        memmove(dst, src, 7);
        src += 7;
        dst += 7;
        dst_bytes -= 7;
    }

    dosW = wine_get_dos_file_name(src);

    if (!dosW)
    {
        WARN("Unable to convert unix filename to DOS: %s.\n", src);
        *dst = 0;
        return 0;
    }

    r = WideCharToMultiByte(CP_ACP, 0, dosW, -1, dst, dst_bytes,
            NULL, NULL);
    if (!r)
    {
        *dst = 0;
        if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
            r = PATH_MAX;
    }
    HeapFree(GetProcessHeap(), 0, dosW);
    return r;
}

#define IS_ABSOLUTE(x) (*x == '/' || *x == '\\' || (*x && *(x + 1) == ':'))

const char *steamclient_dos_to_unix_path( const char *src, int is_url )
{
    static const char file_prot[] = "file://";
    char buffer[4096], *dst = buffer;
    uint32_t len;

    if (!src) return NULL;

    *dst = 0;
    if (!*src) goto done;

    if(is_url){
        if(strncmp(src, file_prot, 7) != 0){
            strcpy(dst, src);
            goto done;
        }

        src += 7;
        memcpy(dst, file_prot, sizeof(file_prot));
        dst += 7;
    }

    if(IS_ABSOLUTE(src)){
        /* absolute path, use wine conversion */
        WCHAR srcW[PATH_MAX];
        char *unix_path;
        uint32_t r;

        r = MultiByteToWideChar(CP_UNIXCP, 0, src, -1, srcW, PATH_MAX);
        if(r == 0)
            return NULL;

        unix_path = wine_get_unix_file_name(srcW);
        if(!unix_path){
            WARN("Unable to convert DOS filename to unix: %s\n", src);
            return NULL;
        }

        lstrcpynA(dst, unix_path, PATH_MAX);

        HeapFree(GetProcessHeap(), 0, unix_path);
    }else{
        /* relative path, just fix up backslashes */
        const char *s;
        char *d;

        for(s = src, d = dst; *s; ++s, ++d){
            if(*s == '\\')
                *d = '/';
            else
                *d = *s;
        }

        *d = 0;
    }

done:
    len = strlen( buffer );
    if (!(dst = HeapAlloc( GetProcessHeap(), 0, len + 1 ))) return NULL;
    memcpy( dst, buffer, len + 1 );
    return dst;
}

void steamclient_free_path( const char *path )
{
    HeapFree( GetProcessHeap(), 0, (char *)path );
}

const char **steamclient_dos_to_unix_path_array( const char **src )
{
    size_t len;
    const char **s;
    char **out, **o;
    WCHAR scratch[PATH_MAX];

    if(!src)
        return NULL;

    len = sizeof(char*); /* NUL */
    for(s = src; *s; ++s)
        len += sizeof(char*);

    out = HeapAlloc(GetProcessHeap(), 0, len);

    for(s = src, o = out; *s; ++s, ++o){
        if(IS_ABSOLUTE(*s)){
            MultiByteToWideChar(CP_UNIXCP, 0, *s, -1, scratch, sizeof(scratch)/sizeof(*scratch));
            *o = wine_get_unix_file_name(scratch);
        }else{
            const char *r;
            char *l;
            *o = HeapAlloc(GetProcessHeap(), 0, strlen(*s) + 1);
            for(r = *s, l = *o; *r; ++l, ++r){
                if(*r == '\\')
                    *l = '/';
                else
                    *l = *r;
            }
            *l = 0;
        }
    }

    *o = NULL;

    return (const char **)out;
}

void steamclient_free_path_array( const char **path_array )
{
    const char **path;
    if (!path_array) return;
    for (path = path_array; *path; path++) HeapFree( GetProcessHeap(), 0, *(char **)path );
    HeapFree( GetProcessHeap(), 0, path_array );
}

static BYTE *alloc_start, *alloc_end;

static bool allocated_from_steamclient_dll( void *ptr )
{
    return (BYTE *)ptr >= alloc_start && (BYTE *)ptr < alloc_end;
}

static void *get_mem_from_steamclient_dll(size_t size, unsigned int version, void *vtbl)
{
    static BYTE * const error_ptr = (BYTE *)~(ULONG_PTR)0;
    static const unsigned int magic = 0x53ba947a;
    static struct
    {
        unsigned int version;
        void *vtbl;
        size_t size;
        void *ptr;
    }
    allocated[256];
    static unsigned int allocated_count;
    static BYTE *alloc_base;
    unsigned int i;

    if (alloc_base == error_ptr)
    {
        /* Previously failed to locate the section. */
        return NULL;
    }

    if (alloc_base && (IsBadReadPtr(alloc_start, sizeof(magic)) || *(unsigned int *)alloc_start != magic))
    {
        TRACE("steamclient.dll reloaded.\n");
        alloc_base = alloc_start = alloc_end = NULL;
        allocated_count = 0;
    }

    for (i = 0; i < allocated_count; ++i)
    {
        if ((vtbl && allocated[i].vtbl == vtbl) || (!vtbl && allocated[i].version == version))
        {
            if (allocated[i].size != size)
            {
                FIXME("Size does not match.\n");
                return NULL;
            }
            return allocated[i].ptr;
        }
    }

    if (allocated_count == ARRAY_SIZE(allocated))
    {
        FIXME("Too many interface versions.\n");
        return NULL;
    }

    if (!alloc_base)
    {
        static const WCHAR steamclientW[] = {'s','t','e','a','m','c','l','i','e','n','t','.','d','l','l',0};
        const IMAGE_SECTION_HEADER *sec;
        const IMAGE_NT_HEADERS *nt;
        HMODULE mod;

        if (!(mod = GetModuleHandleW(steamclientW)))
        {
            /* That is steamclient64.dll for x64 but no known use cases on x64.*/
            WARN("Module not found, err %u.\n", GetLastError());
            alloc_base = error_ptr;
            return NULL;
        }
        if (!(nt = RtlImageNtHeader(mod)))
        {
            FIXME("Got NULL NT image headers.\n");
            alloc_base = error_ptr;
            return NULL;
        }
        sec = (const IMAGE_SECTION_HEADER *)((const BYTE *)&nt->OptionalHeader + nt->FileHeader.SizeOfOptionalHeader);
        for (i = 0; i < nt->FileHeader.NumberOfSections; i++)
        {
            if (!memcmp(sec[i].Name, ".data", 5))
            {
                alloc_start = alloc_base = (BYTE *)mod + sec[i].VirtualAddress;
                alloc_end = alloc_base + sec[i].SizeOfRawData;
                if (alloc_end - alloc_start < sizeof(magic))
                {
                    ERR(".data section is too small.\n");
                    alloc_base = error_ptr;
                    return NULL;
                }
                TRACE("Found .data section, start %p, end %p.\n", alloc_base, alloc_end);
                *(unsigned int *)alloc_base = magic;
                alloc_base += sizeof(unsigned int);
                break;
            }
        }
        if (i == nt->FileHeader.NumberOfSections)
        {
            FIXME(".data section not found.\n");
            alloc_base = error_ptr;
            return NULL;
        }
    }

    if (alloc_end - alloc_base < size)
    {
        FIXME("Not enough section size left.\n");
        return NULL;
    }
    allocated[allocated_count].version = version;
    allocated[allocated_count].vtbl = vtbl;
    allocated[allocated_count].size = size;
    allocated[allocated_count].ptr = alloc_base;
    alloc_base += size;

    return allocated[allocated_count++].ptr;
}

void *alloc_mem_for_iface(size_t size, const char *iface_version)
{
    const char steamclient_iface_name[] = "SteamClient";
    unsigned int version;
    void *ret;

    /* Mafia II depends on SteamClient interface pointer to point inside
     * native Windows steamclient.dll. */
    if (strncmp(iface_version, steamclient_iface_name, ARRAY_SIZE(steamclient_iface_name) - 1))
         goto fallback;

    version = atoi(iface_version + ARRAY_SIZE(steamclient_iface_name) - 1);
    if (!version)
    {
        FIXME("Could not get iface version from %s.\n", iface_version);
        goto fallback;
    }

    if ((ret = get_mem_from_steamclient_dll(size, version, NULL)))
        return ret;

fallback:
    return HeapAlloc(GetProcessHeap(), 0, size);
}

void *alloc_vtable(void *vtable, unsigned int method_count, const char *iface_version)
{
    static const char *iface_names[] =
    {
        "SteamUser",
        "SteamFriends",
        "SteamUtils",
        "STEAMUSERSTATS",
        "STEAMAPPS",
        "SteamNetworking",
        "SteamClient",
    };
    unsigned int i;
    char *ret;

    for (i = 0; i < ARRAY_SIZE(iface_names); ++i)
        if (!strncmp(iface_version, iface_names[i], strlen(iface_names[i]) - 1))
            break;

    if (i == ARRAY_SIZE(iface_names))
        return vtable;

    if (!(ret = get_mem_from_steamclient_dll(method_count * sizeof(void *), 0, vtable)))
        return vtable;

    TRACE("iface %s, method_count %d, allocating from module.\n", iface_version, method_count);

    memcpy(ret, vtable, method_count * sizeof(void *));
    return ret;
}

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

struct steamclient_interface
{
    struct list entry;
    const char *name;
    void *u_iface;
    struct w_steam_iface *w_iface;
};

static struct list steamclient_interfaces = LIST_INIT(steamclient_interfaces);

struct w_steam_iface *create_win_interface(const char *name, void *u_iface)
{
    struct steamclient_interface *e;
    struct w_steam_iface *ret = NULL;
    iface_constructor constructor;

    TRACE("trying to create %s\n", name);

    if (!u_iface)
        return NULL;

    EnterCriticalSection(&steamclient_cs);

    LIST_FOR_EACH_ENTRY(e, &steamclient_interfaces, struct steamclient_interface, entry)
    {
        if (e->u_iface == u_iface && !strcmp(e->name, name))
        {
            ret = e->w_iface;
            TRACE("-> %p\n", ret);
            goto done;
        }
    }

    if ((constructor = find_iface_constructor( name )))
    {
        ret = constructor( u_iface );
        if (allocated_from_steamclient_dll( ret ) || allocated_from_steamclient_dll( ret->vtable ))
        {
            /* Don't cache interfaces allocated from steamclient.dll space.
             * steamclient may get reloaded by the app, miss the previous
             * data and potentially have different load address. */
            goto done;
        }

        e = HeapAlloc( GetProcessHeap(), 0, sizeof(*e) );
        e->name = strdup( name );
        e->u_iface = u_iface;
        e->w_iface = ret;
        list_add_tail( &steamclient_interfaces, &e->entry );

        goto done;
    }

done:
    LeaveCriticalSection(&steamclient_cs);
    if (!ret) ERR("Don't recognize interface name: %s\n", name);
    return ret;
}

static int load_steamclient(void)
{
    char steam_app_id[4096], ignore_child_processes[4096];
    struct steamclient_init_params params = {0};

    if (!GetEnvironmentVariableA("SteamAppId", steam_app_id, ARRAY_SIZE(steam_app_id)))
        params.steam_app_id_unset = GetLastError() == ERROR_ENVVAR_NOT_FOUND;
    else
        params.steam_app_id = steam_app_id;

    if (!GetEnvironmentVariableA("IgnoreChildProcesses", ignore_child_processes, ARRAY_SIZE(ignore_child_processes)))
        params.ignore_child_processes_unset = GetLastError() == ERROR_ENVVAR_NOT_FOUND;
    else
        params.ignore_child_processes = ignore_child_processes;

    if (!unix_steamclient_init( &params )) return 0;
    return 1;
}

void *CDECL CreateInterface(const char *name, int *return_code)
{
    TRACE("name: %s, return_code: %p\n", name, return_code);
    if (!load_steamclient()) return NULL;
    return create_win_interface( name, unix_CreateInterface( name, return_code ) );
}

static void execute_pending_callbacks(void)
{
    struct callback *callback = NULL;
    uint32_t callback_size = 0;

    while (unix_steamclient_next_callback( callback, &callback_size ))
    {
        if (!callback || callback_size > callback->size)
            callback = realloc( callback, callback_size );
        else switch (callback->type)
        {
        case SOCKETS_DEBUG_OUTPUT:
            TRACE( "SOCKETS_DEBUG_OUTPUT func %p, type %u, msg %s.\n", callback->sockets_debug_output.pfnFunc,
                   callback->sockets_debug_output.type, wine_dbgstr_a( callback->sockets_debug_output.msg ) );
            callback->sockets_debug_output.pfnFunc( callback->sockets_debug_output.type, callback->sockets_debug_output.msg );
            break;
        case WARNING_MESSAGE_HOOK:
            TRACE( "WARNING_MESSAGE_HOOK func %p, severity %d, msg %s.\n", callback->warning_message_hook.pFunction,
                   callback->warning_message_hook.severity, wine_dbgstr_a( callback->warning_message_hook.msg ) );
            callback->warning_message_hook.pFunction( callback->warning_message_hook.severity, callback->warning_message_hook.msg );
            break;
        }
    }

    free( callback );
}

static void *last_callback_data;

bool CDECL Steam_FreeLastCallback( int32_t pipe )
{
    TRACE( "%u\n", pipe );

    if (!load_steamclient()) return 0;

    HeapFree( GetProcessHeap(), 0, last_callback_data );
    last_callback_data = NULL;

    return unix_Steam_FreeLastCallback( pipe );
}

bool CDECL Steam_BGetCallback( int32_t pipe, w_CallbackMsg_t *win_msg, int32_t *ignored )
{
    u_CallbackMsg_t u_msg;
    bool ret;

    TRACE("%u, %p, %p\n", pipe, win_msg, ignored);

    if (!load_steamclient()) return 0;

    execute_pending_callbacks();

next_event:
    if (!(ret = unix_Steam_BGetCallback( pipe, win_msg, ignored, &u_msg ))) return FALSE;

    if (!(win_msg->m_pubParam = HeapAlloc( GetProcessHeap(), 0, win_msg->m_cubParam ))) return FALSE;
    last_callback_data = win_msg->m_pubParam;
    unix_callback_message_receive( &u_msg, win_msg );

    if (win_msg->m_iCallback == 0x14b) /* GameOverlayActivated_t::k_iCallback */
    {
        uint8_t activated = *(uint8_t *)win_msg->m_pubParam;
        FIXME( "HACK: Steam overlay %sactivated, %sabling all input events.\n",
               activated ? "" : "de", activated ? "dis" : "en" );
        if (activated)
        {
            SetEvent( steam_overlay_event );
            keybd_event( VK_LSHIFT, 0x2a /* lshift scancode */, KEYEVENTF_KEYUP, 0 );
            keybd_event( VK_RSHIFT, 0x36 /* rshift scancode */, KEYEVENTF_KEYUP, 0 );
            keybd_event( VK_TAB, 0x0f /* tab scancode */, KEYEVENTF_KEYUP, 0 );
        }
        else
        {
            if (WaitForSingleObject( steam_overlay_event, 0 ) == WAIT_TIMEOUT)
            {
                FIXME( "Spurious steam overlay deactivate event, skipping.\n" );
                Steam_FreeLastCallback( pipe );
                goto next_event;
            }
            ResetEvent( steam_overlay_event );
        }
    }

    execute_pending_callbacks();
    return ret;
}

bool CDECL Steam_GetAPICallResult( int32_t pipe, uint64_t call, void *w_callback,
                                   int w_callback_len, int id, bool *failed )
{
    TRACE( "%u, x, %p, %u, %u, %p\n", pipe, w_callback, w_callback_len, id, failed );

    if (!load_steamclient()) return FALSE;
    return unix_Steam_GetAPICallResult( pipe, call, w_callback, w_callback_len, id, failed );
}

void CDECL Steam_ReleaseThreadLocalMemory(int bThreadExit)
{
    TRACE("%d\n", bThreadExit);

    if (!load_steamclient()) return;
    unix_Steam_ReleaseThreadLocalMemory( bThreadExit );
}

void CDECL Breakpad_SteamMiniDumpInit( uint32_t a, const char *b, const char *c )
{
    TRACE("\n");
}

void CDECL Breakpad_SteamSetAppID( uint32_t appid )
{
    TRACE("\n");
}

int CDECL Breakpad_SteamSetSteamID( uint64_t steamid )
{
    TRACE("\n");
    return 1;
}

int CDECL Breakpad_SteamWriteMiniDumpSetComment(const char *comment)
{
    TRACE("\n");
    return 1;
}

void CDECL Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId(int a, int b)
{
    TRACE("\n");
}

bool CDECL Steam_IsKnownInterface( const char *pchVersion )
{
    TRACE("%s\n", pchVersion);
    load_steamclient();
    return unix_Steam_IsKnownInterface( pchVersion );
}

void CDECL Steam_NotifyMissingInterface( int32_t hSteamPipe, const char *pchVersion )
{
    TRACE("%u %s\n", hSteamPipe, pchVersion);
    load_steamclient();
    unix_Steam_NotifyMissingInterface( hSteamPipe, pchVersion );
}
