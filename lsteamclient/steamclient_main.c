#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <limits.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "wine/debug.h"
#include "wine/library.h"
#include "wine/list.h"
#include "steam_defs.h"

#ifdef __linux__
#include <X11/keysym.h>
#endif

#include "steamclient_private.h"

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

char g_tmppath[PATH_MAX];

static char *controller_glyphs[512]; /* at least k_EControllerActionOrigin_Count */

static CRITICAL_SECTION steamclient_cs = { NULL, -1, 0, 0, 0, 0 };

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}

void sync_environment(void)
{
    static const char *steamapi_envs[] =
    {
        "SteamAppId",
        "IgnoreChildProcesses",
    };

    char value[32767];

    for (unsigned int i = 0; i < ARRAY_SIZE(steamapi_envs); i++)
    {
        if (!GetEnvironmentVariableA(steamapi_envs[i], value, ARRAY_SIZE(value)))
        {
            if (GetLastError() == ERROR_ENVVAR_NOT_FOUND)
            {
                TRACE("unsetenv(\"%s\")\n", steamapi_envs[i]);
                unsetenv(steamapi_envs[i]);
            }
            continue;
        }

        TRACE("setenv(\"%s\", \"%s\", 1)\n", steamapi_envs[i], value);
        setenv(steamapi_envs[i], value, 1);
    }
}

/* returns the number of bytes written to dst, not including the NUL terminator */
unsigned int steamclient_unix_path_to_dos_path(bool api_result, const char *src, char *dst, uint32 dst_bytes, int is_url)
{
    WCHAR *dosW;
    uint32 r;

    static const char file_prot[] = "file://";

    if(!dst || !dst_bytes)
        return 0;

    if(!src || !*src || !api_result){
        *dst = 0;
        return 0;
    }

    if(is_url){
        /* convert only file: URLs */
        if(strncmp(src, file_prot, 7) != 0){
            strcpy(dst, src);
            return strlen(dst);
        }

        src += 7;
        memcpy(dst, file_prot, sizeof(file_prot));
        if(dst_bytes < sizeof(file_prot))
            return 0;
        dst += 7;
        dst_bytes -= 7;
    }

    dosW = wine_get_dos_file_name(src);
    *dst = 0;

    if(!dosW){
        WARN("Unable to convert unix filename to DOS: %s\n", src);
        return 0;
    }

    r = WideCharToMultiByte(CP_ACP, 0, dosW, -1, dst, dst_bytes,
            NULL, NULL);

    HeapFree(GetProcessHeap(), 0, dosW);

    return r == 0 ? 0 : r - 1;
}

#define IS_ABSOLUTE(x) (*x == '/' || *x == '\\' || (*x && *(x + 1) == ':'))

/* returns non-zero on success, zero on failure */
bool steamclient_dos_path_to_unix_path(const char *src, char *dst, int is_url)
{
    static const char file_prot[] = "file://";

    *dst = 0;

    if(!src || !*src)
        return 0;

    if(is_url){
        if(strncmp(src, file_prot, 7) != 0){
            strcpy(dst, src);
            return 1;
        }

        src += 7;
        memcpy(dst, file_prot, sizeof(file_prot));
        dst += 7;
    }

    if(IS_ABSOLUTE(src)){
        /* absolute path, use wine conversion */
        WCHAR srcW[PATH_MAX];
        char *unix_path;
        uint32 r;

        r = MultiByteToWideChar(CP_UNIXCP, 0, src, -1, srcW, PATH_MAX);
        if(r == 0)
            return 0;

        unix_path = wine_get_unix_file_name(srcW);
        if(!unix_path){
            WARN("Unable to convert DOS filename to unix: %s\n", src);
            return 0;
        }

        strncpy(dst, unix_path, PATH_MAX);

        HeapFree(GetProcessHeap(), 0, unix_path);
    }else{
        /* relative path, just fix up backslashes */
        const char *s;
        char *d;

        for(s = src, d = dst; *src; ++s, ++d){
            if(*s == '\\')
                *d = '/';
            else
                *d = *s;
        }

        *d = 0;
    }

    return 1;
}

