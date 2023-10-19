#include "unix_private.h"

#include <dlfcn.h>

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static void *(*p_HmdSystemFactory)( const char *name, int *return_code );
static void *(*p_VRClientCoreFactory)( const char *name, int *return_code );

bool unix_vrclient_init( struct vrclient_init_params *params )
{
    static void *vrclient;

    if (vrclient) return true;

    if (!(vrclient = dlopen( params->unix_path, RTLD_NOW )))
    {
        TRACE( "unable to load %s\n", params->unix_path );
        return false;
    }

#define LOAD_FUNC( x )                                      \
    if (!(p_##x = (decltype(p_##x))dlsym( vrclient, #x )))  \
    {                                                       \
        ERR( "unable to load " #x "\n" );                   \
        return false;                                       \
    }

    LOAD_FUNC( HmdSystemFactory );
    LOAD_FUNC( VRClientCoreFactory );

    return true;
}

void *unix_HmdSystemFactory( const char *name, int *return_code )
{
    return p_HmdSystemFactory( name, return_code );
}

void *unix_VRClientCoreFactory( const char *name, int *return_code )
{
    return p_VRClientCoreFactory( name, return_code );
}
