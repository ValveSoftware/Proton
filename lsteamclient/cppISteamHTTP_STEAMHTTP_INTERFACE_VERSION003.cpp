#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003.h"
HTTPRequestHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest(void *linux_side, EHTTPMethod eHTTPRequestMethod, const char * pchAbsoluteURL)
{
    return ((ISteamHTTP*)linux_side)->CreateHTTPRequest((EHTTPMethod)eHTTPRequestMethod, (const char *)pchAbsoluteURL);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(void *linux_side, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestContextValue((HTTPRequestHandle)hRequest, (uint64)ulContextValue);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(void *linux_side, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestNetworkActivityTimeout((HTTPRequestHandle)hRequest, (uint32)unTimeoutSeconds);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(void *linux_side, HTTPRequestHandle hRequest, const char * pchHeaderName, const char * pchHeaderValue)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestHeaderValue((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (const char *)pchHeaderValue);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(void *linux_side, HTTPRequestHandle hRequest, const char * pchParamName, const char * pchParamValue)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestGetOrPostParameter((HTTPRequestHandle)hRequest, (const char *)pchParamName, (const char *)pchParamValue);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(void *linux_side, HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)
{
    return ((ISteamHTTP*)linux_side)->SendHTTPRequest((HTTPRequestHandle)hRequest, (SteamAPICall_t *)pCallHandle);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(void *linux_side, HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)
{
    return ((ISteamHTTP*)linux_side)->SendHTTPRequestAndStreamResponse((HTTPRequestHandle)hRequest, (SteamAPICall_t *)pCallHandle);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    return ((ISteamHTTP*)linux_side)->DeferHTTPRequest((HTTPRequestHandle)hRequest);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    return ((ISteamHTTP*)linux_side)->PrioritizeHTTPRequest((HTTPRequestHandle)hRequest);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(void *linux_side, HTTPRequestHandle hRequest, const char * pchHeaderName, uint32 * unResponseHeaderSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseHeaderSize((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (uint32 *)unResponseHeaderSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(void *linux_side, HTTPRequestHandle hRequest, const char * pchHeaderName, uint8 * pHeaderValueBuffer, uint32 unBufferSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseHeaderValue((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (uint8 *)pHeaderValueBuffer, (uint32)unBufferSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(void *linux_side, HTTPRequestHandle hRequest, uint32 * unBodySize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseBodySize((HTTPRequestHandle)hRequest, (uint32 *)unBodySize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(void *linux_side, HTTPRequestHandle hRequest, uint8 * pBodyDataBuffer, uint32 unBufferSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPResponseBodyData((HTTPRequestHandle)hRequest, (uint8 *)pBodyDataBuffer, (uint32)unBufferSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(void *linux_side, HTTPRequestHandle hRequest, uint32 cOffset, uint8 * pBodyDataBuffer, uint32 unBufferSize)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPStreamingResponseBodyData((HTTPRequestHandle)hRequest, (uint32)cOffset, (uint8 *)pBodyDataBuffer, (uint32)unBufferSize);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    return ((ISteamHTTP*)linux_side)->ReleaseHTTPRequest((HTTPRequestHandle)hRequest);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(void *linux_side, HTTPRequestHandle hRequest, float * pflPercentOut)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPDownloadProgressPct((HTTPRequestHandle)hRequest, (float *)pflPercentOut);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(void *linux_side, HTTPRequestHandle hRequest, const char * pchContentType, uint8 * pubBody, uint32 unBodyLen)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestRawPostBody((HTTPRequestHandle)hRequest, (const char *)pchContentType, (uint8 *)pubBody, (uint32)unBodyLen);
}

HTTPCookieContainerHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(void *linux_side, bool bAllowResponsesToModify)
{
    return ((ISteamHTTP*)linux_side)->CreateCookieContainer((bool)bAllowResponsesToModify);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(void *linux_side, HTTPCookieContainerHandle hCookieContainer)
{
    return ((ISteamHTTP*)linux_side)->ReleaseCookieContainer((HTTPCookieContainerHandle)hCookieContainer);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(void *linux_side, HTTPCookieContainerHandle hCookieContainer, const char * pchHost, const char * pchUrl, const char * pchCookie)
{
    return ((ISteamHTTP*)linux_side)->SetCookie((HTTPCookieContainerHandle)hCookieContainer, (const char *)pchHost, (const char *)pchUrl, (const char *)pchCookie);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(void *linux_side, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestCookieContainer((HTTPRequestHandle)hRequest, (HTTPCookieContainerHandle)hCookieContainer);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(void *linux_side, HTTPRequestHandle hRequest, const char * pchUserAgentInfo)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestUserAgentInfo((HTTPRequestHandle)hRequest, (const char *)pchUserAgentInfo);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(void *linux_side, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestRequiresVerifiedCertificate((HTTPRequestHandle)hRequest, (bool)bRequireVerifiedCertificate);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(void *linux_side, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    return ((ISteamHTTP*)linux_side)->SetHTTPRequestAbsoluteTimeoutMS((HTTPRequestHandle)hRequest, (uint32)unMilliseconds);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(void *linux_side, HTTPRequestHandle hRequest, bool * pbWasTimedOut)
{
    return ((ISteamHTTP*)linux_side)->GetHTTPRequestWasTimedOut((HTTPRequestHandle)hRequest, (bool *)pbWasTimedOut);
}

#ifdef __cplusplus
}
#endif
