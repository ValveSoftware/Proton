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
ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(void *linux_side, void * pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    return ((ISteamScreenshots*)linux_side)->WriteScreenshot((void *)pubRGB, (uint32)cubRGB, (int)nWidth, (int)nHeight);
}

ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(void *linux_side, const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight)
{
    return ((ISteamScreenshots*)linux_side)->AddScreenshotToLibrary((const char *)pchFilename, (const char *)pchThumbnailFilename, (int)nWidth, (int)nHeight);
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(void *linux_side)
{
    ((ISteamScreenshots*)linux_side)->TriggerScreenshot();
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(void *linux_side, bool bHook)
{
    ((ISteamScreenshots*)linux_side)->HookScreenshots((bool)bHook);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(void *linux_side, ScreenshotHandle hScreenshot, const char * pchLocation)
{
    return ((ISteamScreenshots*)linux_side)->SetLocation((ScreenshotHandle)hScreenshot, (const char *)pchLocation);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(void *linux_side, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    return ((ISteamScreenshots*)linux_side)->TagUser((ScreenshotHandle)hScreenshot, (CSteamID)steamID);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(void *linux_side, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
    return ((ISteamScreenshots*)linux_side)->TagPublishedFile((ScreenshotHandle)hScreenshot, (PublishedFileId_t)unPublishedFileID);
}

#ifdef __cplusplus
}
#endif
