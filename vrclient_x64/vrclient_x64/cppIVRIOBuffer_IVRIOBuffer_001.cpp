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
vr::EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Open(void *linux_side, const char * pchPath, EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, IOBufferHandle_t * pulBuffer)
{
    return ((IVRIOBuffer*)linux_side)->Open((const char *)pchPath, (vr::EIOBufferMode)mode, (uint32_t)unElementSize, (uint32_t)unElements, (vr::IOBufferHandle_t *)pulBuffer);
}

vr::EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Close(void *linux_side, IOBufferHandle_t ulBuffer)
{
    return ((IVRIOBuffer*)linux_side)->Close((vr::IOBufferHandle_t)ulBuffer);
}

vr::EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Read(void *linux_side, IOBufferHandle_t ulBuffer, void * pDst, uint32_t unBytes, uint32_t * punRead)
{
    return ((IVRIOBuffer*)linux_side)->Read((vr::IOBufferHandle_t)ulBuffer, (void *)pDst, (uint32_t)unBytes, (uint32_t *)punRead);
}

vr::EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Write(void *linux_side, IOBufferHandle_t ulBuffer, void * pSrc, uint32_t unBytes)
{
    return ((IVRIOBuffer*)linux_side)->Write((vr::IOBufferHandle_t)ulBuffer, (void *)pSrc, (uint32_t)unBytes);
}

vr::PropertyContainerHandle_t cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(void *linux_side, IOBufferHandle_t ulBuffer)
{
    return ((IVRIOBuffer*)linux_side)->PropertyContainer((vr::IOBufferHandle_t)ulBuffer);
}

#ifdef __cplusplus
}
#endif