const char **steamclient_dos_to_unix_stringlist(const char **src)
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

void steamclient_free_stringlist(const char **out)
{
    if(out){
        const char **o;
        for(o = out; *o; o++)
            HeapFree(GetProcessHeap(), 0, (char *)*o);
        HeapFree(GetProcessHeap(), 0, out);
    }
}

const char *steamclient_isteamcontroller_getglyph(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(!controller_glyphs[origin])
        controller_glyphs[origin] = HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

    steamclient_unix_path_to_dos_path(1, lin_path, controller_glyphs[origin], PATH_MAX, 0);

    return controller_glyphs[origin];
}

#ifdef __linux__
static const uint32 vk_to_xkeysym[0xFF] = {
    0, /* 0x0  Undefined */
    0, /* VK_LBUTTON */
    0, /* VK_RBUTTON */
    XK_Cancel, /* VK_CANCEL */
    0, /* VK_MBUTTON */
    0, /* VK_XBUTTON1 */
    0, /* VK_XBUTTON2 */
    0, /* 0x07 Undefined */
    XK_BackSpace, /* VK_BACK */
    XK_Tab, /* VK_TAB */
    0, /* 0x0A-0x0B  Undefined */
    0,
    XK_Clear, /* VK_CLEAR */
    XK_Return, /* VK_RETURN */
    0, /* 0x0E-0x0F  Undefined */
    0,
    XK_Shift_L, /* VK_SHIFT */
    XK_Control_L, /* VK_CONTROL */
    XK_Alt_L, /* VK_MENU */
    XK_Pause, /* VK_PAUSE */
    XK_Caps_Lock, /* VK_CAPITAL */
    0, /* VK_KANA */
    0, /* 0x16  Undefined */
    0, /* VK_JUNJA */
    0, /* VK_FINAL */
    0, /* VK_HANJA */
    0, /* 0x1A  Undefined */
    XK_Escape, /* VK_ESCAPE */
    XK_Henkan_Mode, /* VK_CONVERT */
    XK_Muhenkan, /* VK_NONCONVERT */
    0, /* VK_ACCEPT */
    0, /* VK_MODECHANGE */
    ' ', /* VK_SPACE */
    XK_Prior, /* VK_PRIOR */
    XK_Next, /* VK_NEXT */
    XK_End, /* VK_END */
    XK_Home, /* VK_HOME */
    XK_Left, /* VK_LEFT */
    XK_Up, /* VK_UP */
    XK_Right, /* VK_RIGHT */
    XK_Down, /* VK_DOWN */
    XK_Select, /* VK_SELECT */
    XK_Print, /* VK_PRINT */
    XK_Execute, /* VK_EXECUTE */
    XK_Print, /* VK_SNAPSHOT */
    XK_Insert, /* VK_INSERT */
    XK_Delete, /* VK_DELETE */
    XK_Help, /* VK_HELP */

    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    0, 0, 0, 0, 0, 0, 0, /* 0x3A-0x40  Undefined */
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z',

    XK_Super_L, /* VK_LWIN */
    XK_Super_R, /* VK_RWIN */
    XK_Menu, /* VK_APPS */
    0, /* 0x5E  Unassigned */
    0, /* VK_SLEEP */
    XK_KP_0, /* VK_NUMPAD0 */
    XK_KP_1, /* VK_NUMPAD1 */
    XK_KP_2, /* VK_NUMPAD2 */
    XK_KP_3, /* VK_NUMPAD3 */
    XK_KP_4, /* VK_NUMPAD4 */
    XK_KP_5, /* VK_NUMPAD5 */
    XK_KP_6, /* VK_NUMPAD6 */
    XK_KP_7, /* VK_NUMPAD7 */
    XK_KP_8, /* VK_NUMPAD8 */
    XK_KP_9, /* VK_NUMPAD9 */
    XK_KP_Multiply, /* VK_MULTIPLY */
    XK_KP_Add, /* VK_ADD */
    XK_KP_Separator, /* VK_SEPARATOR */
    XK_KP_Subtract, /* VK_SUBTRACT */
    XK_KP_Decimal, /* VK_DECIMAL */
    XK_KP_Divide, /* VK_DIVIDE */
    XK_F1, /* VK_F1 */
    XK_F2, /* VK_F2 */
    XK_F3, /* VK_F3 */
    XK_F4, /* VK_F4 */
    XK_F5, /* VK_F5 */
    XK_F6, /* VK_F6 */
    XK_F7, /* VK_F7 */
    XK_F8, /* VK_F8 */
    XK_F9, /* VK_F9 */
    XK_F10, /* VK_F10 */
    XK_F11, /* VK_F11 */
    XK_F12, /* VK_F12 */
    XK_F13, /* VK_F13 */
    XK_F14, /* VK_F14 */
    XK_F15, /* VK_F15 */
    XK_F16, /* VK_F16 */
    XK_F17, /* VK_F17 */
    XK_F18, /* VK_F18 */
    XK_F19, /* VK_F19 */
    XK_F20, /* VK_F20 */
    XK_F21, /* VK_F21 */
    XK_F22, /* VK_F22 */
    XK_F23, /* VK_F23 */
    XK_F24, /* VK_F24 */
    0, /* VK_NAVIGATION_VIEW */
    0, /* VK_NAVIGATION_MENU */
    0, /* VK_NAVIGATION_UP */
    0, /* VK_NAVIGATION_DOWN */
    0, /* VK_NAVIGATION_LEFT */
    0, /* VK_NAVIGATION_RIGHT */
    0, /* VK_NAVIGATION_ACCEPT */
    0, /* VK_NAVIGATION_CANCEL */
    XK_Num_Lock, /* VK_NUMLOCK */
    XK_Scroll_Lock, /* VK_SCROLL */
    XK_KP_Equal, /* VK_OEM_NEC_EQUAL */
    0, /* VK_OEM_FJ_JISHO */
    0, /* VK_OEM_FJ_MASSHOU */
    0, /* VK_OEM_FJ_TOUROKU */
    0, /* VK_OEM_FJ_LOYA */
    0, /* VK_OEM_FJ_ROYA */
    0, 0, 0, 0, 0, 0, 0, 0, 0, /* 0x97-0x9F  Unassigned */
    XK_Shift_L, /* VK_LSHIFT */
    XK_Shift_R, /* VK_RSHIFT */
    XK_Control_L, /* VK_LCONTROL */
    XK_Control_R, /* VK_RCONTROL */
    XK_Alt_L, /* VK_LMENU */
    XK_Alt_R, /* VK_RMENU */

    /* below are OEM, browser keys, etc */
};

