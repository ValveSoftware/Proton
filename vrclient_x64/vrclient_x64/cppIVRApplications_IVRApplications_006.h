#ifdef __cplusplus
extern "C" {
#endif
extern EVRApplicationError cppIVRApplications_IVRApplications_006_AddApplicationManifest(void *, const char *, bool);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_RemoveApplicationManifest(void *, const char *);
extern bool cppIVRApplications_IVRApplications_006_IsApplicationInstalled(void *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_006_GetApplicationCount(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchApplication(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchTemplateApplication(void *, const char *, const char *, AppOverrideKeys_t *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(void *, const char *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay(void *, const char *);
extern bool cppIVRApplications_IVRApplications_006_CancelApplicationLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_IdentifyApplication(void *, uint32_t, const char *);
extern uint32_t cppIVRApplications_IVRApplications_006_GetApplicationProcessId(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(void *, EVRApplicationError);
extern uint32_t cppIVRApplications_IVRApplications_006_GetApplicationPropertyString(void *, const char *, EVRApplicationProperty, char *, uint32_t, EVRApplicationError *);
extern bool cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern uint64_t cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(void *, const char *, EVRApplicationProperty, EVRApplicationError *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(void *, const char *, bool);
extern bool cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(void *, const char *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(void *, const char *, const char *);
extern bool cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(void *, const char *, char *, uint32_t);
extern bool cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(void *, const char *, char *, uint32_t);
extern uint32_t cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(void *, const char *, char *, uint32_t);
extern uint32_t cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(void *, uint32_t, char *, uint32_t);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_GetStartingApplication(void *, char *, uint32_t);
extern EVRApplicationTransitionState cppIVRApplications_IVRApplications_006_GetTransitionState(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(void *, const char *);
extern const char * cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(void *, EVRApplicationTransitionState);
extern bool cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(void *);
extern EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchInternalProcess(void *, const char *, const char *, const char *);
extern uint32_t cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(void *);
#ifdef __cplusplus
}
#endif
