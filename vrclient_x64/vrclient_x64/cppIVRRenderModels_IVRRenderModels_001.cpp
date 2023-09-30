/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRRenderModels_IVRRenderModels_001.h"
void cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    params->_ret = (bool)iface->LoadRenderModel( params->pchRenderModelName, params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
}

void cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    iface->FreeRenderModel( params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
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

