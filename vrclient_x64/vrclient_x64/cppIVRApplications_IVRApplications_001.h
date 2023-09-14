#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRApplications_IVRApplications_001_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    bool bTemporary;
};
extern void cppIVRApplications_IVRApplications_001_AddApplicationManifest( struct cppIVRApplications_IVRApplications_001_AddApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_001_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};
extern void cppIVRApplications_IVRApplications_001_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_001_RemoveApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_001_IsApplicationInstalled_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_001_IsApplicationInstalled_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationCount( struct cppIVRApplications_IVRApplications_001_GetApplicationCount_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params *params );

struct cppIVRApplications_IVRApplications_001_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_LaunchApplication( struct cppIVRApplications_IVRApplications_001_LaunchApplication_params *params );

struct cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay_params *params );

struct cppIVRApplications_IVRApplications_001_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_IdentifyApplication( struct cppIVRApplications_IVRApplications_001_IdentifyApplication_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_001_GetApplicationProcessId_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_001_GetApplicationPropertyString_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool_params *params );

struct cppIVRApplications_IVRApplications_001_GetHomeApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_001_GetHomeApplication( struct cppIVRApplications_IVRApplications_001_GetHomeApplication_params *params );

struct cppIVRApplications_IVRApplications_001_SetHomeApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_SetHomeApplication( struct cppIVRApplications_IVRApplications_001_SetHomeApplication_params *params );

struct cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    bool bAutoLaunch;
};
extern void cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_001_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_001_GetStartingApplication( struct cppIVRApplications_IVRApplications_001_GetStartingApplication_params *params );

struct cppIVRApplications_IVRApplications_001_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_001_GetTransitionState( struct cppIVRApplications_IVRApplications_001_GetTransitionState_params *params );

struct cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params *params );

struct cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};
extern void cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params *params );

#ifdef __cplusplus
}
#endif
