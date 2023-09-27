#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRApplications_IVRApplications_005_AddApplicationManifest_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchApplicationManifestFullPath;
    bool bTemporary;
};
extern void cppIVRApplications_IVRApplications_005_AddApplicationManifest( struct cppIVRApplications_IVRApplications_005_AddApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_005_RemoveApplicationManifest_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchApplicationManifestFullPath;
};
extern void cppIVRApplications_IVRApplications_005_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_005_RemoveApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_005_IsApplicationInstalled_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_005_IsApplicationInstalled_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationCount( struct cppIVRApplications_IVRApplications_005_GetApplicationCount_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params
{
    void *linux_side;
    EVRApplicationError _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    EVRApplicationError _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params *params );

struct cppIVRApplications_IVRApplications_005_LaunchApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_LaunchApplication( struct cppIVRApplications_IVRApplications_005_LaunchApplication_params *params );

struct cppIVRApplications_IVRApplications_005_LaunchTemplateApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchTemplateAppKey;
    const char *pchNewAppKey;
    const AppOverrideKeys_t *pKeys;
    uint32_t unKeys;
};
extern void cppIVRApplications_IVRApplications_005_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_005_LaunchTemplateApplication_params *params );

struct cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay_params *params );

struct cppIVRApplications_IVRApplications_005_CancelApplicationLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_005_CancelApplicationLaunch_params *params );

struct cppIVRApplications_IVRApplications_005_IdentifyApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_IdentifyApplication( struct cppIVRApplications_IVRApplications_005_IdentifyApplication_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_005_GetApplicationProcessId_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRApplicationError error;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    EVRApplicationProperty eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    EVRApplicationError *peError;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyString_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    EVRApplicationProperty eProperty;
    EVRApplicationError *peError;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    EVRApplicationProperty eProperty;
    EVRApplicationError *peError;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params *params );

struct cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
    bool bAutoLaunch;
};
extern void cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_005_GetStartingApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_005_GetStartingApplication( struct cppIVRApplications_IVRApplications_005_GetStartingApplication_params *params );

struct cppIVRApplications_IVRApplications_005_GetTransitionState_params
{
    void *linux_side;
    EVRApplicationTransitionState _ret;
};
extern void cppIVRApplications_IVRApplications_005_GetTransitionState( struct cppIVRApplications_IVRApplications_005_GetTransitionState_params *params );

struct cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params *params );

struct cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRApplicationTransitionState state;
};
extern void cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params *params );

struct cppIVRApplications_IVRApplications_005_LaunchInternalProcess_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};
extern void cppIVRApplications_IVRApplications_005_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_005_LaunchInternalProcess_params *params );

#ifdef __cplusplus
}
#endif
