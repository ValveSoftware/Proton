/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async_params *params = (struct IVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_FreeTextureD3D11( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_FreeTextureD3D11_params *params = (struct IVRRenderModels_IVRRenderModels_004_FreeTextureD3D11_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetRenderModelCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetComponentCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentCount_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetComponentCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetComponentName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentName_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetComponentName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_GetComponentState( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentState_params *params = (struct IVRRenderModels_IVRRenderModels_004_GetComponentState_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pState, params->pComponentState );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent( void *args )
{
    struct IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params *params = (struct IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