uint32 manual_convert_nNativeKeyCode(uint32 win_vk)
{
    if(win_vk < sizeof(vk_to_xkeysym) / sizeof(*vk_to_xkeysym))
        return vk_to_xkeysym[win_vk];
    return 0;
}
#else
#error You must implement VK<->Native keysym conversion for this platform.
#endif

#include "win_constructors.h"

static const struct {
    const char *iface_version;
    void *(*ctor)(void *);
} constructors[] = {
#include "win_constructors_table.dat"
};

struct steamclient_interface
{
    struct list entry;
    const char *name;
    void *linux_side;
    void *interface;
};

static struct list steamclient_interfaces = LIST_INIT(steamclient_interfaces);

void *create_win_interface(const char *name, void *linux_side)
{
    struct steamclient_interface *e;
    void *ret = NULL;
    int i;

    TRACE("trying to create %s\n", name);

    if (!linux_side)
        return NULL;

    EnterCriticalSection(&steamclient_cs);

    LIST_FOR_EACH_ENTRY(e, &steamclient_interfaces, struct steamclient_interface, entry)
    {
        if (e->linux_side == linux_side && !strcmp(e->name, name))
        {
            ret = e->interface;
            TRACE("-> %p\n", ret);
            goto done;
        }
    }

    for (i = 0; i < sizeof(constructors) / sizeof(*constructors); ++i)
    {
        if (!strcmp(name, constructors[i].iface_version))
        {
            e = HeapAlloc(GetProcessHeap(), 0, sizeof(*e));
            e->name = constructors[i].iface_version;
            e->linux_side = linux_side;
            e->interface = constructors[i].ctor(linux_side);
            list_add_tail(&steamclient_interfaces, &e->entry);

            ret = e->interface;
            break;
        }
    }

done:
    LeaveCriticalSection(&steamclient_cs);
    if (!ret) ERR("Don't recognize interface name: %s\n", name);
    return ret;
}

