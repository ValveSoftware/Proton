#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.15/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_002.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel_params *params )
{
    RenderModel_t *lin_ppRenderModel;
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadRenderModel((const char *)params->pchRenderModelName, params->ppRenderModel ? &lin_ppRenderModel : nullptr);
    if (params->_ret == 0)
        *params->ppRenderModel = struct_RenderModel_t_0915_wrap( lin_ppRenderModel );
}

void cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel_params *params )
{
    ((IVRRenderModels*)params->linux_side)->FreeRenderModel(struct_RenderModel_t_0915_unwrap( params->pRenderModel ));
}

void cppIVRRenderModels_IVRRenderModels_002_LoadTexture( struct cppIVRRenderModels_IVRRenderModels_002_LoadTexture_params *params )
{
    RenderModel_TextureMap_t *lin_ppTexture;
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadTexture((vr::TextureID_t)params->textureId, params->ppTexture ? &lin_ppTexture : nullptr);
    if (params->_ret == 0)
        *params->ppTexture = struct_RenderModel_TextureMap_t_0915_wrap( lin_ppTexture );
}

void cppIVRRenderModels_IVRRenderModels_002_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_002_FreeTexture_params *params )
{
    ((IVRRenderModels*)params->linux_side)->FreeTexture(struct_RenderModel_TextureMap_t_0915_unwrap( params->pTexture ));
}

void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelName((uint32_t)params->unRenderModelIndex, (char *)params->pchRenderModelName, (uint32_t)params->unRenderModelNameLen);
}

void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelCount();
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentCount_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentCount((const char *)params->pchRenderModelName);
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentName((const char *)params->pchRenderModelName, (uint32_t)params->unComponentIndex, (char *)params->pchComponentName, (uint32_t)params->unComponentNameLen);
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentButtonMask((const char *)params->pchRenderModelName, (const char *)params->pchComponentName);
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentRenderModelName((const char *)params->pchRenderModelName, (const char *)params->pchComponentName, (char *)params->pchComponentRenderModelName, (uint32_t)params->unComponentRenderModelNameLen);
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentState_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_0915_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetComponentState((const char *)params->pchRenderModelName, (const char *)params->pchComponentName, params->pControllerState ? &lin_pControllerState : nullptr, (vr::RenderModel_ComponentState_t *)params->pComponentState);
}

void cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->RenderModelHasComponent((const char *)params->pchRenderModelName, (const char *)params->pchComponentName);
}

#ifdef __cplusplus
}
#endif
