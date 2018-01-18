#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_003_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_003_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_003_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_003_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_003_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern uint64_t cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_GetStartingApplication(void *, char *, uint32_t);
extern EVRApplicationTransitionState cppIVRApplications_IVRApplications_003_GetTransitionState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(void *, EVRApplicationTransitionState);
extern bool cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested(void *);
#ifdef __cplusplus
}
#endif
