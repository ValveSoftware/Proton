#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    winRenderModel_t_0910 *pRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel_params
{
    void *linux_side;
    winRenderModel_t_0910 *pRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *params );

#ifdef __cplusplus
}
#endif
