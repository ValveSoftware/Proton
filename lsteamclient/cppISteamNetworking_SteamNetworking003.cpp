/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworking_SteamNetworking003_SendP2PPacket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_SendP2PPacket_params *params = (struct ISteamNetworking_SteamNetworking003_SendP2PPacket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->SendP2PPacket( params->steamIDRemote, params->pubData, params->cubData, params->eP2PSendType );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_IsP2PPacketAvailable( void *args )
{
    struct ISteamNetworking_SteamNetworking003_IsP2PPacketAvailable_params *params = (struct ISteamNetworking_SteamNetworking003_IsP2PPacketAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->IsP2PPacketAvailable( params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_ReadP2PPacket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_ReadP2PPacket_params *params = (struct ISteamNetworking_SteamNetworking003_ReadP2PPacket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->ReadP2PPacket( params->pubDest, params->cubDest, params->pcubMsgSize, params->psteamIDRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser( void *args )
{
    struct ISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser_params *params = (struct ISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->AcceptP2PSessionWithUser( params->steamIDRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser( void *args )
{
    struct ISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser_params *params = (struct ISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CloseP2PSessionWithUser( params->steamIDRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_GetP2PSessionState( void *args )
{
    struct ISteamNetworking_SteamNetworking003_GetP2PSessionState_params *params = (struct ISteamNetworking_SteamNetworking003_GetP2PSessionState_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetP2PSessionState( params->steamIDRemote, params->pConnectionState );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_CreateListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_CreateListenSocket_params *params = (struct ISteamNetworking_SteamNetworking003_CreateListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_CreateConnectionSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_CreateConnectionSocket_params *params = (struct ISteamNetworking_SteamNetworking003_CreateConnectionSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_DestroySocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_DestroySocket_params *params = (struct ISteamNetworking_SteamNetworking003_DestroySocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_DestroyListenSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_DestroyListenSocket_params *params = (struct ISteamNetworking_SteamNetworking003_DestroyListenSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_SendDataOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_SendDataOnSocket_params *params = (struct ISteamNetworking_SteamNetworking003_SendDataOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket_params *params = (struct ISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_RetrieveDataFromSocket( void *args )
{
    struct ISteamNetworking_SteamNetworking003_RetrieveDataFromSocket_params *params = (struct ISteamNetworking_SteamNetworking003_RetrieveDataFromSocket_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_IsDataAvailable( void *args )
{
    struct ISteamNetworking_SteamNetworking003_IsDataAvailable_params *params = (struct ISteamNetworking_SteamNetworking003_IsDataAvailable_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_RetrieveData( void *args )
{
    struct ISteamNetworking_SteamNetworking003_RetrieveData_params *params = (struct ISteamNetworking_SteamNetworking003_RetrieveData_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_GetSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking003_GetSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking003_GetSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_GetListenSocketInfo( void *args )
{
    struct ISteamNetworking_SteamNetworking003_GetListenSocketInfo_params *params = (struct ISteamNetworking_SteamNetworking003_GetListenSocketInfo_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_GetSocketConnectionType( void *args )
{
    struct ISteamNetworking_SteamNetworking003_GetSocketConnectionType_params *params = (struct ISteamNetworking_SteamNetworking003_GetSocketConnectionType_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworking_SteamNetworking003_GetMaxPacketSize( void *args )
{
    struct ISteamNetworking_SteamNetworking003_GetMaxPacketSize_params *params = (struct ISteamNetworking_SteamNetworking003_GetMaxPacketSize_params *)args;
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
    return 0;
}

