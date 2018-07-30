#ifdef __cplusplus
extern "C" {
#endif
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Open(void *, const char *, EIOBufferMode, uint32_t, uint32_t, IOBufferHandle_t *);
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Close(void *, IOBufferHandle_t);
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Read(void *, IOBufferHandle_t, void *, uint32_t, uint32_t *);
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_001_Write(void *, IOBufferHandle_t, void *, uint32_t);
extern PropertyContainerHandle_t cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(void *, IOBufferHandle_t);
#ifdef __cplusplus
}
#endif
