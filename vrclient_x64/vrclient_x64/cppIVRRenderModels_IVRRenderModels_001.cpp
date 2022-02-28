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
bool cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel(void *linux_side, const char * pchRenderModelName, winRenderModel_t_0910 * pRenderModel)
{
    return ((IVRRenderModels*)linux_side)->LoadRenderModel((const char *)pchRenderModelName, struct_RenderModel_t_0910_unwrap(pRenderModel));
}

void cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel(void *linux_side, winRenderModel_t_0910 * pRenderModel)
{
    ((IVRRenderModels*)linux_side)->FreeRenderModel(struct_RenderModel_t_0910_unwrap(pRenderModel));
}

uint32_t cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName(void *linux_side, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelName((uint32_t)unRenderModelIndex, (char *)pchRenderModelName, (uint32_t)unRenderModelNameLen);
}

uint32_t cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount(void *linux_side)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelCount();
}

#ifdef __cplusplus
}
#endif
