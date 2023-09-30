/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRExtendedDisplay_IVRExtendedDisplay_001.h"
void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params *params )
{
    struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params *params )
{
    struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params *params )
{
    struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct u_IVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
}

