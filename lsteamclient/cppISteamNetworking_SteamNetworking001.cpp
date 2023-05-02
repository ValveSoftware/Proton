#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102
#include "struct_converters.h"
#include "cppISteamNetworking_SteamNetworking001.h"
SNetListenSocket_t cppISteamNetworking_SteamNetworking001_CreateListenSocket(void *linux_side, int nVirtualP2PPort, uint32 nIP, uint16 nPort)
{
    return ((ISteamNetworking*)linux_side)->CreateListenSocket((int)nVirtualP2PPort, (uint32)nIP, (uint16)nPort);
}

SNetSocket_t cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(void *linux_side, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec)
{
    return ((ISteamNetworking*)linux_side)->CreateP2PConnectionSocket((CSteamID)steamIDTarget, (int)nVirtualPort, (int)nTimeoutSec);
}

SNetSocket_t cppISteamNetworking_SteamNetworking001_CreateConnectionSocket(void *linux_side, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    return ((ISteamNetworking*)linux_side)->CreateConnectionSocket((uint32)nIP, (uint16)nPort, (int)nTimeoutSec);
}

bool cppISteamNetworking_SteamNetworking001_DestroySocket(void *linux_side, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    return ((ISteamNetworking*)linux_side)->DestroySocket((SNetSocket_t)hSocket, (bool)bNotifyRemoteEnd);
}

bool cppISteamNetworking_SteamNetworking001_DestroyListenSocket(void *linux_side, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    return ((ISteamNetworking*)linux_side)->DestroyListenSocket((SNetListenSocket_t)hSocket, (bool)bNotifyRemoteEnd);
}

bool cppISteamNetworking_SteamNetworking001_SendDataOnSocket(void *linux_side, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    return ((ISteamNetworking*)linux_side)->SendDataOnSocket((SNetSocket_t)hSocket, (void *)pubData, (uint32)cubData, (bool)bReliable);
}

bool cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(void *linux_side, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    return ((ISteamNetworking*)linux_side)->IsDataAvailableOnSocket((SNetSocket_t)hSocket, (uint32 *)pcubMsgSize);
}

bool cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(void *linux_side, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    return ((ISteamNetworking*)linux_side)->RetrieveDataFromSocket((SNetSocket_t)hSocket, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize);
}

bool cppISteamNetworking_SteamNetworking001_IsDataAvailable(void *linux_side, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    return ((ISteamNetworking*)linux_side)->IsDataAvailable((SNetListenSocket_t)hListenSocket, (uint32 *)pcubMsgSize, (SNetSocket_t *)phSocket);
}

bool cppISteamNetworking_SteamNetworking001_RetrieveData(void *linux_side, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    return ((ISteamNetworking*)linux_side)->RetrieveData((SNetListenSocket_t)hListenSocket, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize, (SNetSocket_t *)phSocket);
}

bool cppISteamNetworking_SteamNetworking001_GetSocketInfo(void *linux_side, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    return ((ISteamNetworking*)linux_side)->GetSocketInfo((SNetSocket_t)hSocket, (CSteamID *)pSteamIDRemote, (int *)peSocketStatus, (uint32 *)punIPRemote, (uint16 *)punPortRemote);
}

bool cppISteamNetworking_SteamNetworking001_GetListenSocketInfo(void *linux_side, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    return ((ISteamNetworking*)linux_side)->GetListenSocketInfo((SNetListenSocket_t)hListenSocket, (uint32 *)pnIP, (uint16 *)pnPort);
}

#ifdef __cplusplus
}
#endif
