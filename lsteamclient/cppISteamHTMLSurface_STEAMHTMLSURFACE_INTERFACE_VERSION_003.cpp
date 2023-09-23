#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_140/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_140
#include "struct_converters.h"
#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003.h"

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003
{
#ifdef __cplusplus
    virtual ~cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void SetCookie( const char *, const char *, const char *, const char *, uint32_t, bool, bool ) = 0;
    virtual void SetPageScaleFactor( uint32_t, float, int32_t, int32_t ) = 0;
    virtual void SetBackgroundMode( uint32_t, bool ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    params->_ret = iface->CreateBrowser( params->pchUserAgent, params->pchUserCSS );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->RemoveBrowser( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->LoadURL( params->unBrowserHandle, params->pchURL, params->pchPostData );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetSize( params->unBrowserHandle, params->unWidth, params->unHeight );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->StopLoad( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->Reload( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->GoBack( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->GoForward( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->AddHeader( params->unBrowserHandle, params->pchKey, params->pchValue );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->ExecuteJavascript( params->unBrowserHandle, params->pchScript );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->MouseUp( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->MouseDown( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->MouseDoubleClick( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->MouseMove( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->MouseWheel( params->unBrowserHandle, params->nDelta );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    uint32_t lin_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyDown( params->unBrowserHandle, lin_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    uint32_t lin_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyUp( params->unBrowserHandle, lin_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->KeyChar( params->unBrowserHandle, params->cUnicodeChar, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetHorizontalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetVerticalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetKeyFocus( params->unBrowserHandle, params->bHasKeyFocus );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->ViewSource( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->CopyToClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->PasteFromClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->Find( params->unBrowserHandle, params->pchSearchStr, params->bCurrentlyInFind, params->bReverse );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->StopFind( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->GetLinkAtPosition( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetCookie( params->pchHostname, params->pchKey, params->pchValue, params->pchPath, params->nExpires, params->bSecure, params->bHTTPOnly );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetPageScaleFactor( params->unBrowserHandle, params->flZoom, params->nPointX, params->nPointY );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->SetBackgroundMode( params->unBrowserHandle, params->bBackgroundMode );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->AllowStartRequest( params->unBrowserHandle, params->bAllowed );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->JSDialogResponse( params->unBrowserHandle, params->bResult );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003 *)params->linux_side;
    iface->FileLoadDialogResponse( params->unBrowserHandle, params->pchSelectedFiles );
}

#ifdef __cplusplus
}
#endif
