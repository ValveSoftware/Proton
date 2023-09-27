struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params
{
    void *linux_side;
    EGCResults _ret;
    uint32 unMsgType;
    const void *pubData;
    uint32 cubData;
};
extern void cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *params );

struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params
{
    void *linux_side;
    bool _ret;
    uint32 *pcubMsgSize;
};
extern void cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *params );

struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params
{
    void *linux_side;
    EGCResults _ret;
    uint32 *punMsgType;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
};
extern void cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *params );

