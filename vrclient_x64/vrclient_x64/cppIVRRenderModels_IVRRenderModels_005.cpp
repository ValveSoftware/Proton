/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRRenderModels_IVRRenderModels_005.h"
void cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LoadIntoTextureD3D11_Async( params->textureId, params->pDstTexture );
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentState_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (bool)iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelThumbnailURL( params->pchRenderModelName, params->pchThumbnailURL, params->unThumbnailURLLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelOriginalPath( params->pchRenderModelName, params->pchOriginalPath, params->unOriginalPathLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetRenderModelErrorNameFromEnum( params->error );
}

