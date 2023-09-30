/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworking_SteamNetworking002_CreateListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_CreateListenSocket_params *params = (struct ISteamNetworking_SteamNetworking002_CreateListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_CreateConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_CreateConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking002_CreateConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_DestroySocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_DestroySocket_params *params = (struct ISteamNetworking_SteamNetworking002_DestroySocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_DestroyListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_DestroyListenSocket_params *params = (struct ISteamNetworking_SteamNetworking002_DestroyListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_SendDataOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_SendDataOnSocket_params *params = (struct ISteamNetworking_SteamNetworking002_SendDataOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params *params = (struct ISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_RetrieveDataFromSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params *params = (struct ISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_IsDataAvailable( void *args )
{
    struct ISteamNetworking_SteamNetworking002_IsDataAvailable_params *params = (struct ISteamNetworking_SteamNetworking002_IsDataAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_RetrieveData( void *args )
{
    struct ISteamNetworking_SteamNetworking002_RetrieveData_params *params = (struct ISteamNetworking_SteamNetworking002_RetrieveData_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_GetSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking002_GetSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking002_GetSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_GetListenSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking002_GetListenSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking002_GetListenSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_GetSocketConnectionType( void *args )
{
    struct ISteamNetworking_SteamNetworking002_GetSocketConnectionType_params *params = (struct ISteamNetworking_SteamNetworking002_GetSocketConnectionType_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking002_GetMaxPacketSize( void *args )
{
    struct ISteamNetworking_SteamNetworking002_GetMaxPacketSize_params *params = (struct ISteamNetworking_SteamNetworking002_GetMaxPacketSize_params *)args;
    struct u_ISteamNetworking_SteamNetworking002 *iface = (struct u_ISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
    return 0;
}

