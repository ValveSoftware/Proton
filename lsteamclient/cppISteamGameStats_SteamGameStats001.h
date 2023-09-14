struct cppISteamGameStats_SteamGameStats001_GetNewSession_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    int8_t nAccountType;
    uint64_t ulAccountID;
    int32_t nAppID;
    RTime32 rtTimeStarted;
};
extern void cppISteamGameStats_SteamGameStats001_GetNewSession( struct cppISteamGameStats_SteamGameStats001_GetNewSession_params *params );

struct cppISteamGameStats_SteamGameStats001_EndSession_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint64_t ulSessionID;
    RTime32 rtTimeEnded;
    int32_t nReasonCode;
};
extern void cppISteamGameStats_SteamGameStats001_EndSession( struct cppISteamGameStats_SteamGameStats001_EndSession_params *params );

struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulSessionID;
    const char *pstrName;
    int32_t nData;
};
extern void cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params *params );

struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeString_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulSessionID;
    const char *pstrName;
    const char *pstrData;
};
extern void cppISteamGameStats_SteamGameStats001_AddSessionAttributeString( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeString_params *params );

struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulSessionID;
    const char *pstrName;
    float fData;
};
extern void cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params *params );

struct cppISteamGameStats_SteamGameStats001_AddNewRow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pulRowID;
    uint64_t ulSessionID;
    const char *pstrTableName;
};
extern void cppISteamGameStats_SteamGameStats001_AddNewRow( struct cppISteamGameStats_SteamGameStats001_AddNewRow_params *params );

struct cppISteamGameStats_SteamGameStats001_CommitRow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulRowID;
};
extern void cppISteamGameStats_SteamGameStats001_CommitRow( struct cppISteamGameStats_SteamGameStats001_CommitRow_params *params );

struct cppISteamGameStats_SteamGameStats001_CommitOutstandingRows_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulSessionID;
};
extern void cppISteamGameStats_SteamGameStats001_CommitOutstandingRows( struct cppISteamGameStats_SteamGameStats001_CommitOutstandingRows_params *params );

struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulRowID;
    const char *pstrName;
    int32_t nData;
};
extern void cppISteamGameStats_SteamGameStats001_AddRowAttributeInt( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt_params *params );

struct cppISteamGameStats_SteamGameStats001_AddRowAtributeString_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulRowID;
    const char *pstrName;
    const char *pstrData;
};
extern void cppISteamGameStats_SteamGameStats001_AddRowAtributeString( struct cppISteamGameStats_SteamGameStats001_AddRowAtributeString_params *params );

struct cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulRowID;
    const char *pstrName;
    float fData;
};
extern void cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params *params );

struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulSessionID;
    const char *pstrName;
    int64_t llData;
};
extern void cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64( struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params *params );

struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulRowID;
    const char *pstrName;
    int64_t llData;
};
extern void cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64( struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params *params );

