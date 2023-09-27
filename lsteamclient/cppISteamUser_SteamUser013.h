struct cppISteamUser_SteamUser013_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser013_GetHSteamUser( struct cppISteamUser_SteamUser013_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser013_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser013_BLoggedOn( struct cppISteamUser_SteamUser013_BLoggedOn_params *params );

struct cppISteamUser_SteamUser013_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser013_GetSteamID( struct cppISteamUser_SteamUser013_GetSteamID_params *params );

struct cppISteamUser_SteamUser013_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser013_InitiateGameConnection( struct cppISteamUser_SteamUser013_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser013_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser013_TerminateGameConnection( struct cppISteamUser_SteamUser013_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser013_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser013_TrackAppUsageEvent( struct cppISteamUser_SteamUser013_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser013_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser013_GetUserDataFolder( struct cppISteamUser_SteamUser013_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser013_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser013_StartVoiceRecording( struct cppISteamUser_SteamUser013_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser013_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser013_StopVoiceRecording( struct cppISteamUser_SteamUser013_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser013_GetAvailableVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    uint32 *pcbCompressed;
    uint32 *pcbUncompressed;
};
extern void cppISteamUser_SteamUser013_GetAvailableVoice( struct cppISteamUser_SteamUser013_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser013_GetVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    bool bWantCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    bool bWantUncompressed;
    void *pUncompressedDestBuffer;
    uint32 cbUncompressedDestBufferSize;
    uint32 *nUncompressBytesWritten;
};
extern void cppISteamUser_SteamUser013_GetVoice( struct cppISteamUser_SteamUser013_GetVoice_params *params );

struct cppISteamUser_SteamUser013_DecompressVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    const void *pCompressed;
    uint32 cbCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
};
extern void cppISteamUser_SteamUser013_DecompressVoice( struct cppISteamUser_SteamUser013_DecompressVoice_params *params );

struct cppISteamUser_SteamUser013_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser013_GetAuthSessionTicket( struct cppISteamUser_SteamUser013_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser013_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser013_BeginAuthSession( struct cppISteamUser_SteamUser013_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser013_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser013_EndAuthSession( struct cppISteamUser_SteamUser013_EndAuthSession_params *params );

struct cppISteamUser_SteamUser013_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser013_CancelAuthTicket( struct cppISteamUser_SteamUser013_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser013_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser013_UserHasLicenseForApp( struct cppISteamUser_SteamUser013_UserHasLicenseForApp_params *params );