static void *steamclient_lib;
static void *(*steamclient_CreateInterface)(const char *name, int *return_code);
static bool (*steamclient_BGetCallback)(HSteamPipe a, CallbackMsg_t *b, int32 *c);
static bool (*steamclient_GetAPICallResult)(HSteamPipe, SteamAPICall_t, void *, int, int, bool *);
static bool (*steamclient_FreeLastCallback)(HSteamPipe);
static void (*steamclient_ReleaseThreadLocalMemory)(int);

static int load_steamclient(void)
{
    char path[PATH_MAX], resolved_path[PATH_MAX];

    if(steamclient_lib)
        return 1;

    sync_environment();

#ifdef __APPLE__
    if(getenv("STEAM_COMPAT_CLIENT_INSTALL_PATH")){
        snprintf(path, PATH_MAX, "%s/steamclient.dylib", getenv("STEAM_COMPAT_CLIENT_INSTALL_PATH"));
    }else{
        WARN("Old Steam client, falling back to DYLD environment to locate native steamclient library\n");
        strcpy(path, "steamclient.dylib");
    }
#else
#ifdef _WIN64
    snprintf(path, PATH_MAX, "%s/.steam/sdk64/steamclient.so", getenv("HOME"));
#else
    snprintf(path, PATH_MAX, "%s/.steam/sdk32/steamclient.so", getenv("HOME"));
#endif
    if (realpath(path, resolved_path)){
        strncpy(path, resolved_path, PATH_MAX);
        path[PATH_MAX - 1] = 0;
    }
#endif
    steamclient_lib = wine_dlopen(path, RTLD_NOW, NULL, 0);
    if(!steamclient_lib){
        ERR("unable to load native steamclient library\n");
        return 0;
    }

    steamclient_CreateInterface = wine_dlsym(steamclient_lib, "CreateInterface", NULL, 0);
    if(!steamclient_CreateInterface){
        ERR("unable to load CreateInterface method\n");
        return 0;
    }

    steamclient_BGetCallback = wine_dlsym(steamclient_lib, "Steam_BGetCallback", NULL, 0);
    if(!steamclient_BGetCallback){
        ERR("unable to load BGetCallback method\n");
        return 0;
    }

    steamclient_GetAPICallResult = wine_dlsym(steamclient_lib, "Steam_GetAPICallResult", NULL, 0);
    if(!steamclient_GetAPICallResult){
        ERR("unable to load GetAPICallResult method\n");
        return 0;
    }

    steamclient_FreeLastCallback = wine_dlsym(steamclient_lib, "Steam_FreeLastCallback", NULL, 0);
    if(!steamclient_FreeLastCallback){
        ERR("unable to load FreeLastCallback method\n");
        return 0;
    }

    steamclient_ReleaseThreadLocalMemory = wine_dlsym(steamclient_lib, "Steam_ReleaseThreadLocalMemory", NULL, 0);
    if(!steamclient_ReleaseThreadLocalMemory){
        ERR("unable to load ReleaseThreadLocalMemory method\n");
        return 0;
    }

    return 1;
}

void *CDECL CreateInterface(const char *name, int *return_code)
{
    TRACE("name: %s, return_code: %p\n", name, return_code);

    if(!load_steamclient())
        return NULL;

    return create_win_interface(name, steamclient_CreateInterface(name, return_code));
}

#include "cb_converters.h"

