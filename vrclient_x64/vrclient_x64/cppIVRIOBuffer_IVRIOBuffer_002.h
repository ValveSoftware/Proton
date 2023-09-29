/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchPath;
    uint32_t mode;
    uint32_t unElementSize;
    uint32_t unElements;
    uint64_t *pulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Open( struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Close( struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
    void *pDst;
    uint32_t unBytes;
    uint32_t *punRead;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Read( struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
    void *pSrc;
    uint32_t unBytes;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Write( struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_HasReaders( struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
