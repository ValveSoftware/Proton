/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_0912 **ppRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_0912 *pRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    w_RenderModel_TextureMap_t_090 **ppTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_FreeTexture_params
{
    void *linux_side;
    w_RenderModel_TextureMap_t_090 *pTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_004_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_004_FreeTexture_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pD3D11Device;
    void **ppD3D11Texture2D;
};
extern void cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11_params
{
    void *linux_side;
    void *pD3D11Texture2D;
};
extern void cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentName_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_GetComponentState_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const w_VRControllerState001_t *pControllerState;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};
extern void cppIVRRenderModels_IVRRenderModels_004_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentState_params *params );

struct cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
