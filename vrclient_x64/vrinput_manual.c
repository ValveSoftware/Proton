#include "vrclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#ifndef __x86_64__
static uint32_t ivrinput_get_digital_action_data( uint64_t action_handle, void *action_data, uint32_t action_data_size,
                                                  uint64_t restrict_to_device, unsigned int version )
{
    /* Digital action state change fixup hack. */
    w_InputDigitalActionData_t *data = action_data;
    LARGE_INTEGER qpf;
    unsigned int i;

    TRACE( "handle %s, data %p, data_size %u, restrict %s, origin %s, state %#x, changed %#x, active %#x.\n",
           wine_dbgstr_longlong( action_handle ), action_data, action_data_size,
           wine_dbgstr_longlong( restrict_to_device ), wine_dbgstr_longlong( data->activeOrigin ),
           data->bState, data->bChanged, data->bActive );

    if (action_data_size != sizeof(*data))
    {
        WARN( "Unexpected action_data_size %u.\n", action_data_size );
        return 0;
    }

    if (!data->bActive) return 0;

    if (!compositor_data.qpf_freq.QuadPart) QueryPerformanceFrequency( &compositor_data.qpf_freq );
    QueryPerformanceCounter( &qpf );

    for (i = 0; i < compositor_data.digital_action_count; ++i)
    {
        if (compositor_data.digital_actions_state[i].action == action_handle &&
            compositor_data.digital_actions_state[i].origin == data->activeOrigin)
        {
            if ((data->bChanged = (!compositor_data.digital_actions_state[i].previous_state != !data->bState)))
            {
                TRACE( "action %s (%s) changed to %#x, data->fUpdateTime %f.\n",
                       wine_dbgstr_longlong( action_handle ),
                       wine_dbgstr_longlong( restrict_to_device ), data->bState, data->fUpdateTime );

                compositor_data.digital_actions_state[i].update_qpf_time = qpf;
                compositor_data.digital_actions_state[i].previous_state = data->bState;
            }
            if (compositor_data.digital_actions_state[i].update_qpf_time.QuadPart)
                data->fUpdateTime = -(float)(qpf.QuadPart - compositor_data.digital_actions_state[i].update_qpf_time.QuadPart) / compositor_data.qpf_freq.QuadPart;

            return 0;
        }
    }

    if (i == ARRAY_SIZE(compositor_data.digital_actions_state))
    {
        static unsigned int once;
        if (!once++) WARN( "Too many actions.\n" );
        return 0;
    }

    compositor_data.digital_actions_state[i].action = action_handle;
    compositor_data.digital_actions_state[i].origin = data->activeOrigin;
    compositor_data.digital_actions_state[i].previous_state = data->bState;
    compositor_data.digital_actions_state[i].update_qpf_time = qpf;
    ++compositor_data.digital_action_count;

    return 0;
}
#endif

uint32_t __thiscall winIVRInput_IVRInput_004_GetDigitalActionData( struct w_steam_iface *_this, uint64_t action,
                                                                   w_InputDigitalActionData_t *pActionData,
                                                                   uint32_t unActionDataSize, uint64_t ulRestrictToDevice )
{
    w_InputDigitalActionData_t w_pActionData;
    struct IVRInput_IVRInput_004_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetDigitalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 4 );
#endif
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetDigitalActionData( struct w_steam_iface *_this, uint64_t action,
                                                                   w_InputDigitalActionData_t *pActionData,
                                                                   uint32_t unActionDataSize, uint64_t ulRestrictToDevice )
{
    w_InputDigitalActionData_t w_pActionData;
    struct IVRInput_IVRInput_005_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetDigitalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 5 );
#endif
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetDigitalActionData( struct w_steam_iface *_this, uint64_t action,
                                                                   w_InputDigitalActionData_t *pActionData,
                                                                   uint32_t unActionDataSize, uint64_t ulRestrictToDevice )
{
    w_InputDigitalActionData_t w_pActionData;
    struct IVRInput_IVRInput_006_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetDigitalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 6 );
#endif
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetDigitalActionData( struct w_steam_iface *_this, uint64_t action,
                                                                   w_InputDigitalActionData_t *pActionData,
                                                                   uint32_t unActionDataSize, uint64_t ulRestrictToDevice )
{
    w_InputDigitalActionData_t w_pActionData;
    struct IVRInput_IVRInput_007_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetDigitalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 7 );
#endif
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetDigitalActionData( struct w_steam_iface *_this, uint64_t action,
                                                                   w_InputDigitalActionData_t *pActionData,
                                                                   uint32_t unActionDataSize, uint64_t ulRestrictToDevice )
{
    w_InputDigitalActionData_t w_pActionData;
    struct IVRInput_IVRInput_010_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetDigitalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 10 );
#endif
}
