struct cppISteamUser_SteamUser018_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser018_GetHSteamUser( struct cppISteamUser_SteamUser018_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser018_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser018_BLoggedOn( struct cppISteamUser_SteamUser018_BLoggedOn_params *params );

struct cppISteamUser_SteamUser018_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser018_GetSteamID( struct cppISteamUser_SteamUser018_GetSteamID_params *params );

struct cppISteamUser_SteamUser018_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser018_InitiateGameConnection( struct cppISteamUser_SteamUser018_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser018_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser018_TerminateGameConnection( struct cppISteamUser_SteamUser018_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser018_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser018_TrackAppUsageEvent( struct cppISteamUser_SteamUser018_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser018_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser018_GetUserDataFolder( struct cppISteamUser_SteamUser018_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser018_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser018_StartVoiceRecording( struct cppISteamUser_SteamUser018_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser018_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser018_StopVoiceRecording( struct cppISteamUser_SteamUser018_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser018_GetAvailableVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    uint32 *pcbCompressed;
    uint32 *pcbUncompressed;
    uint32 nUncompressedVoiceDesiredSampleRate;
};
extern void cppISteamUser_SteamUser018_GetAvailableVoice( struct cppISteamUser_SteamUser018_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser018_GetVoice_params
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
    uint32 nUncompressedVoiceDesiredSampleRate;
};
extern void cppISteamUser_SteamUser018_GetVoice( struct cppISteamUser_SteamUser018_GetVoice_params *params );

struct cppISteamUser_SteamUser018_DecompressVoice_params
{
    void *linux_side;
    EVoiceResult _ret;
    const void *pCompressed;
    uint32 cbCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    uint32 nDesiredSampleRate;
};
extern void cppISteamUser_SteamUser018_DecompressVoice( struct cppISteamUser_SteamUser018_DecompressVoice_params *params );

struct cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser018_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser018_GetAuthSessionTicket( struct cppISteamUser_SteamUser018_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser018_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser018_BeginAuthSession( struct cppISteamUser_SteamUser018_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser018_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser018_EndAuthSession( struct cppISteamUser_SteamUser018_EndAuthSession_params *params );

struct cppISteamUser_SteamUser018_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser018_CancelAuthTicket( struct cppISteamUser_SteamUser018_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser018_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser018_UserHasLicenseForApp( struct cppISteamUser_SteamUser018_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser018_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser018_BIsBehindNAT( struct cppISteamUser_SteamUser018_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser018_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser018_AdvertiseGame( struct cppISteamUser_SteamUser018_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser018_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int cbDataToInclude;
};
extern void cppISteamUser_SteamUser018_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser018_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser018_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser018_GetEncryptedAppTicket( struct cppISteamUser_SteamUser018_GetEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser018_GetGameBadgeLevel_params
{
    void *linux_side;
    int _ret;
    int nSeries;
    bool bFoil;
};
extern void cppISteamUser_SteamUser018_GetGameBadgeLevel( struct cppISteamUser_SteamUser018_GetGameBadgeLevel_params *params );

struct cppISteamUser_SteamUser018_GetPlayerSteamLevel_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamUser_SteamUser018_GetPlayerSteamLevel( struct cppISteamUser_SteamUser018_GetPlayerSteamLevel_params *params );

struct cppISteamUser_SteamUser018_RequestStoreAuthURL_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchRedirectURL;
};
extern void cppISteamUser_SteamUser018_RequestStoreAuthURL( struct cppISteamUser_SteamUser018_RequestStoreAuthURL_params *params );

