/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001.h"

struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool BIsParentalLockEnabled(  ) = 0;
    virtual bool BIsParentalLockLocked(  ) = 0;
    virtual bool BIsAppBlocked( uint32_t ) = 0;
    virtual bool BIsAppInBlockList( uint32_t ) = 0;
    virtual bool BIsFeatureBlocked( uint32_t ) = 0;
    virtual bool BIsFeatureInBlockList( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled_params *params )
{
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsParentalLockEnabled(  );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked_params *params )
{
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsParentalLockLocked(  );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked_params *params )
{
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsAppBlocked( params->nAppID );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList_params *params )
{
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsAppInBlockList( params->nAppID );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked_params *params )
{
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsFeatureBlocked( params->eFeature );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList_params *params )
{
    struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct u_ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsFeatureInBlockList( params->eFeature );
}

