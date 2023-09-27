#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_112/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_112
#include "struct_converters.h"
#include "cppISteamNetworking_SteamNetworking004.h"
void cppISteamNetworking_SteamNetworking004_SendP2PPacket( struct cppISteamNetworking_SteamNetworking004_SendP2PPacket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->SendP2PPacket( (CSteamID)params->steamIDRemote, (const void *)params->pubData, (uint32)params->cubData, (EP2PSend)params->eP2PSendType, (int)params->nVirtualPort );
}

void cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsP2PPacketAvailable( (uint32 *)params->pcubMsgSize, (int)params->nVirtualPort );
}

void cppISteamNetworking_SteamNetworking004_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking004_ReadP2PPacket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->ReadP2PPacket( (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize, (CSteamID *)params->psteamIDRemote, (int)params->nVirtualPort );
}

void cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->AcceptP2PSessionWithUser( (CSteamID)params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CloseP2PSessionWithUser( (CSteamID)params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking004_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking004_GetP2PSessionState_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetP2PSessionState( (CSteamID)params->steamIDRemote, (P2PSessionState_t *)params->pConnectionState );
}

void cppISteamNetworking_SteamNetworking004_CreateListenSocket( struct cppISteamNetworking_SteamNetworking004_CreateListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateListenSocket( (int)params->nVirtualP2PPort, (uint32)params->nIP, (uint16)params->nPort, (bool)params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateP2PConnectionSocket( (CSteamID)params->steamIDTarget, (int)params->nVirtualPort, (int)params->nTimeoutSec, (bool)params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking004_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking004_CreateConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateConnectionSocket( (uint32)params->nIP, (uint16)params->nPort, (int)params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking004_DestroySocket( struct cppISteamNetworking_SteamNetworking004_DestroySocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroySocket( (SNetSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking004_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking004_DestroyListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroyListenSocket( (SNetListenSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking004_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking004_SendDataOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->SendDataOnSocket( (SNetSocket_t)params->hSocket, (void *)params->pubData, (uint32)params->cubData, (bool)params->bReliable );
}

void cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailableOnSocket( (SNetSocket_t)params->hSocket, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveDataFromSocket( (SNetSocket_t)params->hSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking004_IsDataAvailable( struct cppISteamNetworking_SteamNetworking004_IsDataAvailable_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailable( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking004_RetrieveData( struct cppISteamNetworking_SteamNetworking004_RetrieveData_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveData( (SNetListenSocket_t)params->hListenSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking004_GetSocketInfo( struct cppISteamNetworking_SteamNetworking004_GetSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketInfo( (SNetSocket_t)params->hSocket, (CSteamID *)params->pSteamIDRemote, (int *)params->peSocketStatus, (uint32 *)params->punIPRemote, (uint16 *)params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking004_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking004_GetListenSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetListenSocketInfo( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pnIP, (uint16 *)params->pnPort );
}

void cppISteamNetworking_SteamNetworking004_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking004_GetSocketConnectionType_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketConnectionType( (SNetSocket_t)params->hSocket );
}

void cppISteamNetworking_SteamNetworking004_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking004_GetMaxPacketSize_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetMaxPacketSize( (SNetSocket_t)params->hSocket );
}

#ifdef __cplusplus
}
#endif
