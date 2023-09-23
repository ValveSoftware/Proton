struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002;
struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchUserAgent;
    const char *pchUserCSS;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    const char *pchURL;
    const char *pchPostData;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t unWidth;
    uint32_t unHeight;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    const char *pchScript;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    int32_t x;
    int32_t y;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    int32_t nDelta;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t nNativeKeyCode;
    uint32_t eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t nNativeKeyCode;
    uint32_t eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t cUnicodeChar;
    uint32_t eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t nAbsolutePixelScroll;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    uint32_t nAbsolutePixelScroll;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    bool bHasKeyFocus;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    const char *pchSearchStr;
    bool bCurrentlyInFind;
    bool bReverse;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    int32_t x;
    int32_t y;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params
{
    void *linux_side;
    const char *pchHostname;
    const char *pchKey;
    const char *pchValue;
    const char *pchPath;
    uint32_t nExpires;
    bool bSecure;
    bool bHTTPOnly;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    float flZoom;
    int32_t nPointX;
    int32_t nPointY;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    bool bAllowed;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    bool bResult;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params
{
    void *linux_side;
    uint32_t unBrowserHandle;
    const char **pchSelectedFiles;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params *params );

