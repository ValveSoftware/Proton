#ifdef __cplusplus
extern "C" {
#endif
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async(void *, const char *, winRenderModel_t_0918 **);
extern void cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel(void *, winRenderModel_t_0918 *);
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async(void *, TextureID_t, winRenderModel_TextureMap_t_0918 **);
extern void cppIVRRenderModels_IVRRenderModels_004_FreeTexture(void *, winRenderModel_TextureMap_t_0918 *);
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async(void *, TextureID_t, void *, void **);
extern void cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11(void *, void *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName(void *, uint32_t, char *, uint32_t);
extern uint32_t cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount(void *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_004_GetComponentCount(void *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_004_GetComponentName(void *, const char *, uint32_t, char *, uint32_t);
extern uint64_t cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask(void *, const char *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName(void *, const char *, const char *, char *, uint32_t);
extern bool cppIVRRenderModels_IVRRenderModels_004_GetComponentState(void *, const char *, const char *, VRControllerState_t *, RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t *);
extern bool cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent(void *, const char *, const char *);
#ifdef __cplusplus
}
#endif
