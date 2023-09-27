#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003.h"
void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->WriteScreenshot( (void *)params->pubRGB, (uint32)params->cubRGB, (int)params->nWidth, (int)params->nHeight );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->AddScreenshotToLibrary( (const char *)params->pchFilename, (const char *)params->pchThumbnailFilename, (int)params->nWidth, (int)params->nHeight );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot_params *params )
{
    ((ISteamScreenshots*)params->linux_side)->TriggerScreenshot(  );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots_params *params )
{
    ((ISteamScreenshots*)params->linux_side)->HookScreenshots( (bool)params->bHook );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->SetLocation( (ScreenshotHandle)params->hScreenshot, (const char *)params->pchLocation );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->TagUser( (ScreenshotHandle)params->hScreenshot, (CSteamID)params->steamID );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->TagPublishedFile( (ScreenshotHandle)params->hScreenshot, (PublishedFileId_t)params->unPublishedFileID );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->IsScreenshotsHooked(  );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->AddVRScreenshotToLibrary( (EVRScreenshotType)params->eType, (const char *)params->pchFilename, (const char *)params->pchVRFilename );
}

#ifdef __cplusplus
}
#endif
