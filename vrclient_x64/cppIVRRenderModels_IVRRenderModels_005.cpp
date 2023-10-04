/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params *params = (struct IVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params *params = (struct IVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->LoadIntoTextureD3D11_Async( params->textureId, params->pDstTexture );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params *params = (struct IVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetRenderModelCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetComponentCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentCount_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetComponentCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetComponentName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentName_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetComponentName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetComponentState( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentState_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetComponentState_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pState, params->pComponentState );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params *params = (struct IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelThumbnailURL( params->pchRenderModelName, params->pchThumbnailURL, params->unThumbnailURLLen, params->peError );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelOriginalPath( params->pchRenderModelName, params->pchOriginalPath, params->unOriginalPathLen, params->peError );
    return 0;
}

NTSTATUS IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum( void *args )
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params *params = (struct IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelErrorNameFromEnum( params->error );
    return 0;
}

