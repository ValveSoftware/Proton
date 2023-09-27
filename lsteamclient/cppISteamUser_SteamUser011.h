struct cppISteamUser_SteamUser011_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser011_GetHSteamUser( struct cppISteamUser_SteamUser011_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser011_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser011_BLoggedOn( struct cppISteamUser_SteamUser011_BLoggedOn_params *params );

struct cppISteamUser_SteamUser011_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser011_GetSteamID( struct cppISteamUser_SteamUser011_GetSteamID_params *params );

struct cppISteamUser_SteamUser011_InitiateGameConnection_params
{
    void *linux_side;
    int _ret;
    void *pAuthBlob;
    int cbMaxAuthBlob;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser011_InitiateGameConnection( struct cppISteamUser_SteamUser011_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser011_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser011_TerminateGameConnection( struct cppISteamUser_SteamUser011_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser011_TrackAppUsageEvent( struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser011_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser011_GetUserDataFolder( struct cppISteamUser_SteamUser011_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser011_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser011_StartVoiceRecording( struct cppISteamUser_SteamUser011_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser011_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser011_StopVoiceRecording( struct cppISteamUser_SteamUser011_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser011_GetCompressedVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
};
extern void cppISteamUser_SteamUser011_GetCompressedVoice( struct cppISteamUser_SteamUser011_GetCompressedVoice_params *params );

struct cppISteamUser_SteamUser011_DecompressVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    void *pCompressed;
    uint32 cbCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
};
extern void cppISteamUser_SteamUser011_DecompressVoice( struct cppISteamUser_SteamUser011_DecompressVoice_params *params );

