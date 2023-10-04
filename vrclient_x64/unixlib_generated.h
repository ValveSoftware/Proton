/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <pshpack1.h>

struct IVRApplications_IVRApplications_001_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_001_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_001_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_001_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_001_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_001_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_001_GetHomeApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_001_SetHomeApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_001_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_002_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_002_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_002_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_002_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_002_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_002_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_002_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_002_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_002_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_002_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_002_IsQuitUserPromptRequested_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRApplications_IVRApplications_003_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_003_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_003_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_003_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_003_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_003_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_003_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_003_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_003_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_003_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_003_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_003_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_003_IsQuitUserPromptRequested_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRApplications_IVRApplications_004_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_004_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_004_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_004_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_CancelApplicationLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_004_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_004_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_004_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRApplications_IVRApplications_004_LaunchInternalProcess_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};

struct IVRApplications_IVRApplications_005_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_005_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_005_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_005_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_LaunchTemplateApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchTemplateAppKey;
    const char *pchNewAppKey;
    const w_AppOverrideKeys_t *pKeys;
    uint32_t unKeys;
};

struct IVRApplications_IVRApplications_005_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_CancelApplicationLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_005_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_005_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_005_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRApplications_IVRApplications_005_LaunchInternalProcess_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};

struct IVRApplications_IVRApplications_006_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_006_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_006_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_006_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_LaunchTemplateApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchTemplateAppKey;
    const char *pchNewAppKey;
    const w_AppOverrideKeys_t *pKeys;
    uint32_t unKeys;
};

struct IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchMimeType;
    const char *pchArgs;
};

struct IVRApplications_IVRApplications_006_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_CancelApplicationLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_006_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_006_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    const char *pchMimeType;
};

struct IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchMimeType;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    char *pchMimeTypesBuffer;
    uint32_t unMimeTypesBuffer;
};

struct IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchMimeType;
    char *pchAppKeysThatSupportBuffer;
    uint32_t unAppKeysThatSupportBuffer;
};

struct IVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unHandle;
    char *pchArgs;
    uint32_t unArgs;
};

struct IVRApplications_IVRApplications_006_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_006_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRApplications_IVRApplications_006_LaunchInternalProcess_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};

struct IVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_007_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    int8_t bTemporary;
};

struct IVRApplications_IVRApplications_007_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};

struct IVRApplications_IVRApplications_007_IsApplicationInstalled_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_007_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_007_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_LaunchTemplateApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchTemplateAppKey;
    const char *pchNewAppKey;
    const w_AppOverrideKeys_t *pKeys;
    uint32_t unKeys;
};

struct IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchMimeType;
    const char *pchArgs;
};

struct IVRApplications_IVRApplications_007_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_CancelApplicationLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRApplications_IVRApplications_007_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_007_GetApplicationPropertyBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_007_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};

struct IVRApplications_IVRApplications_007_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    int8_t bAutoLaunch;
};

struct IVRApplications_IVRApplications_007_GetApplicationAutoLaunch_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    const char *pchMimeType;
};

struct IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchMimeType;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchAppKey;
    char *pchMimeTypesBuffer;
    uint32_t unMimeTypesBuffer;
};

struct IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchMimeType;
    char *pchAppKeysThatSupportBuffer;
    uint32_t unAppKeysThatSupportBuffer;
};

struct IVRApplications_IVRApplications_007_GetApplicationLaunchArguments_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unHandle;
    char *pchArgs;
    uint32_t unArgs;
};

struct IVRApplications_IVRApplications_007_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};

struct IVRApplications_IVRApplications_007_GetSceneApplicationState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};

struct IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};

struct IVRApplications_IVRApplications_007_LaunchInternalProcess_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchBinaryPath;
    const char *pchArguments;
    const char *pchWorkingDirectory;
};

struct IVRApplications_IVRApplications_007_GetCurrentSceneProcessId_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t configFile;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params
{
    void *linux_side;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params
{
    void *linux_side;
    int8_t _ret;
    float *pSizeX;
    float *pSizeZ;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *rect;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params
{
    void *linux_side;
    float sizeX;
    float sizeZ;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params
{
    void *linux_side;
    uint32_t configFile;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params
{
    void *linux_side;
    uint8_t *pTagsBuffer;
    uint32_t unTagCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params
{
    void *linux_side;
    int8_t _ret;
    uint8_t *pTagsBuffer;
    uint32_t *punTagCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t configFile;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params
{
    void *linux_side;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params
{
    void *linux_side;
    int8_t _ret;
    float *pSizeX;
    float *pSizeZ;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *rect;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params
{
    void *linux_side;
    float sizeX;
    float sizeZ;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params
{
    void *linux_side;
    uint32_t configFile;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params
{
    void *linux_side;
    uint8_t *pTagsBuffer;
    uint32_t unTagCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params
{
    void *linux_side;
    int8_t _ret;
    uint8_t *pTagsBuffer;
    uint32_t *punTagCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params
{
    void *linux_side;
    int8_t _ret;
    char *pBuffer;
    uint32_t *pnBufferLength;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params
{
    void *linux_side;
    int8_t _ret;
    const char *pBuffer;
    uint32_t nImportFlags;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t configFile;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params
{
    void *linux_side;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params
{
    void *linux_side;
    int8_t _ret;
    float *pSizeX;
    float *pSizeZ;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *rect;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params
{
    void *linux_side;
    float sizeX;
    float sizeZ;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params
{
    void *linux_side;
    HmdVector2_t *pPointBuffer;
    uint32_t unPointCount;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params
{
    void *linux_side;
    uint32_t configFile;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    int8_t _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params
{
    void *linux_side;
    int8_t _ret;
    char *pBuffer;
    uint32_t *pnBufferLength;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params
{
    void *linux_side;
    int8_t _ret;
    const char *pBuffer;
    uint32_t nImportFlags;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params
{
    void *linux_side;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params
{
    void *linux_side;
};

struct IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params
{
    void *linux_side;
};

struct IVRChaperone_IVRChaperone_002_GetCalibrationState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    ChaperoneSoftBoundsInfo_t *pInfo;
};

struct IVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};

struct IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params
{
    void *linux_side;
    int8_t _ret;
    ChaperoneSeatedBoundsInfo_t *pInfo;
};

struct IVRChaperone_IVRChaperone_002_ReloadInfo_params
{
    void *linux_side;
};

struct IVRChaperone_IVRChaperone_002_SetSceneColor_params
{
    void *linux_side;
    HmdColor_t color;
};

struct IVRChaperone_IVRChaperone_002_GetBoundsColor_params
{
    void *linux_side;
    HmdColor_t *pOutputColorArray;
    int32_t nNumOutputColors;
};

struct IVRChaperone_IVRChaperone_002_AreBoundsVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRChaperone_IVRChaperone_002_ForceBoundsVisible_params
{
    void *linux_side;
    int8_t bForce;
};

struct IVRChaperone_IVRChaperone_003_GetCalibrationState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRChaperone_IVRChaperone_003_GetPlayAreaSize_params
{
    void *linux_side;
    int8_t _ret;
    float *pSizeX;
    float *pSizeZ;
};

struct IVRChaperone_IVRChaperone_003_GetPlayAreaRect_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *rect;
};

struct IVRChaperone_IVRChaperone_003_ReloadInfo_params
{
    void *linux_side;
};

struct IVRChaperone_IVRChaperone_003_SetSceneColor_params
{
    void *linux_side;
    HmdColor_t color;
};

struct IVRChaperone_IVRChaperone_003_GetBoundsColor_params
{
    void *linux_side;
    HmdColor_t *pOutputColorArray;
    int32_t nNumOutputColors;
    float flCollisionBoundsFadeDistance;
    HmdColor_t *pOutputCameraColor;
};

struct IVRChaperone_IVRChaperone_003_AreBoundsVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRChaperone_IVRChaperone_003_ForceBoundsVisible_params
{
    void *linux_side;
    int8_t bForce;
};

struct IVRChaperone_IVRChaperone_004_GetCalibrationState_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRChaperone_IVRChaperone_004_GetPlayAreaSize_params
{
    void *linux_side;
    int8_t _ret;
    float *pSizeX;
    float *pSizeZ;
};

struct IVRChaperone_IVRChaperone_004_GetPlayAreaRect_params
{
    void *linux_side;
    int8_t _ret;
    HmdQuad_t *rect;
};

struct IVRChaperone_IVRChaperone_004_ReloadInfo_params
{
    void *linux_side;
};

struct IVRChaperone_IVRChaperone_004_SetSceneColor_params
{
    void *linux_side;
    HmdColor_t color;
};

struct IVRChaperone_IVRChaperone_004_GetBoundsColor_params
{
    void *linux_side;
    HmdColor_t *pOutputColorArray;
    int32_t nNumOutputColors;
    float flCollisionBoundsFadeDistance;
    HmdColor_t *pOutputCameraColor;
};

struct IVRChaperone_IVRChaperone_004_AreBoundsVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRChaperone_IVRChaperone_004_ForceBoundsVisible_params
{
    void *linux_side;
    int8_t bForce;
};

struct IVRChaperone_IVRChaperone_004_ResetZeroPose_params
{
    void *linux_side;
    uint32_t eTrackingUniverseOrigin;
};

struct IVRClientCore_IVRClientCore_002_Init_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eApplicationType;
};

struct IVRClientCore_IVRClientCore_002_Cleanup_params
{
    void *linux_side;
};

struct IVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInterfaceVersion;
};

struct IVRClientCore_IVRClientCore_002_GetGenericInterface_params
{
    void *linux_side;
    void *_ret;
    const char *pchNameAndVersion;
    uint32_t *peError;
};

struct IVRClientCore_IVRClientCore_002_BIsHmdPresent_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRClientCore_IVRClientCore_002_GetIDForVRInitError_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRClientCore_IVRClientCore_003_Init_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eApplicationType;
    const char *pStartupInfo;
};

struct IVRClientCore_IVRClientCore_003_Cleanup_params
{
    void *linux_side;
};

struct IVRClientCore_IVRClientCore_003_IsInterfaceVersionValid_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInterfaceVersion;
};

struct IVRClientCore_IVRClientCore_003_GetGenericInterface_params
{
    void *linux_side;
    void *_ret;
    const char *pchNameAndVersion;
    uint32_t *peError;
};

struct IVRClientCore_IVRClientCore_003_BIsHmdPresent_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRClientCore_IVRClientCore_003_GetIDForVRInitError_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRCompositor_IVRCompositor_005_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_005_SetVSync_params
{
    void *linux_side;
    int8_t bVSync;
};

struct IVRCompositor_IVRCompositor_005_GetVSync_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_005_SetGamma_params
{
    void *linux_side;
    float fGamma;
};

struct IVRCompositor_IVRCompositor_005_GetGamma_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_005_SetGraphicsDevice_params
{
    void *linux_side;
    uint32_t eType;
    void *pDevice;
};

struct IVRCompositor_IVRCompositor_005_WaitGetPoses_params
{
    void *linux_side;
    TrackedDevicePose_t *pPoseArray;
    uint32_t unPoseArrayCount;
};

struct IVRCompositor_IVRCompositor_005_Submit_params
{
    void *linux_side;
    uint32_t eEye;
    void *pTexture;
    Compositor_TextureBounds *pBounds;
};

struct IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_005_GetOverlayDefaults_params
{
    void *linux_side;
    Compositor_OverlaySettings *pSettings;
};

struct IVRCompositor_IVRCompositor_005_SetOverlay_params
{
    void *linux_side;
    void *pTexture;
    Compositor_OverlaySettings *pSettings;
};

struct IVRCompositor_IVRCompositor_005_SetOverlayRaw_params
{
    void *linux_side;
    void *buffer;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
    Compositor_OverlaySettings *pSettings;
};

struct IVRCompositor_IVRCompositor_005_SetOverlayFromFile_params
{
    void *linux_side;
    const char *pchFilePath;
    Compositor_OverlaySettings *pSettings;
};

struct IVRCompositor_IVRCompositor_005_ClearOverlay_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_005_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_090 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_005_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_005_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_005_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_005_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_005_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_005_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    const Compositor_OverlaySettings *pSettings;
    float fAspectRatio;
    uint32_t eOrigin;
    HmdVector3_t vSource;
    HmdVector3_t vDirection;
    HmdVector2_t *pvecIntersectionUV;
    HmdVector3_t *pvecIntersectionTrackingSpace;
};

struct IVRCompositor_IVRCompositor_005_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_005_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_006_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_006_SetVSync_params
{
    void *linux_side;
    int8_t bVSync;
};

struct IVRCompositor_IVRCompositor_006_GetVSync_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_006_SetGamma_params
{
    void *linux_side;
    float fGamma;
};

struct IVRCompositor_IVRCompositor_006_GetGamma_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_006_SetGraphicsDevice_params
{
    void *linux_side;
    uint32_t eType;
    void *pDevice;
};

struct IVRCompositor_IVRCompositor_006_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_006_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pTexture;
    VRTextureBounds_t *pBounds;
};

struct IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_006_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_090 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_006_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_006_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_006_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_006_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_006_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_006_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_006_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_006_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_006_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_007_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_007_SetVSync_params
{
    void *linux_side;
    int8_t bVSync;
};

struct IVRCompositor_IVRCompositor_007_GetVSync_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_007_SetGamma_params
{
    void *linux_side;
    float fGamma;
};

struct IVRCompositor_IVRCompositor_007_GetGamma_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_007_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_007_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t eTextureType;
    void *pTexture;
    const VRTextureBounds_t *pBounds;
};

struct IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_007_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_093 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_007_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_007_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_007_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_007_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_007_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_007_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_007_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_007_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_007_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_008_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_008_SetVSync_params
{
    void *linux_side;
    int8_t bVSync;
};

struct IVRCompositor_IVRCompositor_008_GetVSync_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_008_SetGamma_params
{
    void *linux_side;
    float fGamma;
};

struct IVRCompositor_IVRCompositor_008_GetGamma_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_008_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_008_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t eTextureType;
    void *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_093 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_008_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_008_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_008_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t eTextureType;
    void *pFront;
    void *pBack;
    void *pLeft;
    void *pRight;
    void *pTop;
    void *pBottom;
};

struct IVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_008_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_008_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_008_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_008_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_009_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_009_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_009_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_009_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_009_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0913 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_009_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_009_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_009_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_009_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_009_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_009_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_009_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_009_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_009_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_009_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_010_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_010_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_010_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_010_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0914 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_010_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_010_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_010_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_010_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_010_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_010_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_010_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_010_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_010_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_010_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_011_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_011_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_011_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_011_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0915 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_011_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_011_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_011_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_011_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_011_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_011_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_011_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_011_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_011_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_011_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_012_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_012_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_012_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_012_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0915 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_012_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_012_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_012_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_012_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_012_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_012_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_013_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_013_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_013_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_013_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_013_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0915 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_013_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_013_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_013_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_013_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_013_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_013_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_013_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_013_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_014_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_014_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_014_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_014_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_014_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0920 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_014_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_014_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_014_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_014_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_014_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_014_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_014_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_014_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_015_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_015_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_015_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_015_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_015_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_0920 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_015_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_015_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_015_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_015_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_015_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_015_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_015_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_015_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_015_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_015_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_015_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_015_RequestScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t type;
    const char *pchDestinationFileName;
    const char *pchVRDestinationFileName;
};

struct IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_015_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_016_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_016_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_016_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_016_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_016_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_102 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_016_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_016_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_016_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_016_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_016_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_016_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_016_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_016_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_016_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_016_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_016_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_016_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_016_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_017_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_017_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_017_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_017_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_017_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_017_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_017_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_017_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_017_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_017_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_017_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_017_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_017_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_017_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_017_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_018_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_018_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_018_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_018_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_018_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_018_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_018_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_018_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_018_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_018_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_018_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_018_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_018_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_018_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_018_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_018_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_018_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_018_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_018_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_018_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_018_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_019_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_019_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_019_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_019_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_019_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_019_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_019_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_019_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_019_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_019_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_019_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_019_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_019_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_019_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_019_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_019_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_019_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_019_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_019_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_020_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_020_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_020_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_020_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_020_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_020_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_020_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_020_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_020_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_020_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_020_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_020_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_020_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_020_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_020_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_020_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_020_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_020_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_020_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_020_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_020_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_021_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_021_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_021_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_021_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_021_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_021_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_103a *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_021_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_021_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_021_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_021_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_021_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_021_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_021_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_021_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_021_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_021_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_021_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_021_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_021_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_021_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_021_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params
{
    void *linux_side;
    int8_t bExplicitTimingMode;
};

struct IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_022_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_022_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_022_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_022_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_022_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_022_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_022_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_022_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_022_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_022_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_022_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_022_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_022_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_022_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_022_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};

struct IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_024_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_024_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_024_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_024_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_024_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_024_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_024_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_024_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_024_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_024_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_024_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_024_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_024_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_024_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_024_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_024_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_024_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_024_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};

struct IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_024_SetStageOverride_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelPath;
    const HmdMatrix34_t *pTransform;
    const Compositor_StageRenderSettings *pRenderSettings;
    uint32_t nSizeOfRenderSettings;
};

struct IVRCompositor_IVRCompositor_024_ClearStageOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_026_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_026_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_026_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_026_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_026_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_026_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_026_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_026_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_026_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_026_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeIn;
};

struct IVRCompositor_IVRCompositor_026_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_026_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_026_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_026_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_026_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_026_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_026_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};

struct IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_026_SetStageOverride_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelPath;
    const HmdMatrix34_t *pTransform;
    const Compositor_StageRenderSettings *pRenderSettings;
    uint32_t nSizeOfRenderSettings;
};

struct IVRCompositor_IVRCompositor_026_ClearStageOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults_params
{
    void *linux_side;
    int8_t _ret;
    Compositor_BenchmarkResults *pBenchmarkResults;
    uint32_t nSizeOfBenchmarkResults;
};

struct IVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pRenderPosePredictionID;
    uint32_t *pGamePosePredictionID;
};

struct IVRCompositor_IVRCompositor_026_GetPosesForFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unPosePredictionID;
    TrackedDevicePose_t *pPoseArray;
    uint32_t unPoseArrayCount;
};

struct IVRCompositor_IVRCompositor_027_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};

struct IVRCompositor_IVRCompositor_027_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_027_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_027_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};

struct IVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};

struct IVRCompositor_IVRCompositor_027_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};

struct IVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_PostPresentHandoff_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_GetFrameTiming_params
{
    void *linux_side;
    int8_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t unFramesAgo;
};

struct IVRCompositor_IVRCompositor_027_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    w_Compositor_FrameTiming_1017 *pTiming;
    uint32_t nFrames;
};

struct IVRCompositor_IVRCompositor_027_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_027_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_1267 *pStats;
    uint32_t nStatsSizeInBytes;
};

struct IVRCompositor_IVRCompositor_027_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_027_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    int8_t bBackground;
};

struct IVRCompositor_IVRCompositor_027_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    int8_t bFadeGridIn;
};

struct IVRCompositor_IVRCompositor_027_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};

struct IVRCompositor_IVRCompositor_027_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};

struct IVRCompositor_IVRCompositor_027_ClearSkyboxOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_CompositorBringToFront_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_CompositorGoToBack_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_CompositorQuit_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_IsFullscreen_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_027_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_027_CanRenderScene_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_ShowMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_HideMirrorWindow_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_IsMirrorWindowVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_CompositorDumpImages_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    int8_t bOverride;
};

struct IVRCompositor_IVRCompositor_027_ForceReconnectProcess_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_SuspendRendering_params
{
    void *linux_side;
    int8_t bSuspend;
};

struct IVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};

struct IVRCompositor_IVRCompositor_027_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};

struct IVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};

struct IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRCompositor_IVRCompositor_027_SetStageOverride_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelPath;
    const HmdMatrix34_t *pTransform;
    const Compositor_StageRenderSettings *pRenderSettings;
    uint32_t nSizeOfRenderSettings;
};

struct IVRCompositor_IVRCompositor_027_ClearStageOverride_params
{
    void *linux_side;
};

struct IVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults_params
{
    void *linux_side;
    int8_t _ret;
    Compositor_BenchmarkResults *pBenchmarkResults;
    uint32_t nSizeOfBenchmarkResults;
};

