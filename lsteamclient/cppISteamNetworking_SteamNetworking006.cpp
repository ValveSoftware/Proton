/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworking_SteamNetworking006.h"

struct u_ISteamNetworking_SteamNetworking006
{
#ifdef __cplusplus
    virtual bool SendP2PPacket( CSteamID, const void *, uint32_t, uint32_t, int32_t ) = 0;
    virtual bool IsP2PPacketAvailable( uint32_t *, int32_t ) = 0;
    virtual bool ReadP2PPacket( void *, uint32_t, uint32_t *, CSteamID *, int32_t ) = 0;
    virtual bool AcceptP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PSessionWithUser( CSteamID ) = 0;
    virtual bool CloseP2PChannelWithUser( CSteamID, int32_t ) = 0;
    virtual bool GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
    virtual bool AllowP2PPacketRelay( bool ) = 0;
    virtual uint32_t CreateListenSocket( int32_t, SteamIPAddress_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( SteamIPAddress_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, SteamIPAddress_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, SteamIPAddress_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworking_SteamNetworking006_SendP2PPacket( struct cppISteamNetworking_SteamNetworking006_SendP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->SendP2PPacket( params->steamIDRemote, params->pubData, params->cubData, params->eP2PSendType, params->nChannel );
}

void cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->IsP2PPacketAvailable( params->pcubMsgSize, params->nChannel );
}

void cppISteamNetworking_SteamNetworking006_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking006_ReadP2PPacket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->ReadP2PPacket( params->pubDest, params->cubDest, params->pcubMsgSize, params->psteamIDRemote, params->nChannel );
}

void cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->AcceptP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->CloseP2PSessionWithUser( params->steamIDRemote );
}

void cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser( struct cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->CloseP2PChannelWithUser( params->steamIDRemote, params->nChannel );
}

void cppISteamNetworking_SteamNetworking006_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking006_GetP2PSessionState_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->GetP2PSessionState( params->steamIDRemote, params->pConnectionState );
}

void cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay( struct cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->AllowP2PPacketRelay( params->bAllow );
}

void cppISteamNetworking_SteamNetworking006_CreateListenSocket( struct cppISteamNetworking_SteamNetworking006_CreateListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking006_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking006_CreateConnectionSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking006_DestroySocket( struct cppISteamNetworking_SteamNetworking006_DestroySocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking006_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking006_DestroyListenSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking006_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking006_SendDataOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
}

void cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking006_IsDataAvailable( struct cppISteamNetworking_SteamNetworking006_IsDataAvailable_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking006_RetrieveData( struct cppISteamNetworking_SteamNetworking006_RetrieveData_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking006_GetSocketInfo( struct cppISteamNetworking_SteamNetworking006_GetSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking006_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking006_GetListenSocketInfo_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
}

void cppISteamNetworking_SteamNetworking006_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking006_GetSocketConnectionType_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
}

void cppISteamNetworking_SteamNetworking006_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking006_GetMaxPacketSize_params *params )
{
    struct u_ISteamNetworking_SteamNetworking006 *iface = (struct u_ISteamNetworking_SteamNetworking006 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
}

