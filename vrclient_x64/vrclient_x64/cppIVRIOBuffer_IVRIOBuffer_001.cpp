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
EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Open(void *linux_side, const char *pchPath, EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, IOBufferHandle_t *pulBuffer)
{
    EIOBufferError _ret;
    _ret = ((IVRIOBuffer*)linux_side)->Open((const char *)pchPath, (vr::EIOBufferMode)mode, (uint32_t)unElementSize, (uint32_t)unElements, (vr::IOBufferHandle_t *)pulBuffer);
    return _ret;
}

EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Close(void *linux_side, IOBufferHandle_t ulBuffer)
{
    EIOBufferError _ret;
    _ret = ((IVRIOBuffer*)linux_side)->Close((vr::IOBufferHandle_t)ulBuffer);
    return _ret;
}

EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Read(void *linux_side, IOBufferHandle_t ulBuffer, void *pDst, uint32_t unBytes, uint32_t *punRead)
{
    EIOBufferError _ret;
    _ret = ((IVRIOBuffer*)linux_side)->Read((vr::IOBufferHandle_t)ulBuffer, (void *)pDst, (uint32_t)unBytes, (uint32_t *)punRead);
    return _ret;
}

EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Write(void *linux_side, IOBufferHandle_t ulBuffer, void *pSrc, uint32_t unBytes)
{
    EIOBufferError _ret;
    _ret = ((IVRIOBuffer*)linux_side)->Write((vr::IOBufferHandle_t)ulBuffer, (void *)pSrc, (uint32_t)unBytes);
    return _ret;
}

PropertyContainerHandle_t cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(void *linux_side, IOBufferHandle_t ulBuffer)
{
    PropertyContainerHandle_t _ret;
    _ret = ((IVRIOBuffer*)linux_side)->PropertyContainer((vr::IOBufferHandle_t)ulBuffer);
    return _ret;
}

#ifdef __cplusplus
}
#endif
