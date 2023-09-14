struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamInventoryResult_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t resultHandle;
    SteamItemDetails_t *pOutItemsArray;
    uint32 *punOutItemsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params
{
    void *linux_side;
    uint32 _ret;
    SteamInventoryResult_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t resultHandle;
    CSteamID steamIDExpected;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params
{
    void *linux_side;
    SteamInventoryResult_t resultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    const SteamItemInstanceID_t *pInstanceIDs;
    uint32 unCountInstanceIDs;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t resultHandle;
    void *pOutBuffer;
    uint32 *punOutBufferSize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pOutResultHandle;
    const void *pBuffer;
    uint32 unBufferSize;
    bool bRESERVED_MUST_BE_FALSE;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    const SteamItemDef_t *pArrayItemDefs;
    const uint32 *punArrayQuantity;
    uint32 unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    SteamItemDef_t itemDef;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    const SteamItemDef_t *pArrayItemDefs;
    uint32 unArrayLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    SteamItemInstanceID_t itemConsume;
    uint32 unQuantity;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    const SteamItemDef_t *pArrayGenerate;
    const uint32 *punArrayGenerateQuantity;
    uint32 unArrayGenerateLength;
    const SteamItemInstanceID_t *pArrayDestroy;
    const uint32 *punArrayDestroyQuantity;
    uint32 unArrayDestroyLength;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    SteamItemInstanceID_t itemIdSource;
    uint32 unQuantity;
    SteamItemInstanceID_t itemIdDest;
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
    SteamInventoryResult_t *pResultHandle;
    SteamItemDef_t dropListDefinition;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params
{
    void *linux_side;
    bool _ret;
    SteamInventoryResult_t *pResultHandle;
    CSteamID steamIDTradePartner;
    const SteamItemInstanceID_t *pArrayGive;
    const uint32 *pArrayGiveQuantity;
    uint32 nArrayGiveLength;
    const SteamItemInstanceID_t *pArrayGet;
    const uint32 *pArrayGetQuantity;
    uint32 nArrayGetLength;
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
    SteamItemDef_t *pItemDefIDs;
    uint32 *punItemDefIDsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params
{
    void *linux_side;
    bool _ret;
    SteamItemDef_t iDefinition;
    const char *pchPropertyName;
    char *pchValueBuffer;
    uint32 *punValueBufferSizeOut;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamID;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *params );

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    SteamItemDef_t *pItemDefIDs;
    uint32 *punItemDefIDsArraySize;
};
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *params );

