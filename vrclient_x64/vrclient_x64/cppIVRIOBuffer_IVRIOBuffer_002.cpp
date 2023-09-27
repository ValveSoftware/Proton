#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRIOBuffer_IVRIOBuffer_002.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRIOBuffer_IVRIOBuffer_002_Open( struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Open((const char *)params->pchPath, (vr::EIOBufferMode)params->mode, (uint32_t)params->unElementSize, (uint32_t)params->unElements, (vr::IOBufferHandle_t *)params->pulBuffer);
}

void cppIVRIOBuffer_IVRIOBuffer_002_Close( struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Close((vr::IOBufferHandle_t)params->ulBuffer);
}

void cppIVRIOBuffer_IVRIOBuffer_002_Read( struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Read((vr::IOBufferHandle_t)params->ulBuffer, (void *)params->pDst, (uint32_t)params->unBytes, (uint32_t *)params->punRead);
}

void cppIVRIOBuffer_IVRIOBuffer_002_Write( struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->Write((vr::IOBufferHandle_t)params->ulBuffer, (void *)params->pSrc, (uint32_t)params->unBytes);
}

void cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->PropertyContainer((vr::IOBufferHandle_t)params->ulBuffer);
}

void cppIVRIOBuffer_IVRIOBuffer_002_HasReaders( struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params *params )
{
    params->_ret = ((IVRIOBuffer*)params->linux_side)->HasReaders((vr::IOBufferHandle_t)params->ulBuffer);
}

#ifdef __cplusplus
}
#endif
