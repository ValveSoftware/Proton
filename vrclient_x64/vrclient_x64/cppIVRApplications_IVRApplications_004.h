/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRApplications_IVRApplications_004_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    bool bTemporary;
};
extern void cppIVRApplications_IVRApplications_004_AddApplicationManifest( struct cppIVRApplications_IVRApplications_004_AddApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_004_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};
extern void cppIVRApplications_IVRApplications_004_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_004_RemoveApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_004_IsApplicationInstalled_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_004_IsApplicationInstalled_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationCount( struct cppIVRApplications_IVRApplications_004_GetApplicationCount_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params *params );

struct cppIVRApplications_IVRApplications_004_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_LaunchApplication( struct cppIVRApplications_IVRApplications_004_LaunchApplication_params *params );

struct cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay_params *params );

struct cppIVRApplications_IVRApplications_004_CancelApplicationLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_004_CancelApplicationLaunch_params *params );

struct cppIVRApplications_IVRApplications_004_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_IdentifyApplication( struct cppIVRApplications_IVRApplications_004_IdentifyApplication_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_004_GetApplicationProcessId_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyString_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params *params );

struct cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    bool bAutoLaunch;
};
extern void cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_004_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_004_GetStartingApplication( struct cppIVRApplications_IVRApplications_004_GetStartingApplication_params *params );

struct cppIVRApplications_IVRApplications_004_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_004_GetTransitionState( struct cppIVRApplications_IVRApplications_004_GetTransitionState_params *params );

struct cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params *params );

struct cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};
extern void cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params *params );

struct cppIVRApplications_IVRApplications_004_LaunchInternalProcess_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};
extern void cppIVRApplications_IVRApplications_004_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_004_LaunchInternalProcess_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
