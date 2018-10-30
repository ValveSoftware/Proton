#include "steam_defs.h"
#include "steamworks_sdk_100/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION001.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_100.h"
int cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData(void *linux_side, AppId_t nAppID, const char * pchKey, char * pchValue, int cchValueMax)
{
    return ((ISteamApps*)linux_side)->GetAppData((AppId_t)nAppID, (const char *)pchKey, (char *)pchValue, (int)cchValueMax);
}

#ifdef __cplusplus
}
#endif
