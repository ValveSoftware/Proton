struct cppISteamUser_SteamUser020;
struct cppISteamUser_SteamUser020_GetHSteamUser_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamUser_SteamUser020_GetHSteamUser( struct cppISteamUser_SteamUser020_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser020_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser020_BLoggedOn( struct cppISteamUser_SteamUser020_BLoggedOn_params *params );

struct cppISteamUser_SteamUser020_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser020_GetSteamID( struct cppISteamUser_SteamUser020_GetSteamID_params *params );

struct cppISteamUser_SteamUser020_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser020_InitiateGameConnection( struct cppISteamUser_SteamUser020_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser020_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser020_TerminateGameConnection( struct cppISteamUser_SteamUser020_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser020_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser020_TrackAppUsageEvent( struct cppISteamUser_SteamUser020_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser020_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int32_t cubBuffer;
};
extern void cppISteamUser_SteamUser020_GetUserDataFolder( struct cppISteamUser_SteamUser020_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser020_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser020_StartVoiceRecording( struct cppISteamUser_SteamUser020_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser020_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser020_StopVoiceRecording( struct cppISteamUser_SteamUser020_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser020_GetAvailableVoice_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pcbCompressed;
    uint32_t *pcbUncompressed_Deprecated;
    uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser020_GetAvailableVoice( struct cppISteamUser_SteamUser020_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser020_GetVoice_params
{
    void *linux_side;
    uint32_t _ret;
    bool bWantCompressed;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
    bool bWantUncompressed_Deprecated;
    void *pUncompressedDestBuffer_Deprecated;
    uint32_t cbUncompressedDestBufferSize_Deprecated;
    uint32_t *nUncompressBytesWritten_Deprecated;
    uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser020_GetVoice( struct cppISteamUser_SteamUser020_GetVoice_params *params );

struct cppISteamUser_SteamUser020_DecompressVoice_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pCompressed;
    uint32_t cbCompressed;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
    uint32_t nDesiredSampleRate;
};
extern void cppISteamUser_SteamUser020_DecompressVoice( struct cppISteamUser_SteamUser020_DecompressVoice_params *params );

struct cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser020_GetAuthSessionTicket_params
{
    void *linux_side;
    uint32_t _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser020_GetAuthSessionTicket( struct cppISteamUser_SteamUser020_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser020_BeginAuthSession_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pAuthTicket;
    int32_t cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser020_BeginAuthSession( struct cppISteamUser_SteamUser020_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser020_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser020_EndAuthSession( struct cppISteamUser_SteamUser020_EndAuthSession_params *params );

struct cppISteamUser_SteamUser020_CancelAuthTicket_params
{
    void *linux_side;
    uint32_t hAuthTicket;
};
extern void cppISteamUser_SteamUser020_CancelAuthTicket( struct cppISteamUser_SteamUser020_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser020_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    uint32_t appID;
};
extern void cppISteamUser_SteamUser020_UserHasLicenseForApp( struct cppISteamUser_SteamUser020_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser020_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser020_BIsBehindNAT( struct cppISteamUser_SteamUser020_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser020_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser020_AdvertiseGame( struct cppISteamUser_SteamUser020_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser020_RequestEncryptedAppTicket_params
{
    void *linux_side;
    uint64_t _ret;
    void *pDataToInclude;
    int32_t cbDataToInclude;
};
extern void cppISteamUser_SteamUser020_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser020_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser020_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser020_GetEncryptedAppTicket( struct cppISteamUser_SteamUser020_GetEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser020_GetGameBadgeLevel_params
{
    void *linux_side;
    int32_t _ret;
    int32_t nSeries;
    bool bFoil;
};
extern void cppISteamUser_SteamUser020_GetGameBadgeLevel( struct cppISteamUser_SteamUser020_GetGameBadgeLevel_params *params );

struct cppISteamUser_SteamUser020_GetPlayerSteamLevel_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamUser_SteamUser020_GetPlayerSteamLevel( struct cppISteamUser_SteamUser020_GetPlayerSteamLevel_params *params );

struct cppISteamUser_SteamUser020_RequestStoreAuthURL_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRedirectURL;
};
extern void cppISteamUser_SteamUser020_RequestStoreAuthURL( struct cppISteamUser_SteamUser020_RequestStoreAuthURL_params *params );

struct cppISteamUser_SteamUser020_BIsPhoneVerified_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser020_BIsPhoneVerified( struct cppISteamUser_SteamUser020_BIsPhoneVerified_params *params );

struct cppISteamUser_SteamUser020_BIsTwoFactorEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser020_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser020_BIsTwoFactorEnabled_params *params );

struct cppISteamUser_SteamUser020_BIsPhoneIdentifying_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser020_BIsPhoneIdentifying( struct cppISteamUser_SteamUser020_BIsPhoneIdentifying_params *params );

struct cppISteamUser_SteamUser020_BIsPhoneRequiringVerification_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser020_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser020_BIsPhoneRequiringVerification_params *params );

struct cppISteamUser_SteamUser020_GetMarketEligibility_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUser_SteamUser020_GetMarketEligibility( struct cppISteamUser_SteamUser020_GetMarketEligibility_params *params );

struct cppISteamUser_SteamUser020_GetDurationControl_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUser_SteamUser020_GetDurationControl( struct cppISteamUser_SteamUser020_GetDurationControl_params *params );

