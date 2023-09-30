/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworking_SteamNetworking005.h"

void cppISteamNetworking_SteamNetworking005_SendP2PPacket( struct cppISteamNetworking_SteamNetworking005_SendP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->SendP2PPacket( params->steamIDRemote, params->pubData, params->cubData, params->eP2PSendType, params->nChannel );
}

void cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->IsP2PPacketAvailable( params->pcubMsgSize, params->nChannel );
}

void cppISteamNetworking_SteamNetworking005_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking005_ReadP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->ReadP2PPacket( params->pubDest, params->cubDest, params->pcubMsgSize, params->psteamIDRemote, params->nChannel );
}

void cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->AcceptP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CloseP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser( struct cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CloseP2PChannelWithUser( params->steamIDRemote, params->nChannel );
}

void cppISteamNetworking_SteamNetworking005_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking005_GetP2PSessionState_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetP2PSessionState( params->steamIDRemote, params->pConnectionState );
}

void cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay( struct cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->AllowP2PPacketRelay( params->bAllow );
}

void cppISteamNetworking_SteamNetworking005_CreateListenSocket( struct cppISteamNetworking_SteamNetworking005_CreateListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking005_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking005_CreateConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking005_DestroySocket( struct cppISteamNetworking_SteamNetworking005_DestroySocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking005_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking005_DestroyListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking005_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking005_SendDataOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
}

void cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking005_IsDataAvailable( struct cppISteamNetworking_SteamNetworking005_IsDataAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking005_RetrieveData( struct cppISteamNetworking_SteamNetworking005_RetrieveData_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking005_GetSocketInfo( struct cppISteamNetworking_SteamNetworking005_GetSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking005_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking005_GetListenSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
}

void cppISteamNetworking_SteamNetworking005_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking005_GetSocketConnectionType_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
}

void cppISteamNetworking_SteamNetworking005_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking005_GetMaxPacketSize_params *params )
{
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
}

