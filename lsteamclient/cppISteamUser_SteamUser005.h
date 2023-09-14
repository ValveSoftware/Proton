struct cppISteamUser_SteamUser005_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser005_GetHSteamUser( struct cppISteamUser_SteamUser005_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser005_LogOn_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser005_LogOn( struct cppISteamUser_SteamUser005_LogOn_params *params );

struct cppISteamUser_SteamUser005_LogOff_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser005_LogOff( struct cppISteamUser_SteamUser005_LogOff_params *params );

struct cppISteamUser_SteamUser005_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser005_BLoggedOn( struct cppISteamUser_SteamUser005_BLoggedOn_params *params );

struct cppISteamUser_SteamUser005_GetLogonState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUser_SteamUser005_GetLogonState( struct cppISteamUser_SteamUser005_GetLogonState_params *params );

struct cppISteamUser_SteamUser005_BConnected_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser005_BConnected( struct cppISteamUser_SteamUser005_BConnected_params *params );

struct cppISteamUser_SteamUser005_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser005_GetSteamID( struct cppISteamUser_SteamUser005_GetSteamID_params *params );

struct cppISteamUser_SteamUser005_IsVACBanned_params
{
    void *linux_side;
    bool _ret;
    int32_t nGameID;
};
extern void cppISteamUser_SteamUser005_IsVACBanned( struct cppISteamUser_SteamUser005_IsVACBanned_params *params );

struct cppISteamUser_SteamUser005_RequireShowVACBannedMessage_params
{
    void *linux_side;
    bool _ret;
    int32_t nAppID;
};
extern void cppISteamUser_SteamUser005_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser005_RequireShowVACBannedMessage_params *params );

struct cppISteamUser_SteamUser005_AcknowledgeVACBanning_params
{
    void *linux_side;
    int32_t nAppID;
};
extern void cppISteamUser_SteamUser005_AcknowledgeVACBanning( struct cppISteamUser_SteamUser005_AcknowledgeVACBanning_params *params );

struct cppISteamUser_SteamUser005_SetSteam2Ticket_params
{
    void *linux_side;
    uint8_t *pubTicket;
    int32_t cubTicket;
};
extern void cppISteamUser_SteamUser005_SetSteam2Ticket( struct cppISteamUser_SteamUser005_SetSteam2Ticket_params *params );

struct cppISteamUser_SteamUser005_AddServerNetAddress_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t unPort;
};
extern void cppISteamUser_SteamUser005_AddServerNetAddress( struct cppISteamUser_SteamUser005_AddServerNetAddress_params *params );

struct cppISteamUser_SteamUser005_SetEmail_params
{
    void *linux_side;
    bool _ret;
    const char *pchEmail;
};
extern void cppISteamUser_SteamUser005_SetEmail( struct cppISteamUser_SteamUser005_SetEmail_params *params );

struct cppISteamUser_SteamUser005_SetRegistryString_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUser_SteamUser005_SetRegistryString( struct cppISteamUser_SteamUser005_SetRegistryString_params *params );

struct cppISteamUser_SteamUser005_GetRegistryString_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    char *pchValue;
    int32_t cbValue;
};
extern void cppISteamUser_SteamUser005_GetRegistryString( struct cppISteamUser_SteamUser005_GetRegistryString_params *params );

struct cppISteamUser_SteamUser005_SetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    int32_t iValue;
};
extern void cppISteamUser_SteamUser005_SetRegistryInt( struct cppISteamUser_SteamUser005_SetRegistryInt_params *params );

struct cppISteamUser_SteamUser005_GetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    int32_t *piValue;
};
extern void cppISteamUser_SteamUser005_GetRegistryInt( struct cppISteamUser_SteamUser005_GetRegistryInt_params *params );

