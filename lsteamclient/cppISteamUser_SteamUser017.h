struct cppISteamUser_SteamUser017_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser017_GetHSteamUser( struct cppISteamUser_SteamUser017_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser017_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser017_BLoggedOn( struct cppISteamUser_SteamUser017_BLoggedOn_params *params );

struct cppISteamUser_SteamUser017_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser017_GetSteamID( struct cppISteamUser_SteamUser017_GetSteamID_params *params );

struct cppISteamUser_SteamUser017_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser017_InitiateGameConnection( struct cppISteamUser_SteamUser017_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser017_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser017_TerminateGameConnection( struct cppISteamUser_SteamUser017_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser017_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser017_TrackAppUsageEvent( struct cppISteamUser_SteamUser017_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser017_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int32_t cubBuffer;
};
extern void cppISteamUser_SteamUser017_GetUserDataFolder( struct cppISteamUser_SteamUser017_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser017_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser017_StartVoiceRecording( struct cppISteamUser_SteamUser017_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser017_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser017_StopVoiceRecording( struct cppISteamUser_SteamUser017_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser017_GetAvailableVoice_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pcbCompressed;
    uint32_t *pcbUncompressed;
    uint32_t nUncompressedVoiceDesiredSampleRate;
};
extern void cppISteamUser_SteamUser017_GetAvailableVoice( struct cppISteamUser_SteamUser017_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser017_GetVoice_params
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
    uint32_t nUncompressedVoiceDesiredSampleRate;
};
extern void cppISteamUser_SteamUser017_GetVoice( struct cppISteamUser_SteamUser017_GetVoice_params *params );

struct cppISteamUser_SteamUser017_DecompressVoice_params
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
extern void cppISteamUser_SteamUser017_DecompressVoice( struct cppISteamUser_SteamUser017_DecompressVoice_params *params );

struct cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate_params *params );

struct cppISteamUser_SteamUser017_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser017_GetAuthSessionTicket( struct cppISteamUser_SteamUser017_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser017_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int32_t cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser017_BeginAuthSession( struct cppISteamUser_SteamUser017_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser017_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser017_EndAuthSession( struct cppISteamUser_SteamUser017_EndAuthSession_params *params );

struct cppISteamUser_SteamUser017_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser017_CancelAuthTicket( struct cppISteamUser_SteamUser017_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser017_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser017_UserHasLicenseForApp( struct cppISteamUser_SteamUser017_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser017_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser017_BIsBehindNAT( struct cppISteamUser_SteamUser017_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser017_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser017_AdvertiseGame( struct cppISteamUser_SteamUser017_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser017_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int32_t cbDataToInclude;
};
extern void cppISteamUser_SteamUser017_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser017_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser017_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser017_GetEncryptedAppTicket( struct cppISteamUser_SteamUser017_GetEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser017_GetGameBadgeLevel_params
{
    void *linux_side;
    int32_t _ret;
    int32_t nSeries;
    bool bFoil;
};
extern void cppISteamUser_SteamUser017_GetGameBadgeLevel( struct cppISteamUser_SteamUser017_GetGameBadgeLevel_params *params );

struct cppISteamUser_SteamUser017_GetPlayerSteamLevel_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamUser_SteamUser017_GetPlayerSteamLevel( struct cppISteamUser_SteamUser017_GetPlayerSteamLevel_params *params );

