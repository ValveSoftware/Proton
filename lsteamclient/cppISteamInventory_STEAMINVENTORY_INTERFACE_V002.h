#ifdef __cplusplus
extern "C" {
#endif
extern EResult cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(void *, SteamInventoryResult_t, SteamItemDetails_t *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(void *, SteamInventoryResult_t, uint32, const char *, char *, uint32 *);
extern uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(void *, SteamInventoryResult_t, CSteamID);
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(void *, SteamInventoryResult_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(void *, SteamInventoryResult_t *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(void *, SteamInventoryResult_t *, const SteamItemInstanceID_t *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(void *, SteamInventoryResult_t, void *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(void *, SteamInventoryResult_t *, const void *, uint32, bool);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(void *, SteamInventoryResult_t *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(void *, SteamInventoryResult_t *, SteamItemDef_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(void *, SteamInventoryResult_t *, SteamItemInstanceID_t, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(void *, SteamInventoryResult_t *, const SteamItemDef_t *, const uint32 *, uint32, const SteamItemInstanceID_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(void *, SteamInventoryResult_t *, SteamItemInstanceID_t, uint32, SteamItemInstanceID_t);
extern void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(void *, SteamInventoryResult_t *, SteamItemDef_t);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(void *, SteamInventoryResult_t *, CSteamID, const SteamItemInstanceID_t *, const uint32 *, uint32, const SteamItemInstanceID_t *, const uint32 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(void *, SteamItemDef_t *, uint32 *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(void *, SteamItemDef_t, const char *, char *, uint32 *);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(void *, CSteamID);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(void *, CSteamID, SteamItemDef_t *, uint32 *);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(void *, const SteamItemDef_t *, const uint32 *, uint32);
extern SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices(void *);
extern uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(void *, SteamItemDef_t *, uint64 *, uint32);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(void *, SteamItemDef_t, uint64 *);
extern SteamInventoryUpdateHandle_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties(void *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, const char *);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, bool);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, int64);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4(void *, SteamInventoryUpdateHandle_t, SteamItemInstanceID_t, const char *, float);
extern bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(void *, SteamInventoryUpdateHandle_t, SteamInventoryResult_t *);
#ifdef __cplusplus
}
#endif
