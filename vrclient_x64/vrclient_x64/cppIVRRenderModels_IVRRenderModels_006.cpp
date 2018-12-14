#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_006.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async(void *linux_side, const char * pchRenderModelName, winRenderModel_t_113b ** ppRenderModel)
{
    RenderModel_t *lin;
    vr::EVRRenderModelError _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadRenderModel_Async((const char *)pchRenderModelName, &lin);
    if(_ret == 0)
        *ppRenderModel = struct_RenderModel_t_113b_wrap(lin);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel(void *linux_side, winRenderModel_t_113b * pRenderModel)
{
    ((IVRRenderModels*)linux_side)->FreeRenderModel(struct_RenderModel_t_113b_unwrap(pRenderModel));
}

vr::EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async(void *linux_side, TextureID_t textureId, winRenderModel_TextureMap_t_113b ** ppTexture)
{
    RenderModel_TextureMap_t *lin;
    vr::EVRRenderModelError _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadTexture_Async((vr::TextureID_t)textureId, &lin);
    if(_ret == 0)
        *ppTexture = struct_RenderModel_TextureMap_t_113b_wrap(lin);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_006_FreeTexture(void *linux_side, winRenderModel_TextureMap_t_113b * pTexture)
{
    ((IVRRenderModels*)linux_side)->FreeTexture(struct_RenderModel_TextureMap_t_113b_unwrap(pTexture));
}

vr::EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async(void *linux_side, TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D)
{
    return ((IVRRenderModels*)linux_side)->LoadTextureD3D11_Async((vr::TextureID_t)textureId, (void *)pD3D11Device, (void **)ppD3D11Texture2D);
}

vr::EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async(void *linux_side, TextureID_t textureId, void * pDstTexture)
{
    return ((IVRRenderModels*)linux_side)->LoadIntoTextureD3D11_Async((vr::TextureID_t)textureId, (void *)pDstTexture);
}

void cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11(void *linux_side, void * pD3D11Texture2D)
{
    ((IVRRenderModels*)linux_side)->FreeTextureD3D11((void *)pD3D11Texture2D);
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName(void *linux_side, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelName((uint32_t)unRenderModelIndex, (char *)pchRenderModelName, (uint32_t)unRenderModelNameLen);
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount(void *linux_side)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelCount();
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetComponentCount(void *linux_side, const char * pchRenderModelName)
{
    return ((IVRRenderModels*)linux_side)->GetComponentCount((const char *)pchRenderModelName);
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetComponentName(void *linux_side, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetComponentName((const char *)pchRenderModelName, (uint32_t)unComponentIndex, (char *)pchComponentName, (uint32_t)unComponentNameLen);
}

uint64_t cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask(void *linux_side, const char * pchRenderModelName, const char * pchComponentName)
{
    return ((IVRRenderModels*)linux_side)->GetComponentButtonMask((const char *)pchRenderModelName, (const char *)pchComponentName);
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName(void *linux_side, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetComponentRenderModelName((const char *)pchRenderModelName, (const char *)pchComponentName, (char *)pchComponentRenderModelName, (uint32_t)unComponentRenderModelNameLen);
}

bool cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath(void *linux_side, const char * pchRenderModelName, const char * pchComponentName, VRInputValueHandle_t devicePath, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    return ((IVRRenderModels*)linux_side)->GetComponentStateForDevicePath((const char *)pchRenderModelName, (const char *)pchComponentName, (vr::VRInputValueHandle_t)devicePath, (const vr::RenderModel_ControllerMode_State_t *)pState, (vr::RenderModel_ComponentState_t *)pComponentState);
}

bool cppIVRRenderModels_IVRRenderModels_006_GetComponentState(void *linux_side, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    return ((IVRRenderModels*)linux_side)->GetComponentState((const char *)pchRenderModelName, (const char *)pchComponentName, (const vr::VRControllerState_t *)pControllerState, (const vr::RenderModel_ControllerMode_State_t *)pState, (vr::RenderModel_ComponentState_t *)pComponentState);
}

bool cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent(void *linux_side, const char * pchRenderModelName, const char * pchComponentName)
{
    return ((IVRRenderModels*)linux_side)->RenderModelHasComponent((const char *)pchRenderModelName, (const char *)pchComponentName);
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL(void *linux_side, const char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelThumbnailURL((const char *)pchRenderModelName, (char *)pchThumbnailURL, (uint32_t)unThumbnailURLLen, (vr::EVRRenderModelError *)peError);
}

uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath(void *linux_side, const char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelOriginalPath((const char *)pchRenderModelName, (char *)pchOriginalPath, (uint32_t)unOriginalPathLen, (vr::EVRRenderModelError *)peError);
}

const char * cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum(void *linux_side, EVRRenderModelError error)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelErrorNameFromEnum((vr::EVRRenderModelError)error);
}

#ifdef __cplusplus
}
#endif
