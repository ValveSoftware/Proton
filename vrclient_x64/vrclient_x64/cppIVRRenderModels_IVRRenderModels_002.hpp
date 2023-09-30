/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRRenderModels_IVRRenderModels_002.h"
struct u_IVRRenderModels_IVRRenderModels_002
{
#ifdef __cplusplus
    virtual bool LoadRenderModel( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual bool LoadTexture( int32_t, u_RenderModel_TextureMap_t_090 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_090 * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentState_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &u_pControllerState : nullptr, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = (bool)iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

