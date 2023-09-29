/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRRenderModels_IVRRenderModels_001.h"
struct u_IVRRenderModels_IVRRenderModels_001
{
#ifdef __cplusplus
    virtual bool LoadRenderModel( const char *, u_RenderModel_t_090 * ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_090 * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    params->_ret = (bool)iface->LoadRenderModel( params->pchRenderModelName, struct_RenderModel_t_090_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    iface->FreeRenderModel( struct_RenderModel_t_090_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetRenderModelCount(  );
}

