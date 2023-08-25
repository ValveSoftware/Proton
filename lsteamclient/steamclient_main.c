#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <pthread.h>
#include <assert.h>

#define __USE_GNU
#include <dlfcn.h>

#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "winuser.h"
#include "winternl.h"
#include "wine/debug.h"
#include "wine/list.h"
#include "steam_defs.h"

#ifdef __linux__
#include <X11/keysym.h>
#endif

#include "steamclient_private.h"

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

char g_tmppath[PATH_MAX];

static CRITICAL_SECTION steamclient_cs = { NULL, -1, 0, 0, 0, 0 };
static HANDLE steam_overlay_event;
static HANDLE callback_thread_handle;

#define MAX_CALLBACK_QUEUE_SIZE 4
struct callback_data *callback_queue[MAX_CALLBACK_QUEUE_SIZE];
static unsigned int callback_queue_size;
static BOOL callback_queue_done;
static UINT64 callback_queue_current_seq_number;
static pthread_mutex_t callback_queue_mutex;
static pthread_cond_t callback_queue_callback_event;
static pthread_cond_t callback_queue_ready_event;
static pthread_cond_t callback_queue_complete_event;

static void * (WINAPI *p_NtCurrentTeb)(void);

static void init_ntdll_so_funcs(void)
{
    Dl_info info;
    UINT64 unix_funcs;
    unsigned int status;
    void *ntdll;

    status = NtQueryVirtualMemory(GetCurrentProcess(), GetModuleHandleW(L"ntdll.dll"), (MEMORY_INFORMATION_CLASS)1000 /*MemoryWineUnixFuncs*/,
            &unix_funcs, sizeof(unix_funcs), NULL);
    if (status)
    {
        fprintf(stderr, "err:lsteamclient:init_ntdll_so_funcs NtQueryVirtualMemory status %#x.\n", status);
        return;
    }
    if (!dladdr((void *)(ULONG_PTR)unix_funcs, &info))
    {
        fprintf(stderr, "err:lsteamclient:init_ntdll_so_funcs dladdr failed.\n");
        return;
    }
    ntdll = dlopen(info.dli_fname, RTLD_NOW);
    if (!ntdll)
    {
        fprintf(stderr, "err:lsteamclient:init_ntdll_so_funcs could not find ntdll.so.\n");
        return;
    }
    p_NtCurrentTeb = dlsym(ntdll, "NtCurrentTeb");
    dlclose(ntdll);
}

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            steam_overlay_event = CreateEventA(NULL, TRUE, FALSE, "__wine_steamclient_GameOverlayActivated");
            init_ntdll_so_funcs();
            break;
        case DLL_PROCESS_DETACH:
            if (callback_thread_handle)
            {
                /* Unfortunately we don't have a clear place to shutdown the thread so just kill it. */
                /* An explicit sync events and handle cleanup is to protect from unloading and loading
                 * .so again which may end up not actually reloading anyting and leaving the values of our static
                 * variables. */
                TerminateThread(callback_thread_handle, -1);
                WaitForSingleObject(callback_thread_handle, INFINITE);
                pthread_mutex_destroy(&callback_queue_mutex);
                pthread_cond_destroy(&callback_queue_callback_event);
                pthread_cond_destroy(&callback_queue_ready_event);
                pthread_cond_destroy(&callback_queue_complete_event);
                CloseHandle(callback_thread_handle);
                callback_thread_handle = NULL;
                TRACE("Terminated callback thread.\n");
            }
            CloseHandle(steam_overlay_event);
            break;
    }

    return TRUE;
}

BOOL is_native_thread(void)
{
    if (!p_NtCurrentTeb)
        return TRUE;
    return !p_NtCurrentTeb();
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

/* Returns:
 *  - if successful, the number of bytes written to dst, including the NULL terminator;
 *  - 0 if failed;
 *  - PATH_MAX if insufficient output buffer (TODO: should be actual required length including NULL terminator). */
unsigned int steamclient_unix_path_to_dos_path(bool api_result, const char *src, char *dst, uint32 dst_bytes, int is_url)
{
    static const char file_prot[] = "file://";
    WCHAR *dosW;
    uint32 r;

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

        for(s = src, d = dst; *s; ++s, ++d){
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

static BYTE *alloc_start, *alloc_end;

static BOOL allocated_from_steamclient_dll( void *ptr )
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
        const IMAGE_SECTION_HEADER *sec;
        const IMAGE_NT_HEADERS *nt;
        HMODULE mod;

        if (!(mod = GetModuleHandleW(L"steamclient.dll")))
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
            ret = constructors[i].ctor(linux_side);
            if (allocated_from_steamclient_dll(ret)
                    || allocated_from_steamclient_dll(*(void **)ret) /* vtable */)
            {
                /* Don't cache interfaces allocated from steamclient.dll space.
                 * steamclient may get reloaded by the app, miss the previous
                 * data and potentially have different load address. */
                break;
            }

            e = HeapAlloc(GetProcessHeap(), 0, sizeof(*e));
            e->name = constructors[i].iface_version;
            e->linux_side = linux_side;
            e->interface = ret;
            list_add_tail(&steamclient_interfaces, &e->entry);

            break;
        }
    }

done:
    LeaveCriticalSection(&steamclient_cs);
    if (!ret) ERR("Don't recognize interface name: %s\n", name);
    return ret;
}

