/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V001.h"

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems, 32)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems, 40)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs, 20)

EResult __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(_this->u_iface, resultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(_this->u_iface, resultHandle, pOutItemsArray, punOutItemsArraySize);
    return _ret;
}

uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(_this->u_iface, resultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(_this->u_iface, resultHandle, steamIDExpected);
    return _ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(_this->u_iface, resultHandle);
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(_this->u_iface, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(_this->u_iface, pResultHandle, pInstanceIDs, unCountInstanceIDs);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(_this->u_iface, resultHandle, pOutBuffer, punOutBufferSize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(struct w_steam_iface *_this, SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(_this->u_iface, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(_this->u_iface, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(_this->u_iface, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(_this->u_iface, pResultHandle, itemDef);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(_this->u_iface, pResultHandle, pArrayItemDefs, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(_this->u_iface, pResultHandle, itemConsume, unQuantity);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(_this->u_iface, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(_this->u_iface, pResultHandle, itemIdSource, unQuantity, itemIdDest);
    return _ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(_this->u_iface);
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(_this->u_iface, pResultHandle, dropListDefinition);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(_this->u_iface, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(struct w_steam_iface *_this, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(_this->u_iface, pItemDefIDs, punItemDefIDsArraySize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(struct w_steam_iface *_this, SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(_this->u_iface, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(_this->u_iface, steamID);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(struct w_steam_iface *_this, CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(_this->u_iface, steamID, pItemDefIDs, punItemDefIDsArraySize);
    return _ret;
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

struct w_steam_iface *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMINVENTORY_INTERFACE_V001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInventory_STEAMINVENTORY_INTERFACE_V001_vtable, 24, "STEAMINVENTORY_INTERFACE_V001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V002.h"

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty, 24)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems, 32)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems, 40)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty, 24)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3, 32)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties, 16)

EResult __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(_this->u_iface, resultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(_this->u_iface, resultHandle, pOutItemsArray, punOutItemsArraySize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(_this->u_iface, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
    return _ret;
}

uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(_this->u_iface, resultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(_this->u_iface, resultHandle, steamIDExpected);
    return _ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(_this->u_iface, resultHandle);
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(_this->u_iface, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(_this->u_iface, pResultHandle, pInstanceIDs, unCountInstanceIDs);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(_this->u_iface, resultHandle, pOutBuffer, punOutBufferSize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(struct w_steam_iface *_this, SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(_this->u_iface, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(_this->u_iface, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(_this->u_iface, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(_this->u_iface, pResultHandle, itemDef);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(_this->u_iface, pResultHandle, pArrayItemDefs, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(_this->u_iface, pResultHandle, itemConsume, unQuantity);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(_this->u_iface, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(_this->u_iface, pResultHandle, itemIdSource, unQuantity, itemIdDest);
    return _ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat(_this->u_iface);
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(_this->u_iface, pResultHandle, dropListDefinition);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(_this->u_iface, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(struct w_steam_iface *_this, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(_this->u_iface, pItemDefIDs, punItemDefIDsArraySize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(struct w_steam_iface *_this, SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(_this->u_iface, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(_this->u_iface, steamID);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(struct w_steam_iface *_this, CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(_this->u_iface, steamID, pItemDefIDs, punItemDefIDsArraySize);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(struct w_steam_iface *_this, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(_this->u_iface, pArrayItemDefs, punArrayQuantity, unArrayLength);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(struct w_steam_iface *_this, SteamItemDef_t *pArrayItemDefs, uint64 *pPrices, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(_this->u_iface, pArrayItemDefs, pPrices, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(struct w_steam_iface *_this, SteamItemDef_t iDefinition, uint64 *pPrice)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(_this->u_iface, iDefinition, pPrice);
    return _ret;
}

SteamInventoryUpdateHandle_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties(struct w_steam_iface *_this)
{
    SteamInventoryUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(_this->u_iface, handle, nItemID, pchPropertyName);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(_this->u_iface, handle, nItemID, pchPropertyName, pchPropertyValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2(_this->u_iface, handle, nItemID, pchPropertyName, bValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3(_this->u_iface, handle, nItemID, pchPropertyName, nValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4(_this->u_iface, handle, nItemID, pchPropertyName, flValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(_this->u_iface, handle, pResultHandle);
    return _ret;
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

struct w_steam_iface *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMINVENTORY_INTERFACE_V002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInventory_STEAMINVENTORY_INTERFACE_V002_vtable, 37, "STEAMINVENTORY_INTERFACE_V002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V003.h"

DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty, 24)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems, 8)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems, 32)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems, 40)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs, 12)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices, 20)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties, 4)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty, 24)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3, 32)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4, 28)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties, 16)
DEFINE_THISCALL_WRAPPER(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem, 12)

EResult __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(_this->u_iface, resultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(_this->u_iface, resultHandle, pOutItemsArray, punOutItemsArraySize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(_this->u_iface, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
    return _ret;
}

uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(_this->u_iface, resultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(_this->u_iface, resultHandle, steamIDExpected);
    return _ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(_this->u_iface, resultHandle);
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(_this->u_iface, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(_this->u_iface, pResultHandle, pInstanceIDs, unCountInstanceIDs);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(struct w_steam_iface *_this, SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 *punOutBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(_this->u_iface, resultHandle, pOutBuffer, punOutBufferSize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(struct w_steam_iface *_this, SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(_this->u_iface, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(_this->u_iface, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(_this->u_iface, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemDef_t itemDef)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(_this->u_iface, pResultHandle, itemDef);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(_this->u_iface, pResultHandle, pArrayItemDefs, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(_this->u_iface, pResultHandle, itemConsume, unQuantity);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayGenerate, const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t *pArrayDestroy, const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(_this->u_iface, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(_this->u_iface, pResultHandle, itemIdSource, unQuantity, itemIdDest);
    return _ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(_this->u_iface);
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(_this->u_iface, pResultHandle, dropListDefinition);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity, uint32 nArrayGetLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(_this->u_iface, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(struct w_steam_iface *_this, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(_this->u_iface, pItemDefIDs, punItemDefIDsArraySize);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(struct w_steam_iface *_this, SteamItemDef_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32 *punValueBufferSizeOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(_this->u_iface, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(_this->u_iface, steamID);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(struct w_steam_iface *_this, CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 *punItemDefIDsArraySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(_this->u_iface, steamID, pItemDefIDs, punItemDefIDsArraySize);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(struct w_steam_iface *_this, const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity, uint32 unArrayLength)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(_this->u_iface, pArrayItemDefs, punArrayQuantity, unArrayLength);
    return _ret;
}

SteamAPICall_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(struct w_steam_iface *_this, SteamItemDef_t *pArrayItemDefs, uint64 *pCurrentPrices, uint64 *pBasePrices, uint32 unArrayLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(_this->u_iface, pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(struct w_steam_iface *_this, SteamItemDef_t iDefinition, uint64 *pCurrentPrice, uint64 *pBasePrice)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(_this->u_iface, iDefinition, pCurrentPrice, pBasePrice);
    return _ret;
}

SteamInventoryUpdateHandle_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(struct w_steam_iface *_this)
{
    SteamInventoryUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(_this->u_iface, handle, nItemID, pchPropertyName);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(_this->u_iface, handle, nItemID, pchPropertyName, pchPropertyValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(_this->u_iface, handle, nItemID, pchPropertyName, bValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(_this->u_iface, handle, nItemID, pchPropertyName, nValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(_this->u_iface, handle, nItemID, pchPropertyName, flValue);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(struct w_steam_iface *_this, SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(_this->u_iface, handle, pResultHandle);
    return _ret;
}

bool __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem(struct w_steam_iface *_this, SteamInventoryResult_t *pResultHandle, const char *pchItemToken)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem(_this->u_iface, pResultHandle, pchItemToken);
    return _ret;
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
        VTABLE_ADD_FUNC(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMINVENTORY_INTERFACE_V003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInventory_STEAMINVENTORY_INTERFACE_V003_vtable, 38, "STEAMINVENTORY_INTERFACE_V003");
    r->u_iface = u_iface;
    return r;
}

