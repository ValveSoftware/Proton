#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_133a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_133a
#include "struct_converters.h"
#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002.h"
void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params *params )
{
    params->_ret = ((ISteamHTMLSurface*)params->linux_side)->Init(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params *params )
{
    params->_ret = ((ISteamHTMLSurface*)params->linux_side)->Shutdown(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params *params )
{
    params->_ret = ((ISteamHTMLSurface*)params->linux_side)->CreateBrowser( (const char *)params->pchUserAgent, (const char *)params->pchUserCSS );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->RemoveBrowser( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->LoadURL( (HHTMLBrowser)params->unBrowserHandle, (const char *)params->pchURL, (const char *)params->pchPostData );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->SetSize( (HHTMLBrowser)params->unBrowserHandle, (uint32)params->unWidth, (uint32)params->unHeight );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->StopLoad( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->Reload( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->GoBack( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->GoForward( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->AddHeader( (HHTMLBrowser)params->unBrowserHandle, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->ExecuteJavascript( (HHTMLBrowser)params->unBrowserHandle, (const char *)params->pchScript );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->MouseUp( (HHTMLBrowser)params->unBrowserHandle, (ISteamHTMLSurface::EHTMLMouseButton)params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->MouseDown( (HHTMLBrowser)params->unBrowserHandle, (ISteamHTMLSurface::EHTMLMouseButton)params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->MouseDoubleClick( (HHTMLBrowser)params->unBrowserHandle, (ISteamHTMLSurface::EHTMLMouseButton)params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->MouseMove( (HHTMLBrowser)params->unBrowserHandle, (int)params->x, (int)params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->MouseWheel( (HHTMLBrowser)params->unBrowserHandle, (int32)params->nDelta );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params *params )
{
    uint32 lin_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    ((ISteamHTMLSurface*)params->linux_side)->KeyDown( (HHTMLBrowser)params->unBrowserHandle, lin_nNativeKeyCode, (ISteamHTMLSurface::EHTMLKeyModifiers)params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params *params )
{
    uint32 lin_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    ((ISteamHTMLSurface*)params->linux_side)->KeyUp( (HHTMLBrowser)params->unBrowserHandle, lin_nNativeKeyCode, (ISteamHTMLSurface::EHTMLKeyModifiers)params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->KeyChar( (HHTMLBrowser)params->unBrowserHandle, (uint32)params->cUnicodeChar, (ISteamHTMLSurface::EHTMLKeyModifiers)params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->SetHorizontalScroll( (HHTMLBrowser)params->unBrowserHandle, (uint32)params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->SetVerticalScroll( (HHTMLBrowser)params->unBrowserHandle, (uint32)params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->SetKeyFocus( (HHTMLBrowser)params->unBrowserHandle, (bool)params->bHasKeyFocus );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->ViewSource( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->CopyToClipboard( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->PasteFromClipboard( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->Find( (HHTMLBrowser)params->unBrowserHandle, (const char *)params->pchSearchStr, (bool)params->bCurrentlyInFind, (bool)params->bReverse );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->StopFind( (HHTMLBrowser)params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->GetLinkAtPosition( (HHTMLBrowser)params->unBrowserHandle, (int)params->x, (int)params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->SetCookie( (const char *)params->pchHostname, (const char *)params->pchKey, (const char *)params->pchValue, (const char *)params->pchPath, (RTime32)params->nExpires, (bool)params->bSecure, (bool)params->bHTTPOnly );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->SetPageScaleFactor( (HHTMLBrowser)params->unBrowserHandle, (float)params->flZoom, (int)params->nPointX, (int)params->nPointY );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->AllowStartRequest( (HHTMLBrowser)params->unBrowserHandle, (bool)params->bAllowed );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->JSDialogResponse( (HHTMLBrowser)params->unBrowserHandle, (bool)params->bResult );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params *params )
{
    ((ISteamHTMLSurface*)params->linux_side)->FileLoadDialogResponse( (HHTMLBrowser)params->unBrowserHandle, (const char **)params->pchSelectedFiles );
}

#ifdef __cplusplus
}
#endif
