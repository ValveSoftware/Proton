#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params *params );

struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params *params );

struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};
extern void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params *params );

#ifdef __cplusplus
}
#endif
