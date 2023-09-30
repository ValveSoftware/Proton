/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001.h"

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Init_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Shutdown_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CreateBrowser_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    params->_ret = iface->CreateBrowser( params->pchUserAgent, params->pchUserCSS );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_RemoveBrowser_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->RemoveBrowser( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_LoadURL_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->LoadURL( params->unBrowserHandle, params->pchURL, params->pchPostData );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetSize_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->SetSize( params->unBrowserHandle, params->unWidth, params->unHeight );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopLoad_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->StopLoad( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Reload_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->Reload( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoBack_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->GoBack( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GoForward_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->GoForward( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AddHeader_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->AddHeader( params->unBrowserHandle, params->pchKey, params->pchValue );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ExecuteJavascript_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->ExecuteJavascript( params->unBrowserHandle, params->pchScript );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseUp_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->MouseUp( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDown_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->MouseDown( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseDoubleClick_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->MouseDoubleClick( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseMove_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->MouseMove( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_MouseWheel_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->MouseWheel( params->unBrowserHandle, params->nDelta );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyDown_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyDown( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyUp_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyUp( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_KeyChar_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->KeyChar( params->unBrowserHandle, params->cUnicodeChar, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetHorizontalScroll_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->SetHorizontalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetVerticalScroll_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->SetVerticalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_SetKeyFocus_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->SetKeyFocus( params->unBrowserHandle, params->bHasKeyFocus );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_ViewSource_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->ViewSource( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_CopyToClipboard_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->CopyToClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_PasteFromClipboard_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->PasteFromClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_Find_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->Find( params->unBrowserHandle, params->pchSearchStr, params->bCurrentlyInFind, params->bReverse );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_StopFind_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->StopFind( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_GetLinkAtPosition_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->GetLinkAtPosition( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_AllowStartRequest_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->AllowStartRequest( params->unBrowserHandle, params->bAllowed );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_JSDialogResponse_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->JSDialogResponse( params->unBrowserHandle, params->bResult );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001_FileLoadDialogResponse_params *params )
{
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_001 *)params->linux_side;
    iface->FileLoadDialogResponse( params->unBrowserHandle, params->pchSelectedFiles );
}

