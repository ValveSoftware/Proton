#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRClientCore_IVRClientCore_003_Init_params
{
    void *linux_side;
    uint32_t _ret;
    EVRApplicationType eApplicationType;
    const char *pStartupInfo;
};
extern void cppIVRClientCore_IVRClientCore_003_Init( struct cppIVRClientCore_IVRClientCore_003_Init_params *params );

struct cppIVRClientCore_IVRClientCore_003_Cleanup_params
{
    void *linux_side;
};
extern void cppIVRClientCore_IVRClientCore_003_Cleanup( struct cppIVRClientCore_IVRClientCore_003_Cleanup_params *params );

struct cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInterfaceVersion;
};
extern void cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid_params *params );

struct cppIVRClientCore_IVRClientCore_003_GetGenericInterface_params
{
    void *linux_side;
    void *_ret;
    const char *pchNameAndVersion;
    uint32_t *peError;
};
extern void cppIVRClientCore_IVRClientCore_003_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_003_GetGenericInterface_params *params );

struct cppIVRClientCore_IVRClientCore_003_BIsHmdPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRClientCore_IVRClientCore_003_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_003_BIsHmdPresent_params *params );

struct cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError_params
{
    void *linux_side;
    const char *_ret;
    EVRInitError eError;
};
extern void cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError_params *params );

struct cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError_params
{
    void *linux_side;
    const char *_ret;
    EVRInitError eError;
};
extern void cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError_params *params );

#ifdef __cplusplus
}
#endif
