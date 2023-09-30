/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamController_SteamController006.h"

struct u_ISteamController_SteamController006
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual ControllerDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual ControllerAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual ControllerMotionData_t GetMotionData( uint64_t ) = 0;
    virtual bool ShowDigitalActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual bool ShowAnalogActionOrigins( uint64_t, uint64_t, float, float, float ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamController_SteamController006_Init( struct cppISteamController_SteamController006_Init_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamController_SteamController006_Shutdown( struct cppISteamController_SteamController006_Shutdown_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamController_SteamController006_RunFrame( struct cppISteamController_SteamController006_RunFrame_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamController_SteamController006_GetConnectedControllers( struct cppISteamController_SteamController006_GetConnectedControllers_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamController_SteamController006_ShowBindingPanel( struct cppISteamController_SteamController006_ShowBindingPanel_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
}

void cppISteamController_SteamController006_GetActionSetHandle( struct cppISteamController_SteamController006_GetActionSetHandle_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamController_SteamController006_ActivateActionSet( struct cppISteamController_SteamController006_ActivateActionSet_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
}

void cppISteamController_SteamController006_GetCurrentActionSet( struct cppISteamController_SteamController006_GetCurrentActionSet_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
}

void cppISteamController_SteamController006_ActivateActionSetLayer( struct cppISteamController_SteamController006_ActivateActionSetLayer_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->ActivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
}

void cppISteamController_SteamController006_DeactivateActionSetLayer( struct cppISteamController_SteamController006_DeactivateActionSetLayer_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
}

void cppISteamController_SteamController006_DeactivateAllActionSetLayers( struct cppISteamController_SteamController006_DeactivateAllActionSetLayers_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->controllerHandle );
}

void cppISteamController_SteamController006_GetActiveActionSetLayers( struct cppISteamController_SteamController006_GetActiveActionSetLayers_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->controllerHandle, params->handlesOut );
}

void cppISteamController_SteamController006_GetDigitalActionHandle( struct cppISteamController_SteamController006_GetDigitalActionHandle_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamController_SteamController006_GetDigitalActionData( struct cppISteamController_SteamController006_GetDigitalActionData_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
}

void cppISteamController_SteamController006_GetDigitalActionOrigins( struct cppISteamController_SteamController006_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamController_SteamController006_GetAnalogActionHandle( struct cppISteamController_SteamController006_GetAnalogActionHandle_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamController_SteamController006_GetAnalogActionData( struct cppISteamController_SteamController006_GetAnalogActionData_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
}

void cppISteamController_SteamController006_GetAnalogActionOrigins( struct cppISteamController_SteamController006_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamController_SteamController006_StopAnalogActionMomentum( struct cppISteamController_SteamController006_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
}

void cppISteamController_SteamController006_TriggerHapticPulse( struct cppISteamController_SteamController006_TriggerHapticPulse_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamController_SteamController006_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController006_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamController_SteamController006_TriggerVibration( struct cppISteamController_SteamController006_TriggerVibration_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamController_SteamController006_SetLEDColor( struct cppISteamController_SteamController006_SetLEDColor_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamController_SteamController006_GetGamepadIndexForController( struct cppISteamController_SteamController006_GetGamepadIndexForController_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
}

void cppISteamController_SteamController006_GetControllerForGamepadIndex( struct cppISteamController_SteamController006_GetControllerForGamepadIndex_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamController_SteamController006_GetMotionData( struct cppISteamController_SteamController006_GetMotionData_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
}

void cppISteamController_SteamController006_ShowDigitalActionOrigins( struct cppISteamController_SteamController006_ShowDigitalActionOrigins_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->ShowDigitalActionOrigins( params->controllerHandle, params->digitalActionHandle, params->flScale, params->flXPosition, params->flYPosition );
}

void cppISteamController_SteamController006_ShowAnalogActionOrigins( struct cppISteamController_SteamController006_ShowAnalogActionOrigins_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->ShowAnalogActionOrigins( params->controllerHandle, params->analogActionHandle, params->flScale, params->flXPosition, params->flYPosition );
}

void cppISteamController_SteamController006_GetStringForActionOrigin( struct cppISteamController_SteamController006_GetStringForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

void cppISteamController_SteamController006_GetInputTypeForHandle( struct cppISteamController_SteamController006_GetInputTypeForHandle_params *params )
{
    struct u_ISteamController_SteamController006 *iface = (struct u_ISteamController_SteamController006 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->controllerHandle );
}

