#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_146
#include "struct_converters.h"
#include "cppISteamNetworking_SteamNetworking005.h"
bool cppISteamNetworking_SteamNetworking005_SendP2PPacket(void *linux_side, CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)
{
    return ((ISteamNetworking*)linux_side)->SendP2PPacket((CSteamID)steamIDRemote, (const void *)pubData, (uint32)cubData, (EP2PSend)eP2PSendType, (int)nChannel);
}

bool cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(void *linux_side, uint32 * pcubMsgSize, int nChannel)
{
    return ((ISteamNetworking*)linux_side)->IsP2PPacketAvailable((uint32 *)pcubMsgSize, (int)nChannel);
}

bool cppISteamNetworking_SteamNetworking005_ReadP2PPacket(void *linux_side, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nChannel)
{
    return ((ISteamNetworking*)linux_side)->ReadP2PPacket((void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize, (CSteamID *)psteamIDRemote, (int)nChannel);
}

bool cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(void *linux_side, CSteamID steamIDRemote)
{
    return ((ISteamNetworking*)linux_side)->AcceptP2PSessionWithUser((CSteamID)steamIDRemote);
}

bool cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(void *linux_side, CSteamID steamIDRemote)
{
    return ((ISteamNetworking*)linux_side)->CloseP2PSessionWithUser((CSteamID)steamIDRemote);
}

bool cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(void *linux_side, CSteamID steamIDRemote, int nChannel)
{
    return ((ISteamNetworking*)linux_side)->CloseP2PChannelWithUser((CSteamID)steamIDRemote, (int)nChannel);
}

bool cppISteamNetworking_SteamNetworking005_GetP2PSessionState(void *linux_side, CSteamID steamIDRemote, P2PSessionState_t * pConnectionState)
{
    return ((ISteamNetworking*)linux_side)->GetP2PSessionState((CSteamID)steamIDRemote, (P2PSessionState_t *)pConnectionState);
}

bool cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(void *linux_side, bool bAllow)
{
    return ((ISteamNetworking*)linux_side)->AllowP2PPacketRelay((bool)bAllow);
}

SNetListenSocket_t cppISteamNetworking_SteamNetworking005_CreateListenSocket(void *linux_side, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    return ((ISteamNetworking*)linux_side)->CreateListenSocket((int)nVirtualP2PPort, (uint32)nIP, (uint16)nPort, (bool)bAllowUseOfPacketRelay);
}

SNetSocket_t cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(void *linux_side, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    return ((ISteamNetworking*)linux_side)->CreateP2PConnectionSocket((CSteamID)steamIDTarget, (int)nVirtualPort, (int)nTimeoutSec, (bool)bAllowUseOfPacketRelay);
}

SNetSocket_t cppISteamNetworking_SteamNetworking005_CreateConnectionSocket(void *linux_side, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    return ((ISteamNetworking*)linux_side)->CreateConnectionSocket((uint32)nIP, (uint16)nPort, (int)nTimeoutSec);
}

bool cppISteamNetworking_SteamNetworking005_DestroySocket(void *linux_side, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    return ((ISteamNetworking*)linux_side)->DestroySocket((SNetSocket_t)hSocket, (bool)bNotifyRemoteEnd);
}

bool cppISteamNetworking_SteamNetworking005_DestroyListenSocket(void *linux_side, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    return ((ISteamNetworking*)linux_side)->DestroyListenSocket((SNetListenSocket_t)hSocket, (bool)bNotifyRemoteEnd);
}

bool cppISteamNetworking_SteamNetworking005_SendDataOnSocket(void *linux_side, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    return ((ISteamNetworking*)linux_side)->SendDataOnSocket((SNetSocket_t)hSocket, (void *)pubData, (uint32)cubData, (bool)bReliable);
}

bool cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(void *linux_side, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    return ((ISteamNetworking*)linux_side)->IsDataAvailableOnSocket((SNetSocket_t)hSocket, (uint32 *)pcubMsgSize);
}

bool cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(void *linux_side, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    return ((ISteamNetworking*)linux_side)->RetrieveDataFromSocket((SNetSocket_t)hSocket, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize);
}

bool cppISteamNetworking_SteamNetworking005_IsDataAvailable(void *linux_side, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    return ((ISteamNetworking*)linux_side)->IsDataAvailable((SNetListenSocket_t)hListenSocket, (uint32 *)pcubMsgSize, (SNetSocket_t *)phSocket);
}

bool cppISteamNetworking_SteamNetworking005_RetrieveData(void *linux_side, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    return ((ISteamNetworking*)linux_side)->RetrieveData((SNetListenSocket_t)hListenSocket, (void *)pubDest, (uint32)cubDest, (uint32 *)pcubMsgSize, (SNetSocket_t *)phSocket);
}

bool cppISteamNetworking_SteamNetworking005_GetSocketInfo(void *linux_side, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    return ((ISteamNetworking*)linux_side)->GetSocketInfo((SNetSocket_t)hSocket, (CSteamID *)pSteamIDRemote, (int *)peSocketStatus, (uint32 *)punIPRemote, (uint16 *)punPortRemote);
}

bool cppISteamNetworking_SteamNetworking005_GetListenSocketInfo(void *linux_side, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    return ((ISteamNetworking*)linux_side)->GetListenSocketInfo((SNetListenSocket_t)hListenSocket, (uint32 *)pnIP, (uint16 *)pnPort);
}

ESNetSocketConnectionType cppISteamNetworking_SteamNetworking005_GetSocketConnectionType(void *linux_side, SNetSocket_t hSocket)
{
    return ((ISteamNetworking*)linux_side)->GetSocketConnectionType((SNetSocket_t)hSocket);
}

int cppISteamNetworking_SteamNetworking005_GetMaxPacketSize(void *linux_side, SNetSocket_t hSocket)
{
    return ((ISteamNetworking*)linux_side)->GetMaxPacketSize((SNetSocket_t)hSocket);
}

#ifdef __cplusplus
}
#endif
