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

static EVRInputError ivrinput_get_digital_action_data( void *func, void *linux_side, VRActionHandle_t action_handle,
                                                       void *action_data, uint32_t action_data_size,
                                                       VRInputValueHandle_t restrict_to_device, unsigned int version )
{
    EVRInputError (*cpp_func)( void *, VRActionHandle_t, struct winInputDigitalActionData_t *,
                               uint32_t, VRInputValueHandle_t ) = func;

#ifdef __x86_64__
    TRACE( "%p\n", linux_side );
    return cpp_func( linux_side, action_handle, action_data, action_data_size, restrict_to_device );
#else
    /* Digital action state change fixup hack. */
    struct winInputDigitalActionData_t *data = action_data;
    LARGE_INTEGER qpf;
    EVRInputError ret;
    unsigned int i;

    ret = cpp_func( linux_side, action_handle, action_data, action_data_size, restrict_to_device );

    TRACE( "handle %s, data %p, data_size %u, restrict %s, origin %s, state %#x, changed %#x, ret "
           "%u, active %#x.\n",
           wine_dbgstr_longlong( action_handle ), action_data, action_data_size,
           wine_dbgstr_longlong( restrict_to_device ), wine_dbgstr_longlong( data->activeOrigin ),
           data->bState, data->bChanged, ret, data->bActive );

    if (ret) return ret;

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
#endif
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1017 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    EVRInputError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrinput_get_digital_action_data( cppIVRInput_IVRInput_004_GetDigitalActionData, _this->u_iface,
                                             action, pActionData, unActionDataSize, ulRestrictToDevice, 4 );
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1322 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    EVRInputError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrinput_get_digital_action_data( cppIVRInput_IVRInput_005_GetDigitalActionData, _this->u_iface,
                                             action, pActionData, unActionDataSize, ulRestrictToDevice, 5 );
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1418 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    EVRInputError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrinput_get_digital_action_data( cppIVRInput_IVRInput_006_GetDigitalActionData, _this->u_iface,
                                             action, pActionData, unActionDataSize, ulRestrictToDevice, 6 );
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1916 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    EVRInputError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrinput_get_digital_action_data( cppIVRInput_IVRInput_007_GetDigitalActionData, _this->u_iface,
                                             action, pActionData, unActionDataSize, ulRestrictToDevice, 7 );
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetDigitalActionData( struct w_steam_iface *_this, VRActionHandle_t action,
                                                                        winInputDigitalActionData_t_1267 *pActionData,
                                                                        uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice )
{
    EVRInputError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrinput_get_digital_action_data( cppIVRInput_IVRInput_010_GetDigitalActionData, _this->u_iface,
                                             action, pActionData, unActionDataSize, ulRestrictToDevice, 10 );
    return _ret;
}
