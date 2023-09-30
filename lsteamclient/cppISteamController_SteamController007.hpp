/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamController_SteamController007.h"

struct u_ISteamController_SteamController007
{
#ifdef __cplusplus
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual int32_t GetConnectedControllers( uint64_t * ) = 0;
    virtual uint64_t GetActionSetHandle( const char * ) = 0;
    virtual void ActivateActionSet( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetCurrentActionSet( uint64_t ) = 0;
    virtual void ActivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateActionSetLayer( uint64_t, uint64_t ) = 0;
    virtual void DeactivateAllActionSetLayers( uint64_t ) = 0;
    virtual int32_t GetActiveActionSetLayers( uint64_t, uint64_t * ) = 0;
    virtual uint64_t GetDigitalActionHandle( const char * ) = 0;
    virtual InputDigitalActionData_t GetDigitalActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetDigitalActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual uint64_t GetAnalogActionHandle( const char * ) = 0;
    virtual InputAnalogActionData_t GetAnalogActionData( uint64_t, uint64_t ) = 0;
    virtual int32_t GetAnalogActionOrigins( uint64_t, uint64_t, uint64_t, uint32_t * ) = 0;
    virtual const char * GetGlyphForActionOrigin( uint32_t ) = 0;
    virtual const char * GetStringForActionOrigin( uint32_t ) = 0;
    virtual void StopAnalogActionMomentum( uint64_t, uint64_t ) = 0;
    virtual InputMotionData_t GetMotionData( uint64_t ) = 0;
    virtual void TriggerHapticPulse( uint64_t, uint32_t, uint16_t ) = 0;
    virtual void TriggerRepeatedHapticPulse( uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t ) = 0;
    virtual void TriggerVibration( uint64_t, uint16_t, uint16_t ) = 0;
    virtual void SetLEDColor( uint64_t, uint8_t, uint8_t, uint8_t, uint32_t ) = 0;
    virtual bool ShowBindingPanel( uint64_t ) = 0;
    virtual uint32_t GetInputTypeForHandle( uint64_t ) = 0;
    virtual uint64_t GetControllerForGamepadIndex( int32_t ) = 0;
    virtual int32_t GetGamepadIndexForController( uint64_t ) = 0;
    virtual const char * GetStringForXboxOrigin( uint32_t ) = 0;
    virtual const char * GetGlyphForXboxOrigin( uint32_t ) = 0;
    virtual uint32_t GetActionOriginFromXboxOrigin( uint64_t, uint32_t ) = 0;
    virtual uint32_t TranslateActionOrigin( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerBindingRevision( uint64_t, int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamController_SteamController007_Init( struct cppISteamController_SteamController007_Init_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamController_SteamController007_Shutdown( struct cppISteamController_SteamController007_Shutdown_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamController_SteamController007_RunFrame( struct cppISteamController_SteamController007_RunFrame_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamController_SteamController007_GetConnectedControllers( struct cppISteamController_SteamController007_GetConnectedControllers_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamController_SteamController007_GetActionSetHandle( struct cppISteamController_SteamController007_GetActionSetHandle_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamController_SteamController007_ActivateActionSet( struct cppISteamController_SteamController007_ActivateActionSet_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
}

void cppISteamController_SteamController007_GetCurrentActionSet( struct cppISteamController_SteamController007_GetCurrentActionSet_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
}

void cppISteamController_SteamController007_ActivateActionSetLayer( struct cppISteamController_SteamController007_ActivateActionSetLayer_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->ActivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
}

void cppISteamController_SteamController007_DeactivateActionSetLayer( struct cppISteamController_SteamController007_DeactivateActionSetLayer_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
}

void cppISteamController_SteamController007_DeactivateAllActionSetLayers( struct cppISteamController_SteamController007_DeactivateAllActionSetLayers_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->controllerHandle );
}

void cppISteamController_SteamController007_GetActiveActionSetLayers( struct cppISteamController_SteamController007_GetActiveActionSetLayers_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->controllerHandle, params->handlesOut );
}

void cppISteamController_SteamController007_GetDigitalActionHandle( struct cppISteamController_SteamController007_GetDigitalActionHandle_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamController_SteamController007_GetDigitalActionData( struct cppISteamController_SteamController007_GetDigitalActionData_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
}

void cppISteamController_SteamController007_GetDigitalActionOrigins( struct cppISteamController_SteamController007_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamController_SteamController007_GetAnalogActionHandle( struct cppISteamController_SteamController007_GetAnalogActionHandle_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamController_SteamController007_GetAnalogActionData( struct cppISteamController_SteamController007_GetAnalogActionData_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
}

void cppISteamController_SteamController007_GetAnalogActionOrigins( struct cppISteamController_SteamController007_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamController_SteamController007_GetStringForActionOrigin( struct cppISteamController_SteamController007_GetStringForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

void cppISteamController_SteamController007_StopAnalogActionMomentum( struct cppISteamController_SteamController007_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
}

void cppISteamController_SteamController007_GetMotionData( struct cppISteamController_SteamController007_GetMotionData_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
}

void cppISteamController_SteamController007_TriggerHapticPulse( struct cppISteamController_SteamController007_TriggerHapticPulse_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamController_SteamController007_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController007_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamController_SteamController007_TriggerVibration( struct cppISteamController_SteamController007_TriggerVibration_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamController_SteamController007_SetLEDColor( struct cppISteamController_SteamController007_SetLEDColor_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamController_SteamController007_ShowBindingPanel( struct cppISteamController_SteamController007_ShowBindingPanel_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
}

void cppISteamController_SteamController007_GetInputTypeForHandle( struct cppISteamController_SteamController007_GetInputTypeForHandle_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->controllerHandle );
}

void cppISteamController_SteamController007_GetControllerForGamepadIndex( struct cppISteamController_SteamController007_GetControllerForGamepadIndex_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamController_SteamController007_GetGamepadIndexForController( struct cppISteamController_SteamController007_GetGamepadIndexForController_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
}

void cppISteamController_SteamController007_GetStringForXboxOrigin( struct cppISteamController_SteamController007_GetStringForXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
}

void cppISteamController_SteamController007_GetActionOriginFromXboxOrigin( struct cppISteamController_SteamController007_GetActionOriginFromXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->controllerHandle, params->eOrigin );
}

void cppISteamController_SteamController007_TranslateActionOrigin( struct cppISteamController_SteamController007_TranslateActionOrigin_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
}

void cppISteamController_SteamController007_GetControllerBindingRevision( struct cppISteamController_SteamController007_GetControllerBindingRevision_params *params )
{
    struct u_ISteamController_SteamController007 *iface = (struct u_ISteamController_SteamController007 *)params->linux_side;
    params->_ret = iface->GetControllerBindingRevision( params->controllerHandle, params->pMajor, params->pMinor );
}

