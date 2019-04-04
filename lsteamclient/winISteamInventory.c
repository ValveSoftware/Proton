/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V003.h"

typedef struct __winISteamInventory_STEAMINVENTORY_INTERFACE_V003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInventory_STEAMINVENTORY_INTERFACE_V003;

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus, 8)
EResult __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(_this->linux_side, resultHandle, pOutItemsArray, punOutItemsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty, 24)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(_this->linux_side, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp, 8)
uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(_this->linux_side, resultHandle, steamIDExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult, 8)
void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems, 8)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(_this->linux_side, pResultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(_this->linux_side, pResultHandle, pInstanceIDs, unCountInstanceIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(_this->linux_side, resultHandle, pOutBuffer, punOutBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(_this->linux_side, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(_this->linux_side, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems, 8)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(_this->linux_side, pResultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(_this->linux_side, pResultHandle, itemDef);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(_this->linux_side, pResultHandle, pArrayItemDefs, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(_this->linux_side, pResultHandle, itemConsume, unQuantity);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems, 32)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(_this->linux_side, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(_this->linux_side, pResultHandle, itemIdSource, unQuantity, itemIdDest);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat, 4)
void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(_this->linux_side, pResultHandle, dropListDefinition);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems, 40)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(_this->linux_side, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions, 4)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(_this->linux_side, pItemDefIDs, punItemDefIDsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(_this->linux_side, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs, 12)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(_this->linux_side, steamID, pItemDefIDs, punItemDefIDsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase, 16)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(_this->linux_side, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices, 4)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices, 4)
uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamItemDef_t * pArrayItemDefs, uint64 * pCurrentPrices, uint64 * pBasePrices, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(_this->linux_side, pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamItemDef_t iDefinition, uint64 * pCurrentPrice, uint64 * pBasePrice)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(_this->linux_side, iDefinition, pCurrentPrice, pBasePrice);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties, 4)
SteamInventoryUpdateHandle_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty, 24)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(_this->linux_side, handle, nItemID, pchPropertyName);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, const char * pchPropertyValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(_this->linux_side, handle, nItemID, pchPropertyName, pchPropertyValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(_this->linux_side, handle, nItemID, pchPropertyName, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3, 32)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, int64 nValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(_this->linux_side, handle, nItemID, pchPropertyName, nValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, float flValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(_this->linux_side, handle, nItemID, pchPropertyName, flValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *_this, SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(_this->linux_side, handle, pResultHandle);
}

extern vtable_ptr winISteamInventory_STEAMINVENTORY_INTERFACE_V003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInventory_STEAMINVENTORY_INTERFACE_V003,
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties)
    );
#ifndef __GNUC__
}
#endif

winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V003(void *linux_side)
{
    winISteamInventory_STEAMINVENTORY_INTERFACE_V003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamInventory_STEAMINVENTORY_INTERFACE_V003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamInventory_STEAMINVENTORY_INTERFACE_V003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V002.h"

typedef struct __winISteamInventory_STEAMINVENTORY_INTERFACE_V002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInventory_STEAMINVENTORY_INTERFACE_V002;

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus, 8)
EResult __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(_this->linux_side, resultHandle, pOutItemsArray, punOutItemsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty, 24)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(_this->linux_side, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp, 8)
uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(_this->linux_side, resultHandle, steamIDExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult, 8)
void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems, 8)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(_this->linux_side, pResultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(_this->linux_side, pResultHandle, pInstanceIDs, unCountInstanceIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(_this->linux_side, resultHandle, pOutBuffer, punOutBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(_this->linux_side, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(_this->linux_side, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems, 8)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(_this->linux_side, pResultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(_this->linux_side, pResultHandle, itemDef);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(_this->linux_side, pResultHandle, pArrayItemDefs, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(_this->linux_side, pResultHandle, itemConsume, unQuantity);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems, 32)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(_this->linux_side, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(_this->linux_side, pResultHandle, itemIdSource, unQuantity, itemIdDest);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat, 4)
void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(_this->linux_side, pResultHandle, dropListDefinition);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems, 40)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(_this->linux_side, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions, 4)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(_this->linux_side, pItemDefIDs, punItemDefIDsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(_this->linux_side, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs, 12)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(_this->linux_side, steamID, pItemDefIDs, punItemDefIDsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase, 16)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(_this->linux_side, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices, 4)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices, 4)
uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamItemDef_t * pArrayItemDefs, uint64 * pPrices, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(_this->linux_side, pArrayItemDefs, pPrices, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamItemDef_t iDefinition, uint64 * pPrice)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(_this->linux_side, iDefinition, pPrice);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties, 4)
SteamInventoryUpdateHandle_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty, 24)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(_this->linux_side, handle, nItemID, pchPropertyName);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, const char * pchPropertyValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(_this->linux_side, handle, nItemID, pchPropertyName, pchPropertyValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, bool bValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2(_this->linux_side, handle, nItemID, pchPropertyName, bValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3, 32)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, int64 nValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3(_this->linux_side, handle, nItemID, pchPropertyName, nValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, float flValue)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4(_this->linux_side, handle, nItemID, pchPropertyName, flValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *_this, SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(_this->linux_side, handle, pResultHandle);
}

extern vtable_ptr winISteamInventory_STEAMINVENTORY_INTERFACE_V002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInventory_STEAMINVENTORY_INTERFACE_V002,
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties)
    );
#ifndef __GNUC__
}
#endif

winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V002(void *linux_side)
{
    winISteamInventory_STEAMINVENTORY_INTERFACE_V002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamInventory_STEAMINVENTORY_INTERFACE_V002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamInventory_STEAMINVENTORY_INTERFACE_V002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V001.h"

typedef struct __winISteamInventory_STEAMINVENTORY_INTERFACE_V001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInventory_STEAMINVENTORY_INTERFACE_V001;

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus, 8)
EResult __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(_this->linux_side, resultHandle, pOutItemsArray, punOutItemsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp, 8)
uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(_this->linux_side, resultHandle, steamIDExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult, 8)
void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(_this->linux_side, resultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems, 8)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(_this->linux_side, pResultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(_this->linux_side, pResultHandle, pInstanceIDs, unCountInstanceIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(_this->linux_side, resultHandle, pOutBuffer, punOutBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(_this->linux_side, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(_this->linux_side, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems, 8)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(_this->linux_side, pResultHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(_this->linux_side, pResultHandle, itemDef);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems, 16)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(_this->linux_side, pResultHandle, pArrayItemDefs, unArrayLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(_this->linux_side, pResultHandle, itemConsume, unQuantity);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems, 32)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(_this->linux_side, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity, 28)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(_this->linux_side, pResultHandle, itemIdSource, unQuantity, itemIdDest);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat, 4)
void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(_this->linux_side, pResultHandle, dropListDefinition);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems, 40)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(_this->linux_side, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions, 4)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs, 12)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(_this->linux_side, pItemDefIDs, punItemDefIDsArraySize);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(_this->linux_side, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs, 12)
SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, CSteamID steamID)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(_this->linux_side, steamID);
}

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs, 20)
bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *_this, CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
    TRACE("%p\n", _this);
    return cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(_this->linux_side, steamID, pItemDefIDs, punItemDefIDsArraySize);
}

extern vtable_ptr winISteamInventory_STEAMINVENTORY_INTERFACE_V001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInventory_STEAMINVENTORY_INTERFACE_V001,
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs)
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs)
    );
#ifndef __GNUC__
}
#endif

winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V001(void *linux_side)
{
    winISteamInventory_STEAMINVENTORY_INTERFACE_V001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamInventory_STEAMINVENTORY_INTERFACE_V001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamInventory_STEAMINVENTORY_INTERFACE_V001_vtable;
    r->linux_side = linux_side;
    return r;
}

