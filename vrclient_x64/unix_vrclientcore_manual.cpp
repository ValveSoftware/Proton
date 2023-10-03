#include "unix_private.h"

#include <stdlib.h>

NTSTATUS IVRClientCore_IVRClientCore_002_Init( void *args )
{
    struct IVRClientCore_IVRClientCore_002_Init_params *params = (struct IVRClientCore_IVRClientCore_002_Init_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->Init( params->eApplicationType );
    return 0;
}

NTSTATUS IVRClientCore_IVRClientCore_003_Init( void *args )
{
    struct IVRClientCore_IVRClientCore_003_Init_params *params = (struct IVRClientCore_IVRClientCore_003_Init_params *)args;
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    const char *startup_info = json_convert_startup_info( params->pStartupInfo );
    if (!startup_info) startup_info = params->pStartupInfo;

    params->_ret = (uint32_t)iface->Init( params->eApplicationType, startup_info );

    if (startup_info != params->pStartupInfo) free( (char *)startup_info );
    return 0;
}

NTSTATUS IVRMailbox_IVRMailbox_001_undoc3( void *args )
{
    struct IVRMailbox_IVRMailbox_001_undoc3_params *params = (struct IVRMailbox_IVRMailbox_001_undoc3_params *)args;
    struct u_IVRMailbox_IVRMailbox_001 *iface = (struct u_IVRMailbox_IVRMailbox_001 *)params->linux_side;
    char *c = json_convert_paths( params->c );
    params->_ret = (uint32_t)iface->undoc3( params->a, params->b, c );
    free( c );
    return 0;
}
