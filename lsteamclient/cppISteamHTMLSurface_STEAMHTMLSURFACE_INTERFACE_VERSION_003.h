struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchUserAgent;
    const char *pchUserCSS;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchURL;
    const char *pchPostData;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 unWidth;
    uint32 unHeight;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchScript;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32_t eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32_t eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32_t eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    int x;
    int y;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    int32 nDelta;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nNativeKeyCode;
    uint32_t eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nNativeKeyCode;
    uint32_t eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 cUnicodeChar;
    uint32_t eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nAbsolutePixelScroll;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nAbsolutePixelScroll;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bHasKeyFocus;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchSearchStr;
    bool bCurrentlyInFind;
    bool bReverse;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    int x;
    int y;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie_params
{
    void *linux_side;
    const char *pchHostname;
    const char *pchKey;
    const char *pchValue;
    const char *pchPath;
    RTime32 nExpires;
    bool bSecure;
    bool bHTTPOnly;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    float flZoom;
    int nPointX;
    int nPointY;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bBackgroundMode;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bAllowed;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bResult;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char **pchSelectedFiles;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse_params *params );

