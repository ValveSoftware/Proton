#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_104/steam_api.h"
#include "cppISteamNetworking_SteamNetworking002.h"
#ifdef __cplusplus
extern "C" {
#endif
SNetListenSocket_t cppISteamNetworking_SteamNetworking002_CreateListenSocket(void *linux_side, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    return ((ISteamNetworking*)linux_side)->CreateListenSocket((int)nVirtualP2PPort, (uint32)nIP, (uint16)nPort, (bool)bAllowUseOfPacketRelay);
}

SNetSocket_t cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(void *linux_side, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    return ((ISteamNetworking*)linux_side)->CreateP2PConnectionSocket((CSteamID)steamIDTarget, (int)nVirtualPort, (int)nTimeoutSec, (bool)bAllowUseOfPacketRelay);
}

SNetSocket_t cppISteamNetworking_SteamNetworking002_CreateConnectionSocket(void *linux_side, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    return ((ISteamNetworking*)linux_side)->CreateConnectionSocket((uint32)nIP, (uint16)nPort, (int)nTimeoutSec);
}

bool cppISteamNetworking_SteamNetworking002_DestroySocket(void *linux_side, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    return ((ISteamNetworking*)linux_side)->DestroySocket((SNetSocket_t)hSocket, (bool)bNotifyRemoteEnd);
}

bool cppISteamNetworking_SteamNetworking002_DestroyListenSocket(void *linux_side, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    return ((ISteamNetworking*)linux_side)->DestroyListenSocket((SNetListenSocket_t)hSocket, (bool)bNotifyRemoteEnd);
}

bool cppISteamNetworking_SteamNetworking002_SendDataOnSocket(void *linux_side, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    return ((ISteamNetworking*)linux_side)->SendDataOnSocket((SNetSocket_t)hSocket, (void *)pubData, (uint32)cubData, (bool)bReliable);
}

bool cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(void *linux_side, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    return ((ISteamNetworking*)linux_side)->IsDataAvailableOnSocket((SNetSocket_t)hSocket, (uint32 *)pcubMsgSize);
}

bool cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(void *linux_side, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    return ((ISteamNetworking*)linux_side)->RetrieveDataFromSocket((SNetSocket_t)hSocket, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize);
}

bool cppISteamNetworking_SteamNetworking002_IsDataAvailable(void *linux_side, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    return ((ISteamNetworking*)linux_side)->IsDataAvailable((SNetListenSocket_t)hListenSocket, (uint32 *)pcubMsgSize, (SNetSocket_t *)phSocket);
}

bool cppISteamNetworking_SteamNetworking002_RetrieveData(void *linux_side, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    return ((ISteamNetworking*)linux_side)->RetrieveData((SNetListenSocket_t)hListenSocket, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize, (SNetSocket_t *)phSocket);
}

bool cppISteamNetworking_SteamNetworking002_GetSocketInfo(void *linux_side, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    return ((ISteamNetworking*)linux_side)->GetSocketInfo((SNetSocket_t)hSocket, (CSteamID *)pSteamIDRemote, (int *)peSocketStatus, (uint32 *)punIPRemote, (uint16 *)punPortRemote);
}

bool cppISteamNetworking_SteamNetworking002_GetListenSocketInfo(void *linux_side, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    return ((ISteamNetworking*)linux_side)->GetListenSocketInfo((SNetListenSocket_t)hListenSocket, (uint32 *)pnIP, (uint16 *)pnPort);
}

ESNetSocketConnectionType cppISteamNetworking_SteamNetworking002_GetSocketConnectionType(void *linux_side, SNetSocket_t hSocket)
{
    return ((ISteamNetworking*)linux_side)->GetSocketConnectionType((SNetSocket_t)hSocket);
}

int cppISteamNetworking_SteamNetworking002_GetMaxPacketSize(void *linux_side, SNetSocket_t hSocket)
{
    return ((ISteamNetworking*)linux_side)->GetMaxPacketSize((SNetSocket_t)hSocket);
}

#ifdef __cplusplus
}
#endif
