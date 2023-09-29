/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};
extern void cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum_params *params );

struct cppIVRSettings_IVRSettings_001_Sync_params
{
    void *linux_side;
    bool _ret;
    bool bForce;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_Sync( struct cppIVRSettings_IVRSettings_001_Sync_params *params );

struct cppIVRSettings_IVRSettings_001_GetBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    bool bDefaultValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_GetBool( struct cppIVRSettings_IVRSettings_001_GetBool_params *params );

struct cppIVRSettings_IVRSettings_001_SetBool_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    bool bValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_SetBool( struct cppIVRSettings_IVRSettings_001_SetBool_params *params );

struct cppIVRSettings_IVRSettings_001_GetInt32_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nDefaultValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_GetInt32( struct cppIVRSettings_IVRSettings_001_GetInt32_params *params );

struct cppIVRSettings_IVRSettings_001_SetInt32_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_SetInt32( struct cppIVRSettings_IVRSettings_001_SetInt32_params *params );

struct cppIVRSettings_IVRSettings_001_GetFloat_params
{
    void *linux_side;
    float _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    float flDefaultValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_GetFloat( struct cppIVRSettings_IVRSettings_001_GetFloat_params *params );

struct cppIVRSettings_IVRSettings_001_SetFloat_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    float flValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_SetFloat( struct cppIVRSettings_IVRSettings_001_SetFloat_params *params );

struct cppIVRSettings_IVRSettings_001_GetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    char *pchValue;
    uint32_t unValueLen;
    const char *pchDefaultValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_GetString( struct cppIVRSettings_IVRSettings_001_GetString_params *params );

struct cppIVRSettings_IVRSettings_001_SetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    const char *pchValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_SetString( struct cppIVRSettings_IVRSettings_001_SetString_params *params );

struct cppIVRSettings_IVRSettings_001_RemoveSection_params
{
    void *linux_side;
    const char *pchSection;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_RemoveSection( struct cppIVRSettings_IVRSettings_001_RemoveSection_params *params );

struct cppIVRSettings_IVRSettings_001_RemoveKeyInSection_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_001_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_001_RemoveKeyInSection_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
