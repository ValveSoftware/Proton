#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_110/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_110
#include "struct_converters.h"
#include "cppISteamNetworking_SteamNetworking003.h"
void cppISteamNetworking_SteamNetworking003_SendP2PPacket( struct cppISteamNetworking_SteamNetworking003_SendP2PPacket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->SendP2PPacket( (CSteamID)params->steamIDRemote, (const void *)params->pubData, (uint32)params->cubData, (EP2PSend)params->eP2PSendType );
}

void cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsP2PPacketAvailable( (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking003_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking003_ReadP2PPacket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->ReadP2PPacket( (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize, (CSteamID *)params->psteamIDRemote );
}

void cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->AcceptP2PSessionWithUser( (CSteamID)params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CloseP2PSessionWithUser( (CSteamID)params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking003_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking003_GetP2PSessionState_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetP2PSessionState( (CSteamID)params->steamIDRemote, (P2PSessionState_t *)params->pConnectionState );
}

void cppISteamNetworking_SteamNetworking003_CreateListenSocket( struct cppISteamNetworking_SteamNetworking003_CreateListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateListenSocket( (int)params->nVirtualP2PPort, (uint32)params->nIP, (uint16)params->nPort, (bool)params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateP2PConnectionSocket( (CSteamID)params->steamIDTarget, (int)params->nVirtualPort, (int)params->nTimeoutSec, (bool)params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking003_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking003_CreateConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateConnectionSocket( (uint32)params->nIP, (uint16)params->nPort, (int)params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking003_DestroySocket( struct cppISteamNetworking_SteamNetworking003_DestroySocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroySocket( (SNetSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking003_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking003_DestroyListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroyListenSocket( (SNetListenSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking003_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking003_SendDataOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->SendDataOnSocket( (SNetSocket_t)params->hSocket, (void *)params->pubData, (uint32)params->cubData, (bool)params->bReliable );
}

void cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailableOnSocket( (SNetSocket_t)params->hSocket, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveDataFromSocket( (SNetSocket_t)params->hSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking003_IsDataAvailable( struct cppISteamNetworking_SteamNetworking003_IsDataAvailable_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailable( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking003_RetrieveData( struct cppISteamNetworking_SteamNetworking003_RetrieveData_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveData( (SNetListenSocket_t)params->hListenSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking003_GetSocketInfo( struct cppISteamNetworking_SteamNetworking003_GetSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketInfo( (SNetSocket_t)params->hSocket, (CSteamID *)params->pSteamIDRemote, (int *)params->peSocketStatus, (uint32 *)params->punIPRemote, (uint16 *)params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking003_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking003_GetListenSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetListenSocketInfo( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pnIP, (uint16 *)params->pnPort );
}

void cppISteamNetworking_SteamNetworking003_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking003_GetSocketConnectionType_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketConnectionType( (SNetSocket_t)params->hSocket );
}

void cppISteamNetworking_SteamNetworking003_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking003_GetMaxPacketSize_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetMaxPacketSize( (SNetSocket_t)params->hSocket );
}

#ifdef __cplusplus
}
#endif
