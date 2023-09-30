/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004.h"

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    params->_ret = iface->CreateBrowser( params->pchUserAgent, params->pchUserCSS );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->RemoveBrowser( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->LoadURL( params->unBrowserHandle, params->pchURL, params->pchPostData );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetSize( params->unBrowserHandle, params->unWidth, params->unHeight );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->StopLoad( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->Reload( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->GoBack( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->GoForward( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->AddHeader( params->unBrowserHandle, params->pchKey, params->pchValue );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->ExecuteJavascript( params->unBrowserHandle, params->pchScript );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseUp( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseDown( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseDoubleClick( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseMove( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->MouseWheel( params->unBrowserHandle, params->nDelta );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyDown( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyUp( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->KeyChar( params->unBrowserHandle, params->cUnicodeChar, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetHorizontalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetVerticalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetKeyFocus( params->unBrowserHandle, params->bHasKeyFocus );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->ViewSource( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->CopyToClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->PasteFromClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->Find( params->unBrowserHandle, params->pchSearchStr, params->bCurrentlyInFind, params->bReverse );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->StopFind( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->GetLinkAtPosition( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetCookie( params->pchHostname, params->pchKey, params->pchValue, params->pchPath, params->nExpires, params->bSecure, params->bHTTPOnly );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetPageScaleFactor( params->unBrowserHandle, params->flZoom, params->nPointX, params->nPointY );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetBackgroundMode( params->unBrowserHandle, params->bBackgroundMode );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->SetDPIScalingFactor( params->unBrowserHandle, params->flDPIScaling );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->AllowStartRequest( params->unBrowserHandle, params->bAllowed );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->JSDialogResponse( params->unBrowserHandle, params->bResult );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004 *)params->linux_side;
    iface->FileLoadDialogResponse( params->unBrowserHandle, params->pchSelectedFiles );
}

