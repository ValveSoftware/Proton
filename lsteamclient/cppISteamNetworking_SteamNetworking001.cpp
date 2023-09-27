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
void cppISteamNetworking_SteamNetworking001_CreateListenSocket( struct cppISteamNetworking_SteamNetworking001_CreateListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateListenSocket( (int)params->nVirtualP2PPort, (uint32)params->nIP, (uint16)params->nPort );
}

void cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateP2PConnectionSocket( (CSteamID)params->steamIDTarget, (int)params->nVirtualPort, (int)params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking001_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->CreateConnectionSocket( (uint32)params->nIP, (uint16)params->nPort, (int)params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking001_DestroySocket( struct cppISteamNetworking_SteamNetworking001_DestroySocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroySocket( (SNetSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking001_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking001_DestroyListenSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->DestroyListenSocket( (SNetListenSocket_t)params->hSocket, (bool)params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking001_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking001_SendDataOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->SendDataOnSocket( (SNetSocket_t)params->hSocket, (void *)params->pubData, (uint32)params->cubData, (bool)params->bReliable );
}

void cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailableOnSocket( (SNetSocket_t)params->hSocket, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveDataFromSocket( (SNetSocket_t)params->hSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking001_IsDataAvailable( struct cppISteamNetworking_SteamNetworking001_IsDataAvailable_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->IsDataAvailable( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking001_RetrieveData( struct cppISteamNetworking_SteamNetworking001_RetrieveData_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->RetrieveData( (SNetListenSocket_t)params->hListenSocket, (void *)params->pubDest, (uint32)params->cubDest, (uint32 *)params->pcubMsgSize, (SNetSocket_t *)params->phSocket );
}

void cppISteamNetworking_SteamNetworking001_GetSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetSocketInfo( (SNetSocket_t)params->hSocket, (CSteamID *)params->pSteamIDRemote, (int *)params->peSocketStatus, (uint32 *)params->punIPRemote, (uint16 *)params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking001_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *params )
{
    params->_ret = ((ISteamNetworking*)params->linux_side)->GetListenSocketInfo( (SNetListenSocket_t)params->hListenSocket, (uint32 *)params->pnIP, (uint16 *)params->pnPort );
}

#ifdef __cplusplus
}
#endif
