struct cppISteamUser_SteamUser023_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser023_GetHSteamUser( struct cppISteamUser_SteamUser023_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser023_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser023_BLoggedOn( struct cppISteamUser_SteamUser023_BLoggedOn_params *params );

struct cppISteamUser_SteamUser023_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser023_GetSteamID( struct cppISteamUser_SteamUser023_GetSteamID_params *params );

struct cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED_params
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
extern void cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED_params *params );

struct cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED( struct cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED_params *params );

struct cppISteamUser_SteamUser023_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser023_TrackAppUsageEvent( struct cppISteamUser_SteamUser023_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser023_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int cubBuffer;
};
extern void cppISteamUser_SteamUser023_GetUserDataFolder( struct cppISteamUser_SteamUser023_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser023_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser023_StartVoiceRecording( struct cppISteamUser_SteamUser023_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser023_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser023_StopVoiceRecording( struct cppISteamUser_SteamUser023_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser023_GetAvailableVoice_params
{
    void *linux_side;
    uint32_t _ret;
    uint32 *pcbCompressed;
    uint32 *pcbUncompressed_Deprecated;
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated;
};
extern void cppISteamUser_SteamUser023_GetAvailableVoice( struct cppISteamUser_SteamUser023_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser023_GetVoice_params
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
extern void cppISteamUser_SteamUser023_GetVoice( struct cppISteamUser_SteamUser023_GetVoice_params *params );

struct cppISteamUser_SteamUser023_DecompressVoice_params
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
extern void cppISteamUser_SteamUser023_DecompressVoice( struct cppISteamUser_SteamUser023_DecompressVoice_params *params );

struct cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser023_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
    const SteamNetworkingIdentity *pSteamNetworkingIdentity;
};
extern void cppISteamUser_SteamUser023_GetAuthSessionTicket( struct cppISteamUser_SteamUser023_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser023_GetAuthTicketForWebApi_params
{
    void *linux_side;
    HAuthTicket _ret;
    const char *pchIdentity;
};
extern void cppISteamUser_SteamUser023_GetAuthTicketForWebApi( struct cppISteamUser_SteamUser023_GetAuthTicketForWebApi_params *params );

struct cppISteamUser_SteamUser023_BeginAuthSession_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser023_BeginAuthSession( struct cppISteamUser_SteamUser023_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser023_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser023_EndAuthSession( struct cppISteamUser_SteamUser023_EndAuthSession_params *params );

struct cppISteamUser_SteamUser023_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser023_CancelAuthTicket( struct cppISteamUser_SteamUser023_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser023_UserHasLicenseForApp_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser023_UserHasLicenseForApp( struct cppISteamUser_SteamUser023_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser023_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser023_BIsBehindNAT( struct cppISteamUser_SteamUser023_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser023_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser023_AdvertiseGame( struct cppISteamUser_SteamUser023_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser023_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int cbDataToInclude;
};
extern void cppISteamUser_SteamUser023_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser023_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser023_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
};
extern void cppISteamUser_SteamUser023_GetEncryptedAppTicket( struct cppISteamUser_SteamUser023_GetEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser023_GetGameBadgeLevel_params
{
    void *linux_side;
    int _ret;
    int nSeries;
    bool bFoil;
};
extern void cppISteamUser_SteamUser023_GetGameBadgeLevel( struct cppISteamUser_SteamUser023_GetGameBadgeLevel_params *params );

struct cppISteamUser_SteamUser023_GetPlayerSteamLevel_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamUser_SteamUser023_GetPlayerSteamLevel( struct cppISteamUser_SteamUser023_GetPlayerSteamLevel_params *params );

struct cppISteamUser_SteamUser023_RequestStoreAuthURL_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchRedirectURL;
};
extern void cppISteamUser_SteamUser023_RequestStoreAuthURL( struct cppISteamUser_SteamUser023_RequestStoreAuthURL_params *params );

struct cppISteamUser_SteamUser023_BIsPhoneVerified_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser023_BIsPhoneVerified( struct cppISteamUser_SteamUser023_BIsPhoneVerified_params *params );

struct cppISteamUser_SteamUser023_BIsTwoFactorEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser023_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser023_BIsTwoFactorEnabled_params *params );

struct cppISteamUser_SteamUser023_BIsPhoneIdentifying_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser023_BIsPhoneIdentifying( struct cppISteamUser_SteamUser023_BIsPhoneIdentifying_params *params );

struct cppISteamUser_SteamUser023_BIsPhoneRequiringVerification_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser023_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser023_BIsPhoneRequiringVerification_params *params );

struct cppISteamUser_SteamUser023_GetMarketEligibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUser_SteamUser023_GetMarketEligibility( struct cppISteamUser_SteamUser023_GetMarketEligibility_params *params );

struct cppISteamUser_SteamUser023_GetDurationControl_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUser_SteamUser023_GetDurationControl( struct cppISteamUser_SteamUser023_GetDurationControl_params *params );

struct cppISteamUser_SteamUser023_BSetDurationControlOnlineState_params
{
    void *linux_side;
    bool _ret;
    uint32_t eNewState;
};
extern void cppISteamUser_SteamUser023_BSetDurationControlOnlineState( struct cppISteamUser_SteamUser023_BSetDurationControlOnlineState_params *params );

