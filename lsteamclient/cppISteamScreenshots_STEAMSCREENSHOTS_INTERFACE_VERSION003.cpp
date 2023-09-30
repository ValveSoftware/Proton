/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->WriteScreenshot( params->pubRGB, params->cubRGB, params->nWidth, params->nHeight );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->AddScreenshotToLibrary( params->pchFilename, params->pchThumbnailFilename, params->nWidth, params->nHeight );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    iface->TriggerScreenshot(  );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    iface->HookScreenshots( params->bHook );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetLocation( params->hScreenshot, params->pchLocation );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->TagUser( params->hScreenshot, params->steamID );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->TagPublishedFile( params->hScreenshot, params->unPublishedFileID );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->IsScreenshotsHooked(  );
    return 0;
}

NTSTATUS ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary( void *args )
{
    struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary_params *params = (struct ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary_params *)args;
    struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *iface = (struct u_ISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->AddVRScreenshotToLibrary( params->eType, params->pchFilename, params->pchVRFilename );
    return 0;
}

