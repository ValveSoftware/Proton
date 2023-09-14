#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eError;
};
extern void cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params *params );

struct cppIVRSettings_IVRSettings_002_Sync_params
{
    void *linux_side;
    bool _ret;
    bool bForce;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_Sync( struct cppIVRSettings_IVRSettings_002_Sync_params *params );

struct cppIVRSettings_IVRSettings_002_SetBool_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    bool bValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_SetBool( struct cppIVRSettings_IVRSettings_002_SetBool_params *params );

struct cppIVRSettings_IVRSettings_002_SetInt32_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    int32_t nValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_SetInt32( struct cppIVRSettings_IVRSettings_002_SetInt32_params *params );

struct cppIVRSettings_IVRSettings_002_SetFloat_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    float flValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_SetFloat( struct cppIVRSettings_IVRSettings_002_SetFloat_params *params );

struct cppIVRSettings_IVRSettings_002_SetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    const char *pchValue;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_SetString( struct cppIVRSettings_IVRSettings_002_SetString_params *params );

struct cppIVRSettings_IVRSettings_002_GetBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_GetBool( struct cppIVRSettings_IVRSettings_002_GetBool_params *params );

struct cppIVRSettings_IVRSettings_002_GetInt32_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_GetInt32( struct cppIVRSettings_IVRSettings_002_GetInt32_params *params );

struct cppIVRSettings_IVRSettings_002_GetFloat_params
{
    void *linux_side;
    float _ret;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_GetFloat( struct cppIVRSettings_IVRSettings_002_GetFloat_params *params );

struct cppIVRSettings_IVRSettings_002_GetString_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    char *pchValue;
    uint32_t unValueLen;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_GetString( struct cppIVRSettings_IVRSettings_002_GetString_params *params );

struct cppIVRSettings_IVRSettings_002_RemoveSection_params
{
    void *linux_side;
    const char *pchSection;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_RemoveSection( struct cppIVRSettings_IVRSettings_002_RemoveSection_params *params );

struct cppIVRSettings_IVRSettings_002_RemoveKeyInSection_params
{
    void *linux_side;
    const char *pchSection;
    const char *pchSettingsKey;
    uint32_t *peError;
};
extern void cppIVRSettings_IVRSettings_002_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_002_RemoveKeyInSection_params *params );

#ifdef __cplusplus
}
#endif
