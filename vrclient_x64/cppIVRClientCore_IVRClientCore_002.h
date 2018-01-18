#ifdef __cplusplus
extern "C" {
#endif
extern EVRInitError cppIVRClientCore_IVRClientCore_002_Init(void *, EVRApplicationType);
extern void cppIVRClientCore_IVRClientCore_002_Cleanup(void *);
extern EVRInitError cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid(void *, const char *);
extern void * cppIVRClientCore_IVRClientCore_002_GetGenericInterface(void *, const char *, EVRInitError *);
extern bool cppIVRClientCore_IVRClientCore_002_BIsHmdPresent(void *);
extern const char * cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError(void *, EVRInitError);
extern const char * cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError(void *, EVRInitError);
#ifdef __cplusplus
}
#endif
