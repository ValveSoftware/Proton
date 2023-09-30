/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

