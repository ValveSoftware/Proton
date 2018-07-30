#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_002_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_002_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_002_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_002_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_002_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_GetStartingApplication(void *, char *, uint32_t);
extern EVRApplicationTransitionState cppIVRApplications_IVRApplications_002_GetTransitionState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(void *, EVRApplicationTransitionState);
extern bool cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(void *);
#ifdef __cplusplus
}
#endif
