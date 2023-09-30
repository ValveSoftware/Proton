/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V002.h"

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultStatus_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, params->pOutItemsArray, params->punOutItemsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultItemProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetResultItemProperty( params->resultHandle, params->unItemIndex, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetResultTimestamp_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_CheckResultSteamID_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DestroyResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetAllItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetAllItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsByID_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetItemsByID( params->pResultHandle, params->pInstanceIDs, params->unCountInstanceIDs );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SerializeResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, params->pOutBuffer, params->punOutBufferSize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_DeserializeResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->DeserializeResult( params->pOutResultHandle, params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GenerateItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GenerateItems( params->pResultHandle, params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GrantPromoItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->AddPromoItem( params->pResultHandle, params->itemDef );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_AddPromoItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->AddPromoItems( params->pResultHandle, params->pArrayItemDefs, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ConsumeItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->ConsumeItem( params->pResultHandle, params->itemConsume, params->unQuantity );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_ExchangeItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->ExchangeItems( params->pResultHandle, params->pArrayGenerate, params->punArrayGenerateQuantity, params->unArrayGenerateLength, params->pArrayDestroy, params->punArrayDestroyQuantity, params->unArrayDestroyLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TransferItemQuantity_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SendItemDropHeartbeat_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TriggerItemDrop_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( params->pResultHandle, params->dropListDefinition );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_TradeItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->TradeItems( params->pResultHandle, params->steamIDTradePartner, params->pArrayGive, params->pArrayGiveQuantity, params->nArrayGiveLength, params->pArrayGet, params->pArrayGetQuantity, params->nArrayGetLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_LoadItemDefinitions_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( params->pItemDefIDs, params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemDefinitionProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestEligiblePromoItemDefinitionsIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetEligiblePromoItemDefinitionIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, params->pItemDefIDs, params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartPurchase_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->StartPurchase( params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RequestPrices_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->RequestPrices(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetNumItemsWithPrices_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetNumItemsWithPrices(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemsWithPrices_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetItemsWithPrices( params->pArrayItemDefs, params->pPrices, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_GetItemPrice_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetItemPrice( params->iDefinition, params->pPrice );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_StartUpdateProperties_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->StartUpdateProperties(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_RemoveProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->RemoveProperty( params->handle, params->nItemID, params->pchPropertyName );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->pchPropertyValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_2_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->bValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_3_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->nValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SetProperty_4_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->flValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V002_SubmitUpdateProperties_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->SubmitUpdateProperties( params->handle, params->pResultHandle );
}

