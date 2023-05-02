#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_139/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_139
#include "struct_converters.h"
#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V001.h"
EResult cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(void *linux_side, SteamInventoryResult_t resultHandle)
{
    return ((ISteamInventory*)linux_side)->GetResultStatus((SteamInventoryResult_t)resultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(void *linux_side, SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize)
{
    return ((ISteamInventory*)linux_side)->GetResultItems((SteamInventoryResult_t)resultHandle, (SteamItemDetails_t *)pOutItemsArray, (uint32 *)punOutItemsArraySize);
}

uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(void *linux_side, SteamInventoryResult_t resultHandle)
{
    return ((ISteamInventory*)linux_side)->GetResultTimestamp((SteamInventoryResult_t)resultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(void *linux_side, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    return ((ISteamInventory*)linux_side)->CheckResultSteamID((SteamInventoryResult_t)resultHandle, (CSteamID)steamIDExpected);
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(void *linux_side, SteamInventoryResult_t resultHandle)
{
    ((ISteamInventory*)linux_side)->DestroyResult((SteamInventoryResult_t)resultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(void *linux_side, SteamInventoryResult_t * pResultHandle)
{
    return ((ISteamInventory*)linux_side)->GetAllItems((SteamInventoryResult_t *)pResultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(void *linux_side, SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs)
{
    return ((ISteamInventory*)linux_side)->GetItemsByID((SteamInventoryResult_t *)pResultHandle, (const SteamItemInstanceID_t *)pInstanceIDs, (uint32)unCountInstanceIDs);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(void *linux_side, SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize)
{
    return ((ISteamInventory*)linux_side)->SerializeResult((SteamInventoryResult_t)resultHandle, (void *)pOutBuffer, (uint32 *)punOutBufferSize);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(void *linux_side, SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    return ((ISteamInventory*)linux_side)->DeserializeResult((SteamInventoryResult_t *)pOutResultHandle, (const void *)pBuffer, (uint32)unBufferSize, (bool)bRESERVED_MUST_BE_FALSE);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(void *linux_side, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
    return ((ISteamInventory*)linux_side)->GenerateItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayItemDefs, (const uint32 *)punArrayQuantity, (uint32)unArrayLength);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(void *linux_side, SteamInventoryResult_t * pResultHandle)
{
    return ((ISteamInventory*)linux_side)->GrantPromoItems((SteamInventoryResult_t *)pResultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(void *linux_side, SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef)
{
    return ((ISteamInventory*)linux_side)->AddPromoItem((SteamInventoryResult_t *)pResultHandle, (SteamItemDef_t)itemDef);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(void *linux_side, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength)
{
    return ((ISteamInventory*)linux_side)->AddPromoItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayItemDefs, (uint32)unArrayLength);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(void *linux_side, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    return ((ISteamInventory*)linux_side)->ConsumeItem((SteamInventoryResult_t *)pResultHandle, (SteamItemInstanceID_t)itemConsume, (uint32)unQuantity);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(void *linux_side, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    return ((ISteamInventory*)linux_side)->ExchangeItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayGenerate, (const uint32 *)punArrayGenerateQuantity, (uint32)unArrayGenerateLength, (const SteamItemInstanceID_t *)pArrayDestroy, (const uint32 *)punArrayDestroyQuantity, (uint32)unArrayDestroyLength);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(void *linux_side, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    return ((ISteamInventory*)linux_side)->TransferItemQuantity((SteamInventoryResult_t *)pResultHandle, (SteamItemInstanceID_t)itemIdSource, (uint32)unQuantity, (SteamItemInstanceID_t)itemIdDest);
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(void *linux_side)
{
    ((ISteamInventory*)linux_side)->SendItemDropHeartbeat();
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(void *linux_side, SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition)
{
    return ((ISteamInventory*)linux_side)->TriggerItemDrop((SteamInventoryResult_t *)pResultHandle, (SteamItemDef_t)dropListDefinition);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(void *linux_side, SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength)
{
    return ((ISteamInventory*)linux_side)->TradeItems((SteamInventoryResult_t *)pResultHandle, (CSteamID)steamIDTradePartner, (const SteamItemInstanceID_t *)pArrayGive, (const uint32 *)pArrayGiveQuantity, (uint32)nArrayGiveLength, (const SteamItemInstanceID_t *)pArrayGet, (const uint32 *)pArrayGetQuantity, (uint32)nArrayGetLength);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(void *linux_side)
{
    return ((ISteamInventory*)linux_side)->LoadItemDefinitions();
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(void *linux_side, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    return ((ISteamInventory*)linux_side)->GetItemDefinitionIDs((SteamItemDef_t *)pItemDefIDs, (uint32 *)punItemDefIDsArraySize);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(void *linux_side, SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
    return ((ISteamInventory*)linux_side)->GetItemDefinitionProperty((SteamItemDef_t)iDefinition, (const char *)pchPropertyName, (char *)pchValueBuffer, (uint32 *)punValueBufferSizeOut);
}

SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(void *linux_side, CSteamID steamID)
{
    return ((ISteamInventory*)linux_side)->RequestEligiblePromoItemDefinitionsIDs((CSteamID)steamID);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(void *linux_side, CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    return ((ISteamInventory*)linux_side)->GetEligiblePromoItemDefinitionIDs((CSteamID)steamID, (SteamItemDef_t *)pItemDefIDs, (uint32 *)punItemDefIDsArraySize);
}

#ifdef __cplusplus
}
#endif
