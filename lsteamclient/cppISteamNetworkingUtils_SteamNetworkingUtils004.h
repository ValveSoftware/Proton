struct cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params
{
    void *linux_side;
    winSteamNetworkingMessage_t_158 *_ret;
    int cbAllocateBuffer;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamRelayNetworkStatus_t *pDetails;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation_params
{
    void *linux_side;
    float _ret;
    SteamNetworkPingLocation_t *result;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkPingLocation_t *location1;
    const SteamNetworkPingLocation_t *location2;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkPingLocation_t *remoteLocation;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString_params
{
    void *linux_side;
    const SteamNetworkPingLocation_t *location;
    char *pszBuf;
    int cchBufSize;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString_params
{
    void *linux_side;
    bool _ret;
    const char *pszString;
    SteamNetworkPingLocation_t *result;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate_params
{
    void *linux_side;
    bool _ret;
    float flMaxAgeSeconds;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter_params
{
    void *linux_side;
    int _ret;
    SteamNetworkingPOPID popID;
    SteamNetworkingPOPID *pViaRelayPoP;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP_params
{
    void *linux_side;
    int _ret;
    SteamNetworkingPOPID popID;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList_params
{
    void *linux_side;
    int _ret;
    SteamNetworkingPOPID *list;
    int nListSz;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp_params
{
    void *linux_side;
    SteamNetworkingMicroseconds _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction_params
{
    void *linux_side;
    uint32_t eDetailLevel;
    FSteamNetworkingSocketsDebugOutput pfnFunc;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType_params
{
    void *linux_side;
    uint32_t _ret;
    uint32 nIPv4;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *fakeIP;
    SteamNetworkingIdentity *pOutRealIdentity;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t eValue;
    uint32_t eScopeType;
    intptr_t scopeObj;
    uint32_t eDataType;
    const void *pArg;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eValue;
    uint32_t eScopeType;
    intptr_t scopeObj;
    uint32_t *pOutDataType;
    void *pResult;
    size_t *cbResult;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eValue;
    uint32_t *pOutDataType;
    uint32_t *pOutScope;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eCurrent;
    bool bEnumerateDevVars;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString_params
{
    void *linux_side;
    const SteamNetworkingIPAddr *addr;
    char *buf;
    size_t cbBuf;
    bool bWithPort;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIPAddr *pAddr;
    const char *pszStr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *addr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString_params
{
    void *linux_side;
    const SteamNetworkingIdentity *identity;
    char *buf;
    size_t cbBuf;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
    const char *pszStr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString_params *params );

