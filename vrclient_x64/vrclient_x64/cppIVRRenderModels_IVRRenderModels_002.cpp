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

struct cppIVRRenderModels_IVRRenderModels_002
{
#ifdef __cplusplus
    virtual bool LoadRenderModel( const char *, RenderModel_t ** ) = 0;
    virtual void FreeRenderModel( RenderModel_t * ) = 0;
    virtual bool LoadTexture( int32_t, RenderModel_TextureMap_t ** ) = 0;
    virtual void FreeTexture( RenderModel_TextureMap_t * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const VRControllerState_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    RenderModel_t *lin_ppRenderModel;
    params->_ret = iface->LoadRenderModel( params->pchRenderModelName, params->ppRenderModel ? &lin_ppRenderModel : nullptr );
    if (params->_ret == 0)
        *params->ppRenderModel = struct_RenderModel_t_0915_wrap( lin_ppRenderModel );
}

void cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    iface->FreeRenderModel( struct_RenderModel_t_0915_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_002_LoadTexture( struct cppIVRRenderModels_IVRRenderModels_002_LoadTexture_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    RenderModel_TextureMap_t *lin_ppTexture;
    params->_ret = iface->LoadTexture( params->textureId, params->ppTexture ? &lin_ppTexture : nullptr );
    if (params->_ret == 0)
        *params->ppTexture = struct_RenderModel_TextureMap_t_0915_wrap( lin_ppTexture );
}

void cppIVRRenderModels_IVRRenderModels_002_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_002_FreeTexture_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    iface->FreeTexture( struct_RenderModel_TextureMap_t_0915_unwrap( params->pTexture ) );
}

void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_002_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentState_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_0915_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, params->pControllerState ? &lin_pControllerState : nullptr, params->pComponentState );
}

void cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_002 *iface = (struct cppIVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    params->_ret = iface->RenderModelHasComponent( params->pchRenderModelName, params->pchComponentName );
}

#ifdef __cplusplus
}
#endif
