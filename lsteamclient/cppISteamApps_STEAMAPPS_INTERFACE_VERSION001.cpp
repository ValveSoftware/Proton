#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_100/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_100
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION001.h"

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual int32_t GetAppData( uint32_t, const char *, char *, int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppData( params->nAppID, params->pchKey, params->pchValue, params->cchValueMax );
}

#ifdef __cplusplus
}
#endif
