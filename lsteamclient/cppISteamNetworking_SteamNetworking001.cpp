/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworking_SteamNetworking001.h"

void cppISteamNetworking_SteamNetworking001_CreateListenSocket( struct cppISteamNetworking_SteamNetworking001_CreateListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort );
}

void cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking001_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking001_DestroySocket( struct cppISteamNetworking_SteamNetworking001_DestroySocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking001_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking001_DestroyListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking001_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking001_SendDataOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
}

void cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking001_IsDataAvailable( struct cppISteamNetworking_SteamNetworking001_IsDataAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking001_RetrieveData( struct cppISteamNetworking_SteamNetworking001_RetrieveData_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking001_GetSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking001_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking001 *iface = (struct u_ISteamNetworking_SteamNetworking001 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
}

