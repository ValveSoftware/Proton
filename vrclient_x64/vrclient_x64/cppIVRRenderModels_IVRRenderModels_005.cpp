#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_005.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params *params )
{
    RenderModel_t *lin_ppRenderModel;
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadRenderModel_Async((const char *)params->pchRenderModelName, params->ppRenderModel ? &lin_ppRenderModel : nullptr);
    if (params->_ret == 0)
        *params->ppRenderModel = struct_RenderModel_t_1015_wrap( lin_ppRenderModel );
}

void cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel_params *params )
{
    ((IVRRenderModels*)params->linux_side)->FreeRenderModel(struct_RenderModel_t_1015_unwrap( params->pRenderModel ));
}

void cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params *params )
{
    RenderModel_TextureMap_t *lin_ppTexture;
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadTexture_Async((vr::TextureID_t)params->textureId, params->ppTexture ? &lin_ppTexture : nullptr);
    if (params->_ret == 0)
        *params->ppTexture = struct_RenderModel_TextureMap_t_1015_wrap( lin_ppTexture );
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_005_FreeTexture_params *params )
{
    ((IVRRenderModels*)params->linux_side)->FreeTexture(struct_RenderModel_TextureMap_t_1015_unwrap( params->pTexture ));
}

void cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadTextureD3D11_Async((vr::TextureID_t)params->textureId, (void *)params->pD3D11Device, (void **)params->ppD3D11Texture2D);
}

void cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadIntoTextureD3D11_Async((vr::TextureID_t)params->textureId, (void *)params->pDstTexture);
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params *params )
{
    ((IVRRenderModels*)params->linux_side)->FreeTextureD3D11((void *)params->pD3D11Texture2D);
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelName((uint32_t)params->unRenderModelIndex, (char *)params->pchRenderModelName, (uint32_t)params->unRenderModelNameLen);
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelCount();
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentCount_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentCount((const char *)params->pchRenderModelName);
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentName((const char *)params->pchRenderModelName, (uint32_t)params->unComponentIndex, (char *)params->pchComponentName, (uint32_t)params->unComponentNameLen);
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentButtonMask((const char *)params->pchRenderModelName, (const char *)params->pchComponentName);
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentRenderModelName((const char *)params->pchRenderModelName, (const char *)params->pchComponentName, (char *)params->pchComponentRenderModelName, (uint32_t)params->unComponentRenderModelNameLen);
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentState_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_1015_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentState((const char *)params->pchRenderModelName, (const char *)params->pchComponentName, params->pControllerState ? &lin_pControllerState : nullptr, (const vr::RenderModel_ControllerMode_State_t *)params->pState, (vr::RenderModel_ComponentState_t *)params->pComponentState);
}

void cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->RenderModelHasComponent((const char *)params->pchRenderModelName, (const char *)params->pchComponentName);
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelThumbnailURL((const char *)params->pchRenderModelName, (char *)params->pchThumbnailURL, (uint32_t)params->unThumbnailURLLen, (vr::EVRRenderModelError *)params->peError);
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelOriginalPath((const char *)params->pchRenderModelName, (char *)params->pchOriginalPath, (uint32_t)params->unOriginalPathLen, (vr::EVRRenderModelError *)params->peError);
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelErrorNameFromEnum((vr::EVRRenderModelError)params->error);
}

#ifdef __cplusplus
}
#endif
