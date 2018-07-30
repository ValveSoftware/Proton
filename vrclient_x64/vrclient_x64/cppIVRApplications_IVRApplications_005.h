#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_005_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_005_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_005_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_LaunchTemplateApplication(void *, const char *, const char *, AppOverrideKeys_t *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay(void *, const char *);
extern bool cppIVRApplications_IVRApplications_005_CancelApplicationLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_005_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_005_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern uint64_t cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_GetStartingApplication(void *, char *, uint32_t);
extern EVRApplicationTransitionState cppIVRApplications_IVRApplications_005_GetTransitionState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(void *, EVRApplicationTransitionState);
extern bool cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_005_LaunchInternalProcess(void *, const char *, const char *, const char *);
#ifdef __cplusplus
}
#endif
