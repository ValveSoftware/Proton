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
    EResult _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultStatus((SteamInventoryResult_t)resultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(void *linux_side, SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultItems((SteamInventoryResult_t)resultHandle, (SteamItemDetails_t *)pOutItemsArray, (uint32 *)punOutItemsArraySize);
    return (_ret);
}

uint32 cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(void *linux_side, SteamInventoryResult_t resultHandle)
{
    uint32 _ret;
    _ret = ((ISteamInventory*)linux_side)->GetResultTimestamp((SteamInventoryResult_t)resultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(void *linux_side, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->CheckResultSteamID((SteamInventoryResult_t)resultHandle, (CSteamID)steamIDExpected);
    return (_ret);
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(void *linux_side, SteamInventoryResult_t resultHandle)
{
    ((ISteamInventory*)linux_side)->DestroyResult((SteamInventoryResult_t)resultHandle);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(void *linux_side, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetAllItems((SteamInventoryResult_t *)pResultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemsByID((SteamInventoryResult_t *)pResultHandle, (const SteamItemInstanceID_t *)pInstanceIDs, (uint32)unCountInstanceIDs);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(void *linux_side, SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->SerializeResult((SteamInventoryResult_t)resultHandle, (void *)pOutBuffer, (uint32 *)punOutBufferSize);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(void *linux_side, SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->DeserializeResult((SteamInventoryResult_t *)pOutResultHandle, (const void *)pBuffer, (uint32)unBufferSize, (bool)bRESERVED_MUST_BE_FALSE);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GenerateItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayItemDefs, (const uint32 *)punArrayQuantity, (uint32)unArrayLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(void *linux_side, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GrantPromoItems((SteamInventoryResult_t *)pResultHandle);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->AddPromoItem((SteamInventoryResult_t *)pResultHandle, (SteamItemDef_t)itemDef);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->AddPromoItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayItemDefs, (uint32)unArrayLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->ConsumeItem((SteamInventoryResult_t *)pResultHandle, (SteamItemInstanceID_t)itemConsume, (uint32)unQuantity);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(void *linux_side, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->ExchangeItems((SteamInventoryResult_t *)pResultHandle, (const SteamItemDef_t *)pArrayGenerate, (const uint32 *)punArrayGenerateQuantity, (uint32)unArrayGenerateLength, (const SteamItemInstanceID_t *)pArrayDestroy, (const uint32 *)punArrayDestroyQuantity, (uint32)unArrayDestroyLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->TransferItemQuantity((SteamInventoryResult_t *)pResultHandle, (SteamItemInstanceID_t)itemIdSource, (uint32)unQuantity, (SteamItemInstanceID_t)itemIdDest);
    return (_ret);
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(void *linux_side)
{
    ((ISteamInventory*)linux_side)->SendItemDropHeartbeat();
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(void *linux_side, SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->TriggerItemDrop((SteamInventoryResult_t *)pResultHandle, (SteamItemDef_t)dropListDefinition);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(void *linux_side, SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->TradeItems((SteamInventoryResult_t *)pResultHandle, (CSteamID)steamIDTradePartner, (const SteamItemInstanceID_t *)pArrayGive, (const uint32 *)pArrayGiveQuantity, (uint32)nArrayGiveLength, (const SteamItemInstanceID_t *)pArrayGet, (const uint32 *)pArrayGetQuantity, (uint32)nArrayGetLength);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->LoadItemDefinitions();
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(void *linux_side, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemDefinitionIDs((SteamItemDef_t *)pItemDefIDs, (uint32 *)punItemDefIDsArraySize);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(void *linux_side, SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetItemDefinitionProperty((SteamItemDef_t)iDefinition, (const char *)pchPropertyName, (char *)pchValueBuffer, (uint32 *)punValueBufferSizeOut);
    return (_ret);
}

SteamAPICall_t cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(void *linux_side, CSteamID steamID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamInventory*)linux_side)->RequestEligiblePromoItemDefinitionsIDs((CSteamID)steamID);
    return (_ret);
}

bool cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(void *linux_side, CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    _ret = ((ISteamInventory*)linux_side)->GetEligiblePromoItemDefinitionIDs((CSteamID)steamID, (SteamItemDef_t *)pItemDefIDs, (uint32 *)punItemDefIDsArraySize);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
