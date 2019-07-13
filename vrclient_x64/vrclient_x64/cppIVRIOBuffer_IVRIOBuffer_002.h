#ifdef __cplusplus
extern "C" {
#endif
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_002_Open(void *, const char *, EIOBufferMode, uint32_t, uint32_t, IOBufferHandle_t *);
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_002_Close(void *, IOBufferHandle_t);
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_002_Read(void *, IOBufferHandle_t, void *, uint32_t, uint32_t *);
extern EIOBufferError cppIVRIOBuffer_IVRIOBuffer_002_Write(void *, IOBufferHandle_t, void *, uint32_t);
extern PropertyContainerHandle_t cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer(void *, IOBufferHandle_t);
extern bool cppIVRIOBuffer_IVRIOBuffer_002_HasReaders(void *, IOBufferHandle_t);
#ifdef __cplusplus
}
#endif
