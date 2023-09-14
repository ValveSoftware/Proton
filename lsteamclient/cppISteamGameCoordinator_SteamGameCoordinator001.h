struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unMsgType;
    const void *pubData;
    uint32_t cubData;
};
extern void cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *params );

struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params
{
    void *linux_side;
    bool _ret;
    uint32_t *pcubMsgSize;
};
extern void cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *params );

struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *punMsgType;
    void *pubDest;
    uint32_t cubDest;
    uint32_t *pcubMsgSize;
};
extern void cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *params );

