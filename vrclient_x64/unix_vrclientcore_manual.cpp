#include "unix_private.h"
#include <stdlib.h>

#if 0
#pragma makedep unix
#endif

template< typename Params >
static NTSTATUS IVRClientCore_Init( u_IVRClientCore_IVRClientCore_002 *iface, Params *params, bool wow64 )
{
    params->_ret = (uint32_t)iface->Init( params->eApplicationType );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRClientCore_Init( Iface *iface, Params *params, bool wow64 )
{
    const char *startup_info = json_convert_startup_info( params->pStartupInfo );
    if (!startup_info) startup_info = params->pStartupInfo;

    params->_ret = (uint32_t)iface->Init( params->eApplicationType, startup_info );

    if (startup_info != params->pStartupInfo) free( (char *)startup_info );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRMailbox_undoc3( Iface *iface, Params *params, bool wow64 )
{
    const char *c = json_convert_paths( params->c );
    if (!c) c = params->c;

    params->_ret = (uint32_t)iface->undoc3( params->a, params->b, c );

    if (c != params->c) free( (char *)c );
    return 0;
}

VRCLIENT_UNIX_IMPL( IVRClientCore, 002, Init );
VRCLIENT_UNIX_IMPL( IVRClientCore, 003, Init );
VRCLIENT_UNIX_IMPL( IVRMailbox, 001, undoc3 );
