struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001;
struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    SteamItemDetails_t *pOutItemsArray;
    uint32_t *punOutItemsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    CSteamID steamIDExpected;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params
{
    void *linux_side;
    int32_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const uint64_t *pInstanceIDs;
    uint32_t unCountInstanceIDs;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    void *pOutBuffer;
    uint32_t *punOutBufferSize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params
{
    void *linux_side;
    bool _ret;
    int32_t *pOutResultHandle;
    const void *pBuffer;
    uint32_t unBufferSize;
    bool bRESERVED_MUST_BE_FALSE;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const int32_t *pArrayItemDefs;
    const uint32_t *punArrayQuantity;
    uint32_t unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    int32_t itemDef;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const int32_t *pArrayItemDefs;
    uint32_t unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    uint64_t itemConsume;
    uint32_t unQuantity;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const int32_t *pArrayGenerate;
    const uint32_t *punArrayGenerateQuantity;
    uint32_t unArrayGenerateLength;
    const uint64_t *pArrayDestroy;
    const uint32_t *punArrayDestroyQuantity;
    uint32_t unArrayDestroyLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    uint64_t itemIdSource;
    uint32_t unQuantity;
    uint64_t itemIdDest;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params
{
    void *linux_side;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    int32_t dropListDefinition;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    CSteamID steamIDTradePartner;
    const uint64_t *pArrayGive;
    const uint32_t *pArrayGiveQuantity;
    uint32_t nArrayGiveLength;
    const uint64_t *pArrayGet;
    const uint32_t *pArrayGetQuantity;
    uint32_t nArrayGetLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params
{
    void *linux_side;
    bool _ret;
    int32_t *pItemDefIDs;
    uint32_t *punItemDefIDsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params
{
    void *linux_side;
    bool _ret;
    int32_t iDefinition;
    const char *pchPropertyName;
    char *pchValueBuffer;
    uint32_t *punValueBufferSizeOut;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    int32_t *pItemDefIDs;
    uint32_t *punItemDefIDsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *params );

