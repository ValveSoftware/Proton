struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001;
struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params
{
    void *linux_side;
};
extern void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params *params );

struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *remoteAddress;
    const void *pData;
    uint32_t cbData;
    int32_t nSendFlags;
};
extern void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params *params );

struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params
{
    void *linux_side;
    int32_t _ret;
    winSteamNetworkingMessage_t_158 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *params );

struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params
{
    void *linux_side;
    const SteamNetworkingIPAddr *remoteAddress;
};
extern void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params *params );

