/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001.h"

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CreateHTTPRequest( params->eHTTPRequestMethod, params->pchAbsoluteURL );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestContextValue( params->hRequest, params->ulContextValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestNetworkActivityTimeout( params->hRequest, params->unTimeoutSeconds );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestHeaderValue( params->hRequest, params->pchHeaderName, params->pchHeaderValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestGetOrPostParameter( params->hRequest, params->pchParamName, params->pchParamValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendHTTPRequest( params->hRequest, params->pCallHandle );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->DeferHTTPRequest( params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->PrioritizeHTTPRequest( params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderSize( params->hRequest, params->pchHeaderName, params->unResponseHeaderSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderValue( params->hRequest, params->pchHeaderName, params->pHeaderValueBuffer, params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodySize( params->hRequest, params->unBodySize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodyData( params->hRequest, params->pBodyDataBuffer, params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ReleaseHTTPRequest( params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetHTTPDownloadProgressPct( params->hRequest, params->pflPercentOut );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params *params )
{
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRawPostBody( params->hRequest, params->pchContentType, params->pubBody, params->unBodyLen );
}