struct IVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pRenderPosePredictionID;
    uint32_t *pGamePosePredictionID;
};

struct IVRCompositor_IVRCompositor_027_GetPosesForFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unPosePredictionID;
    TrackedDevicePose_t *pPoseArray;
    uint32_t unPoseArrayCount;
};

struct IVRControlPanel_IVRControlPanel_006_undoc1_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc2_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t a;
    char *b;
    uint32_t c;
};

struct IVRControlPanel_IVRControlPanel_006_undoc3_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc4_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc5_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
    uint32_t b;
    char *c;
    uint32_t d;
};

struct IVRControlPanel_IVRControlPanel_006_undoc6_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
    const char *b;
    char *c;
    uint32_t d;
};

struct IVRControlPanel_IVRControlPanel_006_undoc7_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
    const char *b;
    char *c;
    uint32_t d;
};

struct IVRControlPanel_IVRControlPanel_006_undoc8_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc9_params
{
    void *linux_side;
};

struct IVRControlPanel_IVRControlPanel_006_undoc10_params
{
    void *linux_side;
};

struct IVRControlPanel_IVRControlPanel_006_undoc11_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc12_params
{
    void *linux_side;
};

struct IVRControlPanel_IVRControlPanel_006_undoc13_params
{
    void *linux_side;
    uint32_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc14_params
{
    void *linux_side;
    uint32_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc15_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc16_params
{
    void *linux_side;
    int8_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc17_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc18_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc19_params
{
    void *linux_side;
    int8_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc20_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc21_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc22_params
{
    void *linux_side;
    uint64_t a;
    const char *b;
    uint32_t c;
    uint32_t d;
    const char *e;
};

struct IVRControlPanel_IVRControlPanel_006_undoc23_params
{
    void *linux_side;
    int8_t _ret;
    const char *a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc24_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc25_params
{
    void *linux_side;
    int8_t _ret;
    int8_t a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc26_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVRControlPanel_IVRControlPanel_006_undoc27_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
};

struct IVRControlPanel_IVRControlPanel_006_undoc28_params
{
    void *linux_side;
    uint64_t a;
};

struct IVRDriverManager_IVRDriverManager_001_GetDriverCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRDriverManager_IVRDriverManager_001_GetDriverName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDriver;
    char *pchValue;
    uint32_t unBufferSize;
};

struct IVRDriverManager_IVRDriverManager_001_GetDriverHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchDriverName;
};

struct IVRDriverManager_IVRDriverManager_001_IsEnabled_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDriver;
};

struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};

struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize_params
{
    void *linux_side;
    uint32_t nWidth;
    uint32_t nHeight;
};

struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode_params
{
    void *linux_side;
    uint32_t eHeadsetViewMode;
};

struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped_params
{
    void *linux_side;
    int8_t bCropped;
};

struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio_params
{
    void *linux_side;
    float _ret;
};

struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange_params
{
    void *linux_side;
    float flStartPct;
    float flEndPct;
};

struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange_params
{
    void *linux_side;
    float *pStartPct;
    float *pEndPct;
};

struct IVRIOBuffer_IVRIOBuffer_001_Open_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchPath;
    uint32_t mode;
    uint32_t unElementSize;
    uint32_t unElements;
    uint64_t *pulBuffer;
};

struct IVRIOBuffer_IVRIOBuffer_001_Close_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
};

struct IVRIOBuffer_IVRIOBuffer_001_Read_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
    void *pDst;
    uint32_t unBytes;
    uint32_t *punRead;
};

struct IVRIOBuffer_IVRIOBuffer_001_Write_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
    void *pSrc;
    uint32_t unBytes;
};

struct IVRIOBuffer_IVRIOBuffer_001_PropertyContainer_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t ulBuffer;
};

struct IVRIOBuffer_IVRIOBuffer_002_Open_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchPath;
    uint32_t mode;
    uint32_t unElementSize;
    uint32_t unElements;
    uint64_t *pulBuffer;
};

struct IVRIOBuffer_IVRIOBuffer_002_Close_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
};

struct IVRIOBuffer_IVRIOBuffer_002_Read_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
    void *pDst;
    uint32_t unBytes;
    uint32_t *punRead;
};

struct IVRIOBuffer_IVRIOBuffer_002_Write_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulBuffer;
    void *pSrc;
    uint32_t unBytes;
};

struct IVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t ulBuffer;
};

struct IVRIOBuffer_IVRIOBuffer_002_HasReaders_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulBuffer;
};

struct IVRInput_IVRInput_003_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};

struct IVRInput_IVRInput_003_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_003_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_003_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_003_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1015 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};

struct IVRInput_IVRInput_003_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_003_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_003_GetPoseActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_003_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eBoneParent;
    float fPredictedSecondsFromNow;
    w_InputSkeletonActionData_t *pActionData;
    uint32_t unActionDataSize;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eBoneParent;
    float fPredictedSecondsFromNow;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};

struct IVRInput_IVRInput_003_UncompressSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t *peBoneParent;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_003_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};

struct IVRInput_IVRInput_003_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};

struct IVRInput_IVRInput_003_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
};

struct IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};

struct IVRInput_IVRInput_003_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};

struct IVRInput_IVRInput_003_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1015 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};

struct IVRInput_IVRInput_004_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};

struct IVRInput_IVRInput_004_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_004_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_004_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_004_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};

struct IVRInput_IVRInput_004_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_GetPoseActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_1016 *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t *peTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_004_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_004_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};

struct IVRInput_IVRInput_004_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
};

struct IVRInput_IVRInput_004_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};

struct IVRInput_IVRInput_004_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};

struct IVRInput_IVRInput_004_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};

struct IVRInput_IVRInput_005_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};

struct IVRInput_IVRInput_005_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_005_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_005_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_005_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};

struct IVRInput_IVRInput_005_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_005_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_005_GetPoseActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_005_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_113b *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_005_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};

struct IVRInput_IVRInput_005_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};

struct IVRInput_IVRInput_005_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};

struct IVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_005_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};

struct IVRInput_IVRInput_005_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_005_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};

struct IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};

struct IVRInput_IVRInput_005_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_005_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_005_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};

struct IVRInput_IVRInput_005_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};

struct IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};

struct IVRInput_IVRInput_005_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};

struct IVRInput_IVRInput_005_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};

struct IVRInput_IVRInput_005_IsUsingLegacyInput_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRInput_IVRInput_006_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};

struct IVRInput_IVRInput_006_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_006_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_006_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_006_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};

struct IVRInput_IVRInput_006_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_006_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_006_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_113b *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_006_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};

struct IVRInput_IVRInput_006_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};

struct IVRInput_IVRInput_006_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};

struct IVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_006_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};

struct IVRInput_IVRInput_006_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_006_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};

struct IVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};

struct IVRInput_IVRInput_006_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_006_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_006_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};

struct IVRInput_IVRInput_006_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};

struct IVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};

struct IVRInput_IVRInput_006_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};

struct IVRInput_IVRInput_006_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};

struct IVRInput_IVRInput_006_IsUsingLegacyInput_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRInput_IVRInput_007_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};

struct IVRInput_IVRInput_007_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_007_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_007_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_007_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};

struct IVRInput_IVRInput_007_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_007_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_007_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_007_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_007_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_113b *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_007_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};

struct IVRInput_IVRInput_007_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};

struct IVRInput_IVRInput_007_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};

struct IVRInput_IVRInput_007_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_007_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};

struct IVRInput_IVRInput_007_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_007_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};

struct IVRInput_IVRInput_007_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};

struct IVRInput_IVRInput_007_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_007_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_007_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};

struct IVRInput_IVRInput_007_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};

struct IVRInput_IVRInput_007_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};

struct IVRInput_IVRInput_007_GetActionBindingInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    InputBindingInfo_t_1517 *pOriginInfo;
    uint32_t unBindingInfoSize;
    uint32_t unBindingInfoCount;
    uint32_t *punReturnedBindingInfoCount;
};

struct IVRInput_IVRInput_007_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};

struct IVRInput_IVRInput_007_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};

struct IVRInput_IVRInput_007_IsUsingLegacyInput_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRInput_IVRInput_007_OpenBindingUI_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint64_t ulActionSetHandle;
    uint64_t ulDeviceHandle;
    int8_t bShowOnDesktop;
};

struct IVRInput_IVRInput_010_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};

struct IVRInput_IVRInput_010_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_010_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_010_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};

struct IVRInput_IVRInput_010_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};

struct IVRInput_IVRInput_010_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_010_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_010_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_010_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_010_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_113b *pActionData;
    uint32_t unActionDataSize;
};

struct IVRInput_IVRInput_010_GetDominantHand_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *peDominantHand;
};

struct IVRInput_IVRInput_010_SetDominantHand_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDominantHand;
};

struct IVRInput_IVRInput_010_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};

struct IVRInput_IVRInput_010_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};

struct IVRInput_IVRInput_010_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};

struct IVRInput_IVRInput_010_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_010_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};

struct IVRInput_IVRInput_010_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_010_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};

struct IVRInput_IVRInput_010_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};

struct IVRInput_IVRInput_010_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};

struct IVRInput_IVRInput_010_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};

struct IVRInput_IVRInput_010_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};

struct IVRInput_IVRInput_010_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};

struct IVRInput_IVRInput_010_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};

struct IVRInput_IVRInput_010_GetActionBindingInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    InputBindingInfo_t_11030 *pOriginInfo;
    uint32_t unBindingInfoSize;
    uint32_t unBindingInfoCount;
    uint32_t *punReturnedBindingInfoCount;
};

struct IVRInput_IVRInput_010_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};

struct IVRInput_IVRInput_010_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};

struct IVRInput_IVRInput_010_GetComponentStateForBinding_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const InputBindingInfo_t_11030 *pOriginInfo;
    uint32_t unBindingInfoSize;
    uint32_t unBindingInfoCount;
    RenderModel_ComponentState_t *pComponentState;
};

struct IVRInput_IVRInput_010_IsUsingLegacyInput_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRInput_IVRInput_010_OpenBindingUI_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint64_t ulActionSetHandle;
    uint64_t ulDeviceHandle;
    int8_t bShowOnDesktop;
};

struct IVRInput_IVRInput_010_GetBindingVariant_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulDevicePath;
    char *pchVariantArray;
    uint32_t unVariantArraySize;
};

struct IVRMailbox_IVRMailbox_001_undoc1_params
{
    void *linux_side;
    uint32_t _ret;
    const char *a;
    uint64_t *b;
};

struct IVRMailbox_IVRMailbox_001_undoc2_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t a;
};

struct IVRMailbox_IVRMailbox_001_undoc3_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t a;
    const char *b;
    const char *c;
};

struct IVRMailbox_IVRMailbox_001_undoc4_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t a;
    char *b;
    uint32_t c;
    uint32_t *d;
};

struct IVRNotifications_IVRNotifications_001_GetErrorString_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t error;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRNotifications_IVRNotifications_001_CreateNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulUserValue;
    const char *strType;
    const char *strText;
    const char *strCategory;
    const w_NotificationBitmap *photo;
    uint32_t *notificationId;
};

struct IVRNotifications_IVRNotifications_001_DismissNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t notificationId;
};

struct IVRNotifications_IVRNotifications_002_CreateNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulUserValue;
    uint32_t type;
    const char *pchText;
    uint32_t style;
    const w_NotificationBitmap_t *pImage;
    uint32_t *pNotificationId;
};

struct IVRNotifications_IVRNotifications_002_RemoveNotification_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t notificationId;
};

struct IVROverlayView_IVROverlayView_003_AcquireOverlayView_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    w_VRNativeDevice_t *pNativeDevice;
    w_VROverlayView_t *pOverlayView;
    uint32_t unOverlayViewSize;
};

struct IVROverlayView_IVROverlayView_003_ReleaseOverlayView_params
{
    void *linux_side;
    uint32_t _ret;
    w_VROverlayView_t *pOverlayView;
};

struct IVROverlayView_IVROverlayView_003_PostOverlayEvent_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    const w_VREvent_t_1168 *pvrEvent;
};

struct IVROverlayView_IVROverlayView_003_IsViewingPermitted_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_001_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_001_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_001_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_001_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_001_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_001_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_001_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fGamma;
};

struct IVROverlay_IVROverlay_001_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfGamma;
};

struct IVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_001_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_001_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_001_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_001_GetOverlayVisibility_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peOverlayVisibility;
};

struct IVROverlay_IVROverlay_001_SetOverlayVisibility_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayVisibility;
};

struct IVROverlay_IVROverlay_001_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_092 *pEvent;
};

struct IVROverlay_IVROverlay_001_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_001_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_001_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_001_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_001_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_001_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pTexture;
};

struct IVROverlay_IVROverlay_001_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_001_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_001_IsSystemOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_001_IsActiveSystemOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_002_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_002_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_002_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_002_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_002_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_002_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_002_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_002_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_002_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_002_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fGamma;
};

struct IVROverlay_IVROverlay_002_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfGamma;
};

struct IVROverlay_IVROverlay_002_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_002_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_002_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_002_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_002_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_002_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_002_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_002_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_093 *pEvent;
};

struct IVROverlay_IVROverlay_002_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_002_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_002_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_002_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_002_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_002_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureType;
    void *pTexture;
};

struct IVROverlay_IVROverlay_002_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_002_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_002_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_002_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_002_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_003_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_003_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_003_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_003_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_003_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_003_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_003_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_003_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_003_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_003_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_003_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_003_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_003_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fGamma;
};

struct IVROverlay_IVROverlay_003_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfGamma;
};

struct IVROverlay_IVROverlay_003_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_003_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_003_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_003_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_003_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_003_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_003_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_003_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_097 *pEvent;
};

struct IVROverlay_IVROverlay_003_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_003_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_003_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_003_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_003_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_003_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureType;
    void *pTexture;
};

struct IVROverlay_IVROverlay_003_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_003_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_003_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_003_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_003_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_003_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_004_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_004_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_004_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_004_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_004_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_004_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_004_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_004_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_004_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_004_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_004_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_004_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_004_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fGamma;
};

struct IVROverlay_IVROverlay_004_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfGamma;
};

struct IVROverlay_IVROverlay_004_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_004_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_004_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_004_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_004_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_004_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_004_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_004_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_097 *pEvent;
};

struct IVROverlay_IVROverlay_004_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_004_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_004_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_004_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_004_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_004_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureType;
    void *pTexture;
};

struct IVROverlay_IVROverlay_004_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_004_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_004_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_004_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_004_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_004_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_005_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_005_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_005_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_005_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_005_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_005_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_005_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_005_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_005_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_005_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_005_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_005_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_005_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fGamma;
};

struct IVROverlay_IVROverlay_005_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfGamma;
};

struct IVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_005_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_005_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_005_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_005_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_0910 *pEvent;
};

struct IVROverlay_IVROverlay_005_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_005_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_005_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_005_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_005_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_005_IsFocusOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureType;
    void *pTexture;
};

struct IVROverlay_IVROverlay_005_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_005_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_005_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_005_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_005_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_005_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
};

struct IVROverlay_IVROverlay_005_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_005_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_007_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_007_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_007_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_007_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_007_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_007_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_007_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_007_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_007_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_007_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_007_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_007_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_007_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_007_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_007_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_007_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_007_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_007_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_007_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_007_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_007_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_007_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_0912 *pEvent;
};

struct IVROverlay_IVROverlay_007_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_007_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_007_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_007_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_007_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_007_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_007_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_007_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_007_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_007_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_007_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_007_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_007_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_007_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_007_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_007_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_007_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_007_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_007_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_008_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_008_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_008_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_008_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_008_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_008_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_008_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_008_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_008_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_008_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_008_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_008_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_008_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_008_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_008_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_008_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_008_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_008_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_008_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_008_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_008_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_008_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_008_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_0914 *pEvent;
};

struct IVROverlay_IVROverlay_008_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_008_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_008_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_008_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_008_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_008_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_008_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_008_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_008_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_008_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_008_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_008_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_008_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_008_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_008_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_008_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_008_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_008_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_008_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_010_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_010_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_010_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_010_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_010_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_010_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_010_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_010_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_010_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_010_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_010_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_010_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_010_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_010_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_010_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_010_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_010_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_010_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_010_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_010_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_010_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_010_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_010_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_010_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_010_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_010_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_010_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_010_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_010_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_010_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_010_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_010_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_010_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_010_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_010_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_010_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_010_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_010_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_010_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_010_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_010_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_010_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_010_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_011_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_011_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_011_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_011_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_011_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_011_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_011_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_011_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_011_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_011_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_011_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_011_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_011_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_011_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_011_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_011_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_011_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_011_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_011_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_011_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_011_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_011_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_011_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_011_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_011_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_011_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_011_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_011_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_011_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_011_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_011_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_011_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_011_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_011_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_011_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_011_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPI;
    uint32_t *pColorSpace;
};

struct IVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_011_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_011_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_011_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_011_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_011_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_011_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_011_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_011_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_011_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_012_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_012_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_012_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_012_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_012_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_012_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_012_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_012_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_012_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_012_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_012_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_012_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_012_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_012_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_012_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_012_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_012_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_012_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_012_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_012_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_012_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_012_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_012_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_012_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_101 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_012_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_012_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_012_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_012_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_012_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_012_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_012_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_012_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_012_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_012_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_012_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_012_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPI;
    uint32_t *pColorSpace;
};

struct IVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_012_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_012_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_012_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_012_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_012_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_012_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_012_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_012_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_012_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_012_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_013_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_013_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_013_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_013_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_013_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_013_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_013_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_013_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_013_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_013_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_013_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_013_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_013_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_013_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_013_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_013_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_013_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_013_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_013_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_013_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_013_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_013_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_103 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_013_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_013_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_013_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_013_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_013_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_013_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_013_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_013_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_013_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_013_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_013_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPI;
    uint32_t *pColorSpace;
};

struct IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_013_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_013_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_013_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_013_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_013_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_013_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_013_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_014_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_014_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_014_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_014_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_014_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_014_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_014_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_014_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_014_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_014_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_014_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_014_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_014_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_014_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_014_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_014_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_014_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_014_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_014_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_014_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_014_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_014_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_014_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_014_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_014_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_014_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_014_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_014_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_014_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_014_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_014_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_014_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_014_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_014_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_014_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_014_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_014_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_014_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_014_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_014_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_014_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_014_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_014_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_014_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_014_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_014_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_014_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_014_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_014_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_014_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_014_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_014_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_014_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_016_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_016_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_016_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_016_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_016_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_016_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_016_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_016_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_016_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_016_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_016_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_016_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_016_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_016_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_016_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_016_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_016_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_016_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_016_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_016_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_016_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_016_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_016_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_016_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_016_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_016_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_016_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_016_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_016_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_016_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_016_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_016_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_016_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_016_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_016_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_016_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_016_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_016_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_016_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_016_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_016_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_016_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_016_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_016_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_016_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_016_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_016_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_016_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_016_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_016_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_016_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_016_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_016_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_016_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_016_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_016_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_016_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_017_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_017_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_017_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_017_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_017_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_017_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_017_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_017_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_017_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_017_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_017_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_017_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_017_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_017_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_017_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_017_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_017_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_017_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_017_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_017_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_017_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_017_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_017_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_017_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_017_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_017_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_017_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_017_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_017_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_017_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_017_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1011 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_017_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_017_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_017_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_017_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_017_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};

struct IVROverlay_IVROverlay_017_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_017_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_017_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *vCenter;
    float fRadius;
};

struct IVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};

struct IVROverlay_IVROverlay_017_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_017_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_017_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_017_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_017_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_017_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_017_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_017_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_017_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_017_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_017_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_017_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_017_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_017_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_017_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_017_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_017_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_017_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_018_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_018_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_018_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_018_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_018_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_018_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_018_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_018_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_018_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_018_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_018_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_018_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_018_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_018_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_018_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_018_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_018_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_018_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_018_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_018_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_018_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_018_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_018_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_018_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_018_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_018_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_018_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_018_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_018_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_018_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_018_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1016 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_018_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_018_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_018_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_018_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_018_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_018_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_018_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_018_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *vCenter;
    float fRadius;
};

