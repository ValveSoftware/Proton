#include "steamclient_private.h"

#include <assert.h>
#include <pthread.h>

#include "cppISteamClient_SteamClient006.h"
#include "cppISteamClient_SteamClient007.h"
#include "cppISteamClient_SteamClient008.h"
#include "cppISteamClient_SteamClient009.h"
#include "cppISteamClient_SteamClient010.h"
#include "cppISteamClient_SteamClient011.h"
#include "cppISteamClient_SteamClient012.h"
#include "cppISteamClient_SteamClient013.h"
#include "cppISteamClient_SteamClient014.h"
#include "cppISteamClient_SteamClient015.h"
#include "cppISteamClient_SteamClient016.h"
#include "cppISteamClient_SteamClient017.h"
#include "cppISteamClient_SteamClient018.h"
#include "cppISteamClient_SteamClient019.h"
#include "cppISteamClient_SteamClient020.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

static HANDLE callback_thread_handle;

#define MAX_CALLBACK_QUEUE_SIZE 4
struct callback_data *callback_queue[MAX_CALLBACK_QUEUE_SIZE];
static unsigned int callback_queue_size;
static bool callback_queue_done;
static pthread_mutex_t callback_queue_mutex;
static pthread_cond_t callback_queue_callback_event;
static pthread_cond_t callback_queue_ready_event;
static pthread_cond_t callback_queue_complete_event;

void execute_callback( struct callback_data *cb_data )
{
    /* No TRACEs or other Wine calls here, this is executed from Unix native thread
     * which is not initialized by Wine. */
    cb_data->complete = FALSE;
    pthread_mutex_lock( &callback_queue_mutex );
    while (!callback_queue_done && callback_queue_size == MAX_CALLBACK_QUEUE_SIZE)
        pthread_cond_wait( &callback_queue_ready_event, &callback_queue_mutex );
    if (callback_queue_done)
    {
        pthread_mutex_unlock( &callback_queue_mutex );
        return;
    }
    callback_queue[callback_queue_size++] = cb_data;
    pthread_cond_broadcast( &callback_queue_callback_event );
    while (!callback_queue_done && !cb_data->complete)
        pthread_cond_wait( &callback_queue_complete_event, &callback_queue_mutex );
    pthread_mutex_unlock( &callback_queue_mutex );
}

static bool get_next_callback( struct callback_data *cb_data, uint64_t *cookie )
{
    bool ret;

    pthread_mutex_lock( &callback_queue_mutex );
    while (!callback_queue_done && !callback_queue_size)
        pthread_cond_wait( &callback_queue_callback_event, &callback_queue_mutex );

    if ((ret = !callback_queue_done))
    {
        assert( callback_queue_size );
        --callback_queue_size;
        *cookie = (uint64_t)( ULONG_PTR)callback_queue[callback_queue_size];
        *cb_data = *callback_queue[callback_queue_size];
    }
    pthread_cond_broadcast( &callback_queue_ready_event );
    pthread_mutex_unlock( &callback_queue_mutex );
    return ret;
}

static void callback_complete( uint64_t cookie )
{
    struct callback_data *cb_data = (struct callback_data *)( ULONG_PTR)cookie;

    pthread_mutex_lock( &callback_queue_mutex );
    cb_data->complete = TRUE;
    pthread_cond_broadcast( &callback_queue_complete_event );
    pthread_mutex_unlock( &callback_queue_mutex );
}

static void finish_callback_thread(void)
{
    if (!callback_thread_handle) return;
    pthread_mutex_lock( &callback_queue_mutex );
    callback_queue_done = TRUE;
    pthread_cond_broadcast( &callback_queue_callback_event );
    pthread_cond_broadcast( &callback_queue_complete_event );
    pthread_mutex_unlock( &callback_queue_mutex );

    WaitForSingleObject( callback_thread_handle, INFINITE );
    CloseHandle( callback_thread_handle );
    callback_thread_handle = NULL;
}

typedef void (WINAPI *win_FSteamNetworkingSocketsDebugOutput)( uint32_t nType, const char *pszMsg );
typedef void (CDECL *win_SteamAPIWarningMessageHook_t)( int, const char *pszMsg );