#pragma pack( push, 8 )
struct winCallbackMsg_t
{
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 *m_pubParam;
    int m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )

static void *last_cb = NULL;

bool CDECL Steam_BGetCallback(HSteamPipe pipe, struct winCallbackMsg_t *win_msg, int32 *ignored)
{
    bool ret;
    CallbackMsg_t lin_msg;

    TRACE("%u, %p, %p\n", pipe, win_msg, ignored);

    if(!load_steamclient())
        return 0;

    ret = steamclient_BGetCallback(pipe, &lin_msg, ignored);

    if(ret){
        BOOL need_free = TRUE;
        win_msg->m_hSteamUser = lin_msg.m_hSteamUser;
        win_msg->m_iCallback = lin_msg.m_iCallback;
        switch(win_msg->m_iCallback | (lin_msg.m_cubParam << 16)){
#include "cb_converters.dat"
            default:
                /* structs are compatible */
                need_free = FALSE;
                win_msg->m_cubParam = lin_msg.m_cubParam;
                win_msg->m_pubParam = lin_msg.m_pubParam;
                break;
        }
        if(need_free)
            last_cb = win_msg->m_pubParam;
    }

    return ret;
}

static int get_callback_len(int cb)
{
    switch(cb){
#include "cb_getapi_sizes.dat"
    }
    return 0;
}

bool do_cb_wrap(HSteamPipe pipe, void *linux_side,
        bool (*cpp_func)(void *, SteamAPICall_t, void *, int, int, bool *),
        SteamAPICall_t call, void *callback, int callback_len, int cb_expected, bool *failed)
{
    void *lin_callback = NULL;
    int lin_callback_len;
    bool ret;

    lin_callback_len = get_callback_len(cb_expected);
    if(!lin_callback_len){
        /* structs are compatible, pass on through */
        if(!cpp_func){
            if(!load_steamclient())
                return 0;
            return steamclient_GetAPICallResult(pipe, call, callback, callback_len, cb_expected, failed);
        }
        return cpp_func(linux_side, call, callback, callback_len, cb_expected, failed);
    }

    /* structs require conversion */
    lin_callback = HeapAlloc(GetProcessHeap(), 0, lin_callback_len);

    if(!cpp_func){
        if(!load_steamclient())
            return 0;
        ret = steamclient_GetAPICallResult(pipe, call, lin_callback, lin_callback_len, cb_expected, failed);
    }else
        ret = cpp_func(linux_side, call, lin_callback, lin_callback_len, cb_expected, failed);

    if(ret){
        switch(cb_expected){
#include "cb_getapi_table.dat"
        }
    }

    HeapFree(GetProcessHeap(), 0, lin_callback);

    return ret;
}

bool CDECL Steam_GetAPICallResult(HSteamPipe pipe, SteamAPICall_t call,
        void *callback, int callback_len, int cb_expected, bool *failed)
{
    TRACE("%u, x, %p, %u, %u, %p\n", pipe, callback, callback_len, cb_expected, failed);
    return do_cb_wrap(pipe, NULL, NULL, call, callback, callback_len, cb_expected, failed);
}

bool CDECL Steam_FreeLastCallback(HSteamPipe pipe)
{
    TRACE("%u\n", pipe);

    if(!load_steamclient())
        return 0;

    HeapFree(GetProcessHeap(), 0, last_cb);
    last_cb = NULL;

    return steamclient_FreeLastCallback(pipe);
}

void CDECL Steam_ReleaseThreadLocalMemory(int bThreadExit)
{
    TRACE("%d\n", bThreadExit);

    if(!load_steamclient())
        return;

    steamclient_ReleaseThreadLocalMemory(bThreadExit);
}

void CDECL Breakpad_SteamMiniDumpInit(uint32_t a, const char *b, const char *c)
{
    TRACE("\n");
}

void CDECL Breakpad_SteamSetAppID(uint32_t appid)
{
    TRACE("\n");
}

int CDECL Breakpad_SteamSetSteamID(uint64_t steamid)
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
