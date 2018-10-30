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
#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

uint32 steamclient_unix_path_to_dos_path(uint32 api_result, char *inout, uint32 inout_bytes)
{
    WCHAR *converted;
    uint32 r;

    if(api_result == 0)
        return 0;

    converted = wine_get_dos_file_name(inout);
    if(!converted){
        WARN("Unable to convert unix filename to DOS: %s\n", inout);
        *inout = 0;
        return 0;
    }

    r = WideCharToMultiByte(CP_UNIXCP, 0, converted, -1, inout, inout_bytes,
            NULL, NULL);

    HeapFree(GetProcessHeap(), 0, converted);

    if(r > 0)
        return r - 1;

    return 0;
}

#include "win_constructors.h"

static const struct {
    const char *iface_version;
    void *(*ctor)(void *);
} constructors[] = {
#include "win_constructors_table.dat"
};

void *create_win_interface(const char *name, void *linux_side)
{
    int i;

    TRACE("trying to create %s\n", name);

    if(!linux_side)
        return NULL;

    for(i = 0; i < sizeof(constructors) / sizeof(*constructors); ++i){
        if(!strcmp(name, constructors[i].iface_version))
            return constructors[i].ctor(linux_side);
    }

    ERR("Don't recognize interface name: %s\n", name);

    return NULL;
}

static void *steamclient_lib;
static void *(*steamclient_CreateInterface)(const char *name, int *return_code);
static bool (*steamclient_BGetCallback)(HSteamPipe a, CallbackMsg_t *b, int32 *c);
static bool (*steamclient_GetAPICallResult)(HSteamPipe, SteamAPICall_t, void *, int, int, bool *);
static bool (*steamclient_FreeLastCallback)(HSteamPipe);
static void (*steamclient_ReleaseThreadLocalMemory)(int);

static int load_steamclient(void)
{
    char path[PATH_MAX];

    if(steamclient_lib)
        return 1;

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
