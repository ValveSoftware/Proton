#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRIOBuffer_IVRIOBuffer_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRIOBuffer_IVRIOBuffer_001_Open( struct cppIVRIOBuffer_IVRIOBuffer_001_Open_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Open((const char *)params->pchPath, (vr::EIOBufferMode)params->mode, (uint32_t)params->unElementSize, (uint32_t)params->unElements, (vr::IOBufferHandle_t *)params->pulBuffer);
}

void cppIVRIOBuffer_IVRIOBuffer_001_Close( struct cppIVRIOBuffer_IVRIOBuffer_001_Close_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Close((vr::IOBufferHandle_t)params->ulBuffer);
}

void cppIVRIOBuffer_IVRIOBuffer_001_Read( struct cppIVRIOBuffer_IVRIOBuffer_001_Read_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Read((vr::IOBufferHandle_t)params->ulBuffer, (void *)params->pDst, (uint32_t)params->unBytes, (uint32_t *)params->punRead);
}

void cppIVRIOBuffer_IVRIOBuffer_001_Write( struct cppIVRIOBuffer_IVRIOBuffer_001_Write_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Write((vr::IOBufferHandle_t)params->ulBuffer, (void *)params->pSrc, (uint32_t)params->unBytes);
}

void cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->PropertyContainer((vr::IOBufferHandle_t)params->ulBuffer);
}

#ifdef __cplusplus
}
#endif
