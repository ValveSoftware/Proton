#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION002.h"

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

#ifdef __cplusplus
}
#endif
