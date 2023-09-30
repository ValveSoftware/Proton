/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworking_SteamNetworking004.h"

void cppISteamNetworking_SteamNetworking004_SendP2PPacket( struct cppISteamNetworking_SteamNetworking004_SendP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->SendP2PPacket( params->steamIDRemote, params->pubData, params->cubData, params->eP2PSendType, params->nVirtualPort );
}

void cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->IsP2PPacketAvailable( params->pcubMsgSize, params->nVirtualPort );
}

void cppISteamNetworking_SteamNetworking004_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking004_ReadP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->ReadP2PPacket( params->pubDest, params->cubDest, params->pcubMsgSize, params->psteamIDRemote, params->nVirtualPort );
}

void cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->AcceptP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->CloseP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking004_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking004_GetP2PSessionState_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->GetP2PSessionState( params->steamIDRemote, params->pConnectionState );
}

void cppISteamNetworking_SteamNetworking004_CreateListenSocket( struct cppISteamNetworking_SteamNetworking004_CreateListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking004_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking004_CreateConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking004_DestroySocket( struct cppISteamNetworking_SteamNetworking004_DestroySocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking004_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking004_DestroyListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking004_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking004_SendDataOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
}

void cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking004_IsDataAvailable( struct cppISteamNetworking_SteamNetworking004_IsDataAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking004_RetrieveData( struct cppISteamNetworking_SteamNetworking004_RetrieveData_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking004_GetSocketInfo( struct cppISteamNetworking_SteamNetworking004_GetSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking004_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking004_GetListenSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
}

void cppISteamNetworking_SteamNetworking004_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking004_GetSocketConnectionType_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
}

void cppISteamNetworking_SteamNetworking004_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking004_GetMaxPacketSize_params *params )
{
    struct u_ISteamNetworking_SteamNetworking004 *iface = (struct u_ISteamNetworking_SteamNetworking004 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
}

