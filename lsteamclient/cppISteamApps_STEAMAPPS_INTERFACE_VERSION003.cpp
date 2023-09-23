#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION003.h"

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003
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
#endif /* __cplusplus */
};

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

#ifdef __cplusplus
}
#endif
