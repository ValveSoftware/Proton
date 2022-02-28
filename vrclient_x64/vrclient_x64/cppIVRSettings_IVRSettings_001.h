#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum(void *, EVRSettingsError);
extern bool cppIVRSettings_IVRSettings_001_Sync(void *, bool, EVRSettingsError *);
extern bool cppIVRSettings_IVRSettings_001_GetBool(void *, const char *, const char *, bool, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_SetBool(void *, const char *, const char *, bool, EVRSettingsError *);
extern int32_t cppIVRSettings_IVRSettings_001_GetInt32(void *, const char *, const char *, int32_t, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_SetInt32(void *, const char *, const char *, int32_t, EVRSettingsError *);
extern float cppIVRSettings_IVRSettings_001_GetFloat(void *, const char *, const char *, float, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_SetFloat(void *, const char *, const char *, float, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_GetString(void *, const char *, const char *, char *, uint32_t, const char *, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_SetString(void *, const char *, const char *, const char *, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_RemoveSection(void *, const char *, EVRSettingsError *);
extern void cppIVRSettings_IVRSettings_001_RemoveKeyInSection(void *, const char *, const char *, EVRSettingsError *);
#ifdef __cplusplus
}
#endif
