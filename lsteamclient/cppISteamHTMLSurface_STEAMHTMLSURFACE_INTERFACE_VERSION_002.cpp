/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    params->_ret = iface->Init(  );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    params->_ret = iface->CreateBrowser( params->pchUserAgent, params->pchUserCSS );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->RemoveBrowser( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    char *u_pchURL = steamclient_dos_to_unix_path( params->pchURL, 1 );
    iface->LoadURL( params->unBrowserHandle, u_pchURL, params->pchPostData );
    steamclient_free_path( u_pchURL );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetSize( params->unBrowserHandle, params->unWidth, params->unHeight );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->StopLoad( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->Reload( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->GoBack( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->GoForward( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->AddHeader( params->unBrowserHandle, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->ExecuteJavascript( params->unBrowserHandle, params->pchScript );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseUp( params->unBrowserHandle, params->eMouseButton );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseDown( params->unBrowserHandle, params->eMouseButton );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseDoubleClick( params->unBrowserHandle, params->eMouseButton );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseMove( params->unBrowserHandle, params->x, params->y );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseWheel( params->unBrowserHandle, params->nDelta );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyDown( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    uint32_t u_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyUp( params->unBrowserHandle, u_nNativeKeyCode, params->eHTMLKeyModifiers );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->KeyChar( params->unBrowserHandle, params->cUnicodeChar, params->eHTMLKeyModifiers );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetHorizontalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetVerticalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetKeyFocus( params->unBrowserHandle, params->bHasKeyFocus );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->ViewSource( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->CopyToClipboard( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->PasteFromClipboard( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->Find( params->unBrowserHandle, params->pchSearchStr, params->bCurrentlyInFind, params->bReverse );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->StopFind( params->unBrowserHandle );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->GetLinkAtPosition( params->unBrowserHandle, params->x, params->y );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetCookie( params->pchHostname, params->pchKey, params->pchValue, params->pchPath, params->nExpires, params->bSecure, params->bHTTPOnly );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetPageScaleFactor( params->unBrowserHandle, params->flZoom, params->nPointX, params->nPointY );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->AllowStartRequest( params->unBrowserHandle, params->bAllowed );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->JSDialogResponse( params->unBrowserHandle, params->bResult );
    return 0;
}

NTSTATUS ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse( void *args )
{
    struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params *params = (struct ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params *)args;
    struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct u_ISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    const char **u_pchSelectedFiles = steamclient_dos_to_unix_path_array( params->pchSelectedFiles );
    iface->FileLoadDialogResponse( params->unBrowserHandle, u_pchSelectedFiles );
    steamclient_free_path_array( u_pchSelectedFiles );
    return 0;
}

