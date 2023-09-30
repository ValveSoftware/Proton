/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CreateHTTPRequest( params->eHTTPRequestMethod, params->pchAbsoluteURL );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestContextValue( params->hRequest, params->ulContextValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestNetworkActivityTimeout( params->hRequest, params->unTimeoutSeconds );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestHeaderValue( params->hRequest, params->pchHeaderName, params->pchHeaderValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestGetOrPostParameter( params->hRequest, params->pchParamName, params->pchParamValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendHTTPRequest( params->hRequest, params->pCallHandle );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->DeferHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PrioritizeHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderSize( params->hRequest, params->pchHeaderName, params->unResponseHeaderSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderValue( params->hRequest, params->pchHeaderName, params->pHeaderValueBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodySize( params->hRequest, params->unBodySize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodyData( params->hRequest, params->pBodyDataBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ReleaseHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPDownloadProgressPct( params->hRequest, params->pflPercentOut );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRawPostBody( params->hRequest, params->pchContentType, params->pubBody, params->unBodyLen );
    return 0;
}

