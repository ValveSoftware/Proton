#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.18/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_004.h"
#ifdef __cplusplus
extern "C" {
#endif
EVRRenderModelError cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async(void *linux_side, const char *pchRenderModelName, winRenderModel_t_0918 **ppRenderModel)
{
    EVRRenderModelError _ret;
    RenderModel_t *lin;
    _ret = ((IVRRenderModels*)linux_side)->LoadRenderModel_Async((const char *)pchRenderModelName, ppRenderModel ? &lin : nullptr);
    if (_ret == 0)
        *ppRenderModel = struct_RenderModel_t_0918_wrap(lin);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel(void *linux_side, winRenderModel_t_0918 *pRenderModel)
{
    ((IVRRenderModels*)linux_side)->FreeRenderModel(struct_RenderModel_t_0918_unwrap(pRenderModel));
}

EVRRenderModelError cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async(void *linux_side, TextureID_t textureId, winRenderModel_TextureMap_t_0918 **ppTexture)
{
    EVRRenderModelError _ret;
    RenderModel_TextureMap_t *lin;
    _ret = ((IVRRenderModels*)linux_side)->LoadTexture_Async((vr::TextureID_t)textureId, ppTexture ? &lin : nullptr);
    if (_ret == 0)
        *ppTexture = struct_RenderModel_TextureMap_t_0918_wrap(lin);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_004_FreeTexture(void *linux_side, winRenderModel_TextureMap_t_0918 *pTexture)
{
    ((IVRRenderModels*)linux_side)->FreeTexture(struct_RenderModel_TextureMap_t_0918_unwrap(pTexture));
}

EVRRenderModelError cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async(void *linux_side, TextureID_t textureId, void *pD3D11Device, void **ppD3D11Texture2D)
{
    EVRRenderModelError _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadTextureD3D11_Async((vr::TextureID_t)textureId, (void *)pD3D11Device, (void **)ppD3D11Texture2D);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11(void *linux_side, void *pD3D11Texture2D)
{
    ((IVRRenderModels*)linux_side)->FreeTextureD3D11((void *)pD3D11Texture2D);
}

uint32_t cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName(void *linux_side, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelName((uint32_t)unRenderModelIndex, (char *)pchRenderModelName, (uint32_t)unRenderModelNameLen);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelCount();
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_004_GetComponentCount(void *linux_side, const char *pchRenderModelName)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentCount((const char *)pchRenderModelName);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_004_GetComponentName(void *linux_side, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentName((const char *)pchRenderModelName, (uint32_t)unComponentIndex, (char *)pchComponentName, (uint32_t)unComponentNameLen);
    return _ret;
}

uint64_t cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask(void *linux_side, const char *pchRenderModelName, const char *pchComponentName)
{
    uint64_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentButtonMask((const char *)pchRenderModelName, (const char *)pchComponentName);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName(void *linux_side, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentRenderModelName((const char *)pchRenderModelName, (const char *)pchComponentName, (char *)pchComponentRenderModelName, (uint32_t)unComponentRenderModelNameLen);
    return _ret;
}

bool cppIVRRenderModels_IVRRenderModels_004_GetComponentState(void *linux_side, const char *pchRenderModelName, const char *pchComponentName, const VRControllerState_t *pControllerState, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState)
{
    bool _ret;
    VRControllerState001_t lin;
    if (pControllerState)
        struct_VRControllerState001_t_0918_win_to_lin(pControllerState, &lin);
    _ret = ((IVRRenderModels*)linux_side)->GetComponentState((const char *)pchRenderModelName, (const char *)pchComponentName, pControllerState ? &lin : nullptr, (const vr::RenderModel_ControllerMode_State_t *)pState, (vr::RenderModel_ComponentState_t *)pComponentState);
    return _ret;
}

bool cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent(void *linux_side, const char *pchRenderModelName, const char *pchComponentName)
{
    bool _ret;
    _ret = ((IVRRenderModels*)linux_side)->RenderModelHasComponent((const char *)pchRenderModelName, (const char *)pchComponentName);
    return _ret;
}

#ifdef __cplusplus
}
#endif
