#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_117/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_117
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION004.h"

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
}

#ifdef __cplusplus
}
#endif
