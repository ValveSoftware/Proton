struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002;
struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    SteamItemDetails_t *pOutItemsArray;
    uint32_t *punOutItemsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    uint32_t unItemIndex;
    const char *pchPropertyName;
    char *pchValueBuffer;
    uint32_t *punValueBufferSizeOut;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    CSteamID steamIDExpected;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult_params
{
    void *linux_side;
    int32_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const uint64_t *pInstanceIDs;
    uint32_t unCountInstanceIDs;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult_params
{
    void *linux_side;
    bool _ret;
    int32_t resultHandle;
    void *pOutBuffer;
    uint32_t *punOutBufferSize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult_params
{
    void *linux_side;
    bool _ret;
    int32_t *pOutResultHandle;
    const void *pBuffer;
    uint32_t unBufferSize;
    bool bRESERVED_MUST_BE_FALSE;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const int32_t *pArrayItemDefs;
    const uint32_t *punArrayQuantity;
    uint32_t unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    int32_t itemDef;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    const int32_t *pArrayItemDefs;
    uint32_t unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    uint64_t itemConsume;
    uint32_t unQuantity;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems_params
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
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    uint64_t itemIdSource;
    uint32_t unQuantity;
    uint64_t itemIdDest;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat_params
{
    void *linux_side;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop_params
{
    void *linux_side;
    bool _ret;
    int32_t *pResultHandle;
    int32_t dropListDefinition;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems_params
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
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs_params
{
    void *linux_side;
    bool _ret;
    int32_t *pItemDefIDs;
    uint32_t *punItemDefIDsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty_params
{
    void *linux_side;
    bool _ret;
    int32_t iDefinition;
    const char *pchPropertyName;
    char *pchValueBuffer;
    uint32_t *punValueBufferSizeOut;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamID;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    int32_t *pItemDefIDs;
    uint32_t *punItemDefIDsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase_params
{
    void *linux_side;
    uint64_t _ret;
    const int32_t *pArrayItemDefs;
    const uint32_t *punArrayQuantity;
    uint32_t unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices_params
{
    void *linux_side;
    bool _ret;
    int32_t *pArrayItemDefs;
    uint64_t *pPrices;
    uint32_t unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice_params
{
    void *linux_side;
    bool _ret;
    int32_t iDefinition;
    uint64_t *pPrice;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint64_t nItemID;
    const char *pchPropertyName;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint64_t nItemID;
    const char *pchPropertyName;
    const char *pchPropertyValue;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint64_t nItemID;
    const char *pchPropertyName;
    bool bValue;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint64_t nItemID;
    const char *pchPropertyName;
    int64_t nValue;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint64_t nItemID;
    const char *pchPropertyName;
    float flValue;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    int32_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties_params *params );

