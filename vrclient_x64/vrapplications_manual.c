#include "vrclient_private.h"
#include "winreg.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static BOOL launch_through_register_subprocess(struct w_iface *_this, const char *pchBinaryPath, const char *pchArguments,
        const char *pchWorkingDirectory, uint32_t *ret)
{
    static struct u_iface apps_iface;
    struct IVRApplications_IVRApplications_008_RegisterSubprocess_params params = { 0 };
    PROCESS_INFORMATION pi;
    STARTUPINFOA si = { sizeof(si) };

    TRACE("pchBinaryPath %s, pchArguments %s, pchWorkingDirectory %s.\n",
            debugstr_a(pchBinaryPath), debugstr_a(pchArguments), debugstr_a(pchWorkingDirectory));

    if (!apps_iface.handle)
    {
        int return_code;
        struct vrclient_VRClientCoreFactory_params params = {.name = "IVRApplications_008", .return_code = &return_code};
        VRCLIENT_CALL( vrclient_VRClientCoreFactory, &params );
        apps_iface = params._ret;
    }
    if (!apps_iface.handle)
    {
        FIXME("IVRApplications_008 not found.\n");
        return FALSE;
    }

    *ret = 104; /* VRApplicationError_UnknownApplication */
    if (!CreateProcessA(pchBinaryPath, (char *)pchArguments, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, pchWorkingDirectory, &si, &pi))
    {
        ERR( "CreateProcessW failed, err %lu.\n", GetLastError() );
        return TRUE;
    }
    params.u_iface = apps_iface;
    params.nPid = GetProcessId(pi.hProcess);
    VRCLIENT_CALL( IVRApplications_IVRApplications_008_RegisterSubprocess, &params );
    *ret = params._ret;
    if (params._ret) TerminateProcess(pi.hProcess, -1);
    else             ResumeThread(pi.hThread);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return TRUE;
}

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
    if (!launch_through_register_subprocess(_this, pchBinaryPath, pchArguments, pchWorkingDirectory, &params._ret))
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
    if (!launch_through_register_subprocess(_this, pchBinaryPath, pchArguments, pchWorkingDirectory, &params._ret))
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
    if (!launch_through_register_subprocess(_this, pchBinaryPath, pchArguments, pchWorkingDirectory, &params._ret))
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
    if (!launch_through_register_subprocess(_this, pchBinaryPath, pchArguments, pchWorkingDirectory, &params._ret))
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
    if (!launch_through_register_subprocess(_this, pchBinaryPath, pchArguments, pchWorkingDirectory, &params._ret))
        VRCLIENT_CALL( IVRApplications_IVRApplications_008_LaunchInternalProcess, &params );
    return params._ret;
}
