#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002.h"
HTTPRequestHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(void *linux_side, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    HTTPRequestHandle _ret;
    _ret = ((ISteamHTTP*)linux_side)->CreateHTTPRequest((EHTTPMethod)eHTTPRequestMethod, (const char *)pchAbsoluteURL);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(void *linux_side, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestContextValue((HTTPRequestHandle)hRequest, (uint64)ulContextValue);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(void *linux_side, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestNetworkActivityTimeout((HTTPRequestHandle)hRequest, (uint32)unTimeoutSeconds);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(void *linux_side, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestHeaderValue((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (const char *)pchHeaderValue);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(void *linux_side, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestGetOrPostParameter((HTTPRequestHandle)hRequest, (const char *)pchParamName, (const char *)pchParamValue);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(void *linux_side, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SendHTTPRequest((HTTPRequestHandle)hRequest, (SteamAPICall_t *)pCallHandle);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(void *linux_side, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SendHTTPRequestAndStreamResponse((HTTPRequestHandle)hRequest, (SteamAPICall_t *)pCallHandle);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->DeferHTTPRequest((HTTPRequestHandle)hRequest);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->PrioritizeHTTPRequest((HTTPRequestHandle)hRequest);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(void *linux_side, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPResponseHeaderSize((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (uint32 *)unResponseHeaderSize);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(void *linux_side, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPResponseHeaderValue((HTTPRequestHandle)hRequest, (const char *)pchHeaderName, (uint8 *)pHeaderValueBuffer, (uint32)unBufferSize);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(void *linux_side, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPResponseBodySize((HTTPRequestHandle)hRequest, (uint32 *)unBodySize);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(void *linux_side, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPResponseBodyData((HTTPRequestHandle)hRequest, (uint8 *)pBodyDataBuffer, (uint32)unBufferSize);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(void *linux_side, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPStreamingResponseBodyData((HTTPRequestHandle)hRequest, (uint32)cOffset, (uint8 *)pBodyDataBuffer, (uint32)unBufferSize);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(void *linux_side, HTTPRequestHandle hRequest)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->ReleaseHTTPRequest((HTTPRequestHandle)hRequest);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(void *linux_side, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPDownloadProgressPct((HTTPRequestHandle)hRequest, (float *)pflPercentOut);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(void *linux_side, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestRawPostBody((HTTPRequestHandle)hRequest, (const char *)pchContentType, (uint8 *)pubBody, (uint32)unBodyLen);
    return (_ret);
}

HTTPCookieContainerHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(void *linux_side, bool bAllowResponsesToModify)
{
    HTTPCookieContainerHandle _ret;
    _ret = ((ISteamHTTP*)linux_side)->CreateCookieContainer((bool)bAllowResponsesToModify);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(void *linux_side, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->ReleaseCookieContainer((HTTPCookieContainerHandle)hCookieContainer);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(void *linux_side, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetCookie((HTTPCookieContainerHandle)hCookieContainer, (const char *)pchHost, (const char *)pchUrl, (const char *)pchCookie);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(void *linux_side, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestCookieContainer((HTTPRequestHandle)hRequest, (HTTPCookieContainerHandle)hCookieContainer);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(void *linux_side, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestUserAgentInfo((HTTPRequestHandle)hRequest, (const char *)pchUserAgentInfo);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(void *linux_side, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestRequiresVerifiedCertificate((HTTPRequestHandle)hRequest, (bool)bRequireVerifiedCertificate);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(void *linux_side, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->SetHTTPRequestAbsoluteTimeoutMS((HTTPRequestHandle)hRequest, (uint32)unMilliseconds);
    return (_ret);
}

bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(void *linux_side, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    bool _ret;
    _ret = ((ISteamHTTP*)linux_side)->GetHTTPRequestWasTimedOut((HTTPRequestHandle)hRequest, (bool *)pbWasTimedOut);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
