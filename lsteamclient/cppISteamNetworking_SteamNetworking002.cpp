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

struct cppISteamNetworking_SteamNetworking002
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocket( int32_t, uint32_t, uint16_t, bool ) = 0;
    virtual uint32_t CreateP2PConnectionSocket( CSteamID, int32_t, int32_t, bool ) = 0;
    virtual uint32_t CreateConnectionSocket( uint32_t, uint16_t, int32_t ) = 0;
    virtual bool DestroySocket( uint32_t, bool ) = 0;
    virtual bool DestroyListenSocket( uint32_t, bool ) = 0;
    virtual bool SendDataOnSocket( uint32_t, void *, uint32_t, bool ) = 0;
    virtual bool IsDataAvailableOnSocket( uint32_t, uint32_t * ) = 0;
    virtual bool RetrieveDataFromSocket( uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual bool IsDataAvailable( uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool RetrieveData( uint32_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetSocketInfo( uint32_t, CSteamID *, int32_t *, uint32_t *, uint16_t * ) = 0;
    virtual bool GetListenSocketInfo( uint32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint32_t GetSocketConnectionType( uint32_t ) = 0;
    virtual int32_t GetMaxPacketSize( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworking_SteamNetworking002_CreateListenSocket( struct cppISteamNetworking_SteamNetworking002_CreateListenSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->CreateListenSocket( params->nVirtualP2PPort, params->nIP, params->nPort, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->CreateP2PConnectionSocket( params->steamIDTarget, params->nVirtualPort, params->nTimeoutSec, params->bAllowUseOfPacketRelay );
}

void cppISteamNetworking_SteamNetworking002_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateConnectionSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->CreateConnectionSocket( params->nIP, params->nPort, params->nTimeoutSec );
}

void cppISteamNetworking_SteamNetworking002_DestroySocket( struct cppISteamNetworking_SteamNetworking002_DestroySocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->DestroySocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking002_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking002_DestroyListenSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->DestroyListenSocket( params->hSocket, params->bNotifyRemoteEnd );
}

void cppISteamNetworking_SteamNetworking002_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking002_SendDataOnSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->SendDataOnSocket( params->hSocket, params->pubData, params->cubData, params->bReliable );
}

void cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->IsDataAvailableOnSocket( params->hSocket, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->RetrieveDataFromSocket( params->hSocket, params->pubDest, params->cubDest, params->pcubMsgSize );
}

void cppISteamNetworking_SteamNetworking002_IsDataAvailable( struct cppISteamNetworking_SteamNetworking002_IsDataAvailable_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->IsDataAvailable( params->hListenSocket, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking002_RetrieveData( struct cppISteamNetworking_SteamNetworking002_RetrieveData_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->RetrieveData( params->hListenSocket, params->pubDest, params->cubDest, params->pcubMsgSize, params->phSocket );
}

void cppISteamNetworking_SteamNetworking002_GetSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetSocketInfo_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetSocketInfo( params->hSocket, params->pSteamIDRemote, params->peSocketStatus, params->punIPRemote, params->punPortRemote );
}

void cppISteamNetworking_SteamNetworking002_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetListenSocketInfo_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetListenSocketInfo( params->hListenSocket, params->pnIP, params->pnPort );
}

void cppISteamNetworking_SteamNetworking002_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking002_GetSocketConnectionType_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetSocketConnectionType( params->hSocket );
}

void cppISteamNetworking_SteamNetworking002_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking002_GetMaxPacketSize_params *params )
{
    struct cppISteamNetworking_SteamNetworking002 *iface = (struct cppISteamNetworking_SteamNetworking002 *)params->linux_side;
    params->_ret = iface->GetMaxPacketSize( params->hSocket );
}

#ifdef __cplusplus
}
#endif
