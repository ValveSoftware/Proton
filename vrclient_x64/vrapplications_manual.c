#include "vrclient_private.h"
#include "winreg.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

uint32_t __thiscall winIVRApplications_IVRApplications_004_LaunchInternalProcess(struct w_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_004_LaunchInternalProcess_params params =
    {
        .u_iface = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_LaunchInternalProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_LaunchInternalProcess(struct w_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_005_LaunchInternalProcess_params params =
    {
        .u_iface = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_LaunchInternalProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_LaunchInternalProcess(struct w_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_006_LaunchInternalProcess_params params =
    {
        .u_iface = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_LaunchInternalProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_LaunchInternalProcess(struct w_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_007_LaunchInternalProcess_params params =
    {
        .u_iface = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_LaunchInternalProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_008_LaunchInternalProcess(struct w_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_008_LaunchInternalProcess_params params =
    {
        .u_iface = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_008_LaunchInternalProcess, &params );
    return params._ret;
}
