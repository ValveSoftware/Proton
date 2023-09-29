/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRRenderModels_IVRRenderModels_004.h"
struct u_IVRRenderModels_IVRRenderModels_004
{
#ifdef __cplusplus
    virtual uint32_t LoadRenderModel_Async( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual uint32_t LoadTexture_Async( int32_t, u_RenderModel_TextureMap_t_090 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_090 * ) = 0;
    virtual uint32_t LoadTextureD3D11_Async( int32_t, void *, void ** ) = 0;
    virtual void FreeTextureD3D11( void * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    u_RenderModel_t_0912 *u_ppRenderModel;
    params->_ret = (uint32_t)iface->LoadRenderModel_Async( params->pchRenderModelName, params->ppRenderModel ? &u_ppRenderModel : nullptr );
    if (params->_ret == 0)
        *params->ppRenderModel = struct_RenderModel_t_0912_wrap( u_ppRenderModel );
}

void cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    iface->FreeRenderModel( struct_RenderModel_t_0912_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    u_RenderModel_TextureMap_t_090 *u_ppTexture;
    params->_ret = (uint32_t)iface->LoadTexture_Async( params->textureId, params->ppTexture ? &u_ppTexture : nullptr );
    if (params->_ret == 0)
        *params->ppTexture = struct_RenderModel_TextureMap_t_090_wrap( u_ppTexture );
}

void cppIVRRenderModels_IVRRenderModels_004_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_004_FreeTexture_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    iface->FreeTexture( struct_RenderModel_TextureMap_t_090_unwrap( params->pTexture ) );
}

void cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_004_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_004_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_004_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_004_GetComponentState_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    params->_ret = (bool)iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

