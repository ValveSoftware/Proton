struct cppISteamUser_SteamUser019_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser019_GetHSteamUser( struct cppISteamUser_SteamUser019_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser019_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser019_BLoggedOn( struct cppISteamUser_SteamUser019_BLoggedOn_params *params );

struct cppISteamUser_SteamUser019_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser019_GetSteamID( struct cppISteamUser_SteamUser019_GetSteamID_params *params );

struct cppISteamUser_SteamUser019_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser019_InitiateGameConnection( struct cppISteamUser_SteamUser019_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser019_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser019_TerminateGameConnection( struct cppISteamUser_SteamUser019_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser019_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser019_TrackAppUsageEvent( struct cppISteamUser_SteamUser019_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser019_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser019_GetUserDataFolder( struct cppISteamUser_SteamUser019_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser019_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser019_StartVoiceRecording( struct cppISteamUser_SteamUser019_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser019_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser019_StopVoiceRecording( struct cppISteamUser_SteamUser019_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser019_GetAvailableVoice_params
{
    void *linux_side;
    uint32_t _ret;
    uint32 *pcbCompressed;
    uint32 *pcbUncompressed_Deprecated;
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser019_GetAvailableVoice( struct cppISteamUser_SteamUser019_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser019_GetVoice_params
{
    void *linux_side;
    uint32_t _ret;
    bool bWantCompressed;
    void *pDestBuffer;
    uint32 cbDestBufferSize;
    uint32 *nBytesWritten;
    bool bWantUncompressed_Deprecated;
    void *pUncompressedDestBuffer_Deprecated;
    uint32 cbUncompressedDestBufferSize_Deprecated;
    uint32 *nUncompressBytesWritten_Deprecated;
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser019_GetVoice( struct cppISteamUser_SteamUser019_GetVoice_params *params );

struct cppISteamUser_SteamUser019_DecompressVoice_params
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
extern void cppISteamUser_SteamUser019_DecompressVoice( struct cppISteamUser_SteamUser019_DecompressVoice_params *params );

struct cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser019_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser019_GetAuthSessionTicket( struct cppISteamUser_SteamUser019_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser019_BeginAuthSession_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser019_BeginAuthSession( struct cppISteamUser_SteamUser019_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser019_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser019_EndAuthSession( struct cppISteamUser_SteamUser019_EndAuthSession_params *params );

struct cppISteamUser_SteamUser019_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser019_CancelAuthTicket( struct cppISteamUser_SteamUser019_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser019_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser019_UserHasLicenseForApp( struct cppISteamUser_SteamUser019_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser019_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser019_BIsBehindNAT( struct cppISteamUser_SteamUser019_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser019_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser019_AdvertiseGame( struct cppISteamUser_SteamUser019_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser019_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int cbDataToInclude;
};
extern void cppISteamUser_SteamUser019_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser019_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser019_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser019_GetEncryptedAppTicket( struct cppISteamUser_SteamUser019_GetEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser019_GetGameBadgeLevel_params
{
    void *linux_side;
    int _ret;
    int nSeries;
    bool bFoil;
};
extern void cppISteamUser_SteamUser019_GetGameBadgeLevel( struct cppISteamUser_SteamUser019_GetGameBadgeLevel_params *params );

struct cppISteamUser_SteamUser019_GetPlayerSteamLevel_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamUser_SteamUser019_GetPlayerSteamLevel( struct cppISteamUser_SteamUser019_GetPlayerSteamLevel_params *params );

struct cppISteamUser_SteamUser019_RequestStoreAuthURL_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchRedirectURL;
};
extern void cppISteamUser_SteamUser019_RequestStoreAuthURL( struct cppISteamUser_SteamUser019_RequestStoreAuthURL_params *params );

struct cppISteamUser_SteamUser019_BIsPhoneVerified_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser019_BIsPhoneVerified( struct cppISteamUser_SteamUser019_BIsPhoneVerified_params *params );

struct cppISteamUser_SteamUser019_BIsTwoFactorEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser019_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser019_BIsTwoFactorEnabled_params *params );

struct cppISteamUser_SteamUser019_BIsPhoneIdentifying_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser019_BIsPhoneIdentifying( struct cppISteamUser_SteamUser019_BIsPhoneIdentifying_params *params );

struct cppISteamUser_SteamUser019_BIsPhoneRequiringVerification_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser019_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser019_BIsPhoneRequiringVerification_params *params );

