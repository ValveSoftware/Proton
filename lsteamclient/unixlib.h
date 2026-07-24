#ifndef __STEAMCLIENT_UNIXLIB_H
#define __STEAMCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <assert.h>

#include <windef.h>
#include <winbase.h>
#include <winternl.h>

#include "steamclient_structs.h"

#define TEMP_PATH_BUFFER_LENGTH 4096

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "wine/unixlib.h"

#include <pshpack1.h>

struct steamclient_init_params
{
    char *g_tmppath;
    const char *steam_app_id;
    int8_t steam_app_id_unset;
    const char *ignore_child_processes;
    int8_t ignore_child_processes_unset;
};

struct wow64_steamclient_init_params
{
    W32_PTR(char *g_tmppath, g_tmppath, char *);
    W32_PTR(const char *steam_app_id, steam_app_id, const char *);
    int8_t steam_app_id_unset;
    W32_PTR(const char *ignore_child_processes, ignore_child_processes, const char *);
    int8_t ignore_child_processes_unset;
};

struct steamclient_get_unix_buffer_params
{
    struct u_buffer buf;
    void *ptr; /* client-side ptr */
};

struct wow64_steamclient_get_unix_buffer_params
{
    struct u_buffer buf;
    W32_PTR(void *ptr, ptr, void *); /* client-side ptr */
};

enum callback_type
{
    SOCKETS_DEBUG_OUTPUT = 1,
    WARNING_MESSAGE_HOOK,
    CALL_CDECL_FUNC_DATA,
    CALL_IFACE_VTABLE_0_0,
    CALL_IFACE_VTABLE_0_1,
    CALL_IFACE_VTABLE_0_2,
    CALL_IFACE_VTABLE_1_0,
    CALL_IFACE_VTABLE_1_1,
    CALL_IFACE_VTABLE_1_2,
    CALL_IFACE_VTABLE_2_0,
    CALL_IFACE_VTABLE_2_1,
    CALL_IFACE_VTABLE_2_2,
    CALL_IFACE_VTABLE_0_SERVER_RESPONDED,
    CALL_IFACE_VTABLE_0_ADD_PLAYER_TO_LIST,
    CALL_IFACE_VTABLE_0_RULES_RESPONDED,
    CALL_IFACE_VTABLE_0_FRIENDS_RESPONDED,
};

struct callback
{
    enum callback_type type;
    uint32_t size;

    union
    {
        struct
        {
            union
            {
                void (*W_CDECL pfnFunc)( uint32_t, const char * );
                UINT64 __pad;
            };
            uint32_t type;
            const char msg[1];
        } sockets_debug_output;

        struct
        {
            union
            {
                void (*W_CDECL pFunction)( int32_t, const char * );
                UINT64 __pad;
            };
            int32_t severity;
            const char msg[1];
        } warning_message_hook;

        struct
        {
            union
            {
                void (*W_CDECL pFunc)( void * );
                UINT64 __pad;
            };
            unsigned char data[1];
        } call_cdecl_func_data;

        struct
        {
            union
            {
                struct w_iface *iface;
                UINT64 __pad;
            };
            uint64_t arg0;
            uint64_t arg1;
        } call_iface_vtable;

        struct
        {
            union
            {
                struct w_iface *iface;
                UINT64 __pad;
            };
            gameserveritem_t_165 server[];
        } server_responded;

        struct
        {
            union
            {
                struct w_iface *iface;
                UINT64 __pad;
            };
            int32_t score;
            float time_played;
            const char name[1];
        } add_player_to_list;

        struct
        {
            union
            {
                struct w_iface *iface;
                UINT64 __pad;
            };
            const char rule_and_value[1];
        } rules_responded;
        struct
        {
            union
            {
                struct w_iface *iface;
                UINT64 __pad;
            };
            CSteamID steamid;
            int64_t connected;
            const char name[1];
        } friends_responded;
    };
};

struct steamclient_next_callback_params
{
    int8_t _ret;
    struct callback *callback;
    uint32_t size;
};

struct wow64_steamclient_next_callback_params
{
    int8_t _ret;
    W32_PTR(struct callback *callback, callback, struct callback *);
    uint32_t size;
};

struct steamclient_CreateInterface_params
{
    struct u_iface _ret;
    const char *name;
    int *return_code;
};

struct wow64_steamclient_CreateInterface_params
{
    struct u_iface _ret;
    W32_PTR(const char *name, name, const char *);
    W32_PTR(int *return_code, return_code, int *);
};

