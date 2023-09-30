/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled( void *args )
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled_params *params = (struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled_params *)args;
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsParentalLockEnabled(  );
    return 0;
}

NTSTATUS ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked( void *args )
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked_params *params = (struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked_params *)args;
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsParentalLockLocked(  );
    return 0;
}

NTSTATUS ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked( void *args )
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked_params *params = (struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked_params *)args;
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsAppBlocked( params->nAppID );
    return 0;
}

NTSTATUS ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList( void *args )
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList_params *params = (struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList_params *)args;
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsAppInBlockList( params->nAppID );
    return 0;
}

NTSTATUS ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked( void *args )
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked_params *params = (struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked_params *)args;
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsFeatureBlocked( params->eFeature );
    return 0;
}

NTSTATUS ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList( void *args )
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList_params *params = (struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList_params *)args;
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsFeatureInBlockList( params->eFeature );
    return 0;
}

