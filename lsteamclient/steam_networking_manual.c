#include "steamclient_private.h"

#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets009.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

struct networking_message_pool
{
    LONG ref;
    void *message_data;
    struct networking_message messages[];
};

C_ASSERT( sizeof(struct networking_message_pool) == offsetof( struct networking_message_pool, messages[0] ) );

static void networking_message_pool_release( struct networking_message_pool *pool )
{
    if (!InterlockedDecrement( &pool->ref ))
    {
        HeapFree( GetProcessHeap(), 0, pool->message_data );
        HeapFree( GetProcessHeap(), 0, pool );
    }
}

static bool networking_message_pool_alloc_data( uint32_t count, struct networking_message_pool *pool )
{
    uint32_t i, size;
    char *ptr;

    for (i = 0, size = 0; i < count; i++) size += *pool->messages[i].p_size;
    if (!(pool->message_data = HeapAlloc( GetProcessHeap(), 0, size )))
    {
        ERR( "Failed to allocate memory for networking messages\n" );
        return false;
    }

    for (i = 0, ptr = pool->message_data; i < count; i++)
    {
        *pool->messages[i].p_data = ptr;
        ptr += *pool->messages[i].p_size;
    }

    return true;
}

static void W_STDCALL w_SteamNetworkingMessage_t_144_FreeData( w_SteamNetworkingMessage_t_144 *msg )
{
    if (msg->m_pData) SecureZeroMemory( msg->m_pData, msg->m_cbSize );
}

static void W_STDCALL w_SteamNetworkingMessage_t_144_Release( w_SteamNetworkingMessage_t_144 *msg )
{
    struct networking_message *message = CONTAINING_RECORD( msg, struct networking_message, w_msg_144 );

    if (msg->m_pfnFreeData) msg->m_pfnFreeData( msg );
    SecureZeroMemory( msg, sizeof(*msg) );

    networking_message_pool_release( message->pool );
}

static w_SteamNetworkingMessage_t_144 *networking_message_init_144( struct networking_message *message,
                                                                    struct networking_message_pool *pool )
{
    message->pool = pool;
    message->p_data = &message->w_msg_144.m_pData;
    message->p_size = &message->w_msg_144.m_cbSize;
    message->w_msg_144.m_pfnFreeData = w_SteamNetworkingMessage_t_144_FreeData;
    message->w_msg_144.m_pfnRelease = w_SteamNetworkingMessage_t_144_Release;
    return &message->w_msg_144;
}

static bool networking_message_pool_create_144( uint32_t count, w_SteamNetworkingMessage_t_144 **messages )
{
    uint32_t size = offsetof( struct networking_message_pool, messages[count] );
    struct networking_message_pool *pool;

    if (!(pool = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, size )))
    {
        ERR( "Failed to allocate memory for networking messages\n" );
        return false;
    }
    pool->ref = count;

    while (count--) messages[count] = networking_message_init_144( &pool->messages[count], pool );
    return true;
}

static bool networking_message_pool_receive_144( int32_t capacity, int32_t count, w_SteamNetworkingMessage_t_144 **messages )
{
    struct networking_message_pool *pool = CONTAINING_RECORD( messages[0], struct networking_message, w_msg_144 )->pool;
    int32_t i;

    for (i = count; i < capacity; i++) messages[i]->m_pfnRelease( messages[i] );

    if (count > 0)
    {
        if (!networking_message_pool_alloc_data( count, pool )) return false;
        unix_networking_messages_receive_144( count, messages );
    }

    return true;
}

static void W_STDCALL w_SteamNetworkingMessage_t_147_FreeData( w_SteamNetworkingMessage_t_147 *msg )
{
    struct networking_message *message = CONTAINING_RECORD( msg, struct networking_message, w_msg_147 );

    if (msg->m_pData) SecureZeroMemory( msg->m_pData, msg->m_cbSize );
    if (!message->pool) HeapFree( GetProcessHeap(), 0, msg->m_pData );
}

static void W_STDCALL w_SteamNetworkingMessage_t_147_Release( w_SteamNetworkingMessage_t_147 *msg )
{
    struct networking_message *message = CONTAINING_RECORD( msg, struct networking_message, w_msg_147 );

    if (msg->m_pfnFreeData) msg->m_pfnFreeData( msg );
    SecureZeroMemory( msg, sizeof(*msg) );

    if (message->pool) networking_message_pool_release( message->pool );
    else
    {
        unix_networking_message_release_147( msg );
        HeapFree( GetProcessHeap(), 0, message );
    }
}

static w_SteamNetworkingMessage_t_147 *networking_message_init_147( struct networking_message *message,
                                                                    struct networking_message_pool *pool )
{
    message->pool = pool;
    message->p_data = &message->w_msg_147.m_pData;
    message->p_size = (uint32_t *)&message->w_msg_147.m_cbSize;
    message->w_msg_147.m_pfnFreeData = w_SteamNetworkingMessage_t_147_FreeData;
    message->w_msg_147.m_pfnRelease = w_SteamNetworkingMessage_t_147_Release;
    return &message->w_msg_147;
}

static bool networking_message_pool_create_147( uint32_t count, w_SteamNetworkingMessage_t_147 **messages )
{
    uint32_t size = offsetof( struct networking_message_pool, messages[count] );
    struct networking_message_pool *pool;

    if (!(pool = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, size )))
    {
        ERR( "Failed to allocate memory for networking messages\n" );
        return false;
    }
    pool->ref = count;

    while (count--) messages[count] = networking_message_init_147( &pool->messages[count], pool );
    return true;
}

