#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamparentalsettings.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001.h"

struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001
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
    struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsParentalLockEnabled(  );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked_params *params )
{
    struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsParentalLockLocked(  );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked_params *params )
{
    struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsAppBlocked( params->nAppID );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList_params *params )
{
    struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsAppInBlockList( params->nAppID );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked_params *params )
{
    struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsFeatureBlocked( params->eFeature );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList_params *params )
{
    struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *iface = (struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BIsFeatureInBlockList( params->eFeature );
}

#ifdef __cplusplus
}
#endif
