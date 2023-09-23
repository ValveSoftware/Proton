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

struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001
{
#ifdef __cplusplus
    virtual uint32_t GetResultStatus( int32_t ) = 0;
    virtual bool GetResultItems( int32_t, SteamItemDetails_t *, uint32_t * ) = 0;
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
#endif /* __cplusplus */
};

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultStatus_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultStatus( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultItems( params->resultHandle, params->pOutItemsArray, params->punOutItemsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetResultTimestamp_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetResultTimestamp( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_CheckResultSteamID_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->CheckResultSteamID( params->resultHandle, params->steamIDExpected );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DestroyResult_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    iface->DestroyResult( params->resultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetAllItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetAllItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemsByID_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemsByID( params->pResultHandle, params->pInstanceIDs, params->unCountInstanceIDs );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SerializeResult_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->SerializeResult( params->resultHandle, params->pOutBuffer, params->punOutBufferSize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_DeserializeResult_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->DeserializeResult( params->pOutResultHandle, params->pBuffer, params->unBufferSize, params->bRESERVED_MUST_BE_FALSE );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GenerateItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GenerateItems( params->pResultHandle, params->pArrayItemDefs, params->punArrayQuantity, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GrantPromoItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GrantPromoItems( params->pResultHandle );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItem_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->AddPromoItem( params->pResultHandle, params->itemDef );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_AddPromoItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->AddPromoItems( params->pResultHandle, params->pArrayItemDefs, params->unArrayLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ConsumeItem_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->ConsumeItem( params->pResultHandle, params->itemConsume, params->unQuantity );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_ExchangeItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->ExchangeItems( params->pResultHandle, params->pArrayGenerate, params->punArrayGenerateQuantity, params->unArrayGenerateLength, params->pArrayDestroy, params->punArrayDestroyQuantity, params->unArrayDestroyLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TransferItemQuantity_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TransferItemQuantity( params->pResultHandle, params->itemIdSource, params->unQuantity, params->itemIdDest );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_SendItemDropHeartbeat_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    iface->SendItemDropHeartbeat(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TriggerItemDrop_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TriggerItemDrop( params->pResultHandle, params->dropListDefinition );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_TradeItems_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->TradeItems( params->pResultHandle, params->steamIDTradePartner, params->pArrayGive, params->pArrayGiveQuantity, params->nArrayGiveLength, params->pArrayGet, params->pArrayGetQuantity, params->nArrayGetLength );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_LoadItemDefinitions_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->LoadItemDefinitions(  );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionIDs_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionIDs( params->pItemDefIDs, params->punItemDefIDsArraySize );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetItemDefinitionProperty_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetItemDefinitionProperty( params->iDefinition, params->pchPropertyName, params->pchValueBuffer, params->punValueBufferSizeOut );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_RequestEligiblePromoItemDefinitionsIDs_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->RequestEligiblePromoItemDefinitionsIDs( params->steamID );
}

void cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs( struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001_GetEligiblePromoItemDefinitionIDs_params *params )
{
    struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *iface = (struct cppISteamInventory_STEAMINVENTORY_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->GetEligiblePromoItemDefinitionIDs( params->steamID, params->pItemDefIDs, params->punItemDefIDsArraySize );
}

#ifdef __cplusplus
}
#endif