static bool networking_message_pool_receive_147( uint32_t capacity, uint32_t count, w_SteamNetworkingMessage_t_147 **messages )
{
    struct networking_message_pool *pool = CONTAINING_RECORD( messages[0], struct networking_message, w_msg_147 )->pool;
    uint32_t i;

    for (i = count; i < capacity; i++) messages[i]->m_pfnRelease( messages[i] );

    if (count)
    {
        if (!networking_message_pool_alloc_data( count, pool )) return false;
        unix_networking_messages_receive_147( count, messages );
    }

    return true;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets002 */

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( struct w_steam_iface *_this,
                                                                                                     uint32_t hConn, w_SteamNetworkingMessage_t_144 **ppOutMessages,
                                                                                                     int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_144( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( &params );
    if (!networking_message_pool_receive_144( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( struct w_steam_iface *_this, uint32_t hSocket,
                                                                                                       w_SteamNetworkingMessage_t_144 **ppOutMessages, int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_144( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( &params );
    if (!networking_message_pool_receive_144( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets004 */

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( struct w_steam_iface *_this,
                                                                                                     uint32_t hConn, w_SteamNetworkingMessage_t_144 **ppOutMessages,
                                                                                                     int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_144( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( &params );
    if (!networking_message_pool_receive_144( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( struct w_steam_iface *_this, uint32_t hSocket,
                                                                                                       w_SteamNetworkingMessage_t_144 **ppOutMessages, int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_144( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( &params );
    if (!networking_message_pool_receive_144( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets006 */

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( struct w_steam_iface *_this,
                                                                                                     uint32_t hConn, w_SteamNetworkingMessage_t_147 **ppOutMessages,
                                                                                                     int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_147( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( &params );
    if (!networking_message_pool_receive_147( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( struct w_steam_iface *_this, uint32_t hSocket,
                                                                                                       w_SteamNetworkingMessage_t_147 **ppOutMessages, int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_147( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( &params );
    if (!networking_message_pool_receive_147( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages(struct w_steam_iface *_this, int32_t nMessages, w_SteamNetworkingMessage_t_147 **pMessages, int64_t *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    int64_t i;

    TRACE("%p\n", _this);

    cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( &params );
    for (i = 0; i < nMessages; i++) pMessages[i]->m_pfnRelease( pMessages[i] );
}

/* ISteamNetworkingSockets_SteamNetworkingSockets008 */

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( struct w_steam_iface *_this,
                                                                                                     uint32_t hConn, w_SteamNetworkingMessage_t_147 **ppOutMessages,
                                                                                                     int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_147( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( &params );
    if (!networking_message_pool_receive_147( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( struct w_steam_iface *_this, uint32_t hPollGroup,
                                                                                                    w_SteamNetworkingMessage_t_147 **ppOutMessages,
                                                                                                    int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_147( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( &params );
    if (!networking_message_pool_receive_147( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages(struct w_steam_iface *_this, int32_t nMessages, w_SteamNetworkingMessage_t_147 *const *pMessages, int64_t *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    int64_t i;

    TRACE("%p\n", _this);

    cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( &params );
    for (i = 0; i < nMessages; i++) pMessages[i]->m_pfnRelease( pMessages[i] );
}

/* ISteamNetworkingSockets_SteamNetworkingSockets009 */

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( struct w_steam_iface *_this,
                                                                                                     uint32_t hConn, w_SteamNetworkingMessage_t_147 **ppOutMessages,
                                                                                                     int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_147( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( &params );
    if (!networking_message_pool_receive_147( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( struct w_steam_iface *_this, uint32_t hPollGroup,
                                                                                                    w_SteamNetworkingMessage_t_147 **ppOutMessages,
                                                                                                    int32_t nMaxMessages )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };

    TRACE( "%p\n", _this );

    if (!networking_message_pool_create_147( nMaxMessages, params.ppOutMessages )) return 0;
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( &params );
    if (!networking_message_pool_receive_147( nMaxMessages, params._ret, params.ppOutMessages )) return 0;

    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages(struct w_steam_iface *_this, int32_t nMessages, w_SteamNetworkingMessage_t_147 *const *pMessages, int64_t *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    int64_t i;

    TRACE("%p\n", _this);

    cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( &params );
    for (i = 0; i < nMessages; i++) pMessages[i]->m_pfnRelease( pMessages[i] );
}

/* ISteamNetworkingUtils_SteamNetworkingUtils003 */

w_SteamNetworkingMessage_t_147 *__thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( struct w_steam_iface *_this, int32_t cbAllocateBuffer )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params params =
    {
        .linux_side = _this->u_iface,
        .cbAllocateBuffer = cbAllocateBuffer,
    };
    struct networking_message *message;

    TRACE( "%p\n", _this );

    if (!(message = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*message) ))) return NULL;
    if ((message->w_msg_147.m_cbSize = cbAllocateBuffer) &&
        !(message->w_msg_147.m_pData = HeapAlloc( GetProcessHeap(), 0, cbAllocateBuffer )))
    {
        HeapFree( GetProcessHeap(), 0, message );
        return NULL;
    }
    message->w_msg_147.m_pfnFreeData = w_SteamNetworkingMessage_t_147_FreeData;
    message->w_msg_147.m_pfnRelease = w_SteamNetworkingMessage_t_147_Release;
    params._ret = &message->w_msg_147;

    cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( &params );

    return params._ret;
}

/* ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 */

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( struct w_steam_iface *_this )
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( &params );
    HeapFree( GetProcessHeap(), 0, _this );
}
