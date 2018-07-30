#ifdef __cplusplus
extern "C" {
#endif
extern EVRInitError cppIVRClientCore_IVRClientCore_003_Init(void *, EVRApplicationType, const char *);
extern void cppIVRClientCore_IVRClientCore_003_Cleanup(void *);
extern EVRInitError cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid(void *, const char *);
extern void * cppIVRClientCore_IVRClientCore_003_GetGenericInterface(void *, const char *, EVRInitError *);
extern bool cppIVRClientCore_IVRClientCore_003_BIsHmdPresent(void *);
extern const char * cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError(void *, EVRInitError);
extern const char * cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError(void *, EVRInitError);
#ifdef __cplusplus
}
#endif
