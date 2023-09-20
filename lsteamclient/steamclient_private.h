/* TODO these should be generated */
#ifndef __STEAMCLIENT_PRIVATE_H
#define __STEAMCLIENT_PRIVATE_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "wine/list.h"

#ifndef __cplusplus
#include "cxx.h"
#else
typedef void (*vtable_ptr)(void);
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define W_CDECL   __cdecl
#define W_STDCALL __stdcall
#define U_CDECL   __attribute__((sysv_abi))
#define U_STDCALL __attribute__((sysv_abi))

struct w_steam_iface
{
    vtable_ptr *vtable;
    void *u_iface;
};

struct SteamInputActionEvent_t;
typedef void (*CDECL win_SteamInputActionEventCallbackPointer)( struct SteamInputActionEvent_t * );
void lin_SteamInputActionEventCallbackPointer( struct SteamInputActionEvent_t *dat );

struct w_steam_iface *create_win_interface(const char *name, void *linux_side);
unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst,
                                                uint32_t dst_bytes, int is_url );

extern const char *steamclient_dos_to_unix_path( const char *src, int is_url );
extern void steamclient_free_path( const char *path_array );
extern const char **steamclient_dos_to_unix_path_array( const char **src_array );
extern void steamclient_free_path_array( const char **path_array );

const char *steamclient_isteamcontroller_getglyph(int origin, const char *lin_path);
const char *steamclient_isteaminput_getglyph(int origin, const char *lin_path);
const char *steamclient_isteaminput_getglyph_xbox(int origin, const char *lin_path);
const char *steamclient_isteaminput_getglyph_png(int origin, int size, int flags, const char *lin_path);
const char *steamclient_isteaminput_getglyph_svg(int origin, int flags, const char *lin_path);
uint32_t manual_convert_nNativeKeyCode( uint32_t win_vk );
void *create_LinuxISteamMatchmakingServerListResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingPingResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingPlayersResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingRulesResponse(void *win, const char *version);
void *create_LinuxISteamNetworkingConnectionCustomSignaling( void *win, const char *version );
void *create_LinuxISteamNetworkingCustomSignalingRecvContext( void *win, const char *version );

typedef void (U_CDECL *u_SteamAPIWarningMessageHook_t)( int32_t, const char * );
typedef void (W_CDECL *w_SteamAPIWarningMessageHook_t)( int32_t, const char * );
u_SteamAPIWarningMessageHook_t manual_convert_SetWarningMessageHook_pFunction( w_SteamAPIWarningMessageHook_t );

typedef void (U_STDCALL *u_FSteamNetworkingSocketsDebugOutput)( uint32_t, const char * );
typedef void (W_STDCALL *w_FSteamNetworkingSocketsDebugOutput)( uint32_t, const char * );
u_FSteamNetworkingSocketsDebugOutput manual_convert_SetDebugOutputFunction_pfnFunc( w_FSteamNetworkingSocketsDebugOutput );

typedef uint32_t (U_STDCALL *u_SteamAPI_CheckCallbackRegistered_t)( int32_t );
typedef uint32_t (W_STDCALL *w_SteamAPI_CheckCallbackRegistered_t)( int32_t );
u_SteamAPI_CheckCallbackRegistered_t manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( w_SteamAPI_CheckCallbackRegistered_t );

typedef uint32_t (U_CDECL *u_SteamAPI_CheckCallbackRegistered_t_156)( int32_t );
typedef uint32_t (W_CDECL *w_SteamAPI_CheckCallbackRegistered_t_156)( int32_t );
u_SteamAPI_CheckCallbackRegistered_t_156 manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( w_SteamAPI_CheckCallbackRegistered_t_156 );

typedef void (U_STDCALL *u_SteamAPI_PostAPIResultInProcess_t)( uint64_t, void *, uint32_t, int );
typedef void (W_STDCALL *w_SteamAPI_PostAPIResultInProcess_t)( uint64_t, void *, uint32_t, int );
u_SteamAPI_PostAPIResultInProcess_t manual_convert_Set_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t );
u_SteamAPI_PostAPIResultInProcess_t manual_convert_Remove_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t );

typedef void (U_STDCALL *u_void_SteamAPI_PostAPIResultInProcess_t)(void);
typedef void (W_STDCALL *w_void_SteamAPI_PostAPIResultInProcess_t)(void);
u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t );
u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t );

#define PATH_MAX 4096
extern char g_tmppath[PATH_MAX];

void *alloc_callback_wtou( int id, void *callback, int *callback_len );
void convert_callback_utow( int id, void *lin_callback, int lin_callback_len, void *callback, int callback_len );

void *alloc_mem_for_iface(size_t size, const char *iface_version);
void *alloc_vtable(void *vtable, unsigned int method_count, const char *iface_version);

enum callback_type
{
    SOCKET_DEBUG_OUTPUT = 1,
    STEAM_API_WARNING_HOOK,
    STEAM_API_CALLBACK_ONE_PARAM,
};

struct callback_data
{
    enum callback_type type;
    void *func;
    int complete;
    union
    {
        struct
        {
            unsigned int type;
            const char *msg;
        }
        sockets_debug_output;
        struct
        {
            int severity;
            const char *msg;
        }
        steam_api_warning_hook;
        struct
        {
            void *param;
        }
        steam_api_callback_one_param;
    };
};

void execute_callback(struct callback_data *cb_data);
bool is_native_thread(void);
bool after_shutdown(bool);
int32_t after_steam_pipe_create( int32_t pipe );

#ifdef __cplusplus
}
#endif

#endif /* __STEAMCLIENT_PRIVATE_H */
