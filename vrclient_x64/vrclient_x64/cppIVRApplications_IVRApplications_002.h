#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRApplications_IVRApplications_002_AddApplicationManifest_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchApplicationManifestFullPath;
    bool bTemporary;
};
extern void cppIVRApplications_IVRApplications_002_AddApplicationManifest( struct cppIVRApplications_IVRApplications_002_AddApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_002_RemoveApplicationManifest_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchApplicationManifestFullPath;
};
extern void cppIVRApplications_IVRApplications_002_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_002_RemoveApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_002_IsApplicationInstalled_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_002_IsApplicationInstalled_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationCount( struct cppIVRApplications_IVRApplications_002_GetApplicationCount_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex_params
{
    void *linux_side;
    EVRApplicationError _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    EVRApplicationError _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId_params *params );

struct cppIVRApplications_IVRApplications_002_LaunchApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_LaunchApplication( struct cppIVRApplications_IVRApplications_002_LaunchApplication_params *params );

struct cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay_params *params );

struct cppIVRApplications_IVRApplications_002_IdentifyApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_IdentifyApplication( struct cppIVRApplications_IVRApplications_002_IdentifyApplication_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_002_GetApplicationProcessId_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRApplicationError error;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    EVRApplicationProperty eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    EVRApplicationError *peError;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_002_GetApplicationPropertyString_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    EVRApplicationProperty eProperty;
    EVRApplicationError *peError;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool_params *params );

struct cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
    bool bAutoLaunch;
};
extern void cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_002_GetStartingApplication_params
{
    void *linux_side;
    EVRApplicationError _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_002_GetStartingApplication( struct cppIVRApplications_IVRApplications_002_GetStartingApplication_params *params );

struct cppIVRApplications_IVRApplications_002_GetTransitionState_params
{
    void *linux_side;
    EVRApplicationTransitionState _ret;
};
extern void cppIVRApplications_IVRApplications_002_GetTransitionState( struct cppIVRApplications_IVRApplications_002_GetTransitionState_params *params );

struct cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    EVRApplicationError _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck_params *params );

struct cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRApplicationTransitionState state;
};
extern void cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested_params *params );

#ifdef __cplusplus
}
#endif
