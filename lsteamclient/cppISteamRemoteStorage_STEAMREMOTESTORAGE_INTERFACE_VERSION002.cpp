#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002.h"
bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(void *linux_side, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWrite((const char *)pchFile, (const void *)pvData, (int32)cubData);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(void *linux_side, const char *pchFile)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileSize((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(void *linux_side, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileRead((const char *)pchFile, (void *)pvData, (int32)cubDataToRead);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileExists((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileCount();
    return (_ret);
}

const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(void *linux_side, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileNameAndSize((int)iFile, (int32 *)pnFileSizeInBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(void *linux_side, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetQuota((int32 *)pnTotalBytes, (int32 *)puAvailableBytes);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
