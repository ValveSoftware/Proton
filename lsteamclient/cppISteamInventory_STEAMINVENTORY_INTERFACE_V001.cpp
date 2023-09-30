/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, params->pOutItemsArray, params->punOutItemsArraySize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetAllItems( params->pResultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemsByID( params->pResultHandle, params->pInstanceIDs, params->unCountInstanceIDs );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, params->pOutBuffer, params->punOutBufferSize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->DeserializeResult( params->pOutResultHandle, params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GenerateItems( params->pResultHandle, params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( params->pResultHandle );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->AddPromoItem( params->pResultHandle, params->itemDef );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->AddPromoItems( params->pResultHandle, params->pArrayItemDefs, params->unArrayLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->ConsumeItem( params->pResultHandle, params->itemConsume, params->unQuantity );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->ExchangeItems( params->pResultHandle, params->pArrayGenerate, params->punArrayGenerateQuantity, params->unArrayGenerateLength, params->pArrayDestroy, params->punArrayDestroyQuantity, params->unArrayDestroyLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( params->pResultHandle, params->dropListDefinition );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TradeItems( params->pResultHandle, params->steamIDTradePartner, params->pArrayGive, params->pArrayGiveQuantity, params->nArrayGiveLength, params->pArrayGet, params->pArrayGetQuantity, params->nArrayGetLength );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( params->pItemDefIDs, params->punItemDefIDsArraySize );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
    return 0;
}

NTSTATUS ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs( void *args )
{
    struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *params = (struct ISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *)args;
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, params->pItemDefIDs, params->punItemDefIDsArraySize );
    return 0;
}

