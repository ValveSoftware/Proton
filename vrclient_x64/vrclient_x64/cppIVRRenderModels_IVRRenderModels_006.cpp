#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_006.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRRenderModels_IVRRenderModels_006
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
    virtual bool GetComponentStateForDevicePath( const char *, const char *, uint64_t, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool GetComponentState( const char *, const char *, const VRControllerState_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
    virtual uint32_t GetRenderModelThumbnailURL( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetRenderModelOriginalPath( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetRenderModelErrorNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    RenderModel_t *lin_ppRenderModel;
    params->_ret = iface->LoadRenderModel_Async( params->pchRenderModelName, params->ppRenderModel ? &lin_ppRenderModel : nullptr );
    if (params->_ret == 0)
        *params->ppRenderModel = struct_RenderModel_t_1267_wrap( lin_ppRenderModel );
}

void cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    iface->FreeRenderModel( struct_RenderModel_t_1267_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    RenderModel_TextureMap_t *lin_ppTexture;
    params->_ret = iface->LoadTexture_Async( params->textureId, params->ppTexture ? &lin_ppTexture : nullptr );
    if (params->_ret == 0)
        *params->ppTexture = struct_RenderModel_TextureMap_t_1267_wrap( lin_ppTexture );
}

void cppIVRRenderModels_IVRRenderModels_006_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_006_FreeTexture_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    iface->FreeTexture( struct_RenderModel_TextureMap_t_1267_unwrap( params->pTexture ) );
}

void cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->LoadIntoTextureD3D11_Async( params->textureId, params->pDstTexture );
}

void cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetComponentStateForDevicePath( params->pchRenderModelName, params->pchComponentName, params->devicePath, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentState_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_1267_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &lin_pControllerState : nullptr, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetRenderModelThumbnailURL( params->pchRenderModelName, params->pchThumbnailURL, params->unThumbnailURLLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetRenderModelOriginalPath( params->pchRenderModelName, params->pchOriginalPath, params->unOriginalPathLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_006 *iface = (struct cppIVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = iface->GetRenderModelErrorNameFromEnum( params->error );
}

#ifdef __cplusplus
}
#endif
