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
ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(void *linux_side, void *pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    _ret = ((ISteamScreenshots*)linux_side)->WriteScreenshot((void *)pubRGB, (uint32)cubRGB, (int)nWidth, (int)nHeight);
    return (_ret);
}

ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(void *linux_side, const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight)
{
    ScreenshotHandle _ret;
    _ret = ((ISteamScreenshots*)linux_side)->AddScreenshotToLibrary((const char *)pchFilename, (const char *)pchThumbnailFilename, (int)nWidth, (int)nHeight);
    return (_ret);
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(void *linux_side)
{
    ((ISteamScreenshots*)linux_side)->TriggerScreenshot();
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(void *linux_side, bool bHook)
{
    ((ISteamScreenshots*)linux_side)->HookScreenshots((bool)bHook);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(void *linux_side, ScreenshotHandle hScreenshot, const char *pchLocation)
{
    bool _ret;
    _ret = ((ISteamScreenshots*)linux_side)->SetLocation((ScreenshotHandle)hScreenshot, (const char *)pchLocation);
    return (_ret);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(void *linux_side, ScreenshotHandle hScreenshot, CSteamID steamID)
{
    bool _ret;
    _ret = ((ISteamScreenshots*)linux_side)->TagUser((ScreenshotHandle)hScreenshot, (CSteamID)steamID);
    return (_ret);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(void *linux_side, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
    bool _ret;
    _ret = ((ISteamScreenshots*)linux_side)->TagPublishedFile((ScreenshotHandle)hScreenshot, (PublishedFileId_t)unPublishedFileID);
    return (_ret);
}

bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamScreenshots*)linux_side)->IsScreenshotsHooked();
    return (_ret);
}

ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(void *linux_side, EVRScreenshotType eType, const char *pchFilename, const char *pchVRFilename)
{
    ScreenshotHandle _ret;
    _ret = ((ISteamScreenshots*)linux_side)->AddVRScreenshotToLibrary((EVRScreenshotType)eType, (const char *)pchFilename, (const char *)pchVRFilename);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