struct steamclient_Steam_GetAPICallResult_params
{
    int8_t _ret;
    int32_t pipe;
    uint64_t call;
    void *w_callback;
    int w_callback_len;
    int id;
    int8_t *failed;
};

struct wow64_steamclient_Steam_GetAPICallResult_params
{
    int8_t _ret;
    int32_t pipe;
    uint64_t call;
    W32_PTR(void *w_callback, w_callback, void *);
    int w_callback_len;
    int id;
    W32_PTR(int8_t *failed, failed, int8_t *);
};

struct steamclient_Steam_BGetCallback_params
{
    int8_t _ret;
    uint32_t pipe;
    uint64_t cookie;
    w_CallbackMsg_t *w_msg;
    int32_t *ignored;
};

struct wow64_steamclient_Steam_BGetCallback_params
{
    int8_t _ret;
    uint32_t pipe;
    uint64_t cookie;
    W32_PTR(w32_CallbackMsg_t *w_msg, w_msg, w32_CallbackMsg_t *);
    W32_PTR(int32_t *ignored, ignored, int32_t *);
};

struct steamclient_callback_message_receive_params
{
    uint64_t cookie;
    w_CallbackMsg_t *w_msg;
};

struct wow64_steamclient_callback_message_receive_params
{
    uint64_t cookie;
    W32_PTR(w32_CallbackMsg_t *w_msg, w_msg, w32_CallbackMsg_t *);
};

struct steamclient_Steam_FreeLastCallback_params
{
    int8_t _ret;
    uint32_t pipe;
};

struct wow64_steamclient_Steam_FreeLastCallback_params
{
    int8_t _ret;
    uint32_t pipe;
};

struct steamclient_Steam_ReleaseThreadLocalMemory_params
{
    int thread_exit;
};

struct wow64_steamclient_Steam_ReleaseThreadLocalMemory_params
{
    int thread_exit;
};

struct steamclient_Steam_IsKnownInterface_params
{
    int8_t _ret;
    const char *version;
};

struct wow64_steamclient_Steam_IsKnownInterface_params
{
    int8_t _ret;
    W32_PTR(const char *version, version, const char *);
};

struct steamclient_Steam_NotifyMissingInterface_params
{
    int32_t pipe;
    const char *version;
};

struct wow64_steamclient_Steam_NotifyMissingInterface_params
{
    int32_t pipe;
    W32_PTR(const char *version, version, const char *);
};

struct steamclient_networking_messages_receive_144_params
{
    uint32_t count;
    w_SteamNetworkingMessage_t_144 **w_msgs;
};

struct wow64_steamclient_networking_messages_receive_144_params
{
    uint32_t count;
    W32_PTR(w32_SteamNetworkingMessage_t_144 **w_msgs, w_msgs, w32_SteamNetworkingMessage_t_144 **);
};

struct steamclient_networking_messages_receive_147_params
{
    uint32_t count;
    w_SteamNetworkingMessage_t_147 **w_msgs;
};

struct wow64_steamclient_networking_messages_receive_147_params
{
    uint32_t count;
    W32_PTR(w32_SteamNetworkingMessage_t_147 **w_msgs, w_msgs, w32_SteamNetworkingMessage_t_147 **);
};

struct steamclient_networking_messages_receive_153a_params
{
    uint32_t count;
    w_SteamNetworkingMessage_t_153a **w_msgs;
};

struct wow64_steamclient_networking_messages_receive_153a_params
{
    uint32_t count;
    W32_PTR(w32_SteamNetworkingMessage_t_153a **w_msgs, w_msgs, w32_SteamNetworkingMessage_t_153a **);
};

struct steamclient_networking_message_release_147_params
{
    w_SteamNetworkingMessage_t_147 *w_msg;
};

struct wow64_steamclient_networking_message_release_147_params
{
    W32_PTR(w32_SteamNetworkingMessage_t_147 *w_msg, w_msg, w32_SteamNetworkingMessage_t_147 *);
};

struct steamclient_networking_message_release_153a_params
{
    w_SteamNetworkingMessage_t_153a *w_msg;
};

struct wow64_steamclient_networking_message_release_153a_params
{
    W32_PTR(w32_SteamNetworkingMessage_t_153a *w_msg, w_msg, w32_SteamNetworkingMessage_t_153a *);
};

struct networking_message_pool;
struct networking_message
{
    union
    {
        struct networking_message_pool *pool;
        uint64_t pad1;
    };
    union
    {
        void **p_data;
        uint64_t pad2;
    };
    union
    {
        uint32_t *p_size;
        uint64_t pad3;
    };