struct IVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};

struct IVROverlay_IVROverlay_018_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_018_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_018_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_018_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_018_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_018_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_018_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_018_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_018_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_018_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_018_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_018_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_018_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_018_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_018_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_018_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_018_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_018_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_019_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_019_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_019_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_019_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_019_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_019_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_019_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_019_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_019_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_019_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_019_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_019_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_019_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_019_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_019_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_019_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_019_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_019_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_019_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_019_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_019_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_019_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_019_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_019_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_019_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_019_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_019_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_019_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_019_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_019_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_019_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_019_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_019_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_019_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_019_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_019_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_019_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_019_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_019_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};

struct IVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};

struct IVROverlay_IVROverlay_019_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_019_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_019_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_019_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_019_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_019_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_019_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_019_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_019_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_019_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_019_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_019_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_019_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_019_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_019_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_019_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_019_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_019_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_020_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_020_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_020_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_020_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_020_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_020_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_020_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_020_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_020_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_020_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_020_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_020_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_020_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_020_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_020_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_020_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_020_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_020_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_020_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};

struct IVROverlay_IVROverlay_020_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_020_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_020_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_020_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_020_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_020_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_020_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_020_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_020_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_020_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_020_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_020_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_020_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_020_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_020_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_020_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_020_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};

struct IVROverlay_IVROverlay_020_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};

struct IVROverlay_IVROverlay_020_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};

struct IVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};

struct IVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};

struct IVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};

struct IVROverlay_IVROverlay_020_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_020_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_020_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_020_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_020_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_020_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_020_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_020_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_020_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_020_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_020_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_020_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_020_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_020_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_020_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_020_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_020_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_020_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_021_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_021_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_021_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_021_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_021_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_021_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_021_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_021_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_021_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_021_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_021_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_021_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_021_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_021_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_021_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_021_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_021_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_021_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_021_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_021_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};

struct IVROverlay_IVROverlay_021_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};

struct IVROverlay_IVROverlay_021_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_021_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_021_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_021_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_021_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_021_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_021_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_021_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_021_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_021_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_021_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_021_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_021_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_021_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_021_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_021_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_021_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};

struct IVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};

struct IVROverlay_IVROverlay_021_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_021_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};

struct IVROverlay_IVROverlay_021_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_021_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_021_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_021_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_021_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_021_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_021_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_021_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_021_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_021_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_021_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_021_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_021_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_021_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_021_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_021_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_022_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_022_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_022_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_022_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_022_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_022_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_022_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_022_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_022_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_022_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_022_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_022_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_022_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_022_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_022_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_022_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_022_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_022_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_022_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_022_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_022_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};

struct IVROverlay_IVROverlay_022_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};

struct IVROverlay_IVROverlay_022_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_022_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_022_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_022_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_022_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_022_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};

struct IVROverlay_IVROverlay_022_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_022_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_022_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_022_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_022_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_022_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_022_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_022_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_022_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_022_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_022_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_022_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_022_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};

struct IVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};

struct IVROverlay_IVROverlay_022_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};

struct IVROverlay_IVROverlay_022_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};

struct IVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};

struct IVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_022_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};

struct IVROverlay_IVROverlay_022_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_022_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_022_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_022_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_022_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_022_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_022_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_022_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_022_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_022_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    int8_t bUseMinimalMode;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_022_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_022_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_022_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_022_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_024_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_024_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_024_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_024_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_024_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_024_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_024_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_024_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_024_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_024_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_024_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_024_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_024_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_024_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_024_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_024_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_024_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_024_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_024_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_024_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_024_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};

struct IVROverlay_IVROverlay_024_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};

struct IVROverlay_IVROverlay_024_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_024_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_024_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_024_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_024_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_024_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_024_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_024_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_024_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_024_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_024_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_11030 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_024_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_024_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_024_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_024_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_024_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_024_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};

struct IVROverlay_IVROverlay_024_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};

struct IVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};

struct IVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_024_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};

struct IVROverlay_IVROverlay_024_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_024_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_024_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_024_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_024_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_024_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_024_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_024_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_024_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_024_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_024_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_024_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_024_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_024_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_025_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_025_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_025_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_025_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_025_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_025_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_025_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_025_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_025_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_025_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_025_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_025_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_025_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_025_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_025_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_025_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_025_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_025_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_025_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_025_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_025_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};

struct IVROverlay_IVROverlay_025_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};

struct IVROverlay_IVROverlay_025_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_025_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_025_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_025_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_025_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_025_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_025_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_025_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_025_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_025_SetOverlayTransformProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
    const VROverlayProjection_t *pProjection;
    uint32_t eEye;
};

struct IVROverlay_IVROverlay_025_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_025_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_025_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_025_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_025_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_025_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_025_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_025_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};

struct IVROverlay_IVROverlay_025_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};

struct IVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};

struct IVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_025_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};

struct IVROverlay_IVROverlay_025_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_025_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_025_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_025_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_025_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_025_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_025_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_025_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_025_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_025_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_025_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_025_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_025_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_025_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_026_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_026_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_026_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_026_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_026_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_026_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_026_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_026_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_026_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_026_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_026_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_026_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_026_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_026_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_026_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_026_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_026_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_026_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_026_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_026_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_026_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};

struct IVROverlay_IVROverlay_026_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};

struct IVROverlay_IVROverlay_026_SetOverlayPreCurvePitch_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRadians;
};

struct IVROverlay_IVROverlay_026_GetOverlayPreCurvePitch_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRadians;
};

struct IVROverlay_IVROverlay_026_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_026_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_026_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_026_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_026_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_026_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_026_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};

struct IVROverlay_IVROverlay_026_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_026_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_026_SetOverlayTransformProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
    const VROverlayProjection_t *pProjection;
    uint32_t eEye;
};

struct IVROverlay_IVROverlay_026_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_026_WaitFrameSync_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nTimeoutMs;
};

struct IVROverlay_IVROverlay_026_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_026_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_026_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_026_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_026_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_026_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_026_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};

struct IVROverlay_IVROverlay_026_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};

struct IVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};

struct IVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_026_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};

struct IVROverlay_IVROverlay_026_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_026_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_026_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_026_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_026_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_026_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_026_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_026_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_026_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_026_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_026_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_026_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_026_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_026_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_027_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_027_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};

struct IVROverlay_IVROverlay_027_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_027_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVROverlay_IVROverlay_027_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};

struct IVROverlay_IVROverlay_027_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};

struct IVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVROverlay_IVROverlay_027_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};

struct IVROverlay_IVROverlay_027_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t bEnabled;
};

struct IVROverlay_IVROverlay_027_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    int8_t *pbEnabled;
};

struct IVROverlay_IVROverlay_027_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};

struct IVROverlay_IVROverlay_027_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};

struct IVROverlay_IVROverlay_027_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};

struct IVROverlay_IVROverlay_027_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};

struct IVROverlay_IVROverlay_027_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};

struct IVROverlay_IVROverlay_027_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};

struct IVROverlay_IVROverlay_027_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};

struct IVROverlay_IVROverlay_027_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};

struct IVROverlay_IVROverlay_027_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};

struct IVROverlay_IVROverlay_027_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};

struct IVROverlay_IVROverlay_027_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};

struct IVROverlay_IVROverlay_027_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};

struct IVROverlay_IVROverlay_027_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};

struct IVROverlay_IVROverlay_027_SetOverlayPreCurvePitch_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRadians;
};

struct IVROverlay_IVROverlay_027_GetOverlayPreCurvePitch_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRadians;
};

struct IVROverlay_IVROverlay_027_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};

struct IVROverlay_IVROverlay_027_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};

struct IVROverlay_IVROverlay_027_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_027_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};

struct IVROverlay_IVROverlay_027_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};

struct IVROverlay_IVROverlay_027_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_027_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};

struct IVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};

struct IVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};

struct IVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};

struct IVROverlay_IVROverlay_027_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_027_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};

struct IVROverlay_IVROverlay_027_SetOverlayTransformProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
    const VROverlayProjection_t *pProjection;
    uint32_t eEye;
};

struct IVROverlay_IVROverlay_027_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_IsOverlayVisible_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};

struct IVROverlay_IVROverlay_027_WaitFrameSync_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nTimeoutMs;
};

struct IVROverlay_IVROverlay_027_PollNextOverlayEvent_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
};

struct IVROverlay_IVROverlay_027_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};

struct IVROverlay_IVROverlay_027_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};

struct IVROverlay_IVROverlay_027_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_027_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};

struct IVROverlay_IVROverlay_027_ComputeOverlayIntersection_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};

struct IVROverlay_IVROverlay_027_IsHoverTargetOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};

struct IVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};

struct IVROverlay_IVROverlay_027_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};

struct IVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};

struct IVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};

struct IVROverlay_IVROverlay_027_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};

struct IVROverlay_IVROverlay_027_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};

struct IVROverlay_IVROverlay_027_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};

struct IVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};

struct IVROverlay_IVROverlay_027_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVROverlay_IVROverlay_027_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};

struct IVROverlay_IVROverlay_027_IsDashboardVisible_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVROverlay_IVROverlay_027_IsActiveDashboardOverlay_params
{
    void *linux_side;
    int8_t _ret;
    uint64_t ulOverlayHandle;
};

struct IVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};

struct IVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};

struct IVROverlay_IVROverlay_027_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};

struct IVROverlay_IVROverlay_027_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVROverlay_IVROverlay_027_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_027_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};

struct IVROverlay_IVROverlay_027_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};

struct IVROverlay_IVROverlay_027_HideKeyboard_params
{
    void *linux_side;
};

struct IVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};

struct IVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};

struct IVROverlay_IVROverlay_027_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};

struct IVROverlay_IVROverlay_027_CloseMessageOverlay_params
{
    void *linux_side;
};

struct IVRRenderModels_IVRRenderModels_001_LoadRenderModel_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_090 *pRenderModel;
};

struct IVRRenderModels_IVRRenderModels_001_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_090 *pRenderModel;
};

struct IVRRenderModels_IVRRenderModels_001_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRRenderModels_IVRRenderModels_002_LoadRenderModel_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_0912 **ppRenderModel;
};

struct IVRRenderModels_IVRRenderModels_002_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_0912 *pRenderModel;
};

struct IVRRenderModels_IVRRenderModels_002_LoadTexture_params
{
    void *linux_side;
    int8_t _ret;
    int32_t textureId;
    w_RenderModel_TextureMap_t_090 **ppTexture;
};

struct IVRRenderModels_IVRRenderModels_002_FreeTexture_params
{
    void *linux_side;
    w_RenderModel_TextureMap_t_090 *pTexture;
};

struct IVRRenderModels_IVRRenderModels_002_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRRenderModels_IVRRenderModels_002_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};

struct IVRRenderModels_IVRRenderModels_002_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};

struct IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_002_GetComponentState_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const w_VRControllerState001_t *pControllerState;
    RenderModel_ComponentState_t *pComponentState;
};

struct IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_0912 **ppRenderModel;
};

struct IVRRenderModels_IVRRenderModels_004_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_0912 *pRenderModel;
};

struct IVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    w_RenderModel_TextureMap_t_090 **ppTexture;
};

struct IVRRenderModels_IVRRenderModels_004_FreeTexture_params
{
    void *linux_side;
    w_RenderModel_TextureMap_t_090 *pTexture;
};

struct IVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pD3D11Device;
    void **ppD3D11Texture2D;
};

struct IVRRenderModels_IVRRenderModels_004_FreeTextureD3D11_params
{
    void *linux_side;
    void *pD3D11Texture2D;
};

struct IVRRenderModels_IVRRenderModels_004_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRRenderModels_IVRRenderModels_004_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};

struct IVRRenderModels_IVRRenderModels_004_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};

struct IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_004_GetComponentState_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const w_VRControllerState001_t *pControllerState;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};

struct IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_0912 **ppRenderModel;
};

struct IVRRenderModels_IVRRenderModels_005_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_0912 *pRenderModel;
};

struct IVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    w_RenderModel_TextureMap_t_090 **ppTexture;
};

struct IVRRenderModels_IVRRenderModels_005_FreeTexture_params
{
    void *linux_side;
    w_RenderModel_TextureMap_t_090 *pTexture;
};

struct IVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pD3D11Device;
    void **ppD3D11Texture2D;
};

struct IVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pDstTexture;
};

struct IVRRenderModels_IVRRenderModels_005_FreeTextureD3D11_params
{
    void *linux_side;
    void *pD3D11Texture2D;
};

struct IVRRenderModels_IVRRenderModels_005_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRRenderModels_IVRRenderModels_005_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};

struct IVRRenderModels_IVRRenderModels_005_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};

struct IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_005_GetComponentState_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const w_VRControllerState001_t *pControllerState;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};

struct IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchThumbnailURL;
    uint32_t unThumbnailURLLen;
    uint32_t *peError;
};

struct IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchOriginalPath;
    uint32_t unOriginalPathLen;
    uint32_t *peError;
};

struct IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_0912 **ppRenderModel;
};

struct IVRRenderModels_IVRRenderModels_006_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_0912 *pRenderModel;
};

struct IVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    w_RenderModel_TextureMap_t_1237 **ppTexture;
};

struct IVRRenderModels_IVRRenderModels_006_FreeTexture_params
{
    void *linux_side;
    w_RenderModel_TextureMap_t_1237 *pTexture;
};

struct IVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pD3D11Device;
    void **ppD3D11Texture2D;
};

struct IVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pDstTexture;
};

struct IVRRenderModels_IVRRenderModels_006_FreeTextureD3D11_params
{
    void *linux_side;
    void *pD3D11Texture2D;
};

struct IVRRenderModels_IVRRenderModels_006_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_006_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};

struct IVRRenderModels_IVRRenderModels_006_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};

struct IVRRenderModels_IVRRenderModels_006_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};

struct IVRRenderModels_IVRRenderModels_006_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};

struct IVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    uint64_t devicePath;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};

struct IVRRenderModels_IVRRenderModels_006_GetComponentState_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const w_VRControllerState001_t *pControllerState;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};

struct IVRRenderModels_IVRRenderModels_006_RenderModelHasComponent_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};

struct IVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchThumbnailURL;
    uint32_t unThumbnailURLLen;
    uint32_t *peError;
};

struct IVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchOriginalPath;
    uint32_t unOriginalPathLen;
    uint32_t *peError;
};

struct IVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRResources_IVRResources_001_LoadSharedResource_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchResourceName;
    char *pchBuffer;
    uint32_t unBufferLen;
};

struct IVRResources_IVRResources_001_GetResourceFullPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchResourceName;
    const char *pchResourceTypeDirectory;
    char *pchPathBuffer;
    uint32_t unBufferLen;
};

struct IVRScreenshots_IVRScreenshots_001_RequestScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pOutScreenshotHandle;
    uint32_t type;
    const char *pchPreviewFilename;
    const char *pchVRFilename;
};

struct IVRScreenshots_IVRScreenshots_001_HookScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pSupportedTypes;
    int32_t numTypes;
};

struct IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t screenshotHandle;
    uint32_t *pError;
};

struct IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t screenshotHandle;
    uint32_t filenameType;
    char *pchFilename;
    uint32_t cchFilename;
    uint32_t *pError;
};

struct IVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t screenshotHandle;
    float flProgress;
};

struct IVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pOutScreenshotHandle;
    const char *pchPreviewFilename;
    const char *pchVRFilename;
};

struct IVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t screenshotHandle;
    uint32_t type;
    const char *pchSourcePreviewFilename;
    const char *pchSourceVRFilename;
};

struct IVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRSettings_IVRSettings_001_Sync_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bForce;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_GetBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    int8_t bDefaultValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_SetBool_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int8_t bValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_GetInt32_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nDefaultValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_SetInt32_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_GetFloat_params
{
    void *linux_side;
    float _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    float flDefaultValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_SetFloat_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    float flValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_GetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    char *pchValue;
    uint32_t unValueLen;
    const char *pchDefaultValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_SetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    const char *pchValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_RemoveSection_params
{
    void *linux_side;
    const char *pchSection;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_001_RemoveKeyInSection_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRSettings_IVRSettings_002_Sync_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bForce;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_SetBool_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int8_t bValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_SetInt32_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_SetFloat_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    float flValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_SetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    const char *pchValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_GetBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_GetInt32_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_GetFloat_params
{
    void *linux_side;
    float _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_GetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    char *pchValue;
    uint32_t unValueLen;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_RemoveSection_params
{
    void *linux_side;
    const char *pchSection;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_002_RemoveKeyInSection_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};

struct IVRSettings_IVRSettings_003_SetBool_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int8_t bValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_SetInt32_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_SetFloat_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    float flValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_SetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    const char *pchValue;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_GetBool_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_GetInt32_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_GetFloat_params
{
    void *linux_side;
    float _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_GetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    char *pchValue;
    uint32_t unValueLen;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_RemoveSection_params
{
    void *linux_side;
    const char *pchSection;
    uint32_t *peError;
};

struct IVRSettings_IVRSettings_003_RemoveKeyInSection_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};

struct IVRSystem_IVRSystem_003_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_003_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_003_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_003_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_003_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_003_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_003_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};

struct IVRSystem_IVRSystem_003_AttachToWindow_params
{
    void *linux_side;
    int8_t _ret;
    void *hWnd;
};

struct IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_003_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_003_LoadRenderModel_params
{
    void *linux_side;
    int8_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_090 *pRenderModel;
};

struct IVRSystem_IVRSystem_003_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_090 *pRenderModel;
};

struct IVRSystem_IVRSystem_003_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_003_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_090 *pEvent;
};

struct IVRSystem_IVRSystem_003_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_090 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_003_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_003_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_003_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_003_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    int8_t _ret;
    const Compositor_OverlaySettings *overlaySettings;
    HmdVector2_t vecWindowClientPositionOnScreen;
    HmdVector2_t vecWindowClientSize;
    uint32_t unControllerDeviceIndex;
    uint32_t eOutputType;
};

struct IVRSystem_IVRSystem_003_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_003_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_004_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_004_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_004_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_004_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_004_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_004_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_004_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_004_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_004_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};

struct IVRSystem_IVRSystem_004_AttachToWindow_params
{
    void *linux_side;
    int8_t _ret;
    void *hWnd;
};

struct IVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_004_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_004_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_004_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_004_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_004_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_092 *pEvent;
};

struct IVRSystem_IVRSystem_004_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_092 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_004_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_004_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_004_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_004_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_004_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_004_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_004_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_004_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_004_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_005_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_005_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_005_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_005_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_005_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_005_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_005_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};

struct IVRSystem_IVRSystem_005_AttachToWindow_params
{
    void *linux_side;
    int8_t _ret;
    void *hWnd;
};

struct IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_005_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_005_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_005_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_097 *pEvent;
};

struct IVRSystem_IVRSystem_005_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_097 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_005_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_005_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_005_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_005_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_005_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_005_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_005_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_006_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_006_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_006_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_006_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_006_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_006_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_006_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_006_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_006_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};

struct IVRSystem_IVRSystem_006_AttachToWindow_params
{
    void *linux_side;
    int8_t _ret;
    void *hWnd;
};

struct IVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_006_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_006_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_006_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_006_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_006_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_0910 *pEvent;
};

struct IVRSystem_IVRSystem_006_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_0910 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_006_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_006_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_006_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_006_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_006_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_006_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_006_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_006_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_006_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_006_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_006_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_006_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_009_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_009_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_009_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_009_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_009_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_009_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_009_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_009_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_009_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_009_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_009_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_009_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_009_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_009_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_0912 *pEvent;
};

struct IVRSystem_IVRSystem_009_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_0912 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_009_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_009_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_009_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_009_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_009_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_009_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_009_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_009_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_010_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_010_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_010_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_010_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_010_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_010_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_010_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_010_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_010_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_010_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_010_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_010_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_010_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_010_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_010_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_0914 *pEvent;
};

struct IVRSystem_IVRSystem_010_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_0914 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_010_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_010_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_010_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_010_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_010_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_010_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_010_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_010_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_010_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_010_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_010_PerformanceTestEnableCapture_params
{
    void *linux_side;
    int8_t bEnable;
};

