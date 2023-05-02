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
HTTPRequestHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(void *linux_side, EHTTPMethod eHTTPRequestMethod, const char * pchAbsoluteURL)
{
    return ((ISteamHTTP*)linux_side)->CreateHTTPRequest((EHTTPMethod)eHTTPRequestMethod, (const char *)pchAbsoluteURL);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(void *linux_side, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestContextValue((HTTPRequestHandle)hRequest, (uint64)ulContextValue);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(void *linux_side, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestNetworkActivityTimeout((HTTPRequestHandle)hRequest, (uint32)unTimeoutSeconds);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(void *linux_side, HTTPRequestHandle hRequest, const char * pchHeaderName, const char * pchHeaderValue)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestHeaderValue((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (const char *)pchHeaderValue);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(void *linux_side, HTTPRequestHandle hRequest, const char * pchParamName, const char * pchParamValue)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestGetOrPostParameter((HTTPRequestHandle)hRequest, (const char *)pchParamName, (const char *)pchParamValue);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(void *linux_side, HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)
{
    return ((ISteamHTTP*)linux_side)->SendHTTPRequest((HTTPRequestHandle)hRequest, (SteamAPICall_t *)pCallHandle);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    return ((ISteamHTTP*)linux_side)->DeferHTTPRequest((HTTPRequestHandle)hRequest);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    return ((ISteamHTTP*)linux_side)->PrioritizeHTTPRequest((HTTPRequestHandle)hRequest);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(void *linux_side, HTTPRequestHandle hRequest, const char * pchHeaderName, uint32 * unResponseHeaderSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseHeaderSize((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (uint32 *)unResponseHeaderSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(void *linux_side, HTTPRequestHandle hRequest, const char * pchHeaderName, uint8 * pHeaderValueBuffer, uint32 unBufferSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseHeaderValue((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (uint8 *)pHeaderValueBuffer, (uint32)unBufferSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(void *linux_side, HTTPRequestHandle hRequest, uint32 * unBodySize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseBodySize((HTTPRequestHandle)hRequest, (uint32 *)unBodySize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(void *linux_side, HTTPRequestHandle hRequest, uint8 * pBodyDataBuffer, uint32 unBufferSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseBodyData((HTTPRequestHandle)hRequest, (uint8 *)pBodyDataBuffer, (uint32)unBufferSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    return ((ISteamHTTP*)linux_side)->ReleaseHTTPRequest((HTTPRequestHandle)hRequest);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(void *linux_side, HTTPRequestHandle hRequest, float * pflPercentOut)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPDownloadProgressPct((HTTPRequestHandle)hRequest, (float *)pflPercentOut);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(void *linux_side, HTTPRequestHandle hRequest, const char * pchContentType, uint8 * pubBody, uint32 unBodyLen)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestRawPostBody((HTTPRequestHandle)hRequest, (const char *)pchContentType, (uint8 *)pubBody, (uint32)unBodyLen);
}

#ifdef __cplusplus
}
#endif