    union
    {
        u_SteamNetworkingMessage_t_144 *u_msg_144;
        u_SteamNetworkingMessage_t_147 *u_msg_147;
        u_SteamNetworkingMessage_t_153a *u_msg_153a;
        uint64_t pad4;
    };
    union
    {
        w_SteamNetworkingMessage_t_144 w_msg_144;
        w_SteamNetworkingMessage_t_147 w_msg_147;
        w_SteamNetworkingMessage_t_153a w_msg_153a;
#if defined(__x86_64__) || defined(__aarch64__)
        w32_SteamNetworkingMessage_t_144 w32_msg_144;
        w32_SteamNetworkingMessage_t_147 w32_msg_147;
        w32_SteamNetworkingMessage_t_153a w32_msg_153a;
#endif
    };

#ifdef __cplusplus
    static struct networking_message *from_w( const w_SteamNetworkingMessage_t_144* w_msg ) { return CONTAINING_RECORD( w_msg, struct networking_message, w_msg_144 ); }
    static struct networking_message *from_w( const w_SteamNetworkingMessage_t_147* w_msg ) { return CONTAINING_RECORD( w_msg, struct networking_message, w_msg_147 ); }
    static struct networking_message *from_w( const w_SteamNetworkingMessage_t_153a* w_msg ) { return CONTAINING_RECORD( w_msg, struct networking_message, w_msg_153a ); }
    u_SteamNetworkingMessage_t_144*& u_msg( w_SteamNetworkingMessage_t_144 const& ) { return this->u_msg_144; }
    u_SteamNetworkingMessage_t_147*& u_msg( w_SteamNetworkingMessage_t_147 const& ) { return this->u_msg_147; }
    u_SteamNetworkingMessage_t_153a*& u_msg( w_SteamNetworkingMessage_t_153a const& ) { return this->u_msg_153a; }
    w_SteamNetworkingMessage_t_144& w_msg( w_SteamNetworkingMessage_t_144 const& ) { return this->w_msg_144; }
    w_SteamNetworkingMessage_t_147& w_msg( w_SteamNetworkingMessage_t_147 const& ) { return this->w_msg_147; }
    w_SteamNetworkingMessage_t_153a& w_msg( w_SteamNetworkingMessage_t_153a const& ) { return this->w_msg_153a; }
#if defined(__x86_64__) || defined(__aarch64__)
    static struct networking_message *from_w( const w32_SteamNetworkingMessage_t_144* w_msg ) { return CONTAINING_RECORD( w_msg, struct networking_message, w32_msg_144 ); }
    static struct networking_message *from_w( const w32_SteamNetworkingMessage_t_147* w_msg ) { return CONTAINING_RECORD( w_msg, struct networking_message, w32_msg_147 ); }
    static struct networking_message *from_w( const w32_SteamNetworkingMessage_t_153a* w_msg ) { return CONTAINING_RECORD( w_msg, struct networking_message, w32_msg_153a ); }
    u_SteamNetworkingMessage_t_144*& u_msg( w32_SteamNetworkingMessage_t_144 const& ) { return this->u_msg_144; }
    u_SteamNetworkingMessage_t_147*& u_msg( w32_SteamNetworkingMessage_t_147 const& ) { return this->u_msg_147; }
    u_SteamNetworkingMessage_t_153a*& u_msg( w32_SteamNetworkingMessage_t_153a const& ) { return this->u_msg_153a; }
    w32_SteamNetworkingMessage_t_144& w_msg( w32_SteamNetworkingMessage_t_144 const& ) { return this->w32_msg_144; }
    w32_SteamNetworkingMessage_t_147& w_msg( w32_SteamNetworkingMessage_t_147 const& ) { return this->w32_msg_147; }
    w32_SteamNetworkingMessage_t_153a& w_msg( w32_SteamNetworkingMessage_t_153a const& ) { return this->w32_msg_153a; }
#endif
#endif /* __cplusplus */
};

struct w_request
{
    struct u_request u_request;
    struct u_response u_response;
    union
    {
        gameserveritem_t_165 *details;
        UINT64 __pad;
    };
    UINT64 details_count;
};

#include <poppack.h>

NTSTATUS steamclient_call( unsigned int code, void *args, const char *name );

#define STEAMCLIENT_CALL( code, args )                                     \
    ({                                                                     \
        NTSTATUS status = steamclient_call( unix_ ## code, args, #code );  \
        assert( !status );                                                 \
        status;                                                            \
    })

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#include "unixlib_generated.h"

#endif /* __STEAMCLIENT_UNIXLIB_H */
