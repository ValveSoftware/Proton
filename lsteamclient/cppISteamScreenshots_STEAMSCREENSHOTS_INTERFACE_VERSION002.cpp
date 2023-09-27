#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_137/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_137
#include "struct_converters.h"
#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002.h"
void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->WriteScreenshot( (void *)params->pubRGB, (uint32)params->cubRGB, (int)params->nWidth, (int)params->nHeight );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->AddScreenshotToLibrary( (const char *)params->pchFilename, (const char *)params->pchThumbnailFilename, (int)params->nWidth, (int)params->nHeight );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot_params *params )
{
    ((ISteamScreenshots*)params->linux_side)->TriggerScreenshot(  );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots_params *params )
{
    ((ISteamScreenshots*)params->linux_side)->HookScreenshots( (bool)params->bHook );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->SetLocation( (ScreenshotHandle)params->hScreenshot, (const char *)params->pchLocation );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->TagUser( (ScreenshotHandle)params->hScreenshot, (CSteamID)params->steamID );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile_params *params )
{
    params->_ret = ((ISteamScreenshots*)params->linux_side)->TagPublishedFile( (ScreenshotHandle)params->hScreenshot, (PublishedFileId_t)params->unPublishedFileID );
}

#ifdef __cplusplus
}
#endif
