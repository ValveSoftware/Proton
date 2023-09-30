/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamNetworking_SteamNetworking001_CreateListenSocket_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nVirtualP2PPort;
    uint32_t nIP;
    uint16_t nPort;
};
extern void cppISteamNetworking_SteamNetworking001_CreateListenSocket( struct cppISteamNetworking_SteamNetworking001_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDTarget;
    int32_t nVirtualPort;
    int32_t nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_CreateConnectionSocket_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nIP;
    uint16_t nPort;
    int32_t nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking001_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_DestroySocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking001_DestroySocket( struct cppISteamNetworking_SteamNetworking001_DestroySocket_params *params );

struct cppISteamNetworking_SteamNetworking001_DestroyListenSocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking001_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking001_DestroyListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_SendDataOnSocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    void *pubData;
    uint32_t cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking001_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking001_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    uint32_t *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    void *pubDest;
    uint32_t cubDest;
    uint32_t *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    uint32_t hListenSocket;
    uint32_t *pcubMsgSize;
    uint32_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking001_IsDataAvailable( struct cppISteamNetworking_SteamNetworking001_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking001_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hListenSocket;
    void *pubDest;
    uint32_t cubDest;
    uint32_t *pcubMsgSize;
    uint32_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking001_RetrieveData( struct cppISteamNetworking_SteamNetworking001_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking001_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    CSteamID *pSteamIDRemote;
    int32_t *peSocketStatus;
    uint32_t *punIPRemote;
    uint16_t *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking001_GetSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking001_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t hListenSocket;
    uint32_t *pnIP;
    uint16_t *pnPort;
};
extern void cppISteamNetworking_SteamNetworking001_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
