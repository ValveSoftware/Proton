#include "unix_private.h"

#include <pthread.h>
#include <stdlib.h>

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

struct callback_entry
{
    struct list entry;
    struct callback callback;
};

static struct list callbacks = LIST_INIT( callbacks );
static pthread_mutex_t callbacks_lock = PTHREAD_MUTEX_INITIALIZER;

void queue_sockets_debug_output( void (*W_STDCALL pfnFunc)( uint32_t, const char * ), uint32_t type, const char *msg )
{
    uint32_t msg_size = strlen( msg ) + 1, size = msg_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = SOCKETS_DEBUG_OUTPUT;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.sockets_debug_output.pfnFunc = pfnFunc;
    entry->callback.sockets_debug_output.type = type;
    memcpy( (char *)entry->callback.sockets_debug_output.msg, msg, msg_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_warning_message_hook( void (*W_CDECL pFunction)( int32_t, const char * ), int32_t severity, const char *msg )
{
    uint32_t msg_size = strlen( msg ) + 1, size = msg_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = WARNING_MESSAGE_HOOK;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.warning_message_hook.pFunction = pFunction;
    entry->callback.warning_message_hook.severity = severity;
    memcpy( (char *)entry->callback.warning_message_hook.msg, msg, msg_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

bool unix_steamclient_next_callback( struct callback *callback, uint32_t *size )
{
    struct list *ptr;

    pthread_mutex_lock( &callbacks_lock );
    if ((ptr = list_head( &callbacks )))
    {
        struct callback_entry *entry = LIST_ENTRY( ptr, struct callback_entry, entry );

        if (entry->callback.size <= *size)
        {
            memcpy( callback, &entry->callback, entry->callback.size );
            list_remove( &entry->entry );
            free( entry );
        }

        *size = entry->callback.size;
    }
    pthread_mutex_unlock( &callbacks_lock );

    return !!ptr;
}

bool unix_Steam_BGetCallback( uint32_t pipe, w_CallbackMsg_t *w_msg, int32_t *ignored, u_CallbackMsg_t *u_msg )
{
    if (!steamclient_BGetCallback( pipe, u_msg, ignored )) return false;
    callback_message_utow( u_msg, w_msg );
    return true;
}

void unix_callback_message_receive( u_CallbackMsg_t *u_msg, w_CallbackMsg_t *w_msg )
{
    convert_callback_utow( u_msg->m_iCallback, (void *)u_msg->m_pubParam, u_msg->m_cubParam,
                           (void *)w_msg->m_pubParam, w_msg->m_cubParam );
}

bool unix_Steam_FreeLastCallback( uint32_t pipe )
{
    return steamclient_FreeLastCallback( pipe );
}

bool unix_Steam_GetAPICallResult( int32_t pipe, uint64_t call, void *w_callback, int w_callback_len,
                                  int id, bool *failed )
{
    int u_callback_len = w_callback_len;
    void *u_callback;
    bool ret;

    if (!(u_callback = alloc_callback_wtou( id, w_callback, &u_callback_len ))) return false;

    ret = steamclient_GetAPICallResult( pipe, call, u_callback, u_callback_len, id, failed );

    if (ret && u_callback != w_callback)
    {
        convert_callback_utow( id, u_callback, u_callback_len, w_callback, w_callback_len );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return ret;
}
