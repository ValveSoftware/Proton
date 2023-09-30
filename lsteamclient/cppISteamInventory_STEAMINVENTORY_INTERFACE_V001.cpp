/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V001.h"

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, params->pOutItemsArray, params->punOutItemsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetAllItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemsByID( params->pResultHandle, params->pInstanceIDs, params->unCountInstanceIDs );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, params->pOutBuffer, params->punOutBufferSize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->DeserializeResult( params->pOutResultHandle, params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GenerateItems( params->pResultHandle, params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->AddPromoItem( params->pResultHandle, params->itemDef );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->AddPromoItems( params->pResultHandle, params->pArrayItemDefs, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->ConsumeItem( params->pResultHandle, params->itemConsume, params->unQuantity );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->ExchangeItems( params->pResultHandle, params->pArrayGenerate, params->punArrayGenerateQuantity, params->unArrayGenerateLength, params->pArrayDestroy, params->punArrayDestroyQuantity, params->unArrayDestroyLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( params->pResultHandle, params->dropListDefinition );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TradeItems( params->pResultHandle, params->steamIDTradePartner, params->pArrayGive, params->pArrayGiveQuantity, params->nArrayGiveLength, params->pArrayGet, params->pArrayGetQuantity, params->nArrayGetLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( params->pItemDefIDs, params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, params->pItemDefIDs, params->punItemDefIDsArraySize );
}

