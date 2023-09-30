/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRRenderModels_IVRRenderModels_006.h"
struct u_IVRRenderModels_IVRRenderModels_006
{
#ifdef __cplusplus
    virtual uint32_t LoadRenderModel_Async( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual uint32_t LoadTexture_Async( int32_t, u_RenderModel_TextureMap_t_1237 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_1237 * ) = 0;
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
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
    virtual uint32_t GetRenderModelThumbnailURL( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetRenderModelOriginalPath( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetRenderModelErrorNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LoadTextureD3D11_Async( params->textureId, params->pD3D11Device, params->ppD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LoadIntoTextureD3D11_Async( params->textureId, params->pDstTexture );
}

void cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    iface->FreeTextureD3D11( params->pD3D11Texture2D );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (bool)iface->GetComponentStateForDevicePath( params->pchRenderModelName, params->pchComponentName, params->devicePath, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_006_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentState_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pState, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (bool)iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelThumbnailURL( params->pchRenderModelName, params->pchThumbnailURL, params->unThumbnailURLLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelOriginalPath( params->pchRenderModelName, params->pchOriginalPath, params->unOriginalPathLen, params->peError );
}

void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    params->_ret = (const char *)iface->GetRenderModelErrorNameFromEnum( params->error );
}

