#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRIOBuffer_IVRIOBuffer_001_Open_params
{
    void *linux_side;
    EIOBufferError _ret;
    const char *pchPath;
    EIOBufferMode mode;
    uint32_t unElementSize;
    uint32_t unElements;
    IOBufferHandle_t *pulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_001_Open( struct cppIVRIOBuffer_IVRIOBuffer_001_Open_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_001_Close_params
{
    void *linux_side;
    EIOBufferError _ret;
    IOBufferHandle_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_001_Close( struct cppIVRIOBuffer_IVRIOBuffer_001_Close_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_001_Read_params
{
    void *linux_side;
    EIOBufferError _ret;
    IOBufferHandle_t ulBuffer;
    void *pDst;
    uint32_t unBytes;
    uint32_t *punRead;
};
extern void cppIVRIOBuffer_IVRIOBuffer_001_Read( struct cppIVRIOBuffer_IVRIOBuffer_001_Read_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_001_Write_params
{
    void *linux_side;
    EIOBufferError _ret;
    IOBufferHandle_t ulBuffer;
    void *pSrc;
    uint32_t unBytes;
};
extern void cppIVRIOBuffer_IVRIOBuffer_001_Write( struct cppIVRIOBuffer_IVRIOBuffer_001_Write_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer_params
{
    void *linux_side;
    PropertyContainerHandle_t _ret;
    IOBufferHandle_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer_params *params );

#ifdef __cplusplus
}
#endif
