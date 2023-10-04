/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetRenderModelCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetComponentCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentCount_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetComponentCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetComponentName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentName_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetComponentName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_GetComponentState( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentState_params *params = (struct IVRRenderModels_IVRRenderModels_002_GetComponentState_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pComponentState );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent( void *args )
{
    struct IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params *params = (struct IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