void execute_callback(struct callback_data *cb_data)
{
    /* No TRACEs or other Wine calls here, this is executed from Unix native thread
     * which is not initialized by Wine. */
    cb_data->complete = FALSE;
    pthread_mutex_lock(&callback_queue_mutex);
    while (!callback_queue_done && callback_queue_size == MAX_CALLBACK_QUEUE_SIZE)
        pthread_cond_wait(&callback_queue_ready_event, &callback_queue_mutex);
    if (callback_queue_done)
    {
        pthread_mutex_unlock(&callback_queue_mutex);
        return;
    }
    callback_queue[callback_queue_size++] = cb_data;
    pthread_cond_broadcast(&callback_queue_callback_event);
    while (!callback_queue_done && !cb_data->complete)
        pthread_cond_wait(&callback_queue_complete_event, &callback_queue_mutex);
    pthread_mutex_unlock(&callback_queue_mutex);
}

static BOOL get_next_callback(struct callback_data *cb_data, UINT64 *cookie)
{
    BOOL ret;

    pthread_mutex_lock(&callback_queue_mutex);
    while (!callback_queue_done && !callback_queue_size)
        pthread_cond_wait(&callback_queue_callback_event, &callback_queue_mutex);

    if ((ret = !callback_queue_done))
    {
        assert(callback_queue_size);
        --callback_queue_size;
        *cookie = (UINT64)(ULONG_PTR)callback_queue[callback_queue_size];
        *cb_data = *callback_queue[callback_queue_size];
    }
    pthread_cond_broadcast(&callback_queue_ready_event);
    pthread_mutex_unlock(&callback_queue_mutex);
    return ret;
}

static void callback_complete(UINT64 cookie)
{
    struct callback_data *cb_data = (struct callback_data *)(ULONG_PTR)cookie;

    pthread_mutex_lock(&callback_queue_mutex);
    cb_data->complete = TRUE;
    pthread_cond_broadcast(&callback_queue_complete_event);
    pthread_mutex_unlock(&callback_queue_mutex);
}

static void finish_callback_thread(void)
{
    if (!callback_thread_handle)
        return;
    pthread_mutex_lock(&callback_queue_mutex);
    callback_queue_done = TRUE;
    pthread_cond_broadcast(&callback_queue_callback_event);
    pthread_cond_broadcast(&callback_queue_complete_event);
    pthread_mutex_unlock(&callback_queue_mutex);

    WaitForSingleObject(callback_thread_handle, INFINITE);
    CloseHandle(callback_thread_handle);
    callback_thread_handle = NULL;
}

typedef void (WINAPI *win_FSteamNetworkingSocketsDebugOutput)(ESteamNetworkingSocketsDebugOutputType nType,
        const char *pszMsg);
typedef void (CDECL *win_SteamAPIWarningMessageHook_t)(int, const char *pszMsg);

