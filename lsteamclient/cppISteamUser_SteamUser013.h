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
    int32_t _ret;
    void *pAuthBlob;
    int32_t cbMaxAuthBlob;
    CSteamID steamIDGameServer;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser013_InitiateGameConnection( struct cppISteamUser_SteamUser013_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser013_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser013_TerminateGameConnection( struct cppISteamUser_SteamUser013_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser013_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser013_TrackAppUsageEvent( struct cppISteamUser_SteamUser013_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser013_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int32_t cubBuffer;
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
    uint32_t _ret;
    uint32_t *pcbCompressed;
    uint32_t *pcbUncompressed;
};
extern void cppISteamUser_SteamUser013_GetAvailableVoice( struct cppISteamUser_SteamUser013_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser013_GetVoice_params
{
    void *linux_side;
    uint32_t _ret;
    bool bWantCompressed;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
    bool bWantUncompressed;
    void *pUncompressedDestBuffer;
    uint32_t cbUncompressedDestBufferSize;
    uint32_t *nUncompressBytesWritten;
};
extern void cppISteamUser_SteamUser013_GetVoice( struct cppISteamUser_SteamUser013_GetVoice_params *params );

struct cppISteamUser_SteamUser013_DecompressVoice_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pCompressed;
    uint32_t cbCompressed;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
};
extern void cppISteamUser_SteamUser013_DecompressVoice( struct cppISteamUser_SteamUser013_DecompressVoice_params *params );

struct cppISteamUser_SteamUser013_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser013_GetAuthSessionTicket( struct cppISteamUser_SteamUser013_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser013_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int32_t cbAuthTicket;
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

