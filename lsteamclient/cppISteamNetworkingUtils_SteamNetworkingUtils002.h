struct cppISteamNetworkingUtils_SteamNetworkingUtils002;
struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamRelayNetworkStatus_t *pDetails;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation_params
{
    void *linux_side;
    float _ret;
    SteamNetworkPingLocation_t *result;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations_params
{
    void *linux_side;
    int32_t _ret;
    const SteamNetworkPingLocation_t *location1;
    const SteamNetworkPingLocation_t *location2;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost_params
{
    void *linux_side;
    int32_t _ret;
    const SteamNetworkPingLocation_t *remoteLocation;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString_params
{
    void *linux_side;
    const SteamNetworkPingLocation_t *location;
    char *pszBuf;
    int32_t cchBufSize;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString_params
{
    void *linux_side;
    bool _ret;
    const char *pszString;
    SteamNetworkPingLocation_t *result;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate_params
{
    void *linux_side;
    bool _ret;
    float flMaxAgeSeconds;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t popID;
    uint32_t *pViaRelayPoP;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t popID;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t *list;
    int32_t nListSz;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp_params
{
    void *linux_side;
    int64_t _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction_params
{
    void *linux_side;
    uint32_t eDetailLevel;
    void (*W_STDCALL pfnFunc)(uint32_t, const char *);
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t eValue;
    uint32_t eScopeType;
    int32_t scopeObj;
    uint32_t eDataType;
    const void *pArg;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eValue;
    uint32_t eScopeType;
    int32_t scopeObj;
    uint32_t *pOutDataType;
    void *pResult;
    uint32_t *cbResult;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t eValue;
    const char **pOutName;
    uint32_t *pOutDataType;
    uint32_t *pOutScope;
    uint32_t *pOutNextValue;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString_params
{
    void *linux_side;
    const SteamNetworkingIPAddr *addr;
    char *buf;
    uint32_t cbBuf;
    bool bWithPort;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIPAddr *pAddr;
    const char *pszStr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString_params
{
    void *linux_side;
    const SteamNetworkingIdentity *identity;
    char *buf;
    uint32_t cbBuf;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
    const char *pszStr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString_params *params );

