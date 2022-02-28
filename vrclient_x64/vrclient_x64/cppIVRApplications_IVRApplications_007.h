#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_007_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_007_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_007_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchTemplateApplication(void *, const char *, const char *, AppOverrideKeys_t *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(void *, const char *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay(void *, const char *);
extern bool cppIVRApplications_IVRApplications_007_CancelApplicationLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_007_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_007_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern uint64_t cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(void *, const char *, const char *);
extern bool cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(void *, const char *, char *, uint32_t);
extern bool cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(void *, const char *, char *, uint32_t);
extern uint32_t cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(void *, const char *, char *, uint32_t);
extern uint32_t cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_GetStartingApplication(void *, char *, uint32_t);
extern EVRSceneApplicationState cppIVRApplications_IVRApplications_007_GetSceneApplicationState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(void *, EVRSceneApplicationState);
extern EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchInternalProcess(void *, const char *, const char *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(void *);
#ifdef __cplusplus
}
#endif
