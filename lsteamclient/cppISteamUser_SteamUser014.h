struct cppISteamUser_SteamUser014_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser014_GetHSteamUser( struct cppISteamUser_SteamUser014_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser014_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser014_BLoggedOn( struct cppISteamUser_SteamUser014_BLoggedOn_params *params );

struct cppISteamUser_SteamUser014_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser014_GetSteamID( struct cppISteamUser_SteamUser014_GetSteamID_params *params );

struct cppISteamUser_SteamUser014_InitiateGameConnection_params
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
extern void cppISteamUser_SteamUser014_InitiateGameConnection( struct cppISteamUser_SteamUser014_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser014_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser014_TerminateGameConnection( struct cppISteamUser_SteamUser014_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser014_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser014_TrackAppUsageEvent( struct cppISteamUser_SteamUser014_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser014_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int32_t cubBuffer;
};
extern void cppISteamUser_SteamUser014_GetUserDataFolder( struct cppISteamUser_SteamUser014_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser014_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser014_StartVoiceRecording( struct cppISteamUser_SteamUser014_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser014_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser014_StopVoiceRecording( struct cppISteamUser_SteamUser014_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser014_GetAvailableVoice_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pcbCompressed;
    uint32_t *pcbUncompressed;
};
extern void cppISteamUser_SteamUser014_GetAvailableVoice( struct cppISteamUser_SteamUser014_GetAvailableVoice_params *params );

struct cppISteamUser_SteamUser014_GetVoice_params
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
extern void cppISteamUser_SteamUser014_GetVoice( struct cppISteamUser_SteamUser014_GetVoice_params *params );

struct cppISteamUser_SteamUser014_DecompressVoice_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pCompressed;
    uint32_t cbCompressed;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
};
extern void cppISteamUser_SteamUser014_DecompressVoice( struct cppISteamUser_SteamUser014_DecompressVoice_params *params );

struct cppISteamUser_SteamUser014_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser014_GetAuthSessionTicket( struct cppISteamUser_SteamUser014_GetAuthSessionTicket_params *params );

struct cppISteamUser_SteamUser014_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int32_t cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser014_BeginAuthSession( struct cppISteamUser_SteamUser014_BeginAuthSession_params *params );

struct cppISteamUser_SteamUser014_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser014_EndAuthSession( struct cppISteamUser_SteamUser014_EndAuthSession_params *params );

struct cppISteamUser_SteamUser014_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamUser_SteamUser014_CancelAuthTicket( struct cppISteamUser_SteamUser014_CancelAuthTicket_params *params );

struct cppISteamUser_SteamUser014_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamUser_SteamUser014_UserHasLicenseForApp( struct cppISteamUser_SteamUser014_UserHasLicenseForApp_params *params );

struct cppISteamUser_SteamUser014_BIsBehindNAT_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser014_BIsBehindNAT( struct cppISteamUser_SteamUser014_BIsBehindNAT_params *params );

struct cppISteamUser_SteamUser014_AdvertiseGame_params
{
    void *linux_side;
    CSteamID steamIDGameServer;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser014_AdvertiseGame( struct cppISteamUser_SteamUser014_AdvertiseGame_params *params );

struct cppISteamUser_SteamUser014_RequestEncryptedAppTicket_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    void *pDataToInclude;
    int32_t cbDataToInclude;
};
extern void cppISteamUser_SteamUser014_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser014_RequestEncryptedAppTicket_params *params );

struct cppISteamUser_SteamUser014_GetEncryptedAppTicket_params
{
    void *linux_side;
    bool _ret;
    void *pTicket;
    int32_t cbMaxTicket;
    uint32_t *pcbTicket;
};
extern void cppISteamUser_SteamUser014_GetEncryptedAppTicket( struct cppISteamUser_SteamUser014_GetEncryptedAppTicket_params *params );