struct cppISteamUser_SteamUser005_InitiateGameConnection_params
{
    void *linux_side;
    int32_t _ret;
    void *pBlob;
    int32_t cbMaxBlob;
    CSteamID steamID;
    CGameID gameID;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser005_InitiateGameConnection( struct cppISteamUser_SteamUser005_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser005_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser005_TerminateGameConnection( struct cppISteamUser_SteamUser005_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params *params );

struct cppISteamUser_SteamUser005_IsPrimaryChatDestination_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser005_IsPrimaryChatDestination( struct cppISteamUser_SteamUser005_IsPrimaryChatDestination_params *params );

struct cppISteamUser_SteamUser005_RequestLegacyCDKey_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamUser_SteamUser005_RequestLegacyCDKey( struct cppISteamUser_SteamUser005_RequestLegacyCDKey_params *params );

struct cppISteamUser_SteamUser005_SendGuestPassByEmail_params
{
    void *linux_side;
    bool _ret;
    const char *pchEmailAccount;
    GID_t gidGuestPassID;
    bool bResending;
};
extern void cppISteamUser_SteamUser005_SendGuestPassByEmail( struct cppISteamUser_SteamUser005_SendGuestPassByEmail_params *params );

struct cppISteamUser_SteamUser005_SendGuestPassByAccountID_params
{
    void *linux_side;
    bool _ret;
    uint32_t uAccountID;
    GID_t gidGuestPassID;
    bool bResending;
};
extern void cppISteamUser_SteamUser005_SendGuestPassByAccountID( struct cppISteamUser_SteamUser005_SendGuestPassByAccountID_params *params );

struct cppISteamUser_SteamUser005_AckGuestPass_params
{
    void *linux_side;
    bool _ret;
    const char *pchGuestPassCode;
};
extern void cppISteamUser_SteamUser005_AckGuestPass( struct cppISteamUser_SteamUser005_AckGuestPass_params *params );

struct cppISteamUser_SteamUser005_RedeemGuestPass_params
{
    void *linux_side;
    bool _ret;
    const char *pchGuestPassCode;
};
extern void cppISteamUser_SteamUser005_RedeemGuestPass( struct cppISteamUser_SteamUser005_RedeemGuestPass_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassToGiveCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUser_SteamUser005_GetGuestPassToGiveCount( struct cppISteamUser_SteamUser005_GetGuestPassToGiveCount_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassToRedeemCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUser_SteamUser005_GetGuestPassToRedeemCount( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemCount_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params
{
    void *linux_side;
    RTime32 _ret;
};
extern void cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime( struct cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassToGiveInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t nPassIndex;
    GID_t *pgidGuestPassID;
    PackageId_t *pnPackageID;
    RTime32 *pRTime32Created;
    RTime32 *pRTime32Expiration;
    RTime32 *pRTime32Sent;
    RTime32 *pRTime32Redeemed;
    char *pchRecipientAddress;
    int32_t cRecipientAddressSize;
};
extern void cppISteamUser_SteamUser005_GetGuestPassToGiveInfo( struct cppISteamUser_SteamUser005_GetGuestPassToGiveInfo_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t nPassIndex;
    GID_t *pgidGuestPassID;
    PackageId_t *pnPackageID;
    RTime32 *pRTime32Created;
    RTime32 *pRTime32Expiration;
    RTime32 *pRTime32Sent;
    RTime32 *pRTime32Redeemed;
};
extern void cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params
{
    void *linux_side;
    bool _ret;
    uint32_t nPassIndex;
    char *pchSenderAddress;
    int32_t cSenderAddressSize;
};
extern void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params *params );

struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params
{
    void *linux_side;
    bool _ret;
    uint32_t nPassIndex;
    char *pchSenderName;
    int32_t cSenderNameSize;
};
extern void cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName( struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params *params );

struct cppISteamUser_SteamUser005_AcknowledgeMessageByGID_params
{
    void *linux_side;
    const char *pchMessageGID;
};
extern void cppISteamUser_SteamUser005_AcknowledgeMessageByGID( struct cppISteamUser_SteamUser005_AcknowledgeMessageByGID_params *params );

struct cppISteamUser_SteamUser005_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    const char *pchLanguage;
};
extern void cppISteamUser_SteamUser005_SetLanguage( struct cppISteamUser_SteamUser005_SetLanguage_params *params );

struct cppISteamUser_SteamUser005_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser005_TrackAppUsageEvent( struct cppISteamUser_SteamUser005_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser005_SetAccountName_params
{
    void *linux_side;
    const char *pchAccountName;
};
extern void cppISteamUser_SteamUser005_SetAccountName( struct cppISteamUser_SteamUser005_SetAccountName_params *params );

struct cppISteamUser_SteamUser005_SetPassword_params
{
    void *linux_side;
    const char *pchPassword;
};
extern void cppISteamUser_SteamUser005_SetPassword( struct cppISteamUser_SteamUser005_SetPassword_params *params );

struct cppISteamUser_SteamUser005_SetAccountCreationTime_params
{
    void *linux_side;
    RTime32 rt;
};
extern void cppISteamUser_SteamUser005_SetAccountCreationTime( struct cppISteamUser_SteamUser005_SetAccountCreationTime_params *params );

