/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworking_SteamNetworking005_SendP2PPacket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_SendP2PPacket_params *params = (struct ISteamNetworking_SteamNetworking005_SendP2PPacket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->SendP2PPacket( params->steamIDRemote, params->pubData, params->cubData, params->eP2PSendType, params->nChannel );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_IsP2PPacketAvailable( void *args )
{
    struct ISteamNetworking_SteamNetworking005_IsP2PPacketAvailable_params *params = (struct ISteamNetworking_SteamNetworking005_IsP2PPacketAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->IsP2PPacketAvailable( params->pcubMsgSize, params->nChannel );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_ReadP2PPacket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_ReadP2PPacket_params *params = (struct ISteamNetworking_SteamNetworking005_ReadP2PPacket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->ReadP2PPacket( params->pubDest, params->cubDest, params->pcubMsgSize, params->psteamIDRemote, params->nChannel );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser( void *args )
{
    struct ISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser_params *params = (struct ISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->AcceptP2PSessionWithUser( params->steamIDRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser( void *args )
{
    struct ISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser_params *params = (struct ISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CloseP2PSessionWithUser( params->steamIDRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser( void *args )
{
    struct ISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser_params *params = (struct ISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CloseP2PChannelWithUser( params->steamIDRemote, params->nChannel );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_GetP2PSessionState( void *args )
{
    struct ISteamNetworking_SteamNetworking005_GetP2PSessionState_params *params = (struct ISteamNetworking_SteamNetworking005_GetP2PSessionState_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetP2PSessionState( params->steamIDRemote, params->pConnectionState );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_AllowP2PPacketRelay( void *args )
{
    struct ISteamNetworking_SteamNetworking005_AllowP2PPacketRelay_params *params = (struct ISteamNetworking_SteamNetworking005_AllowP2PPacketRelay_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->AllowP2PPacketRelay( params->bAllow );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_CreateListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_CreateListenSocket_params *params = (struct ISteamNetworking_SteamNetworking005_CreateListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_CreateConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_CreateConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking005_CreateConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_DestroySocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_DestroySocket_params *params = (struct ISteamNetworking_SteamNetworking005_DestroySocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_DestroyListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_DestroyListenSocket_params *params = (struct ISteamNetworking_SteamNetworking005_DestroyListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_SendDataOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_SendDataOnSocket_params *params = (struct ISteamNetworking_SteamNetworking005_SendDataOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket_params *params = (struct ISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_RetrieveDataFromSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking005_RetrieveDataFromSocket_params *params = (struct ISteamNetworking_SteamNetworking005_RetrieveDataFromSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_IsDataAvailable( void *args )
{
    struct ISteamNetworking_SteamNetworking005_IsDataAvailable_params *params = (struct ISteamNetworking_SteamNetworking005_IsDataAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_RetrieveData( void *args )
{
    struct ISteamNetworking_SteamNetworking005_RetrieveData_params *params = (struct ISteamNetworking_SteamNetworking005_RetrieveData_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_GetSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking005_GetSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking005_GetSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_GetListenSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking005_GetListenSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking005_GetListenSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_GetSocketConnectionType( void *args )
{
    struct ISteamNetworking_SteamNetworking005_GetSocketConnectionType_params *params = (struct ISteamNetworking_SteamNetworking005_GetSocketConnectionType_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking005_GetMaxPacketSize( void *args )
{
    struct ISteamNetworking_SteamNetworking005_GetMaxPacketSize_params *params = (struct ISteamNetworking_SteamNetworking005_GetMaxPacketSize_params *)args;
    struct u_ISteamNetworking_SteamNetworking005 *iface = (struct u_ISteamNetworking_SteamNetworking005 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
    return 0;
}

