/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems(struct w_steam_iface *_this, int32_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32_t *punOutItemsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .pOutItemsArray = pOutItemsArray,
        .punOutItemsArraySize = punOutItemsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID(struct w_steam_iface *_this, int32_t resultHandle, CSteamID steamIDExpected)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .steamIDExpected = steamIDExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID, &params );
    return params._ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult, &params );
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems(struct w_steam_iface *_this, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID(struct w_steam_iface *_this, int32_t *pResultHandle, const uint64_t *pInstanceIDs, uint32_t unCountInstanceIDs)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pInstanceIDs = pInstanceIDs,
        .unCountInstanceIDs = unCountInstanceIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult(struct w_steam_iface *_this, int32_t resultHandle, void *pOutBuffer, uint32_t *punOutBufferSize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .pOutBuffer = pOutBuffer,
        .punOutBufferSize = punOutBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult(struct w_steam_iface *_this, int32_t *pOutResultHandle, const void *pBuffer, uint32_t unBufferSize, int8_t bRESERVED_MUST_BE_FALSE)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params params =
    {
        .linux_side = _this->u_iface,
        .pOutResultHandle = pOutResultHandle,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .bRESERVED_MUST_BE_FALSE = bRESERVED_MUST_BE_FALSE,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayItemDefs, const uint32_t *punArrayQuantity, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayItemDefs = pArrayItemDefs,
        .punArrayQuantity = punArrayQuantity,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems(struct w_steam_iface *_this, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem(struct w_steam_iface *_this, int32_t *pResultHandle, int32_t itemDef)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemDef = itemDef,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayItemDefs, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayItemDefs = pArrayItemDefs,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem(struct w_steam_iface *_this, int32_t *pResultHandle, uint64_t itemConsume, uint32_t unQuantity)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemConsume = itemConsume,
        .unQuantity = unQuantity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayGenerate, const uint32_t *punArrayGenerateQuantity, uint32_t unArrayGenerateLength, const uint64_t *pArrayDestroy, const uint32_t *punArrayDestroyQuantity, uint32_t unArrayDestroyLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayGenerate = pArrayGenerate,
        .punArrayGenerateQuantity = punArrayGenerateQuantity,
        .unArrayGenerateLength = unArrayGenerateLength,
        .pArrayDestroy = pArrayDestroy,
        .punArrayDestroyQuantity = punArrayDestroyQuantity,
        .unArrayDestroyLength = unArrayDestroyLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity(struct w_steam_iface *_this, int32_t *pResultHandle, uint64_t itemIdSource, uint32_t unQuantity, uint64_t itemIdDest)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemIdSource = itemIdSource,
        .unQuantity = unQuantity,
        .itemIdDest = itemIdDest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity, &params );
    return params._ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat, &params );
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop(struct w_steam_iface *_this, int32_t *pResultHandle, int32_t dropListDefinition)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .dropListDefinition = dropListDefinition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems(struct w_steam_iface *_this, int32_t *pResultHandle, CSteamID steamIDTradePartner, const uint64_t *pArrayGive, const uint32_t *pArrayGiveQuantity, uint32_t nArrayGiveLength, const uint64_t *pArrayGet, const uint32_t *pArrayGetQuantity, uint32_t nArrayGetLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .steamIDTradePartner = steamIDTradePartner,
        .pArrayGive = pArrayGive,
        .pArrayGiveQuantity = pArrayGiveQuantity,
        .nArrayGiveLength = nArrayGiveLength,
        .pArrayGet = pArrayGet,
        .pArrayGetQuantity = pArrayGetQuantity,
        .nArrayGetLength = nArrayGetLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs(struct w_steam_iface *_this, int32_t *pItemDefIDs, uint32_t *punItemDefIDsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .pItemDefIDs = pItemDefIDs,
        .punItemDefIDsArraySize = punItemDefIDsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty(struct w_steam_iface *_this, int32_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32_t *punValueBufferSizeOut)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params params =
    {
        .linux_side = _this->u_iface,
        .iDefinition = iDefinition,
        .pchPropertyName = pchPropertyName,
        .pchValueBuffer = pchValueBuffer,
        .punValueBufferSizeOut = punValueBufferSizeOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs(struct w_steam_iface *_this, CSteamID steamID, int32_t *pItemDefIDs, uint32_t *punItemDefIDsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pItemDefIDs = pItemDefIDs,
        .punItemDefIDsArraySize = punItemDefIDsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs, &params );
    return params._ret;
}

extern vtable_ptr winISteamInventory_STEAMINVENTORY_INTERFACE_V001_vtable;

DEFINE_RTTI_DATA0(winISteamInventory_STEAMINVENTORY_INTERFACE_V001, 0, ".?AVISteamInventory@@")

__ASM_BLOCK_BEGIN(winISteamInventory_STEAMINVENTORY_INTERFACE_V001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMINVENTORY_INTERFACE_V001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInventory_STEAMINVENTORY_INTERFACE_V001_vtable, 24, "STEAMINVENTORY_INTERFACE_V001");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems(struct w_steam_iface *_this, int32_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32_t *punOutItemsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .pOutItemsArray = pOutItemsArray,
        .punOutItemsArraySize = punOutItemsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty(struct w_steam_iface *_this, int32_t resultHandle, uint32_t unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32_t *punValueBufferSizeOut)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .unItemIndex = unItemIndex,
        .pchPropertyName = pchPropertyName,
        .pchValueBuffer = pchValueBuffer,
        .punValueBufferSizeOut = punValueBufferSizeOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty, &params );
    return params._ret;
}

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID(struct w_steam_iface *_this, int32_t resultHandle, CSteamID steamIDExpected)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .steamIDExpected = steamIDExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID, &params );
    return params._ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult, &params );
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems(struct w_steam_iface *_this, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID(struct w_steam_iface *_this, int32_t *pResultHandle, const uint64_t *pInstanceIDs, uint32_t unCountInstanceIDs)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pInstanceIDs = pInstanceIDs,
        .unCountInstanceIDs = unCountInstanceIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult(struct w_steam_iface *_this, int32_t resultHandle, void *pOutBuffer, uint32_t *punOutBufferSize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .pOutBuffer = pOutBuffer,
        .punOutBufferSize = punOutBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult(struct w_steam_iface *_this, int32_t *pOutResultHandle, const void *pBuffer, uint32_t unBufferSize, int8_t bRESERVED_MUST_BE_FALSE)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult_params params =
    {
        .linux_side = _this->u_iface,
        .pOutResultHandle = pOutResultHandle,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .bRESERVED_MUST_BE_FALSE = bRESERVED_MUST_BE_FALSE,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayItemDefs, const uint32_t *punArrayQuantity, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayItemDefs = pArrayItemDefs,
        .punArrayQuantity = punArrayQuantity,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems(struct w_steam_iface *_this, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem(struct w_steam_iface *_this, int32_t *pResultHandle, int32_t itemDef)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemDef = itemDef,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayItemDefs, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayItemDefs = pArrayItemDefs,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem(struct w_steam_iface *_this, int32_t *pResultHandle, uint64_t itemConsume, uint32_t unQuantity)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemConsume = itemConsume,
        .unQuantity = unQuantity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayGenerate, const uint32_t *punArrayGenerateQuantity, uint32_t unArrayGenerateLength, const uint64_t *pArrayDestroy, const uint32_t *punArrayDestroyQuantity, uint32_t unArrayDestroyLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayGenerate = pArrayGenerate,
        .punArrayGenerateQuantity = punArrayGenerateQuantity,
        .unArrayGenerateLength = unArrayGenerateLength,
        .pArrayDestroy = pArrayDestroy,
        .punArrayDestroyQuantity = punArrayDestroyQuantity,
        .unArrayDestroyLength = unArrayDestroyLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity(struct w_steam_iface *_this, int32_t *pResultHandle, uint64_t itemIdSource, uint32_t unQuantity, uint64_t itemIdDest)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemIdSource = itemIdSource,
        .unQuantity = unQuantity,
        .itemIdDest = itemIdDest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity, &params );
    return params._ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat, &params );
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop(struct w_steam_iface *_this, int32_t *pResultHandle, int32_t dropListDefinition)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .dropListDefinition = dropListDefinition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems(struct w_steam_iface *_this, int32_t *pResultHandle, CSteamID steamIDTradePartner, const uint64_t *pArrayGive, const uint32_t *pArrayGiveQuantity, uint32_t nArrayGiveLength, const uint64_t *pArrayGet, const uint32_t *pArrayGetQuantity, uint32_t nArrayGetLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .steamIDTradePartner = steamIDTradePartner,
        .pArrayGive = pArrayGive,
        .pArrayGiveQuantity = pArrayGiveQuantity,
        .nArrayGiveLength = nArrayGiveLength,
        .pArrayGet = pArrayGet,
        .pArrayGetQuantity = pArrayGetQuantity,
        .nArrayGetLength = nArrayGetLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs(struct w_steam_iface *_this, int32_t *pItemDefIDs, uint32_t *punItemDefIDsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .pItemDefIDs = pItemDefIDs,
        .punItemDefIDsArraySize = punItemDefIDsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty(struct w_steam_iface *_this, int32_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32_t *punValueBufferSizeOut)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty_params params =
    {
        .linux_side = _this->u_iface,
        .iDefinition = iDefinition,
        .pchPropertyName = pchPropertyName,
        .pchValueBuffer = pchValueBuffer,
        .punValueBufferSizeOut = punValueBufferSizeOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs(struct w_steam_iface *_this, CSteamID steamID, int32_t *pItemDefIDs, uint32_t *punItemDefIDsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pItemDefIDs = pItemDefIDs,
        .punItemDefIDsArraySize = punItemDefIDsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase(struct w_steam_iface *_this, const int32_t *pArrayItemDefs, const uint32_t *punArrayQuantity, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase_params params =
    {
        .linux_side = _this->u_iface,
        .pArrayItemDefs = pArrayItemDefs,
        .punArrayQuantity = punArrayQuantity,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices, &params );
    return params._ret;
}

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices(struct w_steam_iface *_this, int32_t *pArrayItemDefs, uint64_t *pPrices, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices_params params =
    {
        .linux_side = _this->u_iface,
        .pArrayItemDefs = pArrayItemDefs,
        .pPrices = pPrices,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice(struct w_steam_iface *_this, int32_t iDefinition, uint64_t *pPrice)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice_params params =
    {
        .linux_side = _this->u_iface,
        .iDefinition = iDefinition,
        .pPrice = pPrice,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .pchPropertyValue = pchPropertyValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, int8_t bValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, int64_t nValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .nValue = nValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, float flValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .flValue = flValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties(struct w_steam_iface *_this, uint64_t handle, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties, &params );
    return params._ret;
}

extern vtable_ptr winISteamInventory_STEAMINVENTORY_INTERFACE_V002_vtable;

DEFINE_RTTI_DATA0(winISteamInventory_STEAMINVENTORY_INTERFACE_V002, 0, ".?AVISteamInventory@@")

__ASM_BLOCK_BEGIN(winISteamInventory_STEAMINVENTORY_INTERFACE_V002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMINVENTORY_INTERFACE_V002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInventory_STEAMINVENTORY_INTERFACE_V002_vtable, 37, "STEAMINVENTORY_INTERFACE_V002");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems(struct w_steam_iface *_this, int32_t resultHandle, SteamItemDetails_t *pOutItemsArray, uint32_t *punOutItemsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .pOutItemsArray = pOutItemsArray,
        .punOutItemsArraySize = punOutItemsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty(struct w_steam_iface *_this, int32_t resultHandle, uint32_t unItemIndex, const char *pchPropertyName, char *pchValueBuffer, uint32_t *punValueBufferSizeOut)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .unItemIndex = unItemIndex,
        .pchPropertyName = pchPropertyName,
        .pchValueBuffer = pchValueBuffer,
        .punValueBufferSizeOut = punValueBufferSizeOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty, &params );
    return params._ret;
}

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID(struct w_steam_iface *_this, int32_t resultHandle, CSteamID steamIDExpected)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .steamIDExpected = steamIDExpected,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID, &params );
    return params._ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult(struct w_steam_iface *_this, int32_t resultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult, &params );
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems(struct w_steam_iface *_this, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID(struct w_steam_iface *_this, int32_t *pResultHandle, const uint64_t *pInstanceIDs, uint32_t unCountInstanceIDs)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pInstanceIDs = pInstanceIDs,
        .unCountInstanceIDs = unCountInstanceIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult(struct w_steam_iface *_this, int32_t resultHandle, void *pOutBuffer, uint32_t *punOutBufferSize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult_params params =
    {
        .linux_side = _this->u_iface,
        .resultHandle = resultHandle,
        .pOutBuffer = pOutBuffer,
        .punOutBufferSize = punOutBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult(struct w_steam_iface *_this, int32_t *pOutResultHandle, const void *pBuffer, uint32_t unBufferSize, int8_t bRESERVED_MUST_BE_FALSE)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult_params params =
    {
        .linux_side = _this->u_iface,
        .pOutResultHandle = pOutResultHandle,
        .pBuffer = pBuffer,
        .unBufferSize = unBufferSize,
        .bRESERVED_MUST_BE_FALSE = bRESERVED_MUST_BE_FALSE,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayItemDefs, const uint32_t *punArrayQuantity, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayItemDefs = pArrayItemDefs,
        .punArrayQuantity = punArrayQuantity,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems(struct w_steam_iface *_this, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem(struct w_steam_iface *_this, int32_t *pResultHandle, int32_t itemDef)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemDef = itemDef,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayItemDefs, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayItemDefs = pArrayItemDefs,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem(struct w_steam_iface *_this, int32_t *pResultHandle, uint64_t itemConsume, uint32_t unQuantity)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemConsume = itemConsume,
        .unQuantity = unQuantity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems(struct w_steam_iface *_this, int32_t *pResultHandle, const int32_t *pArrayGenerate, const uint32_t *punArrayGenerateQuantity, uint32_t unArrayGenerateLength, const uint64_t *pArrayDestroy, const uint32_t *punArrayDestroyQuantity, uint32_t unArrayDestroyLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pArrayGenerate = pArrayGenerate,
        .punArrayGenerateQuantity = punArrayGenerateQuantity,
        .unArrayGenerateLength = unArrayGenerateLength,
        .pArrayDestroy = pArrayDestroy,
        .punArrayDestroyQuantity = punArrayDestroyQuantity,
        .unArrayDestroyLength = unArrayDestroyLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity(struct w_steam_iface *_this, int32_t *pResultHandle, uint64_t itemIdSource, uint32_t unQuantity, uint64_t itemIdDest)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .itemIdSource = itemIdSource,
        .unQuantity = unQuantity,
        .itemIdDest = itemIdDest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity, &params );
    return params._ret;
}

void __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat, &params );
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop(struct w_steam_iface *_this, int32_t *pResultHandle, int32_t dropListDefinition)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .dropListDefinition = dropListDefinition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems(struct w_steam_iface *_this, int32_t *pResultHandle, CSteamID steamIDTradePartner, const uint64_t *pArrayGive, const uint32_t *pArrayGiveQuantity, uint32_t nArrayGiveLength, const uint64_t *pArrayGet, const uint32_t *pArrayGetQuantity, uint32_t nArrayGetLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .steamIDTradePartner = steamIDTradePartner,
        .pArrayGive = pArrayGive,
        .pArrayGiveQuantity = pArrayGiveQuantity,
        .nArrayGiveLength = nArrayGiveLength,
        .pArrayGet = pArrayGet,
        .pArrayGetQuantity = pArrayGetQuantity,
        .nArrayGetLength = nArrayGetLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs(struct w_steam_iface *_this, int32_t *pItemDefIDs, uint32_t *punItemDefIDsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .pItemDefIDs = pItemDefIDs,
        .punItemDefIDsArraySize = punItemDefIDsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty(struct w_steam_iface *_this, int32_t iDefinition, const char *pchPropertyName, char *pchValueBuffer, uint32_t *punValueBufferSizeOut)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty_params params =
    {
        .linux_side = _this->u_iface,
        .iDefinition = iDefinition,
        .pchPropertyName = pchPropertyName,
        .pchValueBuffer = pchValueBuffer,
        .punValueBufferSizeOut = punValueBufferSizeOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs(struct w_steam_iface *_this, CSteamID steamID, int32_t *pItemDefIDs, uint32_t *punItemDefIDsArraySize)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .pItemDefIDs = pItemDefIDs,
        .punItemDefIDsArraySize = punItemDefIDsArraySize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase(struct w_steam_iface *_this, const int32_t *pArrayItemDefs, const uint32_t *punArrayQuantity, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase_params params =
    {
        .linux_side = _this->u_iface,
        .pArrayItemDefs = pArrayItemDefs,
        .punArrayQuantity = punArrayQuantity,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices, &params );
    return params._ret;
}

uint32_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices(struct w_steam_iface *_this, int32_t *pArrayItemDefs, uint64_t *pCurrentPrices, uint64_t *pBasePrices, uint32_t unArrayLength)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices_params params =
    {
        .linux_side = _this->u_iface,
        .pArrayItemDefs = pArrayItemDefs,
        .pCurrentPrices = pCurrentPrices,
        .pBasePrices = pBasePrices,
        .unArrayLength = unArrayLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice(struct w_steam_iface *_this, int32_t iDefinition, uint64_t *pCurrentPrice, uint64_t *pBasePrice)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice_params params =
    {
        .linux_side = _this->u_iface,
        .iDefinition = iDefinition,
        .pCurrentPrice = pCurrentPrice,
        .pBasePrice = pBasePrice,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice, &params );
    return params._ret;
}

uint64_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties(struct w_steam_iface *_this)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, const char *pchPropertyValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .pchPropertyValue = pchPropertyValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, int8_t bValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .bValue = bValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, int64_t nValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .nValue = nValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4(struct w_steam_iface *_this, uint64_t handle, uint64_t nItemID, const char *pchPropertyName, float flValue)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .nItemID = nItemID,
        .pchPropertyName = pchPropertyName,
        .flValue = flValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties(struct w_steam_iface *_this, uint64_t handle, int32_t *pResultHandle)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pResultHandle = pResultHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties, &params );
    return params._ret;
}

int8_t __thiscall winISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem(struct w_steam_iface *_this, int32_t *pResultHandle, const char *pchItemToken)
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem_params params =
    {
        .linux_side = _this->u_iface,
        .pResultHandle = pResultHandle,
        .pchItemToken = pchItemToken,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamInventory_STEAMINVENTORY_INTERFACE_V003_vtable;

DEFINE_RTTI_DATA0(winISteamInventory_STEAMINVENTORY_INTERFACE_V003, 0, ".?AVISteamInventory@@")

__ASM_BLOCK_BEGIN(winISteamInventory_STEAMINVENTORY_INTERFACE_V003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamInventory_STEAMINVENTORY_INTERFACE_V003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMINVENTORY_INTERFACE_V003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInventory_STEAMINVENTORY_INTERFACE_V003_vtable, 38, "STEAMINVENTORY_INTERFACE_V003");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamInventory_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamInventory_STEAMINVENTORY_INTERFACE_V001_rtti( base );
    init_winISteamInventory_STEAMINVENTORY_INTERFACE_V002_rtti( base );
    init_winISteamInventory_STEAMINVENTORY_INTERFACE_V003_rtti( base );
#endif /* __x86_64__ */
}
