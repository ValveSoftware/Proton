/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->WriteScreenshot( params->pubRGB, params->cubRGB, params->nWidth, params->nHeight );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->AddScreenshotToLibrary( params->pchFilename, params->pchThumbnailFilename, params->nWidth, params->nHeight );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    iface->TriggerScreenshot(  );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    iface->HookScreenshots( params->bHook );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetLocation( params->hScreenshot, params->pchLocation );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->TagUser( params->hScreenshot, params->steamID );
    return 0;
}

