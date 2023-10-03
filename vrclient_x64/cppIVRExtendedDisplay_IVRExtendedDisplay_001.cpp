/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds( void *args )
{
    struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params *params = (struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params *)args;
    struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport( void *args )
{
    struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params *params = (struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params *)args;
    struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo( void *args )
{
    struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params *params = (struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params *)args;
    struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
    return 0;
}

