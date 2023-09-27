#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRDriverManager_IVRDriverManager_001_GetDriverCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRDriverManager_IVRDriverManager_001_GetDriverCount( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverCount_params *params );

struct cppIVRDriverManager_IVRDriverManager_001_GetDriverName_params
{
    void *linux_side;
    uint32_t _ret;
    DriverId_t nDriver;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRDriverManager_IVRDriverManager_001_GetDriverName( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverName_params *params );

struct cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle_params
{
    void *linux_side;
    DriverHandle_t _ret;
    const char *pchDriverName;
};
extern void cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle( struct cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle_params *params );

struct cppIVRDriverManager_IVRDriverManager_001_IsEnabled_params
{
    void *linux_side;
    bool _ret;
    DriverId_t nDriver;
};
extern void cppIVRDriverManager_IVRDriverManager_001_IsEnabled( struct cppIVRDriverManager_IVRDriverManager_001_IsEnabled_params *params );

#ifdef __cplusplus
}
#endif
