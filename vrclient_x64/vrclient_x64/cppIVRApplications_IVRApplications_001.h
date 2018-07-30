#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_001_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_001_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_001_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_001_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_001_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_GetHomeApplication(void *, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_SetHomeApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_GetStartingApplication(void *, char *, uint32_t);
extern EVRApplicationTransitionState cppIVRApplications_IVRApplications_001_GetTransitionState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(void *, EVRApplicationTransitionState);
#ifdef __cplusplus
}
#endif
