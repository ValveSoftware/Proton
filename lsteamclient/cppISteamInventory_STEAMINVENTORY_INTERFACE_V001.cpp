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
void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultStatus( (SteamInventoryResult_t)params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultItems( (SteamInventoryResult_t)params->resultHandle, (SteamItemDetails_t *)params->pOutItemsArray, (uint32 *)params->punOutItemsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetResultTimestamp( (SteamInventoryResult_t)params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->CheckResultSteamID( (SteamInventoryResult_t)params->resultHandle, (CSteamID)params->steamIDExpected );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *params )
{
    ((ISteamInventory*)params->linux_side)->DestroyResult( (SteamInventoryResult_t)params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetAllItems( (SteamInventoryResult_t *)params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemsByID( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemInstanceID_t *)params->pInstanceIDs, (uint32)params->unCountInstanceIDs );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->SerializeResult( (SteamInventoryResult_t)params->resultHandle, (void *)params->pOutBuffer, (uint32 *)params->punOutBufferSize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->DeserializeResult( (SteamInventoryResult_t *)params->pOutResultHandle, (const void *)params->pBuffer, (uint32)params->unBufferSize, (bool)params->bRESERVED_MUST_BE_FALSE );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GenerateItems( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemDef_t *)params->pArrayItemDefs, (const uint32 *)params->punArrayQuantity, (uint32)params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GrantPromoItems( (SteamInventoryResult_t *)params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->AddPromoItem( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemDef_t)params->itemDef );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->AddPromoItems( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemDef_t *)params->pArrayItemDefs, (uint32)params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->ConsumeItem( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemInstanceID_t)params->itemConsume, (uint32)params->unQuantity );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->ExchangeItems( (SteamInventoryResult_t *)params->pResultHandle, (const SteamItemDef_t *)params->pArrayGenerate, (const uint32 *)params->punArrayGenerateQuantity, (uint32)params->unArrayGenerateLength, (const SteamItemInstanceID_t *)params->pArrayDestroy, (const uint32 *)params->punArrayDestroyQuantity, (uint32)params->unArrayDestroyLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->TransferItemQuantity( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemInstanceID_t)params->itemIdSource, (uint32)params->unQuantity, (SteamItemInstanceID_t)params->itemIdDest );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params *params )
{
    ((ISteamInventory*)params->linux_side)->SendItemDropHeartbeat(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->TriggerItemDrop( (SteamInventoryResult_t *)params->pResultHandle, (SteamItemDef_t)params->dropListDefinition );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->TradeItems( (SteamInventoryResult_t *)params->pResultHandle, (CSteamID)params->steamIDTradePartner, (const SteamItemInstanceID_t *)params->pArrayGive, (const uint32 *)params->pArrayGiveQuantity, (uint32)params->nArrayGiveLength, (const SteamItemInstanceID_t *)params->pArrayGet, (const uint32 *)params->pArrayGetQuantity, (uint32)params->nArrayGetLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->LoadItemDefinitions(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemDefinitionIDs( (SteamItemDef_t *)params->pItemDefIDs, (uint32 *)params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetItemDefinitionProperty( (SteamItemDef_t)params->iDefinition, (const char *)params->pchPropertyName, (char *)params->pchValueBuffer, (uint32 *)params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->RequestEligiblePromoItemDefinitionsIDs( (CSteamID)params->steamID );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *params )
{
    params->_ret = ((ISteamInventory*)params->linux_side)->GetEligiblePromoItemDefinitionIDs( (CSteamID)params->steamID, (SteamItemDef_t *)params->pItemDefIDs, (uint32 *)params->punItemDefIDsArraySize );
}

#ifdef __cplusplus
}
#endif
