#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_141/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_141
#include "struct_converters.h"
#include "cppISteamController_SteamController005.h"

struct cppISteamController_SteamController005
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
#endif /* __cplusplus */
};

void cppISteamController_SteamController005_Init( struct cppISteamController_SteamController005_Init_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamController_SteamController005_Shutdown( struct cppISteamController_SteamController005_Shutdown_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamController_SteamController005_RunFrame( struct cppISteamController_SteamController005_RunFrame_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamController_SteamController005_GetConnectedControllers( struct cppISteamController_SteamController005_GetConnectedControllers_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamController_SteamController005_ShowBindingPanel( struct cppISteamController_SteamController005_ShowBindingPanel_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
}

void cppISteamController_SteamController005_GetActionSetHandle( struct cppISteamController_SteamController005_GetActionSetHandle_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamController_SteamController005_ActivateActionSet( struct cppISteamController_SteamController005_ActivateActionSet_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
}

void cppISteamController_SteamController005_GetCurrentActionSet( struct cppISteamController_SteamController005_GetCurrentActionSet_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
}

void cppISteamController_SteamController005_GetDigitalActionHandle( struct cppISteamController_SteamController005_GetDigitalActionHandle_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamController_SteamController005_GetDigitalActionData( struct cppISteamController_SteamController005_GetDigitalActionData_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
}

void cppISteamController_SteamController005_GetDigitalActionOrigins( struct cppISteamController_SteamController005_GetDigitalActionOrigins_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamController_SteamController005_GetAnalogActionHandle( struct cppISteamController_SteamController005_GetAnalogActionHandle_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamController_SteamController005_GetAnalogActionData( struct cppISteamController_SteamController005_GetAnalogActionData_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
}

void cppISteamController_SteamController005_GetAnalogActionOrigins( struct cppISteamController_SteamController005_GetAnalogActionOrigins_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamController_SteamController005_StopAnalogActionMomentum( struct cppISteamController_SteamController005_StopAnalogActionMomentum_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
}

void cppISteamController_SteamController005_TriggerHapticPulse( struct cppISteamController_SteamController005_TriggerHapticPulse_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamController_SteamController005_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController005_TriggerRepeatedHapticPulse_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamController_SteamController005_TriggerVibration( struct cppISteamController_SteamController005_TriggerVibration_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamController_SteamController005_SetLEDColor( struct cppISteamController_SteamController005_SetLEDColor_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamController_SteamController005_GetGamepadIndexForController( struct cppISteamController_SteamController005_GetGamepadIndexForController_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
}

void cppISteamController_SteamController005_GetControllerForGamepadIndex( struct cppISteamController_SteamController005_GetControllerForGamepadIndex_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamController_SteamController005_GetMotionData( struct cppISteamController_SteamController005_GetMotionData_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
}

void cppISteamController_SteamController005_ShowDigitalActionOrigins( struct cppISteamController_SteamController005_ShowDigitalActionOrigins_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->ShowDigitalActionOrigins( params->controllerHandle, params->digitalActionHandle, params->flScale, params->flXPosition, params->flYPosition );
}

void cppISteamController_SteamController005_ShowAnalogActionOrigins( struct cppISteamController_SteamController005_ShowAnalogActionOrigins_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->ShowAnalogActionOrigins( params->controllerHandle, params->analogActionHandle, params->flScale, params->flXPosition, params->flYPosition );
}

void cppISteamController_SteamController005_GetStringForActionOrigin( struct cppISteamController_SteamController005_GetStringForActionOrigin_params *params )
{
    struct cppISteamController_SteamController005 *iface = (struct cppISteamController_SteamController005 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

#ifdef __cplusplus
}
#endif
