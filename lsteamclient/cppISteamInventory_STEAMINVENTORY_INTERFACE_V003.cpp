/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamInventory_STEAMINVENTORY_INTERFACE_V003.h"

struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003
{
#ifdef __cplusplus
    virtual uint32_t GetResultStatus( int32_t ) = 0;
    virtual bool GetResultItems( int32_t, SteamItemDetails_t *, uint32_t * ) = 0;
    virtual bool GetResultItemProperty( int32_t, uint32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint32_t GetResultTimestamp( int32_t ) = 0;
    virtual bool CheckResultSteamID( int32_t, CSteamID ) = 0;
    virtual void DestroyResult( int32_t ) = 0;
    virtual bool GetAllItems( int32_t * ) = 0;
    virtual bool GetItemsByID( int32_t *, const uint64_t *, uint32_t ) = 0;
    virtual bool SerializeResult( int32_t, void *, uint32_t * ) = 0;
    virtual bool DeserializeResult( int32_t *, const void *, uint32_t, bool ) = 0;
    virtual bool GenerateItems( int32_t *, const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool GrantPromoItems( int32_t * ) = 0;
    virtual bool AddPromoItem( int32_t *, int32_t ) = 0;
    virtual bool AddPromoItems( int32_t *, const int32_t *, uint32_t ) = 0;
    virtual bool ConsumeItem( int32_t *, uint64_t, uint32_t ) = 0;
    virtual bool ExchangeItems( int32_t *, const int32_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool TransferItemQuantity( int32_t *, uint64_t, uint32_t, uint64_t ) = 0;
    virtual void SendItemDropHeartbeat(  ) = 0;
    virtual bool TriggerItemDrop( int32_t *, int32_t ) = 0;
    virtual bool TradeItems( int32_t *, CSteamID, const uint64_t *, const uint32_t *, uint32_t, const uint64_t *, const uint32_t *, uint32_t ) = 0;
    virtual bool LoadItemDefinitions(  ) = 0;
    virtual bool GetItemDefinitionIDs( int32_t *, uint32_t * ) = 0;
    virtual bool GetItemDefinitionProperty( int32_t, const char *, char *, uint32_t * ) = 0;
    virtual uint64_t RequestEligiblePromoItemDefinitionsIDs( CSteamID ) = 0;
    virtual bool GetEligiblePromoItemDefinitionIDs( CSteamID, int32_t *, uint32_t * ) = 0;
    virtual uint64_t StartPurchase( const int32_t *, const uint32_t *, uint32_t ) = 0;
    virtual uint64_t RequestPrices(  ) = 0;
    virtual uint32_t GetNumItemsWithPrices(  ) = 0;
    virtual bool GetItemsWithPrices( int32_t *, uint64_t *, uint64_t *, uint32_t ) = 0;
    virtual bool GetItemPrice( int32_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t StartUpdateProperties(  ) = 0;
    virtual bool RemoveProperty( uint64_t, uint64_t, const char * ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, const char * ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, bool ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, int64_t ) = 0;
    virtual bool SetProperty( uint64_t, uint64_t, const char *, float ) = 0;
    virtual bool SubmitUpdateProperties( uint64_t, int32_t * ) = 0;
    virtual bool InspectItem( int32_t *, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultStatus_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, params->pOutItemsArray, params->punOutItemsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultItemProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultItemProperty( params->resultHandle, params->unItemIndex, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetResultTimestamp_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_CheckResultSteamID_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DestroyResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetAllItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetAllItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsByID_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemsByID( params->pResultHandle, params->pInstanceIDs, params->unCountInstanceIDs );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SerializeResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, params->pOutBuffer, params->punOutBufferSize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_DeserializeResult_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->DeserializeResult( params->pOutResultHandle, params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GenerateItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GenerateItems( params->pResultHandle, params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GrantPromoItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->AddPromoItem( params->pResultHandle, params->itemDef );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_AddPromoItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->AddPromoItems( params->pResultHandle, params->pArrayItemDefs, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ConsumeItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->ConsumeItem( params->pResultHandle, params->itemConsume, params->unQuantity );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_ExchangeItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->ExchangeItems( params->pResultHandle, params->pArrayGenerate, params->punArrayGenerateQuantity, params->unArrayGenerateLength, params->pArrayDestroy, params->punArrayDestroyQuantity, params->unArrayDestroyLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TransferItemQuantity_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SendItemDropHeartbeat_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TriggerItemDrop_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( params->pResultHandle, params->dropListDefinition );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_TradeItems_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->TradeItems( params->pResultHandle, params->steamIDTradePartner, params->pArrayGive, params->pArrayGiveQuantity, params->nArrayGiveLength, params->pArrayGet, params->pArrayGetQuantity, params->nArrayGetLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_LoadItemDefinitions_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( params->pItemDefIDs, params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemDefinitionProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestEligiblePromoItemDefinitionsIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetEligiblePromoItemDefinitionIDs_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, params->pItemDefIDs, params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartPurchase_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->StartPurchase( params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RequestPrices_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RequestPrices(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetNumItemsWithPrices_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetNumItemsWithPrices(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemsWithPrices_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemsWithPrices( params->pArrayItemDefs, params->pCurrentPrices, params->pBasePrices, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_GetItemPrice_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->GetItemPrice( params->iDefinition, params->pCurrentPrice, params->pBasePrice );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_StartUpdateProperties_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->StartUpdateProperties(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_RemoveProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->RemoveProperty( params->handle, params->nItemID, params->pchPropertyName );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->pchPropertyValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_2_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->bValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_3_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->nValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SetProperty_4_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SetProperty( params->handle, params->nItemID, params->pchPropertyName, params->flValue );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_SubmitUpdateProperties_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->SubmitUpdateProperties( params->handle, params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V003_InspectItem_params *params )
{
    struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *iface = (struct u_ISteamInventory_STEAMINVENTORY_INTERFACE_V003 *)params->linux_side;
    params->_ret = iface->InspectItem( params->pResultHandle, params->pchItemToken );
}

