#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    winRenderModel_t_1015 **ppRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel_params
{
    void *linux_side;
    winRenderModel_t_1015 *pRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    winRenderModel_TextureMap_t_1015 **ppTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_FreeTexture_params
{
    void *linux_side;
    winRenderModel_TextureMap_t_1015 *pTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_005_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_005_FreeTexture_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pD3D11Device;
    void **ppD3D11Texture2D;
};
extern void cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pDstTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params
{
    void *linux_side;
    void *pD3D11Texture2D;
};
extern void cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentName_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetComponentState_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const VRControllerState_t *pControllerState;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentState_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchThumbnailURL;
    uint32_t unThumbnailURLLen;
    uint32_t *peError;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchOriginalPath;
    uint32_t unOriginalPathLen;
    uint32_t *peError;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params *params );

struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params *params );

#ifdef __cplusplus
}
#endif
