struct cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params
{
    void *linux_side;
    winSteamNetworkingMessage_t_152 *_ret;
    int cbAllocateBuffer;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus_params
{
    void *linux_side;
    ESteamNetworkingAvailability _ret;
    SteamRelayNetworkStatus_t *pDetails;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation_params
{
    void *linux_side;
    float _ret;
    SteamNetworkPingLocation_t *result;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkPingLocation_t *location1;
    const SteamNetworkPingLocation_t *location2;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkPingLocation_t *remoteLocation;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString_params
{
    void *linux_side;
    const SteamNetworkPingLocation_t *location;
    char *pszBuf;
    int cchBufSize;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString_params
{
    void *linux_side;
    bool _ret;
    const char *pszString;
    SteamNetworkPingLocation_t *result;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate_params
{
    void *linux_side;
    bool _ret;
    float flMaxAgeSeconds;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter_params
{
    void *linux_side;
    int _ret;
    SteamNetworkingPOPID popID;
    SteamNetworkingPOPID *pViaRelayPoP;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP_params
{
    void *linux_side;
    int _ret;
    SteamNetworkingPOPID popID;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList_params
{
    void *linux_side;
    int _ret;
    SteamNetworkingPOPID *list;
    int nListSz;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp_params
{
    void *linux_side;
    SteamNetworkingMicroseconds _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction_params
{
    void *linux_side;
    ESteamNetworkingSocketsDebugOutputType eDetailLevel;
    FSteamNetworkingSocketsDebugOutput pfnFunc;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params
{
    void *linux_side;
    bool _ret;
    ESteamNetworkingConfigValue eValue;
    ESteamNetworkingConfigScope eScopeType;
    intptr_t scopeObj;
    ESteamNetworkingConfigDataType eDataType;
    const void *pArg;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue_params
{
    void *linux_side;
    ESteamNetworkingGetConfigValueResult _ret;
    ESteamNetworkingConfigValue eValue;
    ESteamNetworkingConfigScope eScopeType;
    intptr_t scopeObj;
    ESteamNetworkingConfigDataType *pOutDataType;
    void *pResult;
    size_t *cbResult;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo_params
{
    void *linux_side;
    bool _ret;
    ESteamNetworkingConfigValue eValue;
    const char **pOutName;
    ESteamNetworkingConfigDataType *pOutDataType;
    ESteamNetworkingConfigScope *pOutScope;
    ESteamNetworkingConfigValue *pOutNextValue;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue_params
{
    void *linux_side;
    ESteamNetworkingConfigValue _ret;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString_params
{
    void *linux_side;
    const SteamNetworkingIPAddr *addr;
    char *buf;
    size_t cbBuf;
    bool bWithPort;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIPAddr *pAddr;
    const char *pszStr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString_params
{
    void *linux_side;
    const SteamNetworkingIdentity *identity;
    char *buf;
    size_t cbBuf;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString_params *params );

struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
    const char *pszStr;
};
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString_params *params );

