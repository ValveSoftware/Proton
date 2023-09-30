/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001.h"

struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t WriteScreenshot( void *, uint32_t, int32_t, int32_t ) = 0;
    virtual uint32_t AddScreenshotToLibrary( const char *, const char *, int32_t, int32_t ) = 0;
    virtual void TriggerScreenshot(  ) = 0;
    virtual void HookScreenshots( bool ) = 0;
    virtual bool SetLocation( uint32_t, const char * ) = 0;
    virtual bool TagUser( uint32_t, CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params *params )
{
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->WriteScreenshot( params->pubRGB, params->cubRGB, params->nWidth, params->nHeight );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params *params )
{
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->AddScreenshotToLibrary( params->pchFilename, params->pchThumbnailFilename, params->nWidth, params->nHeight );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params *params )
{
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    iface->TriggerScreenshot(  );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params *params )
{
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    iface->HookScreenshots( params->bHook );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params *params )
{
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetLocation( params->hScreenshot, params->pchLocation );
}

void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params *params )
{
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->TagUser( params->hScreenshot, params->steamID );
}

