/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRClientCore_IVRClientCore_002_Cleanup( void *args )
{
    struct IVRClientCore_IVRClientCore_002_Cleanup_params *params = (struct IVRClientCore_IVRClientCore_002_Cleanup_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    iface->Cleanup(  );
    return 0;
}

NTSTATUS IVRClientCore_IVRClientCore_002_IsInterfaceVersionValid( void *args )
{
    struct IVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params *params = (struct IVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->IsInterfaceVersionValid( params->pchInterfaceVersion );
    return 0;
}

NTSTATUS IVRClientCore_IVRClientCore_002_GetGenericInterface( void *args )
{
    struct IVRClientCore_IVRClientCore_002_GetGenericInterface_params *params = (struct IVRClientCore_IVRClientCore_002_GetGenericInterface_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->GetGenericInterface( params->pchNameAndVersion, params->peError );
    return 0;
}

NTSTATUS IVRClientCore_IVRClientCore_002_BIsHmdPresent( void *args )
{
    struct IVRClientCore_IVRClientCore_002_BIsHmdPresent_params *params = (struct IVRClientCore_IVRClientCore_002_BIsHmdPresent_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->BIsHmdPresent(  );
    return 0;
}

NTSTATUS IVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError( void *args )
{
    struct IVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params *params = (struct IVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->GetEnglishStringForHmdError( params->eError );
    return 0;
}

NTSTATUS IVRClientCore_IVRClientCore_002_GetIDForVRInitError( void *args )
{
    struct IVRClientCore_IVRClientCore_002_GetIDForVRInitError_params *params = (struct IVRClientCore_IVRClientCore_002_GetIDForVRInitError_params *)args;
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->GetIDForVRInitError( params->eError );
    return 0;
}

