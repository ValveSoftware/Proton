#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_149_scaffold/steam_api.h"
#include "steamworks_sdk_149_scaffold/steamnetworkingtypes.h"
#include "steamworks_sdk_149_scaffold/isteamtv.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamTV_STEAMTV_INTERFACE_V001.h"
bool cppISteamTV_STEAMTV_INTERFACE_V001_IsBroadcasting( void *linux_side, int * pnNumViewers )
{
    return ((ISteamTV*)linux_side)->IsBroadcasting((int *)pnNumViewers);
}
void cppISteamTV_STEAMTV_INTERFACE_V001_AddBroadcastGameData( void *linux_side, const char * pchKey, const char * pchValue )
{
    return ((ISteamTV*)linux_side)->AddBroadcastGameData((const char *) pchKey, (const char *) pchValue);
}
void cppISteamTV_STEAMTV_INTERFACE_V001_RemoveBroadcastGameData( void *linux_side, const char * pchKey )
{
    return ((ISteamTV*)linux_side)->RemoveBroadcastGameData((const char *) pchKey);
}
void cppISteamTV_STEAMTV_INTERFACE_V001_AddTimelineMarker( void *linux_side, const char * pchTemplateName, bool bPersistent, uint8 nColorR, uint8 nColorG, uint8 nColorB )
{
    return ((ISteamTV*)linux_side)->AddTimelineMarker((const char *) pchTemplateName, (bool) bPersistent, (uint8) nColorR, (uint8) nColorG, (uint8) nColorB);
}
void cppISteamTV_STEAMTV_INTERFACE_V001_RemoveTimelineMarker( void *linux_side )
{
    return ((ISteamTV*)linux_side)->RemoveTimelineMarker();
}
uint32 cppISteamTV_STEAMTV_INTERFACE_V001_AddRegion( void *linux_side, const char * pchElementName, const char * pchTimelineDataSection, const SteamTVRegion_t * pSteamTVRegion, ESteamTVRegionBehavior eSteamTVRegionBehavior )
{
    return ((ISteamTV*)linux_side)->AddRegion((const char *) pchElementName, (const char *) pchTimelineDataSection, (const SteamTVRegion_t *) pSteamTVRegion, (ESteamTVRegionBehavior) eSteamTVRegionBehavior);
}
void cppISteamTV_STEAMTV_INTERFACE_V001_RemoveRegion( void *linux_side, uint32 unRegionHandle )
{
    return ((ISteamTV*)linux_side)->RemoveRegion((uint32) unRegionHandle);
}

#ifdef __cplusplus
}
#endif
