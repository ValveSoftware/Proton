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

struct cppIVRRenderModels_IVRRenderModels_005
{
#ifdef __cplusplus
    virtual uint32_t LoadRenderModel_Async( const char *, RenderModel_t ** ) = 0;
    virtual void FreeRenderModel( RenderModel_t * ) = 0;
    virtual uint32_t LoadTexture_Async( int32_t, RenderModel_TextureMap_t ** ) = 0;
    virtual void FreeTexture( RenderModel_TextureMap_t * ) = 0;
    virtual uint32_t LoadTextureD3D11_Async( int32_t, void *, void ** ) = 0;
    virtual uint32_t LoadIntoTextureD3D11_Async( int32_t, void * ) = 0;
    virtual void FreeTextureD3D11( void * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const VRControllerState_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
    virtual uint32_t GetRenderModelThumbnailURL( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetRenderModelOriginalPath( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetRenderModelErrorNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    RenderModel_t *lin_ppRenderModel;
    params->_ret = iface->LoadRenderModel_Async( params->pchRenderModelName, params->ppRenderModel ? &lin_ppRenderModel : nullptr );
    if (params->_ret == 0)
        *params->ppRenderModel = struct_RenderModel_t_1015_wrap( lin_ppRenderModel );
}

void cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    iface->FreeRenderModel( struct_RenderModel_t_1015_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    RenderModel_TextureMap_t *lin_ppTexture;
    params->_ret = iface->LoadTexture_Async( params->textureId, params->ppTexture ? &lin_ppTexture : nullptr );
    if (params->_ret == 0)
        *params->ppTexture = struct_RenderModel_TextureMap_t_1015_wrap( lin_ppTexture );
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_005_FreeTexture_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    iface->FreeTexture( struct_RenderModel_TextureMap_t_1015_unwrap( params->pTexture ) );
}

void cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->LoadIntoTextureD3D11_Async( params->textureId, params->pDstTexture );
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_005_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_005_GetComponentState_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_1015_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &lin_pControllerState : nullptr, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelThumbnailURL( params->pchRenderModelName, params->pchThumbnailURL, params->unThumbnailURLLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelOriginalPath( params->pchRenderModelName, params->pchOriginalPath, params->unOriginalPathLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_005 *iface = (struct cppIVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    params->_ret = iface->GetRenderModelErrorNameFromEnum( params->error );
}

#ifdef __cplusplus
}
#endif
