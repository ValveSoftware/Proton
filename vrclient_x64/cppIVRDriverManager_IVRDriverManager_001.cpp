/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRDriverManager_IVRDriverManager_001_GetDriverCount( void *args )
{
    struct IVRDriverManager_IVRDriverManager_001_GetDriverCount_params *params = (struct IVRDriverManager_IVRDriverManager_001_GetDriverCount_params *)args;
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->GetDriverCount(  );
    return 0;
}

NTSTATUS IVRDriverManager_IVRDriverManager_001_GetDriverName( void *args )
{
    struct IVRDriverManager_IVRDriverManager_001_GetDriverName_params *params = (struct IVRDriverManager_IVRDriverManager_001_GetDriverName_params *)args;
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->GetDriverName( params->nDriver, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRDriverManager_IVRDriverManager_001_GetDriverHandle( void *args )
{
    struct IVRDriverManager_IVRDriverManager_001_GetDriverHandle_params *params = (struct IVRDriverManager_IVRDriverManager_001_GetDriverHandle_params *)args;
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->GetDriverHandle( params->pchDriverName );
    return 0;
}

NTSTATUS IVRDriverManager_IVRDriverManager_001_IsEnabled( void *args )
{
    struct IVRDriverManager_IVRDriverManager_001_IsEnabled_params *params = (struct IVRDriverManager_IVRDriverManager_001_IsEnabled_params *)args;
    struct u_IVRDriverManager_IVRDriverManager_001 *iface = (struct u_IVRDriverManager_IVRDriverManager_001 *)params->linux_side;
    params->_ret = iface->IsEnabled( params->nDriver );
    return 0;
}