static DWORD WINAPI callback_thread(void *dummy)
{
    struct callback_data cb_data;
    UINT64 cookie;

    while (get_next_callback( &cb_data, &cookie))
    {
        switch (cb_data.type)
        {
            case SOCKET_DEBUG_OUTPUT:
                TRACE("SOCKET_DEBUG_OUTPUT func %p, type %u, msg %s.\n",
                        cb_data.func, cb_data.sockets_debug_output.type,
                        wine_dbgstr_a(cb_data.sockets_debug_output.msg));
                ((win_FSteamNetworkingSocketsDebugOutput)cb_data.func)(cb_data.sockets_debug_output.type,
                        cb_data.sockets_debug_output.msg);
                callback_complete(cookie);
                break;
            case STEAM_API_WARNING_HOOK:
                TRACE("STEAM_API_WARNING_HOOK func %p, type %u, msg %s.\n",
                        cb_data.func, cb_data.steam_api_warning_hook.severity,
                        wine_dbgstr_a(cb_data.steam_api_warning_hook.msg));
                ((win_SteamAPIWarningMessageHook_t)cb_data.func)(cb_data.steam_api_warning_hook.severity,
                        cb_data.steam_api_warning_hook.msg);
                callback_complete(cookie);
                break;
            case STEAM_API_CALLBACK_ONE_PARAM:
                TRACE("STEAM_API_CALLBACK_ONE_PARAM func %p, param %p.\n",
                        cb_data.func, cb_data.steam_api_callback_one_param.param);
                ((void (WINAPI *)(void *))cb_data.func)(cb_data.steam_api_callback_one_param.param);
                callback_complete(cookie);
                break;
            default:
                ERR("Unexpected callback type %u.\n", cb_data.type);
                break;
        }
    }
    TRACE("exiting.\n");
    return 0;
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
    DWORD callback_thread_id;

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
    steamclient_lib = dlopen(path, RTLD_NOW);
    if(!steamclient_lib){
        ERR("unable to load native steamclient library\n");
        return 0;
    }

    steamclient_CreateInterface = dlsym(steamclient_lib, "CreateInterface");
    if(!steamclient_CreateInterface){
        ERR("unable to load CreateInterface method\n");
        return 0;
    }

    steamclient_BGetCallback = dlsym(steamclient_lib, "Steam_BGetCallback");
    if(!steamclient_BGetCallback){
        ERR("unable to load BGetCallback method\n");
        return 0;
    }

    steamclient_GetAPICallResult = dlsym(steamclient_lib, "Steam_GetAPICallResult");
    if(!steamclient_GetAPICallResult){
        ERR("unable to load GetAPICallResult method\n");
        return 0;
    }

    steamclient_FreeLastCallback = dlsym(steamclient_lib, "Steam_FreeLastCallback");
    if(!steamclient_FreeLastCallback){
        ERR("unable to load FreeLastCallback method\n");
        return 0;
    }

    steamclient_ReleaseThreadLocalMemory = dlsym(steamclient_lib, "Steam_ReleaseThreadLocalMemory");
    if(!steamclient_ReleaseThreadLocalMemory){
        ERR("unable to load ReleaseThreadLocalMemory method\n");
        return 0;
    }

    pthread_mutex_init(&callback_queue_mutex, NULL);
    pthread_cond_init(&callback_queue_callback_event, NULL);
    pthread_cond_init(&callback_queue_ready_event, NULL);
    pthread_cond_init(&callback_queue_complete_event, NULL);

    callback_thread_handle = CreateThread(NULL, 0, callback_thread, NULL, 0, &callback_thread_id);
    TRACE("Created callback thread 0x%04x.\n", callback_thread_id);

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

next_event:
    ret = steamclient_BGetCallback(pipe, &lin_msg, ignored);

    if(ret){
        BOOL need_free = TRUE;
        win_msg->m_hSteamUser = lin_msg.m_hSteamUser;
        win_msg->m_iCallback = lin_msg.m_iCallback;

        if (win_msg->m_iCallback == 0x14b) /* GameOverlayActivated_t::k_iCallback */
        {
            uint8 activated = *(uint8 *)lin_msg.m_pubParam;
            FIXME("HACK: Steam overlay %sactivated, %sabling all input events.\n", activated ? "" : "de", activated ? "dis" : "en");
            if (activated)
            {
                SetEvent(steam_overlay_event);
                keybd_event(VK_LSHIFT, 0x2a /* lshift scancode */, KEYEVENTF_KEYUP, 0);
                keybd_event(VK_RSHIFT, 0x36 /* rshift scancode */, KEYEVENTF_KEYUP, 0);
                keybd_event(VK_TAB, 0x0f /* tab scancode */, KEYEVENTF_KEYUP, 0);
            }
            else
            {
                if (WaitForSingleObject(steam_overlay_event, 0) == WAIT_TIMEOUT)
                {
                    FIXME("Spurious steam overlay deactivate event, skipping.\n");
                    steamclient_FreeLastCallback(pipe);
                    goto next_event;
                }
                ResetEvent(steam_overlay_event);
            }
        }

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

bool after_shutdown(bool ret)
{
    TRACE("ret %d.\n", ret);

    if (!ret)
        return 0;
    finish_callback_thread();
    return ret;
}

HSteamPipe after_steam_pipe_create(HSteamPipe pipe)
{
    DWORD callback_thread_id;

    TRACE("pipe %#x.\n", pipe);

    if (!pipe)
        return 0;

    if (callback_thread_handle)
        return pipe;

    callback_queue_done = FALSE;
    callback_thread_handle = CreateThread(NULL, 0, callback_thread, NULL, 0, &callback_thread_id);
    TRACE("Created callback thread 0x%04x.\n", callback_thread_id);

    return pipe;
}
