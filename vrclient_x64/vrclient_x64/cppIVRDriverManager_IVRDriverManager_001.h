#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t cppIVRDriverManager_IVRDriverManager_001_GetDriverCount(void *);
extern uint32_t cppIVRDriverManager_IVRDriverManager_001_GetDriverName(void *, DriverId_t, char *, uint32_t);
extern DriverHandle_t cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle(void *, const char *);
extern bool cppIVRDriverManager_IVRDriverManager_001_IsEnabled(void *, DriverId_t);
#ifdef __cplusplus
}
#endif
