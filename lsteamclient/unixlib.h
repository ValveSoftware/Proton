#ifndef __STEAMCLIENT_UNIXLIB_H
#define __STEAMCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <windef.h>
#include <winbase.h>

#ifndef STEAM_API_H
#include "steamclient_structs.h"
#endif

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

enum callback_type
{
    SOCKET_DEBUG_OUTPUT = 1,
    STEAM_API_WARNING_HOOK,
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
    };
};

void execute_callback(struct callback_data *cb_data);

#ifndef STEAM_API_H
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
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __STEAMCLIENT_UNIXLIB_H */
