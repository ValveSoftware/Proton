/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001.h"

struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t CreateHTTPRequest( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestContextValue( uint32_t, uint64_t ) = 0;
    virtual bool SetHTTPRequestNetworkActivityTimeout( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestHeaderValue( uint32_t, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestGetOrPostParameter( uint32_t, const char *, const char * ) = 0;
    virtual bool SendHTTPRequest( uint32_t, uint64_t * ) = 0;
    virtual bool DeferHTTPRequest( uint32_t ) = 0;
    virtual bool PrioritizeHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPResponseHeaderSize( uint32_t, const char *, uint32_t * ) = 0;
    virtual bool GetHTTPResponseHeaderValue( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPResponseBodySize( uint32_t, uint32_t * ) = 0;
    virtual bool GetHTTPResponseBodyData( uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool ReleaseHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPDownloadProgressPct( uint32_t, float * ) = 0;
    virtual bool SetHTTPRequestRawPostBody( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
#endif /* __cplusplus */
};

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

