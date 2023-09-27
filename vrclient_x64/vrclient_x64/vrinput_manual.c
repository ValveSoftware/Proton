#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "dxvk-interop.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"
#include "cppIVRInput_IVRInput_004.h"
#include "cppIVRInput_IVRInput_005.h"
#include "cppIVRInput_IVRInput_006.h"
#include "cppIVRInput_IVRInput_007.h"
#include "cppIVRInput_IVRInput_010.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#pragma pack( push, 8 )
struct winInputDigitalActionData_t
{
    bool bActive;
    VRInputValueHandle_t activeOrigin;
    bool bState;
    bool bChanged;
    float fUpdateTime;
} __attribute__((ms_struct));
#pragma pack( pop )

#ifndef __x86_64__
static EVRInputError ivrinput_get_digital_action_data( VRActionHandle_t action_handle, void *action_data, uint32_t action_data_size,
                                                       VRInputValueHandle_t restrict_to_device, unsigned int version )
{
    /* Digital action state change fixup hack. */
    struct winInputDigitalActionData_t *data = action_data;
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

EVRInputError __thiscall winIVRInput_IVRInput_004_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1017 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    struct cppIVRInput_IVRInput_004_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    cppIVRInput_IVRInput_004_GetDigitalActionData( &params );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 4 );
#endif
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1322 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    struct cppIVRInput_IVRInput_005_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    cppIVRInput_IVRInput_005_GetDigitalActionData( &params );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 5 );
#endif
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1418 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    struct cppIVRInput_IVRInput_006_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    cppIVRInput_IVRInput_006_GetDigitalActionData( &params );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 6 );
#endif
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1916 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    struct cppIVRInput_IVRInput_007_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    cppIVRInput_IVRInput_007_GetDigitalActionData( &params );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 7 );
#endif
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1267 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    struct cppIVRInput_IVRInput_010_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };

    TRACE( "%p\n", _this );

    cppIVRInput_IVRInput_010_GetDigitalActionData( &params );
#ifdef __x86_64__
    return params._ret;
#else
    if (params._ret) return params._ret;
    return ivrinput_get_digital_action_data( action, pActionData, unActionDataSize, ulRestrictToDevice, 10 );
#endif
}
