struct cppISteamUser_SteamUser015_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser015_GetHSteamUser( struct cppISteamUser_SteamUser015_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser015_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser015_BLoggedOn( struct cppISteamUser_SteamUser015_BLoggedOn_params *params );

struct cppISteamUser_SteamUser015_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser015_GetSteamID( struct cppISteamUser_SteamUser015_GetSteamID_params *params );

struct cppISteamUser_SteamUser015_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser015_InitiateGameConnection( struct cppISteamUser_SteamUser015_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser015_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser015_TerminateGameConnection( struct cppISteamUser_SteamUser015_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser015_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser015_TrackAppUsageEvent( struct cppISteamUser_SteamUser015_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser015_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser015_GetUserDataFolder( struct cppISteamUser_SteamUser015_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser015_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser015_StartVoiceRecording( struct cppISteamUser_SteamUser015_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser015_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser015_StopVoiceRecording( struct cppISteamUser_SteamUser015_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser015_GetAvailableVoice_params
{
    void *linux_side;
    uint32_t _ret;
    uint32 *pcbCompressed;
    uint32 *pcbUncompressed;
};
extern void cppISteamUser_SteamUser015_GetAvailableVoice( struct cppISteamUser_SteamUser015_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser015_GetVoice_params
{
    void *linux_side;
    uint32_t _ret;
    bool bWantCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    bool bWantUncompressed;
    void *pUncompressedDestBuffer;
    uint32 cbUncompressedDestBufferSize;
    uint32 *nUncompressBytesWritten;
};
extern void cppISteamUser_SteamUser015_GetVoice( struct cppISteamUser_SteamUser015_GetVoice_params *params );

struct cppISteamUser_SteamUser015_DecompressVoice_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pCompressed;
    uint32 cbCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    uint32 nDesiredSampleRate;
};
extern void cppISteamUser_SteamUser015_DecompressVoice( struct cppISteamUser_SteamUser015_DecompressVoice_params *params );

struct cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser015_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser015_GetAuthSessionTicket( struct cppISteamUser_SteamUser015_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser015_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser015_BeginAuthSession( struct cppISteamUser_SteamUser015_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser015_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser015_EndAuthSession( struct cppISteamUser_SteamUser015_EndAuthSession_params *params );

struct cppISteamUser_SteamUser015_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser015_CancelAuthTicket( struct cppISteamUser_SteamUser015_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser015_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser015_UserHasLicenseForApp( struct cppISteamUser_SteamUser015_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser015_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser015_BIsBehindNAT( struct cppISteamUser_SteamUser015_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser015_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser015_AdvertiseGame( struct cppISteamUser_SteamUser015_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser015_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int cbDataToInclude;
};
extern void cppISteamUser_SteamUser015_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser015_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser015_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser015_GetEncryptedAppTicket( struct cppISteamUser_SteamUser015_GetEncryptedAppTicket_params *params );