static DWORD WINAPI callback_thread( void *dummy )
{
    struct callback_data cb_data;
    uint64_t cookie;

    while (get_next_callback( &cb_data, &cookie ))
    {
        switch (cb_data.type)
        {
        case SOCKET_DEBUG_OUTPUT:
            TRACE( "SOCKET_DEBUG_OUTPUT func %p, type %u, msg %s.\n", cb_data.func,
                   cb_data.sockets_debug_output.type, wine_dbgstr_a( cb_data.sockets_debug_output.msg ) );
            ((win_FSteamNetworkingSocketsDebugOutput)cb_data.func)( cb_data.sockets_debug_output.type,
                                                                    cb_data.sockets_debug_output.msg );
            callback_complete( cookie );
            break;
        case STEAM_API_WARNING_HOOK:
            TRACE( "STEAM_API_WARNING_HOOK func %p, type %u, msg %s.\n", cb_data.func,
                   cb_data.steam_api_warning_hook.severity,
                   wine_dbgstr_a( cb_data.steam_api_warning_hook.msg ) );
            ((win_SteamAPIWarningMessageHook_t)cb_data.func)( cb_data.steam_api_warning_hook.severity,
                                                              cb_data.steam_api_warning_hook.msg );
            callback_complete( cookie );
            break;
        default:
            ERR( "Unexpected callback type %u.\n", cb_data.type );
            break;
        }
    }
    TRACE( "exiting.\n" );
    return 0;
}

void start_callback_thread(void)
{
    DWORD callback_thread_id;

    pthread_mutex_init( &callback_queue_mutex, NULL );
    pthread_cond_init( &callback_queue_callback_event, NULL );
    pthread_cond_init( &callback_queue_ready_event, NULL );
    pthread_cond_init( &callback_queue_complete_event, NULL );

    callback_thread_handle = CreateThread( NULL, 0, callback_thread, NULL, 0, &callback_thread_id );
    TRACE( "Created callback thread 0x%04x.\n", callback_thread_id );
}

void stop_callback_thread(void)
{
    if (!callback_thread_handle) return;

    /* Unfortunately we don't have a clear place to shutdown the thread so just kill it.
     * An explicit sync events and handle cleanup is to protect from unloading and loading .so
     * again which may end up not actually reloading anyting and leaving the values of our
     * static variables. */
    TerminateThread( callback_thread_handle, -1 );
    WaitForSingleObject( callback_thread_handle, INFINITE );
    pthread_mutex_destroy( &callback_queue_mutex );
    CloseHandle( callback_thread_handle );
    callback_thread_handle = NULL;
    TRACE( "Terminated callback thread.\n" );
}

static bool after_shutdown( bool ret )
{
    TRACE( "ret %d.\n", ret );

    if (!ret) return 0;
    finish_callback_thread();
    return ret;
}

static int32_t after_steam_pipe_create( int32_t pipe )
{
    DWORD callback_thread_id;

    TRACE( "pipe %#x.\n", pipe );

    if (!pipe) return 0;

    if (callback_thread_handle) return pipe;

    callback_queue_done = FALSE;
    callback_thread_handle = CreateThread( NULL, 0, callback_thread, NULL, 0, &callback_thread_id );
    TRACE( "Created callback thread 0x%04x.\n", callback_thread_id );

    return pipe;
}

/* ISteamClient_SteamClient006 */

int32_t __thiscall winISteamClient_SteamClient006_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient006_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient006_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

/* ISteamClient_SteamClient007 */

int32_t __thiscall winISteamClient_SteamClient007_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient007_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient007_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

/* ISteamClient_SteamClient008 */

int32_t __thiscall winISteamClient_SteamClient008_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient008_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient008_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

/* ISteamClient_SteamClient009 */

int32_t __thiscall winISteamClient_SteamClient009_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient009_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient009_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

/* ISteamClient_SteamClient010 */

int32_t __thiscall winISteamClient_SteamClient010_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient010_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient010_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient010_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient011 */

int32_t __thiscall winISteamClient_SteamClient011_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient011_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient011_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient011_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient012 */

int32_t __thiscall winISteamClient_SteamClient012_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient012_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient012_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient012_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient013 */

int32_t __thiscall winISteamClient_SteamClient013_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient013_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient013_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient013_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient014 */

int32_t __thiscall winISteamClient_SteamClient014_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient014_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient014_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient014_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient015 */

int32_t __thiscall winISteamClient_SteamClient015_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient015_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient015_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient015_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient016 */

int32_t __thiscall winISteamClient_SteamClient016_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient016_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient016_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient016_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient017 */

int32_t __thiscall winISteamClient_SteamClient017_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient017_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient017_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient017_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient018 */

int32_t __thiscall winISteamClient_SteamClient018_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient018_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient018_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient018_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient019 */

int32_t __thiscall winISteamClient_SteamClient019_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient019_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient019_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient019_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}

/* ISteamClient_SteamClient020 */

int32_t __thiscall winISteamClient_SteamClient020_CreateSteamPipe( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient020_CreateSteamPipe_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient020_CreateSteamPipe( &params );
    return after_steam_pipe_create( params._ret );
}

bool __thiscall winISteamClient_SteamClient020_BShutdownIfAllPipesClosed( struct w_steam_iface *_this )
{
    struct cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed( &params );
    return after_shutdown( params._ret );
}
