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
int cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData(void *linux_side, AppId_t nAppID, const char * pchKey, char * pchValue, int cchValueMax)
{
    return ((ISteamApps*)linux_side)->GetAppData((AppId_t)nAppID, (const char *)pchKey, (char *)pchValue, (int)cchValueMax);
}

#ifdef __cplusplus
}
#endif