struct IVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange_params
{
    void *linux_side;
    int32_t nFidelityLevel;
};

struct IVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_011_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_011_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_011_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_011_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_011_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_011_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_011_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_011_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_011_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_011_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_011_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_011_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_011_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_011_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_011_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_011_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_011_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_011_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_011_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_011_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_011_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_011_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_011_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_011_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_011_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_011_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_011_PerformanceTestEnableCapture_params
{
    void *linux_side;
    int8_t bEnable;
};

struct IVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange_params
{
    void *linux_side;
    int32_t nFidelityLevel;
};

struct IVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_012_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_012_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_012_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};

struct IVRSystem_IVRSystem_012_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_012_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_012_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_012_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_012_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_012_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_012_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_012_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_012_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_012_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_012_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_012_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_103 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_012_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_103 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_012_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_012_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_012_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
};

struct IVRSystem_IVRSystem_012_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_012_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_012_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_012_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_012_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_012_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_012_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_014_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};

struct IVRSystem_IVRSystem_014_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_014_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_014_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_014_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_014_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_014_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_014_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_014_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_014_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_014_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_014_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_014_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_014_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_014_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_103 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_014_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_103 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_014_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_014_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_014_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_014_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_014_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_014_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_014_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_014_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_014_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_014_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_015_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_015_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_015_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_015_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_015_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_015_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_015_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_015_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_015_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_015_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_015_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_015_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_015_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_015_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_015_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_015_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_015_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_015_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_015_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_015_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_015_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_015_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_015_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_015_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_015_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_015_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_016_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_016_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_016_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_016_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_016_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_016_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_016_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_016_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
};

struct IVRSystem_IVRSystem_016_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_016_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_016_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_016_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_016_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_016_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_016_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_016_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_016_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_016_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_016_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_016_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_016_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_016_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_016_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_016_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_016_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_016_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_016_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_017_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_017_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_017_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_017_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_017_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_017_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_017_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_017_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};

struct IVRSystem_IVRSystem_017_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_017_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_017_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_017_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_017_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_017_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_017_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_017_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_1011 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_017_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_1011 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_017_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_017_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_017_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_017_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_017_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_017_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_017_CaptureInputFocus_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_017_ReleaseInputFocus_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_017_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_017_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_019_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_019_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_019_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_019_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_019_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_019_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_019_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_019_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};

struct IVRSystem_IVRSystem_019_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_019_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_019_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_019_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_019_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_019_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t propType;
    void *pBuffer;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_019_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_019_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_019_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_019_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_019_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_019_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_019_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_019_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_019_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_019_IsInputAvailable_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_019_IsSteamVRDrawingControllers_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_019_ShouldApplicationPause_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_019_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};

struct IVRSystem_IVRSystem_019_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_020_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_020_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_020_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_020_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_020_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_020_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_020_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_020_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};

struct IVRSystem_IVRSystem_020_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_020_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_020_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_020_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_020_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_020_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t propType;
    void *pBuffer;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_020_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_020_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_020_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_020_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_020_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_020_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_020_IsInputAvailable_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_020_ShouldApplicationPause_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_020_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_020_GetAppContainerFilePaths_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRSystem_IVRSystem_020_GetRuntimeVersion_params
{
    void *linux_side;
    const char *_ret;
};

struct IVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_021_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_021_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_021_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_021_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_021_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_021_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_021_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_021_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};

struct IVRSystem_IVRSystem_021_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_021_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_021_ResetSeatedZeroPose_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_021_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_021_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_021_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t propType;
    void *pBuffer;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_021_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_021_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_11030 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_021_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_11030 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_021_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_021_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_021_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_021_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_021_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_021_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_021_IsInputAvailable_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_021_IsSteamVRDrawingControllers_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_021_ShouldApplicationPause_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_021_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_021_GetAppContainerFilePaths_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRSystem_IVRSystem_021_GetRuntimeVersion_params
{
    void *linux_side;
    const char *_ret;
};

struct IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRSystem_IVRSystem_022_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};

struct IVRSystem_IVRSystem_022_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};

struct IVRSystem_IVRSystem_022_ComputeDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};

struct IVRSystem_IVRSystem_022_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};

struct IVRSystem_IVRSystem_022_GetTimeSinceLastVsync_params
{
    void *linux_side;
    int8_t _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};

struct IVRSystem_IVRSystem_022_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};

struct IVRSystem_IVRSystem_022_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};

struct IVRSystem_IVRSystem_022_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};

struct IVRSystem_IVRSystem_022_IsDisplayOnDesktop_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_022_SetDisplayVisibility_params
{
    void *linux_side;
    int8_t _ret;
    int8_t bIsVisibleOnDesktop;
};

struct IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};

struct IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};

struct IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};

struct IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};

struct IVRSystem_IVRSystem_022_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};

struct IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};

struct IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_022_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_022_IsTrackedDeviceConnected_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t propType;
    void *pBuffer;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};

struct IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};

struct IVRSystem_IVRSystem_022_PollNextEvent_params
{
    void *linux_side;
    int8_t _ret;
    w_VREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
};

struct IVRSystem_IVRSystem_022_PollNextEventWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    w_VREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};

struct IVRSystem_IVRSystem_022_GetHiddenAreaMesh_params
{
    void *linux_side;
    w_HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};

struct IVRSystem_IVRSystem_022_GetControllerState_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
};

struct IVRSystem_IVRSystem_022_GetControllerStateWithPose_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    w_VRControllerState001_t *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};

struct IVRSystem_IVRSystem_022_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};

struct IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};

struct IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};

struct IVRSystem_IVRSystem_022_IsInputAvailable_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_022_ShouldApplicationPause_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork_params
{
    void *linux_side;
    int8_t _ret;
};

struct IVRSystem_IVRSystem_022_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};

struct IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};

struct IVRSystem_IVRSystem_022_GetAppContainerFilePaths_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};

