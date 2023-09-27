#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->LoadRenderModel((const char *)params->pchRenderModelName, struct_RenderModel_t_0910_unwrap( params->pRenderModel ));
}

void cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params )
{
    ((IVRRenderModels*)params->linux_side)->FreeRenderModel(struct_RenderModel_t_0910_unwrap( params->pRenderModel ));
}

void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelName((uint32_t)params->unRenderModelIndex, (char *)params->pchRenderModelName, (uint32_t)params->unRenderModelNameLen);
}

void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *params )
{
    params->_ret = ((IVRRenderModels*)params->linux_side)->GetRenderModelCount();
}

#ifdef __cplusplus
}
#endif
