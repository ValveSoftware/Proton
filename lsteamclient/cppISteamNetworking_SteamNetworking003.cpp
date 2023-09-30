/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworking_SteamNetworking003.h"

void cppISteamNetworking_SteamNetworking003_SendP2PPacket( struct cppISteamNetworking_SteamNetworking003_SendP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->SendP2PPacket( params->steamIDRemote, params->pubData, params->cubData, params->eP2PSendType );
}

void cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->IsP2PPacketAvailable( params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking003_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking003_ReadP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->ReadP2PPacket( params->pubDest, params->cubDest, params->pcubMsgSize, params->psteamIDRemote );
}

void cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->AcceptP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CloseP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking003_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking003_GetP2PSessionState_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetP2PSessionState( params->steamIDRemote, params->pConnectionState );
}

void cppISteamNetworking_SteamNetworking003_CreateListenSocket( struct cppISteamNetworking_SteamNetworking003_CreateListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking003_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking003_CreateConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking003_DestroySocket( struct cppISteamNetworking_SteamNetworking003_DestroySocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking003_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking003_DestroyListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking003_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking003_SendDataOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
}

void cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking003_IsDataAvailable( struct cppISteamNetworking_SteamNetworking003_IsDataAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking003_RetrieveData( struct cppISteamNetworking_SteamNetworking003_RetrieveData_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking003_GetSocketInfo( struct cppISteamNetworking_SteamNetworking003_GetSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking003_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking003_GetListenSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
}

void cppISteamNetworking_SteamNetworking003_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking003_GetSocketConnectionType_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
}

void cppISteamNetworking_SteamNetworking003_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking003_GetMaxPacketSize_params *params )
{
    struct u_ISteamNetworking_SteamNetworking003 *iface = (struct u_ISteamNetworking_SteamNetworking003 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
}

