/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};
extern void cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params *params );

struct cppIVRSettings_IVRSettings_003_SetBool_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    bool bValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_SetBool( struct cppIVRSettings_IVRSettings_003_SetBool_params *params );

struct cppIVRSettings_IVRSettings_003_SetInt32_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_SetInt32( struct cppIVRSettings_IVRSettings_003_SetInt32_params *params );

struct cppIVRSettings_IVRSettings_003_SetFloat_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    float flValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_SetFloat( struct cppIVRSettings_IVRSettings_003_SetFloat_params *params );

struct cppIVRSettings_IVRSettings_003_SetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    const char *pchValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_SetString( struct cppIVRSettings_IVRSettings_003_SetString_params *params );

struct cppIVRSettings_IVRSettings_003_GetBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_GetBool( struct cppIVRSettings_IVRSettings_003_GetBool_params *params );

struct cppIVRSettings_IVRSettings_003_GetInt32_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_GetInt32( struct cppIVRSettings_IVRSettings_003_GetInt32_params *params );

struct cppIVRSettings_IVRSettings_003_GetFloat_params
{
    void *linux_side;
    float _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_GetFloat( struct cppIVRSettings_IVRSettings_003_GetFloat_params *params );

struct cppIVRSettings_IVRSettings_003_GetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    char *pchValue;
    uint32_t unValueLen;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_GetString( struct cppIVRSettings_IVRSettings_003_GetString_params *params );

struct cppIVRSettings_IVRSettings_003_RemoveSection_params
{
    void *linux_side;
    const char *pchSection;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_RemoveSection( struct cppIVRSettings_IVRSettings_003_RemoveSection_params *params );

struct cppIVRSettings_IVRSettings_003_RemoveKeyInSection_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_003_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_003_RemoveKeyInSection_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
