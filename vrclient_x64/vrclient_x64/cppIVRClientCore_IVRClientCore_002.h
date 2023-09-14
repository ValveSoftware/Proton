#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRClientCore_IVRClientCore_002_Init_params
{
    void *linux_side;
    uint32_t _ret;
    EVRApplicationType eApplicationType;
};
extern void cppIVRClientCore_IVRClientCore_002_Init( struct cppIVRClientCore_IVRClientCore_002_Init_params *params );

struct cppIVRClientCore_IVRClientCore_002_Cleanup_params
{
    void *linux_side;
};
extern void cppIVRClientCore_IVRClientCore_002_Cleanup( struct cppIVRClientCore_IVRClientCore_002_Cleanup_params *params );

struct cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInterfaceVersion;
};
extern void cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params *params );

struct cppIVRClientCore_IVRClientCore_002_GetGenericInterface_params
{
    void *linux_side;
    void *_ret;
    const char *pchNameAndVersion;
    uint32_t *peError;
};
extern void cppIVRClientCore_IVRClientCore_002_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_002_GetGenericInterface_params *params );

struct cppIVRClientCore_IVRClientCore_002_BIsHmdPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_002_BIsHmdPresent_params *params );

struct cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params
{
    void *linux_side;
    const char *_ret;
    EVRInitError eError;
};
extern void cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params *params );

struct cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError_params
{
    void *linux_side;
    const char *_ret;
    EVRInitError eError;
};
extern void cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError_params *params );

#ifdef __cplusplus
}
#endif
