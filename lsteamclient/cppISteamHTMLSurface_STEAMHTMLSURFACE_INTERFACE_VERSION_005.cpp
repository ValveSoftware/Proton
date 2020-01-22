#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005.h"
bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init(void *linux_side)
{
    return ((ISteamHTMLSurface*)linux_side)->Init();
}

bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown(void *linux_side)
{
    return ((ISteamHTMLSurface*)linux_side)->Shutdown();
}

SteamAPICall_t cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser(void *linux_side, const char * pchUserAgent, const char * pchUserCSS)
{
    return ((ISteamHTMLSurface*)linux_side)->CreateBrowser((const char *)pchUserAgent, (const char *)pchUserCSS);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->RemoveBrowser((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL(void *linux_side, HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData)
{
    ((ISteamHTMLSurface*)linux_side)->LoadURL((HHTMLBrowser)unBrowserHandle, (const char *)pchURL, (const char *)pchPostData);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize(void *linux_side, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
    ((ISteamHTMLSurface*)linux_side)->SetSize((HHTMLBrowser)unBrowserHandle, (uint32)unWidth, (uint32)unHeight);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->StopLoad((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->Reload((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->GoBack((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->GoForward((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader(void *linux_side, HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue)
{
    ((ISteamHTMLSurface*)linux_side)->AddHeader((HHTMLBrowser)unBrowserHandle, (const char *)pchKey, (const char *)pchValue);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript(void *linux_side, HHTMLBrowser unBrowserHandle, const char * pchScript)
{
    ((ISteamHTMLSurface*)linux_side)->ExecuteJavascript((HHTMLBrowser)unBrowserHandle, (const char *)pchScript);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp(void *linux_side, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    ((ISteamHTMLSurface*)linux_side)->MouseUp((HHTMLBrowser)unBrowserHandle, (ISteamHTMLSurface::EHTMLMouseButton)eMouseButton);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown(void *linux_side, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    ((ISteamHTMLSurface*)linux_side)->MouseDown((HHTMLBrowser)unBrowserHandle, (ISteamHTMLSurface::EHTMLMouseButton)eMouseButton);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick(void *linux_side, HHTMLBrowser unBrowserHandle, EHTMLMouseButton eMouseButton)
{
    ((ISteamHTMLSurface*)linux_side)->MouseDoubleClick((HHTMLBrowser)unBrowserHandle, (ISteamHTMLSurface::EHTMLMouseButton)eMouseButton);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove(void *linux_side, HHTMLBrowser unBrowserHandle, int x, int y)
{
    ((ISteamHTMLSurface*)linux_side)->MouseMove((HHTMLBrowser)unBrowserHandle, (int)x, (int)y);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel(void *linux_side, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
    ((ISteamHTMLSurface*)linux_side)->MouseWheel((HHTMLBrowser)unBrowserHandle, (int32)nDelta);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown(void *linux_side, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers, bool bIsSystemKey)
{
    nNativeKeyCode = manual_convert_nNativeKeyCode(nNativeKeyCode);
    ((ISteamHTMLSurface*)linux_side)->KeyDown((HHTMLBrowser)unBrowserHandle, (uint32)nNativeKeyCode, (ISteamHTMLSurface::EHTMLKeyModifiers)eHTMLKeyModifiers, (bool)bIsSystemKey);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp(void *linux_side, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    nNativeKeyCode = manual_convert_nNativeKeyCode(nNativeKeyCode);
    ((ISteamHTMLSurface*)linux_side)->KeyUp((HHTMLBrowser)unBrowserHandle, (uint32)nNativeKeyCode, (ISteamHTMLSurface::EHTMLKeyModifiers)eHTMLKeyModifiers);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar(void *linux_side, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, EHTMLKeyModifiers eHTMLKeyModifiers)
{
    ((ISteamHTMLSurface*)linux_side)->KeyChar((HHTMLBrowser)unBrowserHandle, (uint32)cUnicodeChar, (ISteamHTMLSurface::EHTMLKeyModifiers)eHTMLKeyModifiers);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll(void *linux_side, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    ((ISteamHTMLSurface*)linux_side)->SetHorizontalScroll((HHTMLBrowser)unBrowserHandle, (uint32)nAbsolutePixelScroll);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll(void *linux_side, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
    ((ISteamHTMLSurface*)linux_side)->SetVerticalScroll((HHTMLBrowser)unBrowserHandle, (uint32)nAbsolutePixelScroll);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus(void *linux_side, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
    ((ISteamHTMLSurface*)linux_side)->SetKeyFocus((HHTMLBrowser)unBrowserHandle, (bool)bHasKeyFocus);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->ViewSource((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->CopyToClipboard((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->PasteFromClipboard((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find(void *linux_side, HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
    ((ISteamHTMLSurface*)linux_side)->Find((HHTMLBrowser)unBrowserHandle, (const char *)pchSearchStr, (bool)bCurrentlyInFind, (bool)bReverse);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->StopFind((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition(void *linux_side, HHTMLBrowser unBrowserHandle, int x, int y)
{
    ((ISteamHTMLSurface*)linux_side)->GetLinkAtPosition((HHTMLBrowser)unBrowserHandle, (int)x, (int)y);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie(void *linux_side, const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
    ((ISteamHTMLSurface*)linux_side)->SetCookie((const char *)pchHostname, (const char *)pchKey, (const char *)pchValue, (const char *)pchPath, (RTime32)nExpires, (bool)bSecure, (bool)bHTTPOnly);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor(void *linux_side, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
    ((ISteamHTMLSurface*)linux_side)->SetPageScaleFactor((HHTMLBrowser)unBrowserHandle, (float)flZoom, (int)nPointX, (int)nPointY);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode(void *linux_side, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
    ((ISteamHTMLSurface*)linux_side)->SetBackgroundMode((HHTMLBrowser)unBrowserHandle, (bool)bBackgroundMode);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor(void *linux_side, HHTMLBrowser unBrowserHandle, float flDPIScaling)
{
    ((ISteamHTMLSurface*)linux_side)->SetDPIScalingFactor((HHTMLBrowser)unBrowserHandle, (float)flDPIScaling);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools(void *linux_side, HHTMLBrowser unBrowserHandle)
{
    ((ISteamHTMLSurface*)linux_side)->OpenDeveloperTools((HHTMLBrowser)unBrowserHandle);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest(void *linux_side, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
    ((ISteamHTMLSurface*)linux_side)->AllowStartRequest((HHTMLBrowser)unBrowserHandle, (bool)bAllowed);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse(void *linux_side, HHTMLBrowser unBrowserHandle, bool bResult)
{
    ((ISteamHTMLSurface*)linux_side)->JSDialogResponse((HHTMLBrowser)unBrowserHandle, (bool)bResult);
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse(void *linux_side, HHTMLBrowser unBrowserHandle, const char ** pchSelectedFiles)
{
    ((ISteamHTMLSurface*)linux_side)->FileLoadDialogResponse((HHTMLBrowser)unBrowserHandle, (const char **)pchSelectedFiles);
}

#ifdef __cplusplus
}
#endif
