#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V002.h"
void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultStatus( (SteamInventoryResult_t)params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultItems( (SteamInventoryResult_t)params->resultHandle, (SteamItemDetails_t *)params->pOutItemsArray, (uint32 *)params->punOutItemsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultItemProperty( (SteamInventoryResult_t)params->resultHandle, (uint32)params->unItemIndex, (const char *)params->pchPropertyName, (char *)params->pchValueBuffer, (uint32 *)params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultTimestamp( (SteamInventoryResult_t)params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->CheckResultSteamID( (SteamInventoryResult_t)params->resultHandle, (CSteamID)params->steamIDExpected );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult_params *params )
{
    ((ISteamInventory*)params->linux_side)->DestroyResult( (SteamInventoryResult_t)params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetAllItems( (SteamInventoryResult_t *)params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemsByID( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemInstanceID_t *)params->pInstanceIDs, (uint32)params->unCountInstanceIDs );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SerializeResult( (SteamInventoryResult_t)params->resultHandle, (void *)params->pOutBuffer, (uint32 *)params->punOutBufferSize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->DeserializeResult( (SteamInventoryResult_t *)params->pOutResultHandle, (const void *)params->pBuffer, (uint32)params->unBufferSize, (bool)params->bRESERVED_MUST_BE_FALSE );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GenerateItems( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemDef_t *)params->pArrayItemDefs, (const uint32 *)params->punArrayQuantity, (uint32)params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GrantPromoItems( (SteamInventoryResult_t *)params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->AddPromoItem( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemDef_t)params->itemDef );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->AddPromoItems( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemDef_t *)params->pArrayItemDefs, (uint32)params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->ConsumeItem( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemInstanceID_t)params->itemConsume, (uint32)params->unQuantity );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->ExchangeItems( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemDef_t *)params->pArrayGenerate, (const uint32 *)params->punArrayGenerateQuantity, (uint32)params->unArrayGenerateLength, (const SteamItemInstanceID_t *)params->pArrayDestroy, (const uint32 *)params->punArrayDestroyQuantity, (uint32)params->unArrayDestroyLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->TransferItemQuantity( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemInstanceID_t)params->itemIdSource, (uint32)params->unQuantity, (SteamItemInstanceID_t)params->itemIdDest );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat_params *params )
{
    ((ISteamInventory*)params->linux_side)->SendItemDropHeartbeat(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->TriggerItemDrop( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemDef_t)params->dropListDefinition );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->TradeItems( (SteamInventoryResult_t *)params->pResultHandle, (CSteamID)params->steamIDTradePartner, (const SteamItemInstanceID_t *)params->pArrayGive, (const uint32 *)params->pArrayGiveQuantity, (uint32)params->nArrayGiveLength, (const SteamItemInstanceID_t *)params->pArrayGet, (const uint32 *)params->pArrayGetQuantity, (uint32)params->nArrayGetLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->LoadItemDefinitions(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemDefinitionIDs( (SteamItemDef_t *)params->pItemDefIDs, (uint32 *)params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemDefinitionProperty( (SteamItemDef_t)params->iDefinition, (const char *)params->pchPropertyName, (char *)params->pchValueBuffer, (uint32 *)params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->RequestEligiblePromoItemDefinitionsIDs( (CSteamID)params->steamID );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetEligiblePromoItemDefinitionIDs( (CSteamID)params->steamID, (SteamItemDef_t *)params->pItemDefIDs, (uint32 *)params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->StartPurchase( (const SteamItemDef_t *)params->pArrayItemDefs, (const uint32 *)params->punArrayQuantity, (uint32)params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->RequestPrices(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetNumItemsWithPrices(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemsWithPrices( (SteamItemDef_t *)params->pArrayItemDefs, (uint64 *)params->pPrices, (uint32)params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemPrice( (SteamItemDef_t)params->iDefinition, (uint64 *)params->pPrice );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->StartUpdateProperties(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->RemoveProperty( (SteamInventoryUpdateHandle_t)params->handle, (SteamItemInstanceID_t)params->nItemID, (const char *)params->pchPropertyName );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SetProperty( (SteamInventoryUpdateHandle_t)params->handle, (SteamItemInstanceID_t)params->nItemID, (const char *)params->pchPropertyName, (const char *)params->pchPropertyValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SetProperty( (SteamInventoryUpdateHandle_t)params->handle, (SteamItemInstanceID_t)params->nItemID, (const char *)params->pchPropertyName, (bool)params->bValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SetProperty( (SteamInventoryUpdateHandle_t)params->handle, (SteamItemInstanceID_t)params->nItemID, (const char *)params->pchPropertyName, (int64)params->nValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SetProperty( (SteamInventoryUpdateHandle_t)params->handle, (SteamItemInstanceID_t)params->nItemID, (const char *)params->pchPropertyName, (float)params->flValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SubmitUpdateProperties( (SteamInventoryUpdateHandle_t)params->handle, (SteamInventoryResult_t *)params->pResultHandle );
}

#ifdef __cplusplus
}
#endif
