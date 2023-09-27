#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_104/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_104
#include "struct_converters.h"
#include "cppISteamNetworking_SteamNetworking002.h"
void cppISteamNetworking_SteamNetworking002_CreateListenSocket( struct cppISteamNetworking_SteamNetworking002_CreateListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateListenSocket( (int)params->nVirtualP2PPort, (uint32)params->nIP, (uint16)params->nPort, (bool)params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateP2PConnectionSocket( (CSteamID)params->steamIDTarget, (int)params->nVirtualPort, (int)params->nTimeoutSec, (bool)params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking002_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateConnectionSocket( (uint32)params->nIP, (uint16)params->nPort, (int)params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking002_DestroySocket( struct cppISteamNetworking_SteamNetworking002_DestroySocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroySocket( (SNetSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking002_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking002_DestroyListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroyListenSocket( (SNetListenSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking002_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking002_SendDataOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->SendDataOnSocket( (SNetSocket_t)params->hSocket, (void *)params->pubData, (uint32)params->cubData, (bool)params->bReliable );
}

void cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailableOnSocket( (SNetSocket_t)params->hSocket, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveDataFromSocket( (SNetSocket_t)params->hSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking002_IsDataAvailable( struct cppISteamNetworking_SteamNetworking002_IsDataAvailable_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailable( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking002_RetrieveData( struct cppISteamNetworking_SteamNetworking002_RetrieveData_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveData( (SNetListenSocket_t)params->hListenSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking002_GetSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketInfo( (SNetSocket_t)params->hSocket, (CSteamID *)params->pSteamIDRemote, (int *)params->peSocketStatus, (uint32 *)params->punIPRemote, (uint16 *)params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking002_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetListenSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetListenSocketInfo( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pnIP, (uint16 *)params->pnPort );
}

void cppISteamNetworking_SteamNetworking002_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking002_GetSocketConnectionType_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketConnectionType( (SNetSocket_t)params->hSocket );
}

void cppISteamNetworking_SteamNetworking002_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking002_GetMaxPacketSize_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetMaxPacketSize( (SNetSocket_t)params->hSocket );
}

#ifdef __cplusplus
}
#endif
