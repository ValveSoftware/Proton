#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_121/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_121
#include "struct_converters.h"
#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001.h"
void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->CreateHTTPRequest( (EHTTPMethod)params->eHTTPRequestMethod, (const char *)params->pchAbsoluteURL );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestContextValue( (HTTPRequestHandle)params->hRequest, (uint64)params->ulContextValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestNetworkActivityTimeout( (HTTPRequestHandle)params->hRequest, (uint32)params->unTimeoutSeconds );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestHeaderValue( (HTTPRequestHandle)params->hRequest, (const char *)params->pchHeaderName, (const char *)params->pchHeaderValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestGetOrPostParameter( (HTTPRequestHandle)params->hRequest, (const char *)params->pchParamName, (const char *)params->pchParamValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SendHTTPRequest( (HTTPRequestHandle)params->hRequest, (SteamAPICall_t *)params->pCallHandle );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->DeferHTTPRequest( (HTTPRequestHandle)params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->PrioritizeHTTPRequest( (HTTPRequestHandle)params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseHeaderSize( (HTTPRequestHandle)params->hRequest, (const char *)params->pchHeaderName, (uint32 *)params->unResponseHeaderSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseHeaderValue( (HTTPRequestHandle)params->hRequest, (const char *)params->pchHeaderName, (uint8 *)params->pHeaderValueBuffer, (uint32)params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseBodySize( (HTTPRequestHandle)params->hRequest, (uint32 *)params->unBodySize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseBodyData( (HTTPRequestHandle)params->hRequest, (uint8 *)params->pBodyDataBuffer, (uint32)params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->ReleaseHTTPRequest( (HTTPRequestHandle)params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPDownloadProgressPct( (HTTPRequestHandle)params->hRequest, (float *)params->pflPercentOut );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestRawPostBody( (HTTPRequestHandle)params->hRequest, (const char *)params->pchContentType, (uint8 *)params->pubBody, (uint32)params->unBodyLen );
}

#ifdef __cplusplus
}
#endif
