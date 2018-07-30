#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_004_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_004_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_004_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay(void *, const char *);
extern bool cppIVRApplications_IVRApplications_004_CancelApplicationLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_004_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_004_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern uint64_t cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_GetStartingApplication(void *, char *, uint32_t);
extern EVRApplicationTransitionState cppIVRApplications_IVRApplications_004_GetTransitionState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(void *, EVRApplicationTransitionState);
extern bool cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_004_LaunchInternalProcess(void *, const char *, const char *, const char *);
#ifdef __cplusplus
}
#endif
