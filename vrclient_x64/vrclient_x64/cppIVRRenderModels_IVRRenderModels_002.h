#ifdef __cplusplus
extern "C" {
#endif
extern bool cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel(void *, const char *, winRenderModel_t_0915 **);
extern void cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel(void *, winRenderModel_t_0915 *);
extern bool cppIVRRenderModels_IVRRenderModels_002_LoadTexture(void *, TextureID_t, winRenderModel_TextureMap_t_0915 **);
extern void cppIVRRenderModels_IVRRenderModels_002_FreeTexture(void *, winRenderModel_TextureMap_t_0915 *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName(void *, uint32_t, char *, uint32_t);
extern uint32_t cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount(void *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_002_GetComponentCount(void *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_002_GetComponentName(void *, const char *, uint32_t, char *, uint32_t);
extern uint64_t cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask(void *, const char *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName(void *, const char *, const char *, char *, uint32_t);
extern bool cppIVRRenderModels_IVRRenderModels_002_GetComponentState(void *, const char *, const char *, VRControllerState_t *, RenderModel_ComponentState_t *);
extern bool cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent(void *, const char *, const char *);
#ifdef __cplusplus
}
#endif
