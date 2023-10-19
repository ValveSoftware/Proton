#ifndef __STEAMCLIENT_UNIXLIB_H
#define __STEAMCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <windef.h>
#include <winbase.h>

#include "steamclient_structs.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst,
                                                uint32_t dst_bytes, int is_url );

extern const char *steamclient_dos_to_unix_path( const char *src, int is_url );
extern void steamclient_free_path( const char *path_array );
extern const char **steamclient_dos_to_unix_path_array( const char **src_array );
extern void steamclient_free_path_array( const char **path_array );

#define PATH_MAX 4096
extern char g_tmppath[PATH_MAX];

struct steamclient_init_params
{
    const char *steam_app_id;
    bool steam_app_id_unset;
    const char *ignore_child_processes;
    bool ignore_child_processes_unset;
};

enum callback_type
{
    SOCKETS_DEBUG_OUTPUT = 1,
    WARNING_MESSAGE_HOOK,
};

struct callback
{
    enum callback_type type;
    uint32_t size;

    union
    {
        struct
        {
            void (*W_STDCALL pfnFunc)( uint32_t, const char * );
            uint32_t type;
            const char msg[1];
        } sockets_debug_output;

        struct
        {
            void (*W_CDECL pFunction)( int32_t, const char * );
            int32_t severity;
            const char msg[1];
        } warning_message_hook;
    };
};

extern bool unix_steamclient_init( struct steamclient_init_params *params );
extern bool unix_steamclient_next_callback( struct callback *callback, uint32_t *length );
extern void *unix_CreateInterface( const char *name, int *return_code );
extern bool unix_Steam_GetAPICallResult( int32_t pipe, uint64_t call, void *w_callback,
                                         int w_callback_len, int id, bool *failed );
extern bool unix_Steam_BGetCallback( uint32_t pipe, w_CallbackMsg_t *w_msg, int32_t *ignored, u_CallbackMsg_t *u_msg );
extern void unix_callback_message_receive( u_CallbackMsg_t *u_msg, w_CallbackMsg_t *w_msg );
extern bool unix_Steam_FreeLastCallback( uint32_t pipe );
extern void unix_Steam_ReleaseThreadLocalMemory( int thread_exit );
extern bool unix_Steam_IsKnownInterface( const char *version );
extern void unix_Steam_NotifyMissingInterface( int32_t pipe, const char *version );

struct networking_message_pool;
struct networking_message
{
    struct networking_message_pool *pool;
    void **p_data;
    uint32_t *p_size;

    union
    {
        u_SteamNetworkingMessage_t_144 *u_msg_144;
        u_SteamNetworkingMessage_t_147 *u_msg_147;
        u_SteamNetworkingMessage_t_153a *u_msg_153a;
    };
    union
    {
        w_SteamNetworkingMessage_t_144 w_msg_144;
        w_SteamNetworkingMessage_t_147 w_msg_147;
        w_SteamNetworkingMessage_t_153a w_msg_153a;
    };
};

extern void unix_networking_messages_receive_144( uint32_t count, w_SteamNetworkingMessage_t_144 **w_msgs );
extern void unix_networking_messages_receive_147( uint32_t count, w_SteamNetworkingMessage_t_147 **w_msgs );
extern void unix_networking_messages_receive_153a( uint32_t count, w_SteamNetworkingMessage_t_153a **w_msgs );
extern void unix_networking_message_release_147( w_SteamNetworkingMessage_t_147 *w_msg );
extern void unix_networking_message_release_153a( w_SteamNetworkingMessage_t_153a *w_msg );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __STEAMCLIENT_UNIXLIB_H */
