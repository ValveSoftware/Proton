#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(void *, EVRSettingsError);
extern bool cppIVRSettings_IVRSettings_002_Sync(void *, bool, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_SetBool(void *, const char *, const char *, bool, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_SetInt32(void *, const char *, const char *, int32_t, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_SetFloat(void *, const char *, const char *, float, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_SetString(void *, const char *, const char *, const char *, EVRSettingsError *);
extern bool cppIVRSettings_IVRSettings_002_GetBool(void *, const char *, const char *, EVRSettingsError *);
extern int32_t cppIVRSettings_IVRSettings_002_GetInt32(void *, const char *, const char *, EVRSettingsError *);
extern float cppIVRSettings_IVRSettings_002_GetFloat(void *, const char *, const char *, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_GetString(void *, const char *, const char *, char *, uint32_t, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_RemoveSection(void *, const char *, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_002_RemoveKeyInSection(void *, const char *, const char *, EVRSettingsError *);
#ifdef __cplusplus
}
#endif
