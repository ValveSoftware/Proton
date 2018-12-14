#ifdef __cplusplus
extern "C" {
#endif
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async(void *, const char *, winRenderModel_t_113b **);
extern void cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel(void *, winRenderModel_t_113b *);
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async(void *, TextureID_t, winRenderModel_TextureMap_t_113b **);
extern void cppIVRRenderModels_IVRRenderModels_006_FreeTexture(void *, winRenderModel_TextureMap_t_113b *);
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async(void *, TextureID_t, void *, void **);
extern EVRRenderModelError cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async(void *, TextureID_t, void *);
extern void cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11(void *, void *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName(void *, uint32_t, char *, uint32_t);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount(void *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetComponentCount(void *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetComponentName(void *, const char *, uint32_t, char *, uint32_t);
extern uint64_t cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask(void *, const char *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName(void *, const char *, const char *, char *, uint32_t);
extern bool cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath(void *, const char *, const char *, VRInputValueHandle_t, RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t *);
extern bool cppIVRRenderModels_IVRRenderModels_006_GetComponentState(void *, const char *, const char *, VRControllerState_t *, RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t *);
extern bool cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent(void *, const char *, const char *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL(void *, const char *, char *, uint32_t, EVRRenderModelError *);
extern uint32_t cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath(void *, const char *, char *, uint32_t, EVRRenderModelError *);
extern const char * cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum(void *, EVRRenderModelError);
#ifdef __cplusplus
}
#endif
