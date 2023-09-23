#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V003.h"
EResult cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(void *linux_side, SteamInventoryResult_t resultHandle)
{
    EResult _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultStatus((SteamInventoryResult_t)resultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(void *linux_side, SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultItems((SteamInventoryResult_t)resultHandle, (SteamItemDetails_t *)pOutItemsArray, (uint32 *)punOutItemsArraySize);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(void *linux_side, SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultItemProperty((SteamInventoryResult_t)resultHandle, (uint32)unItemIndex, (const char *)pchPropertyName, (char *)pchValueBuffer, (uint32 *)punValueBufferSizeOut);
    return (_ret);
}

uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(void *linux_side, SteamInventoryResult_t resultHandle)
{
    uint32 _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultTimestamp((SteamInventoryResult_t)resultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(void *linux_side, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->CheckResultSteamID((SteamInventoryResult_t)resultHandle, (CSteamID)steamIDExpected);
    return (_ret);
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(void *linux_side, SteamInventoryResult_t resultHandle)
{
    ((ISteamInventory*)linux_side)->DestroyResult((SteamInventoryResult_t)resultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(void *linux_side, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetAllItems((SteamInventoryResult_t *)pResultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemsByID((SteamInventoryResult_t *)pResultHandle, (const SteamItemInstanceID_t *)pInstanceIDs, (uint32)unCountInstanceIDs);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(void *linux_side, SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SerializeResult((SteamInventoryResult_t)resultHandle, (void *)pOutBuffer, (uint32 *)punOutBufferSize);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(void *linux_side, SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->DeserializeResult((SteamInventoryResult_t *)pOutResultHandle, (const void *)pBuffer, (uint32)unBufferSize, (bool)bRESERVED_MUST_BE_FALSE);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GenerateItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayItemDefs, (const uint32 *)punArrayQuantity, (uint32)unArrayLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(void *linux_side, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GrantPromoItems((SteamInventoryResult_t *)pResultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->AddPromoItem((SteamInventoryResult_t *)pResultHandle, (SteamItemDef_t)itemDef);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->AddPromoItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayItemDefs, (uint32)unArrayLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->ConsumeItem((SteamInventoryResult_t *)pResultHandle, (SteamItemInstanceID_t)itemConsume, (uint32)unQuantity);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->ExchangeItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayGenerate, (const uint32 *)punArrayGenerateQuantity, (uint32)unArrayGenerateLength, (const SteamItemInstanceID_t *)pArrayDestroy, (const uint32 *)punArrayDestroyQuantity, (uint32)unArrayDestroyLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->TransferItemQuantity((SteamInventoryResult_t *)pResultHandle, (SteamItemInstanceID_t)itemIdSource, (uint32)unQuantity, (SteamItemInstanceID_t)itemIdDest);
    return (_ret);
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(void *linux_side)
{
    ((ISteamInventory*)linux_side)->SendItemDropHeartbeat();
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->TriggerItemDrop((SteamInventoryResult_t *)pResultHandle, (SteamItemDef_t)dropListDefinition);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(void *linux_side, SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->TradeItems((SteamInventoryResult_t *)pResultHandle, (CSteamID)steamIDTradePartner, (const SteamItemInstanceID_t *)pArrayGive, (const uint32 *)pArrayGiveQuantity, (uint32)nArrayGiveLength, (const SteamItemInstanceID_t *)pArrayGet, (const uint32 *)pArrayGetQuantity, (uint32)nArrayGetLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->LoadItemDefinitions();
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(void *linux_side, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemDefinitionIDs((SteamItemDef_t *)pItemDefIDs, (uint32 *)punItemDefIDsArraySize);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(void *linux_side, SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemDefinitionProperty((SteamItemDef_t)iDefinition, (const char *)pchPropertyName, (char *)pchValueBuffer, (uint32 *)punValueBufferSizeOut);
    return (_ret);
}

SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(void *linux_side, CSteamID steamID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamInventory*)linux_side)->RequestEligiblePromoItemDefinitionsIDs((CSteamID)steamID);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(void *linux_side, CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetEligiblePromoItemDefinitionIDs((CSteamID)steamID, (SteamItemDef_t *)pItemDefIDs, (uint32 *)punItemDefIDsArraySize);
    return (_ret);
}

SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(void *linux_side, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamInventory*)linux_side)->StartPurchase((const SteamItemDef_t *)pArrayItemDefs, (const uint32 *)punArrayQuantity, (uint32)unArrayLength);
    return (_ret);
}

SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(void *linux_side)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamInventory*)linux_side)->RequestPrices();
    return (_ret);
}

uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamInventory*)linux_side)->GetNumItemsWithPrices();
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(void *linux_side, SteamItemDef_t *pArrayItemDefs, uint64 *pCurrentPrices, uint64 *pBasePrices, uint32 unArrayLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemsWithPrices((SteamItemDef_t *)pArrayItemDefs, (uint64 *)pCurrentPrices, (uint64 *)pBasePrices, (uint32)unArrayLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(void *linux_side, SteamItemDef_t iDefinition, uint64 *pCurrentPrice, uint64 *pBasePrice)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemPrice((SteamItemDef_t)iDefinition, (uint64 *)pCurrentPrice, (uint64 *)pBasePrice);
    return (_ret);
}

SteamInventoryUpdateHandle_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(void *linux_side)
{
    SteamInventoryUpdateHandle_t _ret;
    _ret = ((ISteamInventory*)linux_side)->StartUpdateProperties();
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(void *linux_side, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->RemoveProperty((SteamInventoryUpdateHandle_t)handle, (SteamItemInstanceID_t)nItemID, (const char *)pchPropertyName);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(void *linux_side, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SetProperty((SteamInventoryUpdateHandle_t)handle, (SteamItemInstanceID_t)nItemID, (const char *)pchPropertyName, (const char *)pchPropertyValue);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(void *linux_side, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SetProperty((SteamInventoryUpdateHandle_t)handle, (SteamItemInstanceID_t)nItemID, (const char *)pchPropertyName, (bool)bValue);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(void *linux_side, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SetProperty((SteamInventoryUpdateHandle_t)handle, (SteamItemInstanceID_t)nItemID, (const char *)pchPropertyName, (int64)nValue);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(void *linux_side, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SetProperty((SteamInventoryUpdateHandle_t)handle, (SteamItemInstanceID_t)nItemID, (const char *)pchPropertyName, (float)flValue);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(void *linux_side, SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SubmitUpdateProperties((SteamInventoryUpdateHandle_t)handle, (SteamInventoryResult_t *)pResultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem(void *linux_side, SteamInventoryResult_t *pResultHandle, const char *pchItemToken)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->InspectItem((SteamInventoryResult_t *)pResultHandle, (const char *)pchItemToken);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
