#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

template< typename Iface, typename Params >
static NTSTATUS IVRApplications_LaunchInternalProcess( Iface *iface, Params *params, bool wow64 )
{
    FIXME( "pchBinaryPath %s, pchArguments %s, pchWorkingDirectory %s.\n",
           debugstr_a(params->pchBinaryPath), debugstr_a(params->pchArguments), debugstr_a(params->pchWorkingDirectory));
    params->_ret = 300; /*VRApplicationError_NotImplemented*/;
    return 0;
}

VRCLIENT_UNIX_IMPL( IVRApplications, 004, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 005, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 006, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 007, LaunchInternalProcess );
