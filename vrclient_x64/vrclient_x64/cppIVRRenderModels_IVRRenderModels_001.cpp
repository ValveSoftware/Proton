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

struct cppIVRRenderModels_IVRRenderModels_001
{
#ifdef __cplusplus
    virtual bool LoadRenderModel( const char *, RenderModel_t * ) = 0;
    virtual void FreeRenderModel( RenderModel_t * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_001 *iface = (struct cppIVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    params->_ret = iface->LoadRenderModel( params->pchRenderModelName, struct_RenderModel_t_0910_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_001 *iface = (struct cppIVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    iface->FreeRenderModel( struct_RenderModel_t_0910_unwrap( params->pRenderModel ) );
}

void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_001 *iface = (struct cppIVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
}

void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *params )
{
    struct cppIVRRenderModels_IVRRenderModels_001 *iface = (struct cppIVRRenderModels_IVRRenderModels_001 *)params->linux_side;
    params->_ret = iface->GetRenderModelCount(  );
}

#ifdef __cplusplus
}
#endif
