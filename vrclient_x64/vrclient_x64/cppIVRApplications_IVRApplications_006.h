#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRApplications_IVRApplications_006;
struct cppIVRApplications_IVRApplications_006_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    bool bTemporary;
};
extern void cppIVRApplications_IVRApplications_006_AddApplicationManifest( struct cppIVRApplications_IVRApplications_006_AddApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_006_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};
extern void cppIVRApplications_IVRApplications_006_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_006_RemoveApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_006_IsApplicationInstalled_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_006_IsApplicationInstalled_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationCount( struct cppIVRApplications_IVRApplications_006_GetApplicationCount_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params *params );

struct cppIVRApplications_IVRApplications_006_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_LaunchApplication( struct cppIVRApplications_IVRApplications_006_LaunchApplication_params *params );

struct cppIVRApplications_IVRApplications_006_LaunchTemplateApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchTemplateAppKey;
    const char *pchNewAppKey;
    const AppOverrideKeys_t *pKeys;
    uint32_t unKeys;
};
extern void cppIVRApplications_IVRApplications_006_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_006_LaunchTemplateApplication_params *params );

struct cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchMimeType;
    const char *pchArgs;
};
extern void cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType( struct cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params *params );

struct cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay_params *params );

struct cppIVRApplications_IVRApplications_006_CancelApplicationLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_006_CancelApplicationLaunch_params *params );

struct cppIVRApplications_IVRApplications_006_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_IdentifyApplication( struct cppIVRApplications_IVRApplications_006_IdentifyApplication_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_006_GetApplicationProcessId_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyString_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params *params );

struct cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    bool bAutoLaunch;
};
extern void cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    const char *pchMimeType;
};
extern void cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params *params );

struct cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params
{
    void *linux_side;
    bool _ret;
    const char *pchMimeType;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    char *pchMimeTypesBuffer;
    uint32_t unMimeTypesBuffer;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes( struct cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchMimeType;
    char *pchAppKeysThatSupportBuffer;
    uint32_t unAppKeysThatSupportBuffer;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType( struct cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unHandle;
    char *pchArgs;
    uint32_t unArgs;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments( struct cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params *params );

struct cppIVRApplications_IVRApplications_006_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_006_GetStartingApplication( struct cppIVRApplications_IVRApplications_006_GetStartingApplication_params *params );

struct cppIVRApplications_IVRApplications_006_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_006_GetTransitionState( struct cppIVRApplications_IVRApplications_006_GetTransitionState_params *params );

struct cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params *params );

struct cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};
extern void cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params *params );

struct cppIVRApplications_IVRApplications_006_LaunchInternalProcess_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};
extern void cppIVRApplications_IVRApplications_006_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_006_LaunchInternalProcess_params *params );

struct cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId( struct cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params *params );

#ifdef __cplusplus
}
#endif
