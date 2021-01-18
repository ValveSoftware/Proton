typedef struct WINE_XR_STRUCT_NAME(XrNegotiateLoaderInfo) {
    XrLoaderInterfaceStructs structType;  // XR_LOADER_INTERFACE_STRUCT_LOADER_INFO
    uint32_t structVersion;               // XR_LOADER_INFO_STRUCT_VERSION
    size_t structSize;                    // sizeof(XrNegotiateLoaderInfo)
    uint32_t minInterfaceVersion;
    uint32_t maxInterfaceVersion;
    XrVersion minApiVersion;
    XrVersion maxApiVersion;
} WINE_XR_STRUCT_ATTR WINE_XR_STRUCT_NAME(XrNegotiateLoaderInfo);

typedef struct WINE_XR_STRUCT_NAME(XrNegotiateRuntimeRequest) {
    XrLoaderInterfaceStructs structType;  // XR_LOADER_INTERFACE_STRUCT_RUNTIME_REQUEST
    uint32_t structVersion;               // XR_RUNTIME_INFO_STRUCT_VERSION
    size_t structSize;                    // sizeof(XrNegotiateRuntimeRequest)
    uint32_t runtimeInterfaceVersion;     // CURRENT_LOADER_RUNTIME_VERSION
    XrVersion runtimeApiVersion;
    PFN_xrGetInstanceProcAddr getInstanceProcAddr;
} WINE_XR_STRUCT_ATTR WINE_XR_STRUCT_NAME(XrNegotiateRuntimeRequest);

/*
typedef struct WINE_XR_STRUCT_NAME(XrNegotiateApiLayerRequest) {
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    uint32_t layerInterfaceVersion;
    XrVersion layerApiVersion;
    PFN_xrGetInstanceProcAddr getInstanceProcAddr;
    PFN_xrCreateApiLayerInstance createApiLayerInstance;
} WINE_XR_STRUCT_ATTR WINE_XR_STRUCT_NAME(XrNegotiateApiLayerRequest);
*/