struct IVRSystem_IVRSystem_022_GetRuntimeVersion_params
{
    void *linux_side;
    const char *_ret;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    char *pBuffer;
    uint32_t nBufferLen;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nVideoStreamFormat;
    uint32_t *pWidth;
    uint32_t *pHeight;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nVideoStreamFormat;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    int8_t bEnable;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params
{
    void *linux_side;
    float _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params
{
    void *linux_side;
    const w_CameraVideoStreamFrame_t_0914 *_ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    const w_CameraVideoStreamFrame_t_0914 *pFrameImage;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    int8_t bEnable;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    float flInputU;
    float flInputV;
    float *pflOutputU;
    float *pflOutputV;
};

struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params
{
    void *linux_side;
    int8_t _ret;
    uint32_t nDeviceIndex;
    float flWidthPixels;
    float flHeightPixels;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eCameraError;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    int8_t *pHasCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    void **pHandle;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    void *hTrackedCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    uint32_t _ret;
    void *hTrackedCamera;
    uint32_t eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eCameraError;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_HasCamera_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    int8_t *pHasCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint64_t *pHandle;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    VRTextureBounds_t *pTextureBounds;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
    w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    uint32_t *pglTextureId;
    w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t glTextureId;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eCameraError;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_HasCamera_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    int8_t *pHasCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint64_t *pHandle;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    VRTextureBounds_t *pTextureBounds;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    uint32_t *pglTextureId;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t glTextureId;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eCameraError;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_HasCamera_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    int8_t *pHasCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nCameraIndex;
    uint32_t eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nCameraIndex;
    uint32_t eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint64_t *pHandle;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    VRTextureBounds_t *pTextureBounds;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    uint32_t *pglTextureId;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t glTextureId;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eCameraError;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_HasCamera_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    int8_t *pHasCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nCameraIndex;
    uint32_t eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nCameraIndex;
    uint32_t eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint64_t *pHandle;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    VRTextureBounds_t *pTextureBounds;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    uint32_t *pglTextureId;
    w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t glTextureId;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace_params
{
    void *linux_side;
    uint32_t eUniverse;
};

struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};

#include <poppack.h>

enum unix_funcs
{
    unix_vrclient_init,
    unix_vrclient_HmdSystemFactory,
    unix_vrclient_VRClientCoreFactory,
    unix_IVRApplications_IVRApplications_001_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_001_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_001_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_001_GetApplicationCount,
    unix_IVRApplications_IVRApplications_001_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_001_LaunchApplication,
    unix_IVRApplications_IVRApplications_001_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_001_IdentifyApplication,
    unix_IVRApplications_IVRApplications_001_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_001_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_001_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_001_GetHomeApplication,
    unix_IVRApplications_IVRApplications_001_SetHomeApplication,
    unix_IVRApplications_IVRApplications_001_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_001_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_001_GetStartingApplication,
    unix_IVRApplications_IVRApplications_001_GetTransitionState,
    unix_IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum,
    unix_IVRApplications_IVRApplications_002_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_002_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_002_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_002_GetApplicationCount,
    unix_IVRApplications_IVRApplications_002_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_002_LaunchApplication,
    unix_IVRApplications_IVRApplications_002_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_002_IdentifyApplication,
    unix_IVRApplications_IVRApplications_002_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_002_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_002_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_002_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_002_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_002_GetStartingApplication,
    unix_IVRApplications_IVRApplications_002_GetTransitionState,
    unix_IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum,
    unix_IVRApplications_IVRApplications_002_IsQuitUserPromptRequested,
    unix_IVRApplications_IVRApplications_003_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_003_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_003_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_003_GetApplicationCount,
    unix_IVRApplications_IVRApplications_003_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_003_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_003_LaunchApplication,
    unix_IVRApplications_IVRApplications_003_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_003_IdentifyApplication,
    unix_IVRApplications_IVRApplications_003_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_003_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_003_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_003_GetApplicationPropertyUint64,
    unix_IVRApplications_IVRApplications_003_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_003_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_003_GetStartingApplication,
    unix_IVRApplications_IVRApplications_003_GetTransitionState,
    unix_IVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum,
    unix_IVRApplications_IVRApplications_003_IsQuitUserPromptRequested,
    unix_IVRApplications_IVRApplications_004_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_004_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_004_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_004_GetApplicationCount,
    unix_IVRApplications_IVRApplications_004_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_004_LaunchApplication,
    unix_IVRApplications_IVRApplications_004_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_004_CancelApplicationLaunch,
    unix_IVRApplications_IVRApplications_004_IdentifyApplication,
    unix_IVRApplications_IVRApplications_004_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_004_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_004_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_004_GetApplicationPropertyUint64,
    unix_IVRApplications_IVRApplications_004_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_004_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_004_GetStartingApplication,
    unix_IVRApplications_IVRApplications_004_GetTransitionState,
    unix_IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum,
    unix_IVRApplications_IVRApplications_004_IsQuitUserPromptRequested,
    unix_IVRApplications_IVRApplications_004_LaunchInternalProcess,
    unix_IVRApplications_IVRApplications_005_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_005_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_005_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_005_GetApplicationCount,
    unix_IVRApplications_IVRApplications_005_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_005_LaunchApplication,
    unix_IVRApplications_IVRApplications_005_LaunchTemplateApplication,
    unix_IVRApplications_IVRApplications_005_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_005_CancelApplicationLaunch,
    unix_IVRApplications_IVRApplications_005_IdentifyApplication,
    unix_IVRApplications_IVRApplications_005_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_005_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_005_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_005_GetApplicationPropertyUint64,
    unix_IVRApplications_IVRApplications_005_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_005_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_005_GetStartingApplication,
    unix_IVRApplications_IVRApplications_005_GetTransitionState,
    unix_IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum,
    unix_IVRApplications_IVRApplications_005_IsQuitUserPromptRequested,
    unix_IVRApplications_IVRApplications_005_LaunchInternalProcess,
    unix_IVRApplications_IVRApplications_006_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_006_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_006_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_006_GetApplicationCount,
    unix_IVRApplications_IVRApplications_006_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_006_LaunchApplication,
    unix_IVRApplications_IVRApplications_006_LaunchTemplateApplication,
    unix_IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType,
    unix_IVRApplications_IVRApplications_006_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_006_CancelApplicationLaunch,
    unix_IVRApplications_IVRApplications_006_IdentifyApplication,
    unix_IVRApplications_IVRApplications_006_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_006_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_006_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_006_GetApplicationPropertyUint64,
    unix_IVRApplications_IVRApplications_006_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_006_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType,
    unix_IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType,
    unix_IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes,
    unix_IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType,
    unix_IVRApplications_IVRApplications_006_GetApplicationLaunchArguments,
    unix_IVRApplications_IVRApplications_006_GetStartingApplication,
    unix_IVRApplications_IVRApplications_006_GetTransitionState,
    unix_IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum,
    unix_IVRApplications_IVRApplications_006_IsQuitUserPromptRequested,
    unix_IVRApplications_IVRApplications_006_LaunchInternalProcess,
    unix_IVRApplications_IVRApplications_006_GetCurrentSceneProcessId,
    unix_IVRApplications_IVRApplications_007_AddApplicationManifest,
    unix_IVRApplications_IVRApplications_007_RemoveApplicationManifest,
    unix_IVRApplications_IVRApplications_007_IsApplicationInstalled,
    unix_IVRApplications_IVRApplications_007_GetApplicationCount,
    unix_IVRApplications_IVRApplications_007_GetApplicationKeyByIndex,
    unix_IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId,
    unix_IVRApplications_IVRApplications_007_LaunchApplication,
    unix_IVRApplications_IVRApplications_007_LaunchTemplateApplication,
    unix_IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType,
    unix_IVRApplications_IVRApplications_007_LaunchDashboardOverlay,
    unix_IVRApplications_IVRApplications_007_CancelApplicationLaunch,
    unix_IVRApplications_IVRApplications_007_IdentifyApplication,
    unix_IVRApplications_IVRApplications_007_GetApplicationProcessId,
    unix_IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum,
    unix_IVRApplications_IVRApplications_007_GetApplicationPropertyString,
    unix_IVRApplications_IVRApplications_007_GetApplicationPropertyBool,
    unix_IVRApplications_IVRApplications_007_GetApplicationPropertyUint64,
    unix_IVRApplications_IVRApplications_007_SetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_007_GetApplicationAutoLaunch,
    unix_IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType,
    unix_IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType,
    unix_IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes,
    unix_IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType,
    unix_IVRApplications_IVRApplications_007_GetApplicationLaunchArguments,
    unix_IVRApplications_IVRApplications_007_GetStartingApplication,
    unix_IVRApplications_IVRApplications_007_GetSceneApplicationState,
    unix_IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck,
    unix_IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum,
    unix_IVRApplications_IVRApplications_007_LaunchInternalProcess,
    unix_IVRApplications_IVRApplications_007_GetCurrentSceneProcessId,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview,
    unix_IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting,
    unix_IVRChaperone_IVRChaperone_002_GetCalibrationState,
    unix_IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo,
    unix_IVRChaperone_IVRChaperone_002_GetHardBoundsInfo,
    unix_IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo,
    unix_IVRChaperone_IVRChaperone_002_ReloadInfo,
    unix_IVRChaperone_IVRChaperone_002_SetSceneColor,
    unix_IVRChaperone_IVRChaperone_002_GetBoundsColor,
    unix_IVRChaperone_IVRChaperone_002_AreBoundsVisible,
    unix_IVRChaperone_IVRChaperone_002_ForceBoundsVisible,
    unix_IVRChaperone_IVRChaperone_003_GetCalibrationState,
    unix_IVRChaperone_IVRChaperone_003_GetPlayAreaSize,
    unix_IVRChaperone_IVRChaperone_003_GetPlayAreaRect,
    unix_IVRChaperone_IVRChaperone_003_ReloadInfo,
    unix_IVRChaperone_IVRChaperone_003_SetSceneColor,
    unix_IVRChaperone_IVRChaperone_003_GetBoundsColor,
    unix_IVRChaperone_IVRChaperone_003_AreBoundsVisible,
    unix_IVRChaperone_IVRChaperone_003_ForceBoundsVisible,
    unix_IVRChaperone_IVRChaperone_004_GetCalibrationState,
    unix_IVRChaperone_IVRChaperone_004_GetPlayAreaSize,
    unix_IVRChaperone_IVRChaperone_004_GetPlayAreaRect,
    unix_IVRChaperone_IVRChaperone_004_ReloadInfo,
    unix_IVRChaperone_IVRChaperone_004_SetSceneColor,
    unix_IVRChaperone_IVRChaperone_004_GetBoundsColor,
    unix_IVRChaperone_IVRChaperone_004_AreBoundsVisible,
    unix_IVRChaperone_IVRChaperone_004_ForceBoundsVisible,
    unix_IVRChaperone_IVRChaperone_004_ResetZeroPose,
    unix_IVRClientCore_IVRClientCore_002_Init,
    unix_IVRClientCore_IVRClientCore_002_Cleanup,
    unix_IVRClientCore_IVRClientCore_002_IsInterfaceVersionValid,
    unix_IVRClientCore_IVRClientCore_002_GetGenericInterface,
    unix_IVRClientCore_IVRClientCore_002_BIsHmdPresent,
    unix_IVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError,
    unix_IVRClientCore_IVRClientCore_002_GetIDForVRInitError,
    unix_IVRClientCore_IVRClientCore_003_Init,
    unix_IVRClientCore_IVRClientCore_003_Cleanup,
    unix_IVRClientCore_IVRClientCore_003_IsInterfaceVersionValid,
    unix_IVRClientCore_IVRClientCore_003_GetGenericInterface,
    unix_IVRClientCore_IVRClientCore_003_BIsHmdPresent,
    unix_IVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError,
    unix_IVRClientCore_IVRClientCore_003_GetIDForVRInitError,
    unix_IVRCompositor_IVRCompositor_005_GetLastError,
    unix_IVRCompositor_IVRCompositor_005_SetVSync,
    unix_IVRCompositor_IVRCompositor_005_GetVSync,
    unix_IVRCompositor_IVRCompositor_005_SetGamma,
    unix_IVRCompositor_IVRCompositor_005_GetGamma,
    unix_IVRCompositor_IVRCompositor_005_SetGraphicsDevice,
    unix_IVRCompositor_IVRCompositor_005_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_005_Submit,
    unix_IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_005_GetOverlayDefaults,
    unix_IVRCompositor_IVRCompositor_005_SetOverlay,
    unix_IVRCompositor_IVRCompositor_005_SetOverlayRaw,
    unix_IVRCompositor_IVRCompositor_005_SetOverlayFromFile,
    unix_IVRCompositor_IVRCompositor_005_ClearOverlay,
    unix_IVRCompositor_IVRCompositor_005_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_005_FadeToColor,
    unix_IVRCompositor_IVRCompositor_005_FadeGrid,
    unix_IVRCompositor_IVRCompositor_005_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_005_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_005_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_005_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection,
    unix_IVRCompositor_IVRCompositor_005_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_005_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_006_GetLastError,
    unix_IVRCompositor_IVRCompositor_006_SetVSync,
    unix_IVRCompositor_IVRCompositor_006_GetVSync,
    unix_IVRCompositor_IVRCompositor_006_SetGamma,
    unix_IVRCompositor_IVRCompositor_006_GetGamma,
    unix_IVRCompositor_IVRCompositor_006_SetGraphicsDevice,
    unix_IVRCompositor_IVRCompositor_006_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_006_Submit,
    unix_IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_006_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_006_FadeToColor,
    unix_IVRCompositor_IVRCompositor_006_FadeGrid,
    unix_IVRCompositor_IVRCompositor_006_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_006_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_006_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_006_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_006_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_006_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_006_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_007_GetLastError,
    unix_IVRCompositor_IVRCompositor_007_SetVSync,
    unix_IVRCompositor_IVRCompositor_007_GetVSync,
    unix_IVRCompositor_IVRCompositor_007_SetGamma,
    unix_IVRCompositor_IVRCompositor_007_GetGamma,
    unix_IVRCompositor_IVRCompositor_007_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_007_Submit,
    unix_IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_007_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_007_FadeToColor,
    unix_IVRCompositor_IVRCompositor_007_FadeGrid,
    unix_IVRCompositor_IVRCompositor_007_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_007_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_007_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_007_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_007_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_007_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_007_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_008_GetLastError,
    unix_IVRCompositor_IVRCompositor_008_SetVSync,
    unix_IVRCompositor_IVRCompositor_008_GetVSync,
    unix_IVRCompositor_IVRCompositor_008_SetGamma,
    unix_IVRCompositor_IVRCompositor_008_GetGamma,
    unix_IVRCompositor_IVRCompositor_008_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_008_Submit,
    unix_IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_008_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_008_FadeToColor,
    unix_IVRCompositor_IVRCompositor_008_FadeGrid,
    unix_IVRCompositor_IVRCompositor_008_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_008_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_008_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_008_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_008_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_008_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_008_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_008_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_008_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_008_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_008_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_008_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_008_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_009_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_009_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_009_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_009_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_009_Submit,
    unix_IVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_009_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_009_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_009_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_009_FadeToColor,
    unix_IVRCompositor_IVRCompositor_009_FadeGrid,
    unix_IVRCompositor_IVRCompositor_009_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_009_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_009_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_009_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_009_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_009_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_009_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_009_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_009_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_009_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_009_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_009_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_010_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_010_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_010_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_010_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_010_Submit,
    unix_IVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_010_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_010_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_010_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_010_FadeToColor,
    unix_IVRCompositor_IVRCompositor_010_FadeGrid,
    unix_IVRCompositor_IVRCompositor_010_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_010_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_010_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_010_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_010_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_010_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_010_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_010_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_010_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_010_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_010_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_010_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_011_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_011_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_011_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_011_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_011_Submit,
    unix_IVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_011_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_011_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_011_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_011_FadeToColor,
    unix_IVRCompositor_IVRCompositor_011_FadeGrid,
    unix_IVRCompositor_IVRCompositor_011_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_011_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_011_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_011_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_011_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_011_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_011_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_011_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_011_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_011_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_011_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_011_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_012_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_012_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_012_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_012_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_012_Submit,
    unix_IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_012_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_012_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_012_FadeToColor,
    unix_IVRCompositor_IVRCompositor_012_FadeGrid,
    unix_IVRCompositor_IVRCompositor_012_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_012_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_012_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_012_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_012_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_012_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_012_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_012_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_012_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_012_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_012_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_013_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_013_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_013_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_013_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_013_Submit,
    unix_IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_013_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_013_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_013_FadeToColor,
    unix_IVRCompositor_IVRCompositor_013_FadeGrid,
    unix_IVRCompositor_IVRCompositor_013_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_013_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_013_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_013_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_013_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_013_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_013_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_013_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_013_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_013_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_013_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_014_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_014_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_014_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_014_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_014_Submit,
    unix_IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_014_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_014_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_014_FadeToColor,
    unix_IVRCompositor_IVRCompositor_014_FadeGrid,
    unix_IVRCompositor_IVRCompositor_014_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_014_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_014_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_014_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_014_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_014_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_014_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_014_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_014_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_014_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_014_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_014_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_014_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_015_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_015_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_015_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_015_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_015_Submit,
    unix_IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_015_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_015_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_015_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_015_FadeToColor,
    unix_IVRCompositor_IVRCompositor_015_FadeGrid,
    unix_IVRCompositor_IVRCompositor_015_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_015_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_015_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_015_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_015_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_015_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_015_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_015_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_015_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_015_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_015_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_015_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_015_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_015_RequestScreenshot,
    unix_IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType,
    unix_IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_015_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_016_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_016_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_016_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_016_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_016_Submit,
    unix_IVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_016_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_016_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_016_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_016_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_016_FadeToColor,
    unix_IVRCompositor_IVRCompositor_016_FadeGrid,
    unix_IVRCompositor_IVRCompositor_016_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_016_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_016_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_016_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_016_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_016_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_016_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_016_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_016_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_016_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_016_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_016_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_016_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_016_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_016_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_017_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_017_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_017_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_017_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_017_Submit,
    unix_IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_017_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_017_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_017_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_017_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_017_FadeToColor,
    unix_IVRCompositor_IVRCompositor_017_FadeGrid,
    unix_IVRCompositor_IVRCompositor_017_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_017_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_017_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_017_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_017_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_017_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_017_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_017_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_017_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_017_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_017_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_017_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_017_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_017_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_018_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_018_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_018_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_018_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_018_Submit,
    unix_IVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_018_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_018_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_018_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_018_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_018_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_018_FadeToColor,
    unix_IVRCompositor_IVRCompositor_018_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_018_FadeGrid,
    unix_IVRCompositor_IVRCompositor_018_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_018_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_018_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_018_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_018_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_018_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_018_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_018_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_018_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_018_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_018_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_018_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_018_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_018_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_018_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_018_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_019_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_019_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_019_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_019_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_019_Submit,
    unix_IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_019_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_019_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_019_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_019_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_019_FadeToColor,
    unix_IVRCompositor_IVRCompositor_019_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_019_FadeGrid,
    unix_IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_019_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_019_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_019_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_019_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_019_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_019_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_019_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_019_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_019_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_019_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_019_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_019_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_019_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_019_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_020_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_020_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_020_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_020_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_020_Submit,
    unix_IVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_020_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_020_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_020_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_020_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_020_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_020_FadeToColor,
    unix_IVRCompositor_IVRCompositor_020_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_020_FadeGrid,
    unix_IVRCompositor_IVRCompositor_020_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_020_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_020_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_020_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_020_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_020_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_020_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_020_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_020_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_020_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_020_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_020_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_020_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_020_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_020_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_020_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_021_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_021_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_021_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_021_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_021_Submit,
    unix_IVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_021_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_021_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_021_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_021_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_021_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_021_FadeToColor,
    unix_IVRCompositor_IVRCompositor_021_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_021_FadeGrid,
    unix_IVRCompositor_IVRCompositor_021_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_021_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_021_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_021_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_021_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_021_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_021_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_021_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_021_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_021_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_021_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_021_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_021_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_021_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_021_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_021_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_021_SetExplicitTimingMode,
    unix_IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData,
    unix_IVRCompositor_IVRCompositor_022_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_022_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_022_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_022_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_022_Submit,
    unix_IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_022_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_022_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_022_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_022_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_022_FadeToColor,
    unix_IVRCompositor_IVRCompositor_022_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_022_FadeGrid,
    unix_IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_022_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_022_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_022_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_022_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_022_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_022_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_022_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_022_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_022_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_022_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_022_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_022_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_022_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_022_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_022_SetExplicitTimingMode,
    unix_IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData,
    unix_IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled,
    unix_IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported,
    unix_IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading,
    unix_IVRCompositor_IVRCompositor_024_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_024_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_024_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_024_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_024_Submit,
    unix_IVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_024_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_024_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_024_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_024_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_024_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_024_FadeToColor,
    unix_IVRCompositor_IVRCompositor_024_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_024_FadeGrid,
    unix_IVRCompositor_IVRCompositor_024_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_024_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_024_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_024_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_024_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_024_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_024_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_024_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_024_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_024_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_024_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_024_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_024_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_024_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_024_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_024_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_024_SetExplicitTimingMode,
    unix_IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData,
    unix_IVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled,
    unix_IVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported,
    unix_IVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading,
    unix_IVRCompositor_IVRCompositor_024_SetStageOverride_Async,
    unix_IVRCompositor_IVRCompositor_024_ClearStageOverride,
    unix_IVRCompositor_IVRCompositor_026_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_026_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_026_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_026_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_026_Submit,
    unix_IVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_026_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_026_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_026_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_026_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_026_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_026_FadeToColor,
    unix_IVRCompositor_IVRCompositor_026_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_026_FadeGrid,
    unix_IVRCompositor_IVRCompositor_026_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_026_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_026_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_026_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_026_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_026_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_026_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_026_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_026_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_026_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_026_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_026_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_026_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_026_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_026_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_026_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_026_SetExplicitTimingMode,
    unix_IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData,
    unix_IVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled,
    unix_IVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported,
    unix_IVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading,
    unix_IVRCompositor_IVRCompositor_026_SetStageOverride_Async,
    unix_IVRCompositor_IVRCompositor_026_ClearStageOverride,
    unix_IVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults,
    unix_IVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs,
    unix_IVRCompositor_IVRCompositor_026_GetPosesForFrame,
    unix_IVRCompositor_IVRCompositor_027_SetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_027_GetTrackingSpace,
    unix_IVRCompositor_IVRCompositor_027_WaitGetPoses,
    unix_IVRCompositor_IVRCompositor_027_GetLastPoses,
    unix_IVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex,
    unix_IVRCompositor_IVRCompositor_027_Submit,
    unix_IVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame,
    unix_IVRCompositor_IVRCompositor_027_PostPresentHandoff,
    unix_IVRCompositor_IVRCompositor_027_GetFrameTiming,
    unix_IVRCompositor_IVRCompositor_027_GetFrameTimings,
    unix_IVRCompositor_IVRCompositor_027_GetFrameTimeRemaining,
    unix_IVRCompositor_IVRCompositor_027_GetCumulativeStats,
    unix_IVRCompositor_IVRCompositor_027_FadeToColor,
    unix_IVRCompositor_IVRCompositor_027_GetCurrentFadeColor,
    unix_IVRCompositor_IVRCompositor_027_FadeGrid,
    unix_IVRCompositor_IVRCompositor_027_GetCurrentGridAlpha,
    unix_IVRCompositor_IVRCompositor_027_SetSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_027_ClearSkyboxOverride,
    unix_IVRCompositor_IVRCompositor_027_CompositorBringToFront,
    unix_IVRCompositor_IVRCompositor_027_CompositorGoToBack,
    unix_IVRCompositor_IVRCompositor_027_CompositorQuit,
    unix_IVRCompositor_IVRCompositor_027_IsFullscreen,
    unix_IVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess,
    unix_IVRCompositor_IVRCompositor_027_GetLastFrameRenderer,
    unix_IVRCompositor_IVRCompositor_027_CanRenderScene,
    unix_IVRCompositor_IVRCompositor_027_ShowMirrorWindow,
    unix_IVRCompositor_IVRCompositor_027_HideMirrorWindow,
    unix_IVRCompositor_IVRCompositor_027_IsMirrorWindowVisible,
    unix_IVRCompositor_IVRCompositor_027_CompositorDumpImages,
    unix_IVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources,
    unix_IVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn,
    unix_IVRCompositor_IVRCompositor_027_ForceReconnectProcess,
    unix_IVRCompositor_IVRCompositor_027_SuspendRendering,
    unix_IVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11,
    unix_IVRCompositor_IVRCompositor_027_GetMirrorTextureGL,
    unix_IVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture,
    unix_IVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess,
    unix_IVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired,
    unix_IVRCompositor_IVRCompositor_027_SetExplicitTimingMode,
    unix_IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData,
    unix_IVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled,
    unix_IVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported,
    unix_IVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading,
    unix_IVRCompositor_IVRCompositor_027_SetStageOverride_Async,
    unix_IVRCompositor_IVRCompositor_027_ClearStageOverride,
    unix_IVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults,
    unix_IVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs,
    unix_IVRCompositor_IVRCompositor_027_GetPosesForFrame,
    unix_IVRControlPanel_IVRControlPanel_006_undoc1,
    unix_IVRControlPanel_IVRControlPanel_006_undoc2,
    unix_IVRControlPanel_IVRControlPanel_006_undoc3,
    unix_IVRControlPanel_IVRControlPanel_006_undoc4,
    unix_IVRControlPanel_IVRControlPanel_006_undoc5,
    unix_IVRControlPanel_IVRControlPanel_006_undoc6,
    unix_IVRControlPanel_IVRControlPanel_006_undoc7,
    unix_IVRControlPanel_IVRControlPanel_006_undoc8,
    unix_IVRControlPanel_IVRControlPanel_006_undoc9,
    unix_IVRControlPanel_IVRControlPanel_006_undoc10,
    unix_IVRControlPanel_IVRControlPanel_006_undoc11,
    unix_IVRControlPanel_IVRControlPanel_006_undoc12,
    unix_IVRControlPanel_IVRControlPanel_006_undoc13,
    unix_IVRControlPanel_IVRControlPanel_006_undoc14,
    unix_IVRControlPanel_IVRControlPanel_006_undoc15,
    unix_IVRControlPanel_IVRControlPanel_006_undoc16,
    unix_IVRControlPanel_IVRControlPanel_006_undoc17,
    unix_IVRControlPanel_IVRControlPanel_006_undoc18,
    unix_IVRControlPanel_IVRControlPanel_006_undoc19,
    unix_IVRControlPanel_IVRControlPanel_006_undoc20,
    unix_IVRControlPanel_IVRControlPanel_006_undoc21,
    unix_IVRControlPanel_IVRControlPanel_006_undoc22,
    unix_IVRControlPanel_IVRControlPanel_006_undoc23,
    unix_IVRControlPanel_IVRControlPanel_006_undoc24,
    unix_IVRControlPanel_IVRControlPanel_006_undoc25,
    unix_IVRControlPanel_IVRControlPanel_006_undoc26,
    unix_IVRControlPanel_IVRControlPanel_006_undoc27,
    unix_IVRControlPanel_IVRControlPanel_006_undoc28,
    unix_IVRDriverManager_IVRDriverManager_001_GetDriverCount,
    unix_IVRDriverManager_IVRDriverManager_001_GetDriverName,
    unix_IVRDriverManager_IVRDriverManager_001_GetDriverHandle,
    unix_IVRDriverManager_IVRDriverManager_001_IsEnabled,
    unix_IVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds,
    unix_IVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport,
    unix_IVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo,
    unix_IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize,
    unix_IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize,
    unix_IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode,
    unix_IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode,
    unix_IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped,
    unix_IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped,
    unix_IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio,
    unix_IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange,
    unix_IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange,
    unix_IVRIOBuffer_IVRIOBuffer_001_Open,
    unix_IVRIOBuffer_IVRIOBuffer_001_Close,
    unix_IVRIOBuffer_IVRIOBuffer_001_Read,
    unix_IVRIOBuffer_IVRIOBuffer_001_Write,
    unix_IVRIOBuffer_IVRIOBuffer_001_PropertyContainer,
    unix_IVRIOBuffer_IVRIOBuffer_002_Open,
    unix_IVRIOBuffer_IVRIOBuffer_002_Close,
    unix_IVRIOBuffer_IVRIOBuffer_002_Read,
    unix_IVRIOBuffer_IVRIOBuffer_002_Write,
    unix_IVRIOBuffer_IVRIOBuffer_002_PropertyContainer,
    unix_IVRIOBuffer_IVRIOBuffer_002_HasReaders,
    unix_IVRInput_IVRInput_003_SetActionManifestPath,
    unix_IVRInput_IVRInput_003_GetActionSetHandle,
    unix_IVRInput_IVRInput_003_GetActionHandle,
    unix_IVRInput_IVRInput_003_GetInputSourceHandle,
    unix_IVRInput_IVRInput_003_UpdateActionState,
    unix_IVRInput_IVRInput_003_GetDigitalActionData,
    unix_IVRInput_IVRInput_003_GetAnalogActionData,
    unix_IVRInput_IVRInput_003_GetPoseActionData,
    unix_IVRInput_IVRInput_003_GetSkeletalActionData,
    unix_IVRInput_IVRInput_003_GetSkeletalActionDataCompressed,
    unix_IVRInput_IVRInput_003_UncompressSkeletalActionData,
    unix_IVRInput_IVRInput_003_TriggerHapticVibrationAction,
    unix_IVRInput_IVRInput_003_GetActionOrigins,
    unix_IVRInput_IVRInput_003_GetOriginLocalizedName,
    unix_IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo,
    unix_IVRInput_IVRInput_003_ShowActionOrigins,
    unix_IVRInput_IVRInput_003_ShowBindingsForActionSet,
    unix_IVRInput_IVRInput_004_SetActionManifestPath,
    unix_IVRInput_IVRInput_004_GetActionSetHandle,
    unix_IVRInput_IVRInput_004_GetActionHandle,
    unix_IVRInput_IVRInput_004_GetInputSourceHandle,
    unix_IVRInput_IVRInput_004_UpdateActionState,
    unix_IVRInput_IVRInput_004_GetDigitalActionData,
    unix_IVRInput_IVRInput_004_GetAnalogActionData,
    unix_IVRInput_IVRInput_004_GetPoseActionData,
    unix_IVRInput_IVRInput_004_GetSkeletalActionData,
    unix_IVRInput_IVRInput_004_GetSkeletalBoneData,
    unix_IVRInput_IVRInput_004_GetSkeletalBoneDataCompressed,
    unix_IVRInput_IVRInput_004_DecompressSkeletalBoneData,
    unix_IVRInput_IVRInput_004_TriggerHapticVibrationAction,
    unix_IVRInput_IVRInput_004_GetActionOrigins,
    unix_IVRInput_IVRInput_004_GetOriginLocalizedName,
    unix_IVRInput_IVRInput_004_GetOriginTrackedDeviceInfo,
    unix_IVRInput_IVRInput_004_ShowActionOrigins,
    unix_IVRInput_IVRInput_004_ShowBindingsForActionSet,
    unix_IVRInput_IVRInput_005_SetActionManifestPath,
    unix_IVRInput_IVRInput_005_GetActionSetHandle,
    unix_IVRInput_IVRInput_005_GetActionHandle,
    unix_IVRInput_IVRInput_005_GetInputSourceHandle,
    unix_IVRInput_IVRInput_005_UpdateActionState,
    unix_IVRInput_IVRInput_005_GetDigitalActionData,
    unix_IVRInput_IVRInput_005_GetAnalogActionData,
    unix_IVRInput_IVRInput_005_GetPoseActionData,
    unix_IVRInput_IVRInput_005_GetSkeletalActionData,
    unix_IVRInput_IVRInput_005_GetBoneCount,
    unix_IVRInput_IVRInput_005_GetBoneHierarchy,
    unix_IVRInput_IVRInput_005_GetBoneName,
    unix_IVRInput_IVRInput_005_GetSkeletalReferenceTransforms,
    unix_IVRInput_IVRInput_005_GetSkeletalTrackingLevel,
    unix_IVRInput_IVRInput_005_GetSkeletalBoneData,
    unix_IVRInput_IVRInput_005_GetSkeletalSummaryData,
    unix_IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed,
    unix_IVRInput_IVRInput_005_DecompressSkeletalBoneData,
    unix_IVRInput_IVRInput_005_TriggerHapticVibrationAction,
    unix_IVRInput_IVRInput_005_GetActionOrigins,
    unix_IVRInput_IVRInput_005_GetOriginLocalizedName,
    unix_IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo,
    unix_IVRInput_IVRInput_005_ShowActionOrigins,
    unix_IVRInput_IVRInput_005_ShowBindingsForActionSet,
    unix_IVRInput_IVRInput_005_IsUsingLegacyInput,
    unix_IVRInput_IVRInput_006_SetActionManifestPath,
    unix_IVRInput_IVRInput_006_GetActionSetHandle,
    unix_IVRInput_IVRInput_006_GetActionHandle,
    unix_IVRInput_IVRInput_006_GetInputSourceHandle,
    unix_IVRInput_IVRInput_006_UpdateActionState,
    unix_IVRInput_IVRInput_006_GetDigitalActionData,
    unix_IVRInput_IVRInput_006_GetAnalogActionData,
    unix_IVRInput_IVRInput_006_GetPoseActionDataRelativeToNow,
    unix_IVRInput_IVRInput_006_GetPoseActionDataForNextFrame,
    unix_IVRInput_IVRInput_006_GetSkeletalActionData,
    unix_IVRInput_IVRInput_006_GetBoneCount,
    unix_IVRInput_IVRInput_006_GetBoneHierarchy,
    unix_IVRInput_IVRInput_006_GetBoneName,
    unix_IVRInput_IVRInput_006_GetSkeletalReferenceTransforms,
    unix_IVRInput_IVRInput_006_GetSkeletalTrackingLevel,
    unix_IVRInput_IVRInput_006_GetSkeletalBoneData,
    unix_IVRInput_IVRInput_006_GetSkeletalSummaryData,
    unix_IVRInput_IVRInput_006_GetSkeletalBoneDataCompressed,
    unix_IVRInput_IVRInput_006_DecompressSkeletalBoneData,
    unix_IVRInput_IVRInput_006_TriggerHapticVibrationAction,
    unix_IVRInput_IVRInput_006_GetActionOrigins,
    unix_IVRInput_IVRInput_006_GetOriginLocalizedName,
    unix_IVRInput_IVRInput_006_GetOriginTrackedDeviceInfo,
    unix_IVRInput_IVRInput_006_ShowActionOrigins,
    unix_IVRInput_IVRInput_006_ShowBindingsForActionSet,
    unix_IVRInput_IVRInput_006_IsUsingLegacyInput,
    unix_IVRInput_IVRInput_007_SetActionManifestPath,
    unix_IVRInput_IVRInput_007_GetActionSetHandle,
    unix_IVRInput_IVRInput_007_GetActionHandle,
    unix_IVRInput_IVRInput_007_GetInputSourceHandle,
    unix_IVRInput_IVRInput_007_UpdateActionState,
    unix_IVRInput_IVRInput_007_GetDigitalActionData,
    unix_IVRInput_IVRInput_007_GetAnalogActionData,
    unix_IVRInput_IVRInput_007_GetPoseActionDataRelativeToNow,
    unix_IVRInput_IVRInput_007_GetPoseActionDataForNextFrame,
    unix_IVRInput_IVRInput_007_GetSkeletalActionData,
    unix_IVRInput_IVRInput_007_GetBoneCount,
    unix_IVRInput_IVRInput_007_GetBoneHierarchy,
    unix_IVRInput_IVRInput_007_GetBoneName,
    unix_IVRInput_IVRInput_007_GetSkeletalReferenceTransforms,
    unix_IVRInput_IVRInput_007_GetSkeletalTrackingLevel,
    unix_IVRInput_IVRInput_007_GetSkeletalBoneData,
    unix_IVRInput_IVRInput_007_GetSkeletalSummaryData,
    unix_IVRInput_IVRInput_007_GetSkeletalBoneDataCompressed,
    unix_IVRInput_IVRInput_007_DecompressSkeletalBoneData,
    unix_IVRInput_IVRInput_007_TriggerHapticVibrationAction,
    unix_IVRInput_IVRInput_007_GetActionOrigins,
    unix_IVRInput_IVRInput_007_GetOriginLocalizedName,
    unix_IVRInput_IVRInput_007_GetOriginTrackedDeviceInfo,
    unix_IVRInput_IVRInput_007_GetActionBindingInfo,
    unix_IVRInput_IVRInput_007_ShowActionOrigins,
    unix_IVRInput_IVRInput_007_ShowBindingsForActionSet,
    unix_IVRInput_IVRInput_007_IsUsingLegacyInput,
    unix_IVRInput_IVRInput_007_OpenBindingUI,
    unix_IVRInput_IVRInput_010_SetActionManifestPath,
    unix_IVRInput_IVRInput_010_GetActionSetHandle,
    unix_IVRInput_IVRInput_010_GetActionHandle,
    unix_IVRInput_IVRInput_010_GetInputSourceHandle,
    unix_IVRInput_IVRInput_010_UpdateActionState,
    unix_IVRInput_IVRInput_010_GetDigitalActionData,
    unix_IVRInput_IVRInput_010_GetAnalogActionData,
    unix_IVRInput_IVRInput_010_GetPoseActionDataRelativeToNow,
    unix_IVRInput_IVRInput_010_GetPoseActionDataForNextFrame,
    unix_IVRInput_IVRInput_010_GetSkeletalActionData,
    unix_IVRInput_IVRInput_010_GetDominantHand,
    unix_IVRInput_IVRInput_010_SetDominantHand,
    unix_IVRInput_IVRInput_010_GetBoneCount,
    unix_IVRInput_IVRInput_010_GetBoneHierarchy,
    unix_IVRInput_IVRInput_010_GetBoneName,
    unix_IVRInput_IVRInput_010_GetSkeletalReferenceTransforms,
    unix_IVRInput_IVRInput_010_GetSkeletalTrackingLevel,
    unix_IVRInput_IVRInput_010_GetSkeletalBoneData,
    unix_IVRInput_IVRInput_010_GetSkeletalSummaryData,
    unix_IVRInput_IVRInput_010_GetSkeletalBoneDataCompressed,
    unix_IVRInput_IVRInput_010_DecompressSkeletalBoneData,
    unix_IVRInput_IVRInput_010_TriggerHapticVibrationAction,
    unix_IVRInput_IVRInput_010_GetActionOrigins,
    unix_IVRInput_IVRInput_010_GetOriginLocalizedName,
    unix_IVRInput_IVRInput_010_GetOriginTrackedDeviceInfo,
    unix_IVRInput_IVRInput_010_GetActionBindingInfo,
    unix_IVRInput_IVRInput_010_ShowActionOrigins,
    unix_IVRInput_IVRInput_010_ShowBindingsForActionSet,
    unix_IVRInput_IVRInput_010_GetComponentStateForBinding,
    unix_IVRInput_IVRInput_010_IsUsingLegacyInput,
    unix_IVRInput_IVRInput_010_OpenBindingUI,
    unix_IVRInput_IVRInput_010_GetBindingVariant,
    unix_IVRMailbox_IVRMailbox_001_undoc1,
    unix_IVRMailbox_IVRMailbox_001_undoc2,
    unix_IVRMailbox_IVRMailbox_001_undoc3,
    unix_IVRMailbox_IVRMailbox_001_undoc4,
    unix_IVRNotifications_IVRNotifications_001_GetErrorString,
    unix_IVRNotifications_IVRNotifications_001_CreateNotification,
    unix_IVRNotifications_IVRNotifications_001_DismissNotification,
    unix_IVRNotifications_IVRNotifications_002_CreateNotification,
    unix_IVRNotifications_IVRNotifications_002_RemoveNotification,
    unix_IVROverlayView_IVROverlayView_003_AcquireOverlayView,
    unix_IVROverlayView_IVROverlayView_003_ReleaseOverlayView,
    unix_IVROverlayView_IVROverlayView_003_PostOverlayEvent,
    unix_IVROverlayView_IVROverlayView_003_IsViewingPermitted,
    unix_IVROverlay_IVROverlay_001_FindOverlay,
    unix_IVROverlay_IVROverlay_001_CreateOverlay,
    unix_IVROverlay_IVROverlay_001_DestroyOverlay,
    unix_IVROverlay_IVROverlay_001_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_001_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_001_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_001_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_001_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_001_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_001_SetOverlayGamma,
    unix_IVROverlay_IVROverlay_001_GetOverlayGamma,
    unix_IVROverlay_IVROverlay_001_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_001_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_001_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_001_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_001_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_001_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_001_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_001_GetOverlayVisibility,
    unix_IVROverlay_IVROverlay_001_SetOverlayVisibility,
    unix_IVROverlay_IVROverlay_001_ShowOverlay,
    unix_IVROverlay_IVROverlay_001_HideOverlay,
    unix_IVROverlay_IVROverlay_001_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_001_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_001_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_001_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_001_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_001_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_001_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_001_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_001_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_001_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_001_IsSystemOverlayVisible,
    unix_IVROverlay_IVROverlay_001_IsActiveSystemOverlay,
    unix_IVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_002_FindOverlay,
    unix_IVROverlay_IVROverlay_002_CreateOverlay,
    unix_IVROverlay_IVROverlay_002_DestroyOverlay,
    unix_IVROverlay_IVROverlay_002_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_002_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_002_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_002_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_002_SetOverlayColor,
    unix_IVROverlay_IVROverlay_002_GetOverlayColor,
    unix_IVROverlay_IVROverlay_002_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_002_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_002_SetOverlayGamma,
    unix_IVROverlay_IVROverlay_002_GetOverlayGamma,
    unix_IVROverlay_IVROverlay_002_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_002_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_002_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_002_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_002_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_002_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_002_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_002_ShowOverlay,
    unix_IVROverlay_IVROverlay_002_HideOverlay,
    unix_IVROverlay_IVROverlay_002_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_002_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_002_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_002_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_002_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_002_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_002_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_002_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_002_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_002_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_002_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_002_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_002_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_002_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_003_FindOverlay,
    unix_IVROverlay_IVROverlay_003_CreateOverlay,
    unix_IVROverlay_IVROverlay_003_DestroyOverlay,
    unix_IVROverlay_IVROverlay_003_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_003_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_003_GetOverlayKey,
    unix_IVROverlay_IVROverlay_003_GetOverlayName,
    unix_IVROverlay_IVROverlay_003_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_003_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_003_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_003_SetOverlayColor,
    unix_IVROverlay_IVROverlay_003_GetOverlayColor,
    unix_IVROverlay_IVROverlay_003_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_003_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_003_SetOverlayGamma,
    unix_IVROverlay_IVROverlay_003_GetOverlayGamma,
    unix_IVROverlay_IVROverlay_003_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_003_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_003_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_003_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_003_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_003_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_003_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_003_ShowOverlay,
    unix_IVROverlay_IVROverlay_003_HideOverlay,
    unix_IVROverlay_IVROverlay_003_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_003_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_003_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_003_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_003_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_003_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_003_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_003_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_003_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_003_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_003_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_003_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_003_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_003_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_003_ShowDashboard,
    unix_IVROverlay_IVROverlay_004_FindOverlay,
    unix_IVROverlay_IVROverlay_004_CreateOverlay,
    unix_IVROverlay_IVROverlay_004_DestroyOverlay,
    unix_IVROverlay_IVROverlay_004_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_004_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_004_GetOverlayKey,
    unix_IVROverlay_IVROverlay_004_GetOverlayName,
    unix_IVROverlay_IVROverlay_004_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_004_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_004_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_004_SetOverlayColor,
    unix_IVROverlay_IVROverlay_004_GetOverlayColor,
    unix_IVROverlay_IVROverlay_004_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_004_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_004_SetOverlayGamma,
    unix_IVROverlay_IVROverlay_004_GetOverlayGamma,
    unix_IVROverlay_IVROverlay_004_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_004_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_004_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_004_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_004_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_004_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_004_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_004_ShowOverlay,
    unix_IVROverlay_IVROverlay_004_HideOverlay,
    unix_IVROverlay_IVROverlay_004_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_004_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_004_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_004_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_004_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_004_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_004_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_004_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_004_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_004_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_004_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_004_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_004_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_004_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_004_ShowDashboard,
    unix_IVROverlay_IVROverlay_005_FindOverlay,
    unix_IVROverlay_IVROverlay_005_CreateOverlay,
    unix_IVROverlay_IVROverlay_005_DestroyOverlay,
    unix_IVROverlay_IVROverlay_005_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_005_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_005_GetOverlayKey,
    unix_IVROverlay_IVROverlay_005_GetOverlayName,
    unix_IVROverlay_IVROverlay_005_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_005_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_005_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_005_SetOverlayColor,
    unix_IVROverlay_IVROverlay_005_GetOverlayColor,
    unix_IVROverlay_IVROverlay_005_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_005_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_005_SetOverlayGamma,
    unix_IVROverlay_IVROverlay_005_GetOverlayGamma,
    unix_IVROverlay_IVROverlay_005_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_005_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_005_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_005_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_005_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_005_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_005_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_005_ShowOverlay,
    unix_IVROverlay_IVROverlay_005_HideOverlay,
    unix_IVROverlay_IVROverlay_005_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_005_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_005_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_005_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_005_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_005_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_005_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_005_IsFocusOverlay,
    unix_IVROverlay_IVROverlay_005_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_005_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_005_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_005_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_005_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_005_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_005_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_005_ShowDashboard,
    unix_IVROverlay_IVROverlay_005_ShowKeyboard,
    unix_IVROverlay_IVROverlay_005_GetKeyboardText,
    unix_IVROverlay_IVROverlay_005_HideKeyboard,
    unix_IVROverlay_IVROverlay_007_FindOverlay,
    unix_IVROverlay_IVROverlay_007_CreateOverlay,
    unix_IVROverlay_IVROverlay_007_DestroyOverlay,
    unix_IVROverlay_IVROverlay_007_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_007_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_007_GetOverlayKey,
    unix_IVROverlay_IVROverlay_007_GetOverlayName,
    unix_IVROverlay_IVROverlay_007_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_007_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_007_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_007_SetOverlayColor,
    unix_IVROverlay_IVROverlay_007_GetOverlayColor,
    unix_IVROverlay_IVROverlay_007_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_007_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_007_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_007_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_007_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_007_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_007_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_007_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_007_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_007_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_007_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_007_ShowOverlay,
    unix_IVROverlay_IVROverlay_007_HideOverlay,
    unix_IVROverlay_IVROverlay_007_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_007_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_007_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_007_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_007_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_007_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_007_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_007_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_007_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_007_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_007_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_007_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_007_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_007_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_007_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_007_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_007_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_007_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_007_ShowDashboard,
    unix_IVROverlay_IVROverlay_007_ShowKeyboard,
    unix_IVROverlay_IVROverlay_007_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_007_GetKeyboardText,
    unix_IVROverlay_IVROverlay_007_HideKeyboard,
    unix_IVROverlay_IVROverlay_008_FindOverlay,
    unix_IVROverlay_IVROverlay_008_CreateOverlay,
    unix_IVROverlay_IVROverlay_008_DestroyOverlay,
    unix_IVROverlay_IVROverlay_008_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_008_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_008_GetOverlayKey,
    unix_IVROverlay_IVROverlay_008_GetOverlayName,
    unix_IVROverlay_IVROverlay_008_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_008_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_008_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_008_SetOverlayColor,
    unix_IVROverlay_IVROverlay_008_GetOverlayColor,
    unix_IVROverlay_IVROverlay_008_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_008_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_008_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_008_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_008_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_008_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_008_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_008_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_008_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_008_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_008_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_008_ShowOverlay,
    unix_IVROverlay_IVROverlay_008_HideOverlay,
    unix_IVROverlay_IVROverlay_008_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_008_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_008_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_008_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_008_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_008_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_008_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_008_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_008_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_008_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_008_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_008_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_008_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_008_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_008_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_008_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_008_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_008_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_008_ShowDashboard,
    unix_IVROverlay_IVROverlay_008_ShowKeyboard,
    unix_IVROverlay_IVROverlay_008_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_008_GetKeyboardText,
    unix_IVROverlay_IVROverlay_008_HideKeyboard,
    unix_IVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_010_FindOverlay,
    unix_IVROverlay_IVROverlay_010_CreateOverlay,
    unix_IVROverlay_IVROverlay_010_DestroyOverlay,
    unix_IVROverlay_IVROverlay_010_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_010_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_010_GetOverlayKey,
    unix_IVROverlay_IVROverlay_010_GetOverlayName,
    unix_IVROverlay_IVROverlay_010_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_010_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_010_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_010_SetOverlayColor,
    unix_IVROverlay_IVROverlay_010_GetOverlayColor,
    unix_IVROverlay_IVROverlay_010_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_010_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_010_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_010_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_010_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_010_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_010_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_010_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_010_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_010_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_010_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_010_ShowOverlay,
    unix_IVROverlay_IVROverlay_010_HideOverlay,
    unix_IVROverlay_IVROverlay_010_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_010_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_010_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_010_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_010_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_010_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_010_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_010_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_010_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_010_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_010_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_010_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_010_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_010_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_010_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_010_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_010_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_010_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_010_ShowDashboard,
    unix_IVROverlay_IVROverlay_010_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_010_ShowKeyboard,
    unix_IVROverlay_IVROverlay_010_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_010_GetKeyboardText,
    unix_IVROverlay_IVROverlay_010_HideKeyboard,
    unix_IVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_011_FindOverlay,
    unix_IVROverlay_IVROverlay_011_CreateOverlay,
    unix_IVROverlay_IVROverlay_011_DestroyOverlay,
    unix_IVROverlay_IVROverlay_011_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_011_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_011_GetOverlayKey,
    unix_IVROverlay_IVROverlay_011_GetOverlayName,
    unix_IVROverlay_IVROverlay_011_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_011_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_011_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_011_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_011_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_011_SetOverlayColor,
    unix_IVROverlay_IVROverlay_011_GetOverlayColor,
    unix_IVROverlay_IVROverlay_011_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_011_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_011_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_011_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_011_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_011_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_011_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_011_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_011_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_011_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_011_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_011_ShowOverlay,
    unix_IVROverlay_IVROverlay_011_HideOverlay,
    unix_IVROverlay_IVROverlay_011_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_011_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_011_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_011_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_011_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_011_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_011_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_011_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_011_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_011_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_011_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_011_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_011_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_011_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_011_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_011_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_011_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_011_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_011_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_011_ShowDashboard,
    unix_IVROverlay_IVROverlay_011_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_011_ShowKeyboard,
    unix_IVROverlay_IVROverlay_011_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_011_GetKeyboardText,
    unix_IVROverlay_IVROverlay_011_HideKeyboard,
    unix_IVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_012_FindOverlay,
    unix_IVROverlay_IVROverlay_012_CreateOverlay,
    unix_IVROverlay_IVROverlay_012_DestroyOverlay,
    unix_IVROverlay_IVROverlay_012_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_012_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_012_GetOverlayKey,
    unix_IVROverlay_IVROverlay_012_GetOverlayName,
    unix_IVROverlay_IVROverlay_012_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_012_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_012_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_012_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_012_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_012_SetOverlayColor,
    unix_IVROverlay_IVROverlay_012_GetOverlayColor,
    unix_IVROverlay_IVROverlay_012_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_012_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_012_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_012_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_012_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_012_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_012_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_012_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_012_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_012_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_012_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_012_ShowOverlay,
    unix_IVROverlay_IVROverlay_012_HideOverlay,
    unix_IVROverlay_IVROverlay_012_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_012_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_012_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_012_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_012_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_012_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_012_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_012_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_012_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_012_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_012_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_012_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_012_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_012_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_012_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_012_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_012_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_012_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_012_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_012_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_012_ShowDashboard,
    unix_IVROverlay_IVROverlay_012_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_012_ShowKeyboard,
    unix_IVROverlay_IVROverlay_012_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_012_GetKeyboardText,
    unix_IVROverlay_IVROverlay_012_HideKeyboard,
    unix_IVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_013_FindOverlay,
    unix_IVROverlay_IVROverlay_013_CreateOverlay,
    unix_IVROverlay_IVROverlay_013_DestroyOverlay,
    unix_IVROverlay_IVROverlay_013_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_013_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_013_GetOverlayKey,
    unix_IVROverlay_IVROverlay_013_GetOverlayName,
    unix_IVROverlay_IVROverlay_013_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_013_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_013_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_013_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_013_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_013_SetOverlayColor,
    unix_IVROverlay_IVROverlay_013_GetOverlayColor,
    unix_IVROverlay_IVROverlay_013_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_013_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_013_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_013_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_013_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_013_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_013_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_013_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_013_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_013_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_013_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_013_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_013_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_013_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_013_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_013_ShowOverlay,
    unix_IVROverlay_IVROverlay_013_HideOverlay,
    unix_IVROverlay_IVROverlay_013_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_013_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_013_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_013_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_013_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_013_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_013_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_013_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_013_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_013_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_013_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_013_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_013_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_013_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_013_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_013_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_013_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_013_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_013_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_013_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_013_ShowDashboard,
    unix_IVROverlay_IVROverlay_013_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_013_ShowKeyboard,
    unix_IVROverlay_IVROverlay_013_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_013_GetKeyboardText,
    unix_IVROverlay_IVROverlay_013_HideKeyboard,
    unix_IVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_013_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_014_FindOverlay,
    unix_IVROverlay_IVROverlay_014_CreateOverlay,
    unix_IVROverlay_IVROverlay_014_DestroyOverlay,
    unix_IVROverlay_IVROverlay_014_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_014_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_014_GetOverlayKey,
    unix_IVROverlay_IVROverlay_014_GetOverlayName,
    unix_IVROverlay_IVROverlay_014_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_014_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_014_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_014_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_014_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_014_SetOverlayColor,
    unix_IVROverlay_IVROverlay_014_GetOverlayColor,
    unix_IVROverlay_IVROverlay_014_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_014_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_014_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_014_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_014_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_014_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_014_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_014_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_014_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_014_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_014_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_014_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_014_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_014_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_014_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_014_ShowOverlay,
    unix_IVROverlay_IVROverlay_014_HideOverlay,
    unix_IVROverlay_IVROverlay_014_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_014_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_014_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_014_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_014_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_014_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_014_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_014_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_014_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_014_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_014_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_014_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_014_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_014_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_014_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_014_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_014_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_014_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_014_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_014_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_014_ShowDashboard,
    unix_IVROverlay_IVROverlay_014_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_014_ShowKeyboard,
    unix_IVROverlay_IVROverlay_014_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_014_GetKeyboardText,
    unix_IVROverlay_IVROverlay_014_HideKeyboard,
    unix_IVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_014_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_014_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_014_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_016_FindOverlay,
    unix_IVROverlay_IVROverlay_016_CreateOverlay,
    unix_IVROverlay_IVROverlay_016_DestroyOverlay,
    unix_IVROverlay_IVROverlay_016_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_016_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_016_GetOverlayKey,
    unix_IVROverlay_IVROverlay_016_GetOverlayName,
    unix_IVROverlay_IVROverlay_016_SetOverlayName,
    unix_IVROverlay_IVROverlay_016_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_016_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_016_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_016_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_016_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_016_SetOverlayColor,
    unix_IVROverlay_IVROverlay_016_GetOverlayColor,
    unix_IVROverlay_IVROverlay_016_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_016_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_016_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_016_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_016_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_016_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_016_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_016_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_016_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_016_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_016_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_016_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_016_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_016_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_016_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_016_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_016_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_016_ShowOverlay,
    unix_IVROverlay_IVROverlay_016_HideOverlay,
    unix_IVROverlay_IVROverlay_016_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_016_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_016_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_016_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_016_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_016_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_016_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_016_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_016_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_016_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_016_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_016_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_016_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_016_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_016_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_016_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_016_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_016_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_016_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_016_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_016_ShowDashboard,
    unix_IVROverlay_IVROverlay_016_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_016_ShowKeyboard,
    unix_IVROverlay_IVROverlay_016_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_016_GetKeyboardText,
    unix_IVROverlay_IVROverlay_016_HideKeyboard,
    unix_IVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_016_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_016_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_016_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_016_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_017_FindOverlay,
    unix_IVROverlay_IVROverlay_017_CreateOverlay,
    unix_IVROverlay_IVROverlay_017_DestroyOverlay,
    unix_IVROverlay_IVROverlay_017_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_017_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_017_GetOverlayKey,
    unix_IVROverlay_IVROverlay_017_GetOverlayName,
    unix_IVROverlay_IVROverlay_017_SetOverlayName,
    unix_IVROverlay_IVROverlay_017_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_017_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_017_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_017_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_017_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_017_SetOverlayColor,
    unix_IVROverlay_IVROverlay_017_GetOverlayColor,
    unix_IVROverlay_IVROverlay_017_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_017_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_017_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_017_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_017_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_017_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_017_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_017_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_017_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_017_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_017_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_017_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_017_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_017_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_017_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_017_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_017_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_017_ShowOverlay,
    unix_IVROverlay_IVROverlay_017_HideOverlay,
    unix_IVROverlay_IVROverlay_017_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_017_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_017_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_017_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_017_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_017_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_017_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse,
    unix_IVROverlay_IVROverlay_017_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_017_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_017_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_017_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_017_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_017_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_017_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_017_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_017_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_017_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_017_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_017_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_017_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_017_ShowDashboard,
    unix_IVROverlay_IVROverlay_017_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_017_ShowKeyboard,
    unix_IVROverlay_IVROverlay_017_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_017_GetKeyboardText,
    unix_IVROverlay_IVROverlay_017_HideKeyboard,
    unix_IVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_017_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_017_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_017_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_017_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_018_FindOverlay,
    unix_IVROverlay_IVROverlay_018_CreateOverlay,
    unix_IVROverlay_IVROverlay_018_DestroyOverlay,
    unix_IVROverlay_IVROverlay_018_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_018_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_018_GetOverlayKey,
    unix_IVROverlay_IVROverlay_018_GetOverlayName,
    unix_IVROverlay_IVROverlay_018_SetOverlayName,
    unix_IVROverlay_IVROverlay_018_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_018_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_018_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_018_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_018_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_018_SetOverlayColor,
    unix_IVROverlay_IVROverlay_018_GetOverlayColor,
    unix_IVROverlay_IVROverlay_018_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_018_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_018_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_018_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_018_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_018_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_018_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_018_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_018_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_018_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_018_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_018_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_018_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_018_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_018_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_018_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_018_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_018_ShowOverlay,
    unix_IVROverlay_IVROverlay_018_HideOverlay,
    unix_IVROverlay_IVROverlay_018_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_018_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_018_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_018_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_018_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_018_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_018_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_018_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_018_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_018_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_018_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_018_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_018_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_018_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_018_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_018_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_018_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_018_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_018_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_018_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_018_ShowDashboard,
    unix_IVROverlay_IVROverlay_018_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_018_ShowKeyboard,
    unix_IVROverlay_IVROverlay_018_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_018_GetKeyboardText,
    unix_IVROverlay_IVROverlay_018_HideKeyboard,
    unix_IVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_018_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_018_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_018_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_018_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_019_FindOverlay,
    unix_IVROverlay_IVROverlay_019_CreateOverlay,
    unix_IVROverlay_IVROverlay_019_DestroyOverlay,
    unix_IVROverlay_IVROverlay_019_SetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_019_GetHighQualityOverlay,
    unix_IVROverlay_IVROverlay_019_GetOverlayKey,
    unix_IVROverlay_IVROverlay_019_GetOverlayName,
    unix_IVROverlay_IVROverlay_019_SetOverlayName,
    unix_IVROverlay_IVROverlay_019_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_019_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_019_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_019_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_019_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_019_SetOverlayColor,
    unix_IVROverlay_IVROverlay_019_GetOverlayColor,
    unix_IVROverlay_IVROverlay_019_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_019_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_019_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_019_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_019_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_019_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_019_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_019_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_019_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_019_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_019_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_019_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_019_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_019_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_019_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_019_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_019_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_019_ShowOverlay,
    unix_IVROverlay_IVROverlay_019_HideOverlay,
    unix_IVROverlay_IVROverlay_019_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_019_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_019_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_019_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_019_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_019_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_019_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_019_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_019_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_019_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_019_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_019_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_019_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_019_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_019_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_019_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_019_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_019_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_019_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_019_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_019_ShowDashboard,
    unix_IVROverlay_IVROverlay_019_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_019_ShowKeyboard,
    unix_IVROverlay_IVROverlay_019_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_019_GetKeyboardText,
    unix_IVROverlay_IVROverlay_019_HideKeyboard,
    unix_IVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_019_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_019_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_019_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_019_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_020_FindOverlay,
    unix_IVROverlay_IVROverlay_020_CreateOverlay,
    unix_IVROverlay_IVROverlay_020_DestroyOverlay,
    unix_IVROverlay_IVROverlay_020_GetOverlayKey,
    unix_IVROverlay_IVROverlay_020_GetOverlayName,
    unix_IVROverlay_IVROverlay_020_SetOverlayName,
    unix_IVROverlay_IVROverlay_020_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_020_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_020_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_020_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_020_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_020_SetOverlayColor,
    unix_IVROverlay_IVROverlay_020_GetOverlayColor,
    unix_IVROverlay_IVROverlay_020_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_020_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_020_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_020_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_020_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_020_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_020_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_020_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters,
    unix_IVROverlay_IVROverlay_020_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_020_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_020_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_020_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_020_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_020_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_020_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_020_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_020_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_020_ShowOverlay,
    unix_IVROverlay_IVROverlay_020_HideOverlay,
    unix_IVROverlay_IVROverlay_020_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_020_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_020_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_020_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_020_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_020_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_020_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_020_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_020_GetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_020_SetGamepadFocusOverlay,
    unix_IVROverlay_IVROverlay_020_SetOverlayNeighbor,
    unix_IVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor,
    unix_IVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_020_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_020_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_020_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_020_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_020_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_020_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_020_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_020_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_020_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_020_ShowDashboard,
    unix_IVROverlay_IVROverlay_020_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_020_ShowKeyboard,
    unix_IVROverlay_IVROverlay_020_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_020_GetKeyboardText,
    unix_IVROverlay_IVROverlay_020_HideKeyboard,
    unix_IVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_020_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_020_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_020_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_020_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_021_FindOverlay,
    unix_IVROverlay_IVROverlay_021_CreateOverlay,
    unix_IVROverlay_IVROverlay_021_DestroyOverlay,
    unix_IVROverlay_IVROverlay_021_GetOverlayKey,
    unix_IVROverlay_IVROverlay_021_GetOverlayName,
    unix_IVROverlay_IVROverlay_021_SetOverlayName,
    unix_IVROverlay_IVROverlay_021_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_021_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_021_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_021_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_021_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_021_SetOverlayColor,
    unix_IVROverlay_IVROverlay_021_GetOverlayColor,
    unix_IVROverlay_IVROverlay_021_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_021_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_021_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_021_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_021_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_021_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_021_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_021_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_021_SetOverlayCurvature,
    unix_IVROverlay_IVROverlay_021_GetOverlayCurvature,
    unix_IVROverlay_IVROverlay_021_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_021_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_021_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_021_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_021_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_021_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_021_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_021_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_021_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_021_ShowOverlay,
    unix_IVROverlay_IVROverlay_021_HideOverlay,
    unix_IVROverlay_IVROverlay_021_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_021_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_021_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_021_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_021_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_021_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_021_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_021_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_021_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_021_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_021_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_021_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_021_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_021_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_021_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_021_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_021_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_021_ShowDashboard,
    unix_IVROverlay_IVROverlay_021_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_021_ShowKeyboard,
    unix_IVROverlay_IVROverlay_021_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_021_GetKeyboardText,
    unix_IVROverlay_IVROverlay_021_HideKeyboard,
    unix_IVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_021_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_021_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_021_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_021_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_022_FindOverlay,
    unix_IVROverlay_IVROverlay_022_CreateOverlay,
    unix_IVROverlay_IVROverlay_022_DestroyOverlay,
    unix_IVROverlay_IVROverlay_022_GetOverlayKey,
    unix_IVROverlay_IVROverlay_022_GetOverlayName,
    unix_IVROverlay_IVROverlay_022_SetOverlayName,
    unix_IVROverlay_IVROverlay_022_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_022_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_022_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_022_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_022_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_022_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_022_SetOverlayColor,
    unix_IVROverlay_IVROverlay_022_GetOverlayColor,
    unix_IVROverlay_IVROverlay_022_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_022_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_022_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_022_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_022_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_022_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_022_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_022_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_022_SetOverlayCurvature,
    unix_IVROverlay_IVROverlay_022_GetOverlayCurvature,
    unix_IVROverlay_IVROverlay_022_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_022_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_022_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_022_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_022_GetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_022_SetOverlayRenderModel,
    unix_IVROverlay_IVROverlay_022_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_022_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_022_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_022_SetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_022_GetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_022_ShowOverlay,
    unix_IVROverlay_IVROverlay_022_HideOverlay,
    unix_IVROverlay_IVROverlay_022_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_022_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_022_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_022_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_022_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_022_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_022_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_022_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform,
    unix_IVROverlay_IVROverlay_022_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration,
    unix_IVROverlay_IVROverlay_022_SetOverlayCursor,
    unix_IVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_022_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_022_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_022_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_022_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_022_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_022_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_022_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_022_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_022_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_022_ShowDashboard,
    unix_IVROverlay_IVROverlay_022_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_022_ShowKeyboard,
    unix_IVROverlay_IVROverlay_022_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_022_GetKeyboardText,
    unix_IVROverlay_IVROverlay_022_HideKeyboard,
    unix_IVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_022_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_022_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_024_FindOverlay,
    unix_IVROverlay_IVROverlay_024_CreateOverlay,
    unix_IVROverlay_IVROverlay_024_DestroyOverlay,
    unix_IVROverlay_IVROverlay_024_GetOverlayKey,
    unix_IVROverlay_IVROverlay_024_GetOverlayName,
    unix_IVROverlay_IVROverlay_024_SetOverlayName,
    unix_IVROverlay_IVROverlay_024_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_024_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_024_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_024_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_024_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_024_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_024_SetOverlayColor,
    unix_IVROverlay_IVROverlay_024_GetOverlayColor,
    unix_IVROverlay_IVROverlay_024_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_024_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_024_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_024_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_024_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_024_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_024_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_024_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_024_SetOverlayCurvature,
    unix_IVROverlay_IVROverlay_024_GetOverlayCurvature,
    unix_IVROverlay_IVROverlay_024_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_024_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_024_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_024_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_024_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_024_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_024_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_024_SetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_024_GetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_024_ShowOverlay,
    unix_IVROverlay_IVROverlay_024_HideOverlay,
    unix_IVROverlay_IVROverlay_024_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_024_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_024_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_024_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_024_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_024_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_024_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_024_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_024_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration,
    unix_IVROverlay_IVROverlay_024_SetOverlayCursor,
    unix_IVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_024_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_024_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_024_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_024_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_024_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_024_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_024_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_024_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_024_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_024_ShowDashboard,
    unix_IVROverlay_IVROverlay_024_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_024_ShowKeyboard,
    unix_IVROverlay_IVROverlay_024_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_024_GetKeyboardText,
    unix_IVROverlay_IVROverlay_024_HideKeyboard,
    unix_IVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_024_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_024_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_025_FindOverlay,
    unix_IVROverlay_IVROverlay_025_CreateOverlay,
    unix_IVROverlay_IVROverlay_025_DestroyOverlay,
    unix_IVROverlay_IVROverlay_025_GetOverlayKey,
    unix_IVROverlay_IVROverlay_025_GetOverlayName,
    unix_IVROverlay_IVROverlay_025_SetOverlayName,
    unix_IVROverlay_IVROverlay_025_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_025_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_025_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_025_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_025_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_025_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_025_SetOverlayColor,
    unix_IVROverlay_IVROverlay_025_GetOverlayColor,
    unix_IVROverlay_IVROverlay_025_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_025_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_025_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_025_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_025_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_025_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_025_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_025_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_025_SetOverlayCurvature,
    unix_IVROverlay_IVROverlay_025_GetOverlayCurvature,
    unix_IVROverlay_IVROverlay_025_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_025_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_025_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_025_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_025_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_025_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_025_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_025_SetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_025_GetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_025_SetOverlayTransformProjection,
    unix_IVROverlay_IVROverlay_025_ShowOverlay,
    unix_IVROverlay_IVROverlay_025_HideOverlay,
    unix_IVROverlay_IVROverlay_025_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_025_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_025_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_025_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_025_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_025_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_025_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_025_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_025_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration,
    unix_IVROverlay_IVROverlay_025_SetOverlayCursor,
    unix_IVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_025_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_025_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_025_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_025_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_025_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_025_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_025_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_025_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_025_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_025_ShowDashboard,
    unix_IVROverlay_IVROverlay_025_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_025_ShowKeyboard,
    unix_IVROverlay_IVROverlay_025_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_025_GetKeyboardText,
    unix_IVROverlay_IVROverlay_025_HideKeyboard,
    unix_IVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_025_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_025_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_026_FindOverlay,
    unix_IVROverlay_IVROverlay_026_CreateOverlay,
    unix_IVROverlay_IVROverlay_026_DestroyOverlay,
    unix_IVROverlay_IVROverlay_026_GetOverlayKey,
    unix_IVROverlay_IVROverlay_026_GetOverlayName,
    unix_IVROverlay_IVROverlay_026_SetOverlayName,
    unix_IVROverlay_IVROverlay_026_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_026_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_026_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_026_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_026_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_026_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_026_SetOverlayColor,
    unix_IVROverlay_IVROverlay_026_GetOverlayColor,
    unix_IVROverlay_IVROverlay_026_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_026_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_026_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_026_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_026_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_026_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_026_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_026_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_026_SetOverlayCurvature,
    unix_IVROverlay_IVROverlay_026_GetOverlayCurvature,
    unix_IVROverlay_IVROverlay_026_SetOverlayPreCurvePitch,
    unix_IVROverlay_IVROverlay_026_GetOverlayPreCurvePitch,
    unix_IVROverlay_IVROverlay_026_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_026_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_026_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_026_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_026_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_026_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_026_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative,
    unix_IVROverlay_IVROverlay_026_SetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_026_GetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_026_SetOverlayTransformProjection,
    unix_IVROverlay_IVROverlay_026_ShowOverlay,
    unix_IVROverlay_IVROverlay_026_HideOverlay,
    unix_IVROverlay_IVROverlay_026_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_026_WaitFrameSync,
    unix_IVROverlay_IVROverlay_026_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_026_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_026_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_026_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_026_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_026_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_026_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_026_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration,
    unix_IVROverlay_IVROverlay_026_SetOverlayCursor,
    unix_IVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_026_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_026_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_026_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_026_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_026_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_026_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_026_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_026_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_026_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_026_ShowDashboard,
    unix_IVROverlay_IVROverlay_026_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_026_ShowKeyboard,
    unix_IVROverlay_IVROverlay_026_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_026_GetKeyboardText,
    unix_IVROverlay_IVROverlay_026_HideKeyboard,
    unix_IVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_026_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_026_CloseMessageOverlay,
    unix_IVROverlay_IVROverlay_027_FindOverlay,
    unix_IVROverlay_IVROverlay_027_CreateOverlay,
    unix_IVROverlay_IVROverlay_027_DestroyOverlay,
    unix_IVROverlay_IVROverlay_027_GetOverlayKey,
    unix_IVROverlay_IVROverlay_027_GetOverlayName,
    unix_IVROverlay_IVROverlay_027_SetOverlayName,
    unix_IVROverlay_IVROverlay_027_GetOverlayImageData,
    unix_IVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum,
    unix_IVROverlay_IVROverlay_027_SetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_027_GetOverlayRenderingPid,
    unix_IVROverlay_IVROverlay_027_SetOverlayFlag,
    unix_IVROverlay_IVROverlay_027_GetOverlayFlag,
    unix_IVROverlay_IVROverlay_027_GetOverlayFlags,
    unix_IVROverlay_IVROverlay_027_SetOverlayColor,
    unix_IVROverlay_IVROverlay_027_GetOverlayColor,
    unix_IVROverlay_IVROverlay_027_SetOverlayAlpha,
    unix_IVROverlay_IVROverlay_027_GetOverlayAlpha,
    unix_IVROverlay_IVROverlay_027_SetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_027_GetOverlayTexelAspect,
    unix_IVROverlay_IVROverlay_027_SetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_027_GetOverlaySortOrder,
    unix_IVROverlay_IVROverlay_027_SetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_027_GetOverlayWidthInMeters,
    unix_IVROverlay_IVROverlay_027_SetOverlayCurvature,
    unix_IVROverlay_IVROverlay_027_GetOverlayCurvature,
    unix_IVROverlay_IVROverlay_027_SetOverlayPreCurvePitch,
    unix_IVROverlay_IVROverlay_027_GetOverlayPreCurvePitch,
    unix_IVROverlay_IVROverlay_027_SetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_027_GetOverlayTextureColorSpace,
    unix_IVROverlay_IVROverlay_027_SetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_027_GetOverlayTextureBounds,
    unix_IVROverlay_IVROverlay_027_GetOverlayTransformType,
    unix_IVROverlay_IVROverlay_027_SetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_027_GetOverlayTransformAbsolute,
    unix_IVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative,
    unix_IVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent,
    unix_IVROverlay_IVROverlay_027_SetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_027_GetOverlayTransformCursor,
    unix_IVROverlay_IVROverlay_027_SetOverlayTransformProjection,
    unix_IVROverlay_IVROverlay_027_ShowOverlay,
    unix_IVROverlay_IVROverlay_027_HideOverlay,
    unix_IVROverlay_IVROverlay_027_IsOverlayVisible,
    unix_IVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates,
    unix_IVROverlay_IVROverlay_027_WaitFrameSync,
    unix_IVROverlay_IVROverlay_027_PollNextOverlayEvent,
    unix_IVROverlay_IVROverlay_027_GetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_027_SetOverlayInputMethod,
    unix_IVROverlay_IVROverlay_027_GetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_027_SetOverlayMouseScale,
    unix_IVROverlay_IVROverlay_027_ComputeOverlayIntersection,
    unix_IVROverlay_IVROverlay_027_IsHoverTargetOverlay,
    unix_IVROverlay_IVROverlay_027_SetOverlayIntersectionMask,
    unix_IVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration,
    unix_IVROverlay_IVROverlay_027_SetOverlayCursor,
    unix_IVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride,
    unix_IVROverlay_IVROverlay_027_SetOverlayTexture,
    unix_IVROverlay_IVROverlay_027_ClearOverlayTexture,
    unix_IVROverlay_IVROverlay_027_SetOverlayRaw,
    unix_IVROverlay_IVROverlay_027_SetOverlayFromFile,
    unix_IVROverlay_IVROverlay_027_GetOverlayTexture,
    unix_IVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle,
    unix_IVROverlay_IVROverlay_027_GetOverlayTextureSize,
    unix_IVROverlay_IVROverlay_027_CreateDashboardOverlay,
    unix_IVROverlay_IVROverlay_027_IsDashboardVisible,
    unix_IVROverlay_IVROverlay_027_IsActiveDashboardOverlay,
    unix_IVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess,
    unix_IVROverlay_IVROverlay_027_ShowDashboard,
    unix_IVROverlay_IVROverlay_027_GetPrimaryDashboardDevice,
    unix_IVROverlay_IVROverlay_027_ShowKeyboard,
    unix_IVROverlay_IVROverlay_027_ShowKeyboardForOverlay,
    unix_IVROverlay_IVROverlay_027_GetKeyboardText,
    unix_IVROverlay_IVROverlay_027_HideKeyboard,
    unix_IVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute,
    unix_IVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay,
    unix_IVROverlay_IVROverlay_027_ShowMessageOverlay,
    unix_IVROverlay_IVROverlay_027_CloseMessageOverlay,
    unix_IVRRenderModels_IVRRenderModels_001_LoadRenderModel,
    unix_IVRRenderModels_IVRRenderModels_001_FreeRenderModel,
    unix_IVRRenderModels_IVRRenderModels_001_GetRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_001_GetRenderModelCount,
    unix_IVRRenderModels_IVRRenderModels_002_LoadRenderModel,
    unix_IVRRenderModels_IVRRenderModels_002_FreeRenderModel,
    unix_IVRRenderModels_IVRRenderModels_002_LoadTexture,
    unix_IVRRenderModels_IVRRenderModels_002_FreeTexture,
    unix_IVRRenderModels_IVRRenderModels_002_GetRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_002_GetRenderModelCount,
    unix_IVRRenderModels_IVRRenderModels_002_GetComponentCount,
    unix_IVRRenderModels_IVRRenderModels_002_GetComponentName,
    unix_IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask,
    unix_IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_002_GetComponentState,
    unix_IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent,
    unix_IVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async,
    unix_IVRRenderModels_IVRRenderModels_004_FreeRenderModel,
    unix_IVRRenderModels_IVRRenderModels_004_LoadTexture_Async,
    unix_IVRRenderModels_IVRRenderModels_004_FreeTexture,
    unix_IVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async,
    unix_IVRRenderModels_IVRRenderModels_004_FreeTextureD3D11,
    unix_IVRRenderModels_IVRRenderModels_004_GetRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_004_GetRenderModelCount,
    unix_IVRRenderModels_IVRRenderModels_004_GetComponentCount,
    unix_IVRRenderModels_IVRRenderModels_004_GetComponentName,
    unix_IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask,
    unix_IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_004_GetComponentState,
    unix_IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent,
    unix_IVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async,
    unix_IVRRenderModels_IVRRenderModels_005_FreeRenderModel,
    unix_IVRRenderModels_IVRRenderModels_005_LoadTexture_Async,
    unix_IVRRenderModels_IVRRenderModels_005_FreeTexture,
    unix_IVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async,
    unix_IVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async,
    unix_IVRRenderModels_IVRRenderModels_005_FreeTextureD3D11,
    unix_IVRRenderModels_IVRRenderModels_005_GetRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_005_GetRenderModelCount,
    unix_IVRRenderModels_IVRRenderModels_005_GetComponentCount,
    unix_IVRRenderModels_IVRRenderModels_005_GetComponentName,
    unix_IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask,
    unix_IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_005_GetComponentState,
    unix_IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent,
    unix_IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL,
    unix_IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath,
    unix_IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum,
    unix_IVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async,
    unix_IVRRenderModels_IVRRenderModels_006_FreeRenderModel,
    unix_IVRRenderModels_IVRRenderModels_006_LoadTexture_Async,
    unix_IVRRenderModels_IVRRenderModels_006_FreeTexture,
    unix_IVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async,
    unix_IVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async,
    unix_IVRRenderModels_IVRRenderModels_006_FreeTextureD3D11,
    unix_IVRRenderModels_IVRRenderModels_006_GetRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_006_GetRenderModelCount,
    unix_IVRRenderModels_IVRRenderModels_006_GetComponentCount,
    unix_IVRRenderModels_IVRRenderModels_006_GetComponentName,
    unix_IVRRenderModels_IVRRenderModels_006_GetComponentButtonMask,
    unix_IVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName,
    unix_IVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath,
    unix_IVRRenderModels_IVRRenderModels_006_GetComponentState,
    unix_IVRRenderModels_IVRRenderModels_006_RenderModelHasComponent,
    unix_IVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL,
    unix_IVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath,
    unix_IVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum,
    unix_IVRResources_IVRResources_001_LoadSharedResource,
    unix_IVRResources_IVRResources_001_GetResourceFullPath,
    unix_IVRScreenshots_IVRScreenshots_001_RequestScreenshot,
    unix_IVRScreenshots_IVRScreenshots_001_HookScreenshot,
    unix_IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType,
    unix_IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename,
    unix_IVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress,
    unix_IVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot,
    unix_IVRScreenshots_IVRScreenshots_001_SubmitScreenshot,
    unix_IVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum,
    unix_IVRSettings_IVRSettings_001_Sync,
    unix_IVRSettings_IVRSettings_001_GetBool,
    unix_IVRSettings_IVRSettings_001_SetBool,
    unix_IVRSettings_IVRSettings_001_GetInt32,
    unix_IVRSettings_IVRSettings_001_SetInt32,
    unix_IVRSettings_IVRSettings_001_GetFloat,
    unix_IVRSettings_IVRSettings_001_SetFloat,
    unix_IVRSettings_IVRSettings_001_GetString,
    unix_IVRSettings_IVRSettings_001_SetString,
    unix_IVRSettings_IVRSettings_001_RemoveSection,
    unix_IVRSettings_IVRSettings_001_RemoveKeyInSection,
    unix_IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum,
    unix_IVRSettings_IVRSettings_002_Sync,
    unix_IVRSettings_IVRSettings_002_SetBool,
    unix_IVRSettings_IVRSettings_002_SetInt32,
    unix_IVRSettings_IVRSettings_002_SetFloat,
    unix_IVRSettings_IVRSettings_002_SetString,
    unix_IVRSettings_IVRSettings_002_GetBool,
    unix_IVRSettings_IVRSettings_002_GetInt32,
    unix_IVRSettings_IVRSettings_002_GetFloat,
    unix_IVRSettings_IVRSettings_002_GetString,
    unix_IVRSettings_IVRSettings_002_RemoveSection,
    unix_IVRSettings_IVRSettings_002_RemoveKeyInSection,
    unix_IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum,
    unix_IVRSettings_IVRSettings_003_SetBool,
    unix_IVRSettings_IVRSettings_003_SetInt32,
    unix_IVRSettings_IVRSettings_003_SetFloat,
    unix_IVRSettings_IVRSettings_003_SetString,
    unix_IVRSettings_IVRSettings_003_GetBool,
    unix_IVRSettings_IVRSettings_003_GetInt32,
    unix_IVRSettings_IVRSettings_003_GetFloat,
    unix_IVRSettings_IVRSettings_003_GetString,
    unix_IVRSettings_IVRSettings_003_RemoveSection,
    unix_IVRSettings_IVRSettings_003_RemoveKeyInSection,
    unix_IVRSystem_IVRSystem_003_GetWindowBounds,
    unix_IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_003_GetEyeOutputViewport,
    unix_IVRSystem_IVRSystem_003_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_003_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_003_ComputeDistortion,
    unix_IVRSystem_IVRSystem_003_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_003_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_003_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_003_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_003_AttachToWindow,
    unix_IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_003_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_003_LoadRenderModel,
    unix_IVRSystem_IVRSystem_003_FreeRenderModel,
    unix_IVRSystem_IVRSystem_003_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_003_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_003_PollNextEvent,
    unix_IVRSystem_IVRSystem_003_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_003_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_003_GetControllerState,
    unix_IVRSystem_IVRSystem_003_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_003_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse,
    unix_IVRSystem_IVRSystem_003_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_003_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_004_GetWindowBounds,
    unix_IVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_004_GetEyeOutputViewport,
    unix_IVRSystem_IVRSystem_004_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_004_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_004_ComputeDistortion,
    unix_IVRSystem_IVRSystem_004_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_004_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_004_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_004_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_004_AttachToWindow,
    unix_IVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_004_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_004_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_004_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_004_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_004_PollNextEvent,
    unix_IVRSystem_IVRSystem_004_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_004_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_004_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_004_GetControllerState,
    unix_IVRSystem_IVRSystem_004_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_004_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_004_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_004_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_004_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_004_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_005_GetWindowBounds,
    unix_IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_005_GetEyeOutputViewport,
    unix_IVRSystem_IVRSystem_005_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_005_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_005_ComputeDistortion,
    unix_IVRSystem_IVRSystem_005_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_005_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_005_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_005_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_005_AttachToWindow,
    unix_IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_005_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_005_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_005_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_005_PollNextEvent,
    unix_IVRSystem_IVRSystem_005_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_005_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_005_GetControllerState,
    unix_IVRSystem_IVRSystem_005_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_005_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_005_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_005_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_005_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_006_GetWindowBounds,
    unix_IVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_006_GetEyeOutputViewport,
    unix_IVRSystem_IVRSystem_006_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_006_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_006_ComputeDistortion,
    unix_IVRSystem_IVRSystem_006_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_006_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_006_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_006_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_006_AttachToWindow,
    unix_IVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_006_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_006_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_006_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_006_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_006_PollNextEvent,
    unix_IVRSystem_IVRSystem_006_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_006_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_006_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_006_GetControllerState,
    unix_IVRSystem_IVRSystem_006_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_006_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_006_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_006_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_006_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_006_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_006_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_006_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_006_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_009_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_009_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_009_ComputeDistortion,
    unix_IVRSystem_IVRSystem_009_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_009_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_009_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_009_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_009_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_009_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_009_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_009_ApplyTransform,
    unix_IVRSystem_IVRSystem_009_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_009_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_009_PollNextEvent,
    unix_IVRSystem_IVRSystem_009_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_009_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_009_GetControllerState,
    unix_IVRSystem_IVRSystem_009_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_009_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_009_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_009_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_009_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_009_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_010_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_010_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_010_ComputeDistortion,
    unix_IVRSystem_IVRSystem_010_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_010_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_010_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_010_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_010_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_010_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_010_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_010_ApplyTransform,
    unix_IVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_010_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_010_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_010_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_010_PollNextEvent,
    unix_IVRSystem_IVRSystem_010_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_010_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_010_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_010_GetControllerState,
    unix_IVRSystem_IVRSystem_010_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_010_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_010_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_010_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_010_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_010_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_010_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_010_PerformanceTestEnableCapture,
    unix_IVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange,
    unix_IVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_011_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_011_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_011_ComputeDistortion,
    unix_IVRSystem_IVRSystem_011_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_011_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_011_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_011_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_011_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_011_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_011_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_011_ApplyTransform,
    unix_IVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_011_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_011_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_011_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_011_PollNextEvent,
    unix_IVRSystem_IVRSystem_011_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_011_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_011_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_011_GetControllerState,
    unix_IVRSystem_IVRSystem_011_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_011_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_011_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_011_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_011_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_011_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_011_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_011_PerformanceTestEnableCapture,
    unix_IVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange,
    unix_IVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_012_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_012_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_012_ComputeDistortion,
    unix_IVRSystem_IVRSystem_012_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_012_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_012_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_012_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_012_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_012_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_012_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_012_ApplyTransform,
    unix_IVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_012_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_012_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_012_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_012_PollNextEvent,
    unix_IVRSystem_IVRSystem_012_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_012_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_012_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_012_GetControllerState,
    unix_IVRSystem_IVRSystem_012_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_012_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_012_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_012_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_012_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_012_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_012_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_014_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_014_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_014_ComputeDistortion,
    unix_IVRSystem_IVRSystem_014_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_014_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_014_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_014_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_014_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_014_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_014_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_014_ApplyTransform,
    unix_IVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_014_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_014_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_014_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_014_PollNextEvent,
    unix_IVRSystem_IVRSystem_014_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_014_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_014_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_014_GetControllerState,
    unix_IVRSystem_IVRSystem_014_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_014_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_014_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_014_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_014_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_014_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_014_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_015_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_015_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_015_ComputeDistortion,
    unix_IVRSystem_IVRSystem_015_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_015_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_015_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_015_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_015_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_015_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_015_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_015_ApplyTransform,
    unix_IVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_015_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_015_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_015_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_015_PollNextEvent,
    unix_IVRSystem_IVRSystem_015_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_015_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_015_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_015_GetControllerState,
    unix_IVRSystem_IVRSystem_015_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_015_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_015_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_015_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_015_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_015_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_015_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_016_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_016_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_016_ComputeDistortion,
    unix_IVRSystem_IVRSystem_016_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_016_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_016_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_016_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_016_GetOutputDevice,
    unix_IVRSystem_IVRSystem_016_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_016_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_016_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_016_ApplyTransform,
    unix_IVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_016_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_016_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_016_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_016_PollNextEvent,
    unix_IVRSystem_IVRSystem_016_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_016_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_016_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_016_GetControllerState,
    unix_IVRSystem_IVRSystem_016_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_016_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_016_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_016_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_016_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_016_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_016_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_017_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_017_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_017_ComputeDistortion,
    unix_IVRSystem_IVRSystem_017_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_017_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_017_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_017_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_017_GetOutputDevice,
    unix_IVRSystem_IVRSystem_017_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_017_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_017_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_017_ApplyTransform,
    unix_IVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_017_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_017_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_017_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_017_PollNextEvent,
    unix_IVRSystem_IVRSystem_017_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_017_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_017_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_017_GetControllerState,
    unix_IVRSystem_IVRSystem_017_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_017_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_017_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_017_CaptureInputFocus,
    unix_IVRSystem_IVRSystem_017_ReleaseInputFocus,
    unix_IVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess,
    unix_IVRSystem_IVRSystem_017_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_017_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_019_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_019_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_019_ComputeDistortion,
    unix_IVRSystem_IVRSystem_019_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_019_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_019_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_019_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_019_GetOutputDevice,
    unix_IVRSystem_IVRSystem_019_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_019_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_019_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_019_ApplyTransform,
    unix_IVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_019_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_019_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_019_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_019_PollNextEvent,
    unix_IVRSystem_IVRSystem_019_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_019_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_019_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_019_GetControllerState,
    unix_IVRSystem_IVRSystem_019_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_019_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_019_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_019_IsInputAvailable,
    unix_IVRSystem_IVRSystem_019_IsSteamVRDrawingControllers,
    unix_IVRSystem_IVRSystem_019_ShouldApplicationPause,
    unix_IVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork,
    unix_IVRSystem_IVRSystem_019_DriverDebugRequest,
    unix_IVRSystem_IVRSystem_019_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_020_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_020_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_020_ComputeDistortion,
    unix_IVRSystem_IVRSystem_020_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_020_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_020_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_020_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_020_GetOutputDevice,
    unix_IVRSystem_IVRSystem_020_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_020_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_020_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_020_ApplyTransform,
    unix_IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_020_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_020_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_020_PollNextEvent,
    unix_IVRSystem_IVRSystem_020_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_020_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_020_GetControllerState,
    unix_IVRSystem_IVRSystem_020_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_020_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_020_IsInputAvailable,
    unix_IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers,
    unix_IVRSystem_IVRSystem_020_ShouldApplicationPause,
    unix_IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork,
    unix_IVRSystem_IVRSystem_020_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt,
    unix_IVRSystem_IVRSystem_020_GetAppContainerFilePaths,
    unix_IVRSystem_IVRSystem_020_GetRuntimeVersion,
    unix_IVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_021_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_021_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_021_ComputeDistortion,
    unix_IVRSystem_IVRSystem_021_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_021_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_021_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_021_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_021_GetOutputDevice,
    unix_IVRSystem_IVRSystem_021_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_021_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_021_ResetSeatedZeroPose,
    unix_IVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_021_ApplyTransform,
    unix_IVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_021_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_021_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_021_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_021_PollNextEvent,
    unix_IVRSystem_IVRSystem_021_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_021_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_021_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_021_GetControllerState,
    unix_IVRSystem_IVRSystem_021_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_021_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_021_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_021_IsInputAvailable,
    unix_IVRSystem_IVRSystem_021_IsSteamVRDrawingControllers,
    unix_IVRSystem_IVRSystem_021_ShouldApplicationPause,
    unix_IVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork,
    unix_IVRSystem_IVRSystem_021_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_021_GetAppContainerFilePaths,
    unix_IVRSystem_IVRSystem_021_GetRuntimeVersion,
    unix_IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize,
    unix_IVRSystem_IVRSystem_022_GetProjectionMatrix,
    unix_IVRSystem_IVRSystem_022_GetProjectionRaw,
    unix_IVRSystem_IVRSystem_022_ComputeDistortion,
    unix_IVRSystem_IVRSystem_022_GetEyeToHeadTransform,
    unix_IVRSystem_IVRSystem_022_GetTimeSinceLastVsync,
    unix_IVRSystem_IVRSystem_022_GetD3D9AdapterIndex,
    unix_IVRSystem_IVRSystem_022_GetDXGIOutputInfo,
    unix_IVRSystem_IVRSystem_022_GetOutputDevice,
    unix_IVRSystem_IVRSystem_022_IsDisplayOnDesktop,
    unix_IVRSystem_IVRSystem_022_SetDisplayVisibility,
    unix_IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose,
    unix_IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass,
    unix_IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel,
    unix_IVRSystem_IVRSystem_022_ApplyTransform,
    unix_IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole,
    unix_IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex,
    unix_IVRSystem_IVRSystem_022_GetTrackedDeviceClass,
    unix_IVRSystem_IVRSystem_022_IsTrackedDeviceConnected,
    unix_IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty,
    unix_IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum,
    unix_IVRSystem_IVRSystem_022_PollNextEvent,
    unix_IVRSystem_IVRSystem_022_PollNextEventWithPose,
    unix_IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_022_GetHiddenAreaMesh,
    unix_IVRSystem_IVRSystem_022_GetControllerState,
    unix_IVRSystem_IVRSystem_022_GetControllerStateWithPose,
    unix_IVRSystem_IVRSystem_022_TriggerHapticPulse,
    unix_IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum,
    unix_IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum,
    unix_IVRSystem_IVRSystem_022_IsInputAvailable,
    unix_IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers,
    unix_IVRSystem_IVRSystem_022_ShouldApplicationPause,
    unix_IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork,
    unix_IVRSystem_IVRSystem_022_PerformFirmwareUpdate,
    unix_IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting,
    unix_IVRSystem_IVRSystem_022_GetAppContainerFilePaths,
    unix_IVRSystem_IVRSystem_022_GetRuntimeVersion,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_HasCamera,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion,
    unix_IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_HasCamera,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_HasCamera,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_HasCamera,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_HasCamera,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_HasCamera,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace,
    unix_IVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace,
};

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
