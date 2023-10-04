typedef struct VREvent_ApplicationLaunch_t VREvent_ApplicationLaunch_t;
#pragma pack( push, 4 )
struct VREvent_ApplicationLaunch_t
{
    uint32_t pid;
    uint32_t unArgsHandle;
};
#pragma pack( pop )

typedef struct VREvent_Chaperone_t VREvent_Chaperone_t;
#pragma pack( push, 8 )
struct VREvent_Chaperone_t
{
    uint64_t m_nPreviousUniverse;
    uint64_t m_nCurrentUniverse;
};
#pragma pack( pop )

typedef struct VREvent_Controller_t VREvent_Controller_t;
#pragma pack( push, 4 )
struct VREvent_Controller_t
{
    uint32_t button;
};
#pragma pack( pop )

typedef struct VREvent_DualAnalog_t VREvent_DualAnalog_t;
#pragma pack( push, 4 )
struct VREvent_DualAnalog_t
{
    float x;
    float y;
    float transformedX;
    float transformedY;
    uint32_t which;
};
#pragma pack( pop )

typedef struct VREvent_EditingCameraSurface_t VREvent_EditingCameraSurface_t;
#pragma pack( push, 8 )
struct VREvent_EditingCameraSurface_t
{
    uint64_t overlayHandle;
    uint32_t nVisualMode;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct VREvent_HDCPError_t VREvent_HDCPError_t;
#pragma pack( push, 4 )
struct VREvent_HDCPError_t
{
    uint32_t eCode;
};
#pragma pack( pop )

typedef struct VREvent_HapticVibration_t VREvent_HapticVibration_t;
#pragma pack( push, 8 )
struct VREvent_HapticVibration_t
{
    uint64_t containerHandle;
    uint64_t componentHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint8_t __pad_28[4];
};
#pragma pack( pop )

typedef struct VREvent_InputActionManifestLoad_t VREvent_InputActionManifestLoad_t;
#pragma pack( push, 8 )
struct VREvent_InputActionManifestLoad_t
{
    uint64_t pathAppKey;
    uint64_t pathMessage;
    uint64_t pathMessageParam;
    uint64_t pathManifestPath;
};
#pragma pack( pop )

typedef struct VREvent_InputBindingLoad_t_1016 VREvent_InputBindingLoad_t_1016;
#pragma pack( push, 8 )
struct VREvent_InputBindingLoad_t_1016
{
    uint64_t ulAppContainer;
    uint64_t pathMessage;
    uint64_t pathUrl;
    uint64_t pathControllerType;
};
#pragma pack( pop )

typedef struct VREvent_InputBindingLoad_t_1015 VREvent_InputBindingLoad_t_1015;
#pragma pack( push, 8 )
struct VREvent_InputBindingLoad_t_1015
{
    uint64_t ulAppContainer;
    uint64_t pathMessage;
    uint64_t pathUrl;
};
#pragma pack( pop )

typedef struct VREvent_Ipd_t VREvent_Ipd_t;
#pragma pack( push, 4 )
struct VREvent_Ipd_t
{
    float ipdMeters;
};
#pragma pack( pop )

typedef struct VREvent_Keyboard_t_0912 VREvent_Keyboard_t_0912;
#pragma pack( push, 8 )
struct VREvent_Keyboard_t_0912
{
    char (cNewInput)[8];
    uint64_t uUserValue;
};
#pragma pack( pop )

typedef struct VREvent_Keyboard_t_0910 VREvent_Keyboard_t_0910;
#pragma pack( push, 4 )
struct VREvent_Keyboard_t_0910
{
    char (cNewInput)[12];
    uint32_t uFlags;
};
#pragma pack( pop )

typedef struct VREvent_MessageOverlay_t VREvent_MessageOverlay_t;
#pragma pack( push, 4 )
struct VREvent_MessageOverlay_t
{
    uint32_t unVRMessageOverlayResponse;
};
#pragma pack( pop )

typedef struct VREvent_Mouse_t VREvent_Mouse_t;
#pragma pack( push, 4 )
struct VREvent_Mouse_t
{
    float x;
    float y;
    uint32_t button;
};
#pragma pack( pop )

typedef struct VREvent_Notification_t_093 VREvent_Notification_t_093;
#pragma pack( push, 8 )
struct VREvent_Notification_t_093
{
    uint64_t ulUserValue;
    uint32_t notificationId;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct VREvent_Notification_t_092 VREvent_Notification_t_092;
#pragma pack( push, 4 )
struct VREvent_Notification_t_092
{
    float x;
    float y;
    uint32_t notificationId;
};
#pragma pack( pop )

typedef struct VREvent_Overlay_t_1168 VREvent_Overlay_t_1168;
#pragma pack( push, 8 )
struct VREvent_Overlay_t_1168
{
    uint64_t overlayHandle;
    uint64_t devicePath;
    uint64_t memoryBlockId;
};
#pragma pack( pop )

typedef struct VREvent_Overlay_t_1014 VREvent_Overlay_t_1014;
#pragma pack( push, 8 )
struct VREvent_Overlay_t_1014
{
    uint64_t overlayHandle;
    uint64_t devicePath;
};
#pragma pack( pop )

typedef struct VREvent_Overlay_t_092 VREvent_Overlay_t_092;
#pragma pack( push, 8 )
struct VREvent_Overlay_t_092
{
    uint64_t overlayHandle;
};
#pragma pack( pop )

typedef struct VREvent_PerformanceTest_t VREvent_PerformanceTest_t;
#pragma pack( push, 4 )
struct VREvent_PerformanceTest_t
{
    uint32_t m_nFidelityLevel;
};
#pragma pack( pop )

typedef struct VREvent_Process_t_1210 VREvent_Process_t_1210;
#pragma pack( push, 4 )
struct VREvent_Process_t_1210
{
    uint32_t pid;
    uint32_t oldPid;
    int8_t bForced;
    int8_t bConnectionLost;
    uint8_t __pad_10[2];
};
#pragma pack( pop )

typedef struct VREvent_Process_t_0912 VREvent_Process_t_0912;
#pragma pack( push, 4 )
struct VREvent_Process_t_0912
{
    uint32_t pid;
    uint32_t oldPid;
    int8_t bForced;
    uint8_t __pad_9[3];
};
#pragma pack( pop )

typedef struct VREvent_Process_t_090 VREvent_Process_t_090;
#pragma pack( push, 4 )
struct VREvent_Process_t_090
{
    uint32_t pid;
    uint32_t oldPid;
};
#pragma pack( pop )

typedef struct VREvent_ProgressUpdate_t VREvent_ProgressUpdate_t;
#pragma pack( push, 8 )
struct VREvent_ProgressUpdate_t
{
    uint64_t ulApplicationPropertyContainer;
    uint64_t pathDevice;
    uint64_t pathInputSource;
    uint64_t pathProgressAction;
    uint64_t pathIcon;
    float fProgress;
    uint8_t __pad_44[4];
};
#pragma pack( pop )

typedef struct VREvent_Property_t VREvent_Property_t;
#pragma pack( push, 8 )
struct VREvent_Property_t
{
    uint64_t container;
    uint32_t prop;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct VREvent_Reserved_t_113b VREvent_Reserved_t_113b;
#pragma pack( push, 8 )
struct VREvent_Reserved_t_113b
{
    uint64_t reserved0;
    uint64_t reserved1;
    uint64_t reserved2;
    uint64_t reserved3;
    uint64_t reserved4;
    uint64_t reserved5;
};
#pragma pack( pop )

typedef struct VREvent_Reserved_t_1013 VREvent_Reserved_t_1013;
#pragma pack( push, 8 )
struct VREvent_Reserved_t_1013
{
    uint64_t reserved0;
    uint64_t reserved1;
    uint64_t reserved2;
    uint64_t reserved3;
};
#pragma pack( pop )

typedef struct VREvent_Reserved_t_090 VREvent_Reserved_t_090;
#pragma pack( push, 8 )
struct VREvent_Reserved_t_090
{
    uint64_t reserved0;
    uint64_t reserved1;
};
#pragma pack( pop )

typedef struct VREvent_ScreenshotProgress_t VREvent_ScreenshotProgress_t;
#pragma pack( push, 4 )
struct VREvent_ScreenshotProgress_t
{
    float progress;
};
#pragma pack( pop )

typedef struct VREvent_Screenshot_t VREvent_Screenshot_t;
#pragma pack( push, 4 )
struct VREvent_Screenshot_t
{
    uint32_t handle;
    uint32_t type;
};
#pragma pack( pop )

typedef struct VREvent_Scroll_t_1322 VREvent_Scroll_t_1322;
#pragma pack( push, 4 )
struct VREvent_Scroll_t_1322
{
    float xdelta;
    float ydelta;
    uint32_t unused;
    float viewportscale;
};
#pragma pack( pop )

typedef struct VREvent_Scroll_t_0915 VREvent_Scroll_t_0915;
#pragma pack( push, 4 )
struct VREvent_Scroll_t_0915
{
    float xdelta;
    float ydelta;
    uint32_t repeatCount;
};
#pragma pack( pop )

typedef struct VREvent_SeatedZeroPoseReset_t VREvent_SeatedZeroPoseReset_t;
#pragma pack( push, 1 )
struct VREvent_SeatedZeroPoseReset_t
{
    int8_t bResetBySystemMenu;
};
#pragma pack( pop )

typedef struct VREvent_ShowDevTools_t VREvent_ShowDevTools_t;
#pragma pack( push, 4 )
struct VREvent_ShowDevTools_t
{
    int32_t nBrowserIdentifier;
};
#pragma pack( pop )

typedef struct VREvent_ShowUI_t VREvent_ShowUI_t;
#pragma pack( push, 4 )
struct VREvent_ShowUI_t
{
    uint32_t eType;
};
#pragma pack( pop )

typedef struct VREvent_SpatialAnchor_t VREvent_SpatialAnchor_t;
#pragma pack( push, 4 )
struct VREvent_SpatialAnchor_t
{
    uint32_t unHandle;
};
#pragma pack( pop )

typedef struct VREvent_Status_t VREvent_Status_t;
#pragma pack( push, 4 )
struct VREvent_Status_t
{
    uint32_t statusState;
};
#pragma pack( pop )

typedef struct VREvent_TouchPadMove_t VREvent_TouchPadMove_t;
#pragma pack( push, 4 )
struct VREvent_TouchPadMove_t
{
    int8_t bFingerDown;
    uint8_t __pad_1[3];
    float flSecondsFingerDown;
    float fValueXFirst;
    float fValueYFirst;
    float fValueXRaw;
    float fValueYRaw;
};
#pragma pack( pop )

typedef struct VREvent_WebConsole_t VREvent_WebConsole_t;
#pragma pack( push, 8 )
struct VREvent_WebConsole_t
{
    uint64_t webConsoleHandle;
};
#pragma pack( pop )

typedef struct TrackedDevicePose_t TrackedDevicePose_t;
#pragma pack( push, 4 )
struct TrackedDevicePose_t
{
    HmdMatrix34_t mDeviceToAbsoluteTracking;
    HmdVector3_t vVelocity;
    HmdVector3_t vAngularVelocity;
    uint32_t eTrackingResult;
    int8_t bPoseIsValid;
    int8_t bDeviceIsConnected;
    uint8_t __pad_78[2];
};
#pragma pack( pop )

typedef union VREvent_Data_t_1168 VREvent_Data_t_1168;
#pragma pack( push, 8 )
union VREvent_Data_t_1168
{
    VREvent_Reserved_t_113b reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_1322 scroll;
    VREvent_Process_t_1210 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1168 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1016 inputBinding;
    VREvent_InputActionManifestLoad_t actionManifest;
    VREvent_SpatialAnchor_t spatialAnchor;
    VREvent_ProgressUpdate_t progressUpdate;
    VREvent_ShowUI_t showUi;
    VREvent_ShowDevTools_t showDevTools;
    VREvent_HDCPError_t hdcpError;
};
#pragma pack( pop )

typedef union VREvent_Data_t_11030 VREvent_Data_t_11030;
#pragma pack( push, 8 )
union VREvent_Data_t_11030
{
    VREvent_Reserved_t_113b reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_1322 scroll;
    VREvent_Process_t_1210 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1016 inputBinding;
    VREvent_InputActionManifestLoad_t actionManifest;
    VREvent_SpatialAnchor_t spatialAnchor;
    VREvent_ProgressUpdate_t progressUpdate;
    VREvent_ShowUI_t showUi;
    VREvent_ShowDevTools_t showDevTools;
    VREvent_HDCPError_t hdcpError;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1322 VREvent_Data_t_1322;
#pragma pack( push, 8 )
union VREvent_Data_t_1322
{
    VREvent_Reserved_t_113b reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_1322 scroll;
    VREvent_Process_t_1210 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1016 inputBinding;
    VREvent_InputActionManifestLoad_t actionManifest;
    VREvent_SpatialAnchor_t spatialAnchor;
    VREvent_ProgressUpdate_t progressUpdate;
    VREvent_ShowUI_t showUi;
    VREvent_ShowDevTools_t showDevTools;
    VREvent_HDCPError_t hdcpError;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1210 VREvent_Data_t_1210;
#pragma pack( push, 8 )
union VREvent_Data_t_1210
{
    VREvent_Reserved_t_113b reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_1210 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1016 inputBinding;
    VREvent_InputActionManifestLoad_t actionManifest;
    VREvent_SpatialAnchor_t spatialAnchor;
    VREvent_ProgressUpdate_t progressUpdate;
    VREvent_ShowUI_t showUi;
};
#pragma pack( pop )

typedef union VREvent_Data_t_113b VREvent_Data_t_113b;
#pragma pack( push, 8 )
union VREvent_Data_t_113b
{
    VREvent_Reserved_t_113b reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1016 inputBinding;
    VREvent_InputActionManifestLoad_t actionManifest;
    VREvent_SpatialAnchor_t spatialAnchor;
    VREvent_ProgressUpdate_t progressUpdate;
    VREvent_ShowUI_t showUi;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1016 VREvent_Data_t_1016;
#pragma pack( push, 8 )
union VREvent_Data_t_1016
{
    VREvent_Reserved_t_1013 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1016 inputBinding;
    VREvent_InputActionManifestLoad_t actionManifest;
    VREvent_SpatialAnchor_t spatialAnchor;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1015 VREvent_Data_t_1015;
#pragma pack( push, 8 )
union VREvent_Data_t_1015
{
    VREvent_Reserved_t_1013 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
    VREvent_InputBindingLoad_t_1015 inputBinding;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1014 VREvent_Data_t_1014;
#pragma pack( push, 8 )
union VREvent_Data_t_1014
{
    VREvent_Reserved_t_1013 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_1014 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
    VREvent_WebConsole_t webConsole;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1013 VREvent_Data_t_1013;
#pragma pack( push, 8 )
union VREvent_Data_t_1013
{
    VREvent_Reserved_t_1013 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1012 VREvent_Data_t_1012;
#pragma pack( push, 8 )
union VREvent_Data_t_1012
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
    VREvent_HapticVibration_t hapticVibration;
};
#pragma pack( pop )

typedef union VREvent_Data_t_1011 VREvent_Data_t_1011;
#pragma pack( push, 8 )
union VREvent_Data_t_1011
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
    VREvent_DualAnalog_t dualAnalog;
};
#pragma pack( pop )

typedef union VREvent_Data_t_106 VREvent_Data_t_106;
#pragma pack( push, 8 )
union VREvent_Data_t_106
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
    VREvent_Property_t property;
};
#pragma pack( pop )

typedef union VREvent_Data_t_105 VREvent_Data_t_105;
#pragma pack( push, 8 )
union VREvent_Data_t_105
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
    VREvent_MessageOverlay_t messageOverlay;
};
#pragma pack( pop )

typedef union VREvent_Data_t_103 VREvent_Data_t_103;
#pragma pack( push, 8 )
union VREvent_Data_t_103
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
    VREvent_EditingCameraSurface_t cameraSurface;
};
#pragma pack( pop )

typedef union VREvent_Data_t_102 VREvent_Data_t_102;
#pragma pack( push, 8 )
union VREvent_Data_t_102
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
    VREvent_ScreenshotProgress_t screenshotProgress;
    VREvent_ApplicationLaunch_t applicationLaunch;
};
#pragma pack( pop )

typedef union VREvent_Data_t_101 VREvent_Data_t_101;
#pragma pack( push, 8 )
union VREvent_Data_t_101
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    VREvent_Screenshot_t screenshot;
};
#pragma pack( pop )

typedef union VREvent_Data_t_0918 VREvent_Data_t_0918;
#pragma pack( push, 8 )
union VREvent_Data_t_0918
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
    VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
};
#pragma pack( pop )

typedef union VREvent_Data_t_0915 VREvent_Data_t_0915;
#pragma pack( push, 8 )
union VREvent_Data_t_0915
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Scroll_t_0915 scroll;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
    VREvent_TouchPadMove_t touchPadMove;
};
#pragma pack( pop )

typedef union VREvent_Data_t_0914 VREvent_Data_t_0914;
#pragma pack( push, 8 )
union VREvent_Data_t_0914
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
    VREvent_PerformanceTest_t performanceTest;
};
#pragma pack( pop )

typedef union VREvent_Data_t_0912 VREvent_Data_t_0912;
#pragma pack( push, 8 )
union VREvent_Data_t_0912
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_0912 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0912 keyboard;
    VREvent_Ipd_t ipd;
    VREvent_Chaperone_t chaperone;
};
#pragma pack( pop )

typedef union VREvent_Data_t_0910 VREvent_Data_t_0910;
#pragma pack( push, 8 )
union VREvent_Data_t_0910
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_090 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
    VREvent_Keyboard_t_0910 keyboard;
};
#pragma pack( pop )

typedef union VREvent_Data_t_097 VREvent_Data_t_097;
#pragma pack( push, 8 )
union VREvent_Data_t_097
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_090 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
    VREvent_Status_t status;
};
#pragma pack( pop )

typedef union VREvent_Data_t_093 VREvent_Data_t_093;
#pragma pack( push, 8 )
union VREvent_Data_t_093
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_090 process;
    VREvent_Notification_t_093 notification;
    VREvent_Overlay_t_092 overlay;
};
#pragma pack( pop )

typedef union VREvent_Data_t_092 VREvent_Data_t_092;
#pragma pack( push, 8 )
union VREvent_Data_t_092
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_090 process;
    VREvent_Notification_t_092 notification;
    VREvent_Overlay_t_092 overlay;
};
#pragma pack( pop )

typedef union VREvent_Data_t_090 VREvent_Data_t_090;
#pragma pack( push, 8 )
union VREvent_Data_t_090
{
    VREvent_Reserved_t_090 reserved;
    VREvent_Controller_t controller;
    VREvent_Mouse_t mouse;
    VREvent_Process_t_090 process;
};
#pragma pack( pop )

typedef union VROverlayIntersectionMaskPrimitive_Data_t VROverlayIntersectionMaskPrimitive_Data_t;
#pragma pack( push, 4 )
union VROverlayIntersectionMaskPrimitive_Data_t
{
    IntersectionMaskRectangle_t m_Rectangle;
    IntersectionMaskCircle_t m_Circle;
};
#pragma pack( pop )

typedef struct VRTextureBounds_t VRTextureBounds_t;
#pragma pack( push, 4 )
struct VRTextureBounds_t
{
    float uMin;
    float vMin;
    float uMax;
    float vMax;
};
#pragma pack( pop )

typedef struct ChaperoneSeatedBoundsInfo_t ChaperoneSeatedBoundsInfo_t;
#pragma pack( push, 4 )
struct ChaperoneSeatedBoundsInfo_t
{
    HmdVector3_t vSeatedHeadPosition;
    HmdVector3_t (vDeskEdgePositions)[2];
};
#pragma pack( pop )

typedef struct ChaperoneSoftBoundsInfo_t ChaperoneSoftBoundsInfo_t;
#pragma pack( push, 4 )
struct ChaperoneSoftBoundsInfo_t
{
    HmdQuad_t quadCorners;
};
#pragma pack( pop )

typedef struct Compositor_BenchmarkResults Compositor_BenchmarkResults;
#pragma pack( push, 4 )
struct Compositor_BenchmarkResults
{
    float m_flMegaPixelsPerSecond;
    float m_flHmdRecommendedMegaPixelsPerSecond;
};
#pragma pack( pop )

typedef struct Compositor_CumulativeStats_1267 Compositor_CumulativeStats_1267;
#pragma pack( push, 8 )
struct Compositor_CumulativeStats_1267
{
    uint32_t m_nPid;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nNumReprojectedFrames;
    uint32_t m_nNumFramePresentsOnStartup;
    uint32_t m_nNumDroppedFramesOnStartup;
    uint32_t m_nNumReprojectedFramesOnStartup;
    uint32_t m_nNumLoading;
    uint32_t m_nNumFramePresentsLoading;
    uint32_t m_nNumDroppedFramesLoading;
    uint32_t m_nNumReprojectedFramesLoading;
    uint32_t m_nNumTimedOut;
    uint32_t m_nNumFramePresentsTimedOut;
    uint32_t m_nNumDroppedFramesTimedOut;
    uint32_t m_nNumReprojectedFramesTimedOut;
    uint32_t m_nNumFrameSubmits;
    double m_flSumCompositorCPUTimeMS;
    double m_flSumCompositorGPUTimeMS;
    double m_flSumTargetFrameTimes;
    double m_flSumApplicationCPUTimeMS;
    double m_flSumApplicationGPUTimeMS;
    uint32_t m_nNumFramesWithDepth;
    uint8_t __pad_108[4];
};
#pragma pack( pop )

typedef struct Compositor_CumulativeStats_100 Compositor_CumulativeStats_100;
#pragma pack( push, 4 )
struct Compositor_CumulativeStats_100
{
    uint32_t m_nPid;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nNumReprojectedFrames;
    uint32_t m_nNumFramePresentsOnStartup;
    uint32_t m_nNumDroppedFramesOnStartup;
    uint32_t m_nNumReprojectedFramesOnStartup;
    uint32_t m_nNumLoading;
    uint32_t m_nNumFramePresentsLoading;
    uint32_t m_nNumDroppedFramesLoading;
    uint32_t m_nNumReprojectedFramesLoading;
    uint32_t m_nNumTimedOut;
    uint32_t m_nNumFramePresentsTimedOut;
    uint32_t m_nNumDroppedFramesTimedOut;
    uint32_t m_nNumReprojectedFramesTimedOut;
};
#pragma pack( pop )

typedef struct Compositor_OverlaySettings Compositor_OverlaySettings;
#pragma pack( push, 4 )
struct Compositor_OverlaySettings
{
    uint32_t size;
    int8_t curved;
    int8_t antialias;
    uint8_t __pad_6[2];
    float scale;
    float distance;
    float alpha;
    float uOffset;
    float vOffset;
    float uScale;
    float vScale;
    float gridDivs;
    float gridWidth;
    float gridScale;
    HmdMatrix44_t transform;
};
#pragma pack( pop )

typedef struct Compositor_StageRenderSettings Compositor_StageRenderSettings;
#pragma pack( push, 4 )
struct Compositor_StageRenderSettings
{
    HmdColor_t m_PrimaryColor;
    HmdColor_t m_SecondaryColor;
    float m_flVignetteInnerRadius;
    float m_flVignetteOuterRadius;
    float m_flFresnelStrength;
    int8_t m_bBackfaceCulling;
    int8_t m_bGreyscale;
    int8_t m_bWireframe;
    uint8_t __pad_47[1];
};
#pragma pack( pop )

typedef struct Compositor_TextureBounds Compositor_TextureBounds;
#pragma pack( push, 4 )
struct Compositor_TextureBounds
{
    float uMin;
    float vMin;
    float uMax;
    float vMax;
};
#pragma pack( pop )

typedef struct DistortionCoordinates_t DistortionCoordinates_t;
#pragma pack( push, 4 )
struct DistortionCoordinates_t
{
    float (rfRed)[2];
    float (rfGreen)[2];
    float (rfBlue)[2];
};
#pragma pack( pop )

typedef struct DriverDirectMode_FrameTiming DriverDirectMode_FrameTiming;
#pragma pack( push, 4 )
struct DriverDirectMode_FrameTiming
{
    uint32_t m_nSize;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumMisPresented;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
};
#pragma pack( pop )

typedef struct HmdRect2_t HmdRect2_t;
#pragma pack( push, 4 )
struct HmdRect2_t
{
    HmdVector2_t vTopLeft;
    HmdVector2_t vBottomRight;
};
#pragma pack( pop )

typedef struct ImuSample_t ImuSample_t;
#pragma pack( push, 8 )
struct ImuSample_t
{
    double fSampleTime;
    HmdVector3d_t vAccel;
    HmdVector3d_t vGyro;
    uint32_t unOffScaleFlags;
    uint8_t __pad_60[4];
};
#pragma pack( pop )

typedef struct InputBindingInfo_t_11030 InputBindingInfo_t_11030;
#pragma pack( push, 1 )
struct InputBindingInfo_t_11030
{
    char (rchDevicePathName)[128];
    char (rchInputPathName)[128];
    char (rchModeName)[128];
    char (rchSlotName)[128];
    char (rchInputSourceType)[32];
};
#pragma pack( pop )

typedef struct InputBindingInfo_t_1517 InputBindingInfo_t_1517;
#pragma pack( push, 1 )
struct InputBindingInfo_t_1517
{
    char (rchDevicePathName)[128];
    char (rchInputPathName)[128];
    char (rchModeName)[128];
    char (rchSlotName)[128];
};
#pragma pack( pop )

typedef struct NotificationItem NotificationItem;
#pragma pack( push, 4 )
struct NotificationItem
{
    uint32_t notificationId;
};
#pragma pack( pop )

typedef struct RenderModel_ComponentState_t RenderModel_ComponentState_t;
#pragma pack( push, 4 )
struct RenderModel_ComponentState_t
{
    HmdMatrix34_t mTrackingToComponentRenderModel;
    HmdMatrix34_t mTrackingToComponentLocal;
    uint32_t uProperties;
};
#pragma pack( pop )

typedef struct RenderModel_ControllerMode_State_t RenderModel_ControllerMode_State_t;
#pragma pack( push, 1 )
struct RenderModel_ControllerMode_State_t
{
    int8_t bScrollWheelVisible;
};
#pragma pack( pop )

typedef struct RenderModel_Vertex_t RenderModel_Vertex_t;
#pragma pack( push, 4 )
struct RenderModel_Vertex_t
{
    HmdVector3_t vPosition;
    HmdVector3_t vNormal;
    float (rfTextureCoord)[2];
};
#pragma pack( pop )

typedef struct SpatialAnchorPose_t SpatialAnchorPose_t;
#pragma pack( push, 4 )
struct SpatialAnchorPose_t
{
    HmdMatrix34_t mAnchorToAbsoluteTracking;
};
#pragma pack( pop )

typedef struct VRActiveActionSet_t_1016 VRActiveActionSet_t_1016;
#pragma pack( push, 8 )
struct VRActiveActionSet_t_1016
{
    uint64_t ulActionSet;
    uint64_t ulRestrictedToDevice;
    uint64_t ulSecondaryActionSet;
    uint32_t unPadding;
    int32_t nPriority;
};
#pragma pack( pop )

typedef struct VRActiveActionSet_t_1015 VRActiveActionSet_t_1015;
#pragma pack( push, 8 )
struct VRActiveActionSet_t_1015
{
    uint64_t ulActionSet;
    uint64_t ulRestrictedToDevice;
    uint64_t ulSecondaryActionSet;
};
#pragma pack( pop )

typedef struct VRBoneTransform_t VRBoneTransform_t;
#pragma pack( push, 4 )
struct VRBoneTransform_t
{
    HmdVector4_t position;
    HmdQuaternionf_t orientation;
};
#pragma pack( pop )

typedef struct VRControllerAxis_t VRControllerAxis_t;
#pragma pack( push, 4 )
struct VRControllerAxis_t
{
    float x;
    float y;
};
#pragma pack( pop )

typedef struct VROverlayIntersectionMaskPrimitive_t VROverlayIntersectionMaskPrimitive_t;
#pragma pack( push, 4 )
struct VROverlayIntersectionMaskPrimitive_t
{
    uint32_t m_nPrimitiveType;
    VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;
};
#pragma pack( pop )

typedef struct VROverlayIntersectionParams_t VROverlayIntersectionParams_t;
#pragma pack( push, 4 )
struct VROverlayIntersectionParams_t
{
    HmdVector3_t vSource;
    HmdVector3_t vDirection;
    uint32_t eOrigin;
};
#pragma pack( pop )

typedef struct VROverlayIntersectionResults_t VROverlayIntersectionResults_t;
#pragma pack( push, 4 )
struct VROverlayIntersectionResults_t
{
    HmdVector3_t vPoint;
    HmdVector3_t vNormal;
    HmdVector2_t vUVs;
    float fDistance;
};
#pragma pack( pop )

typedef struct VROverlayProjection_t VROverlayProjection_t;
#pragma pack( push, 4 )
struct VROverlayProjection_t
{
    float fLeft;
    float fRight;
    float fTop;
    float fBottom;
};
#pragma pack( pop )

typedef struct VRSkeletalSummaryData_t VRSkeletalSummaryData_t;
#pragma pack( push, 4 )
struct VRSkeletalSummaryData_t
{
    float (flFingerCurl)[5];
    float (flFingerSplay)[4];
};
#pragma pack( pop )

typedef struct u64_RenderModel_TextureMap_t_1237 u64_RenderModel_TextureMap_t_1237;
typedef struct w64_RenderModel_TextureMap_t_1237 w64_RenderModel_TextureMap_t_1237;
typedef struct w32_RenderModel_TextureMap_t_1237 u32_RenderModel_TextureMap_t_1237;
typedef struct w32_RenderModel_TextureMap_t_1237 w32_RenderModel_TextureMap_t_1237;
typedef struct u64_RenderModel_TextureMap_t_11111 u64_RenderModel_TextureMap_t_11111;
typedef struct w64_RenderModel_TextureMap_t_11111 w64_RenderModel_TextureMap_t_11111;
typedef struct w32_RenderModel_TextureMap_t_11111 u32_RenderModel_TextureMap_t_11111;
typedef struct w32_RenderModel_TextureMap_t_11111 w32_RenderModel_TextureMap_t_11111;
typedef struct u64_RenderModel_TextureMap_t_090 u64_RenderModel_TextureMap_t_090;
typedef struct w64_RenderModel_TextureMap_t_090 w64_RenderModel_TextureMap_t_090;
typedef struct w32_RenderModel_TextureMap_t_090 u32_RenderModel_TextureMap_t_090;
typedef struct w32_RenderModel_TextureMap_t_090 w32_RenderModel_TextureMap_t_090;
typedef struct w64_Texture_t u64_Texture_t;
typedef struct w64_Texture_t w64_Texture_t;
typedef struct w32_Texture_t u32_Texture_t;
typedef struct w32_Texture_t w32_Texture_t;
typedef struct w64_VRTextureDepthInfo_t u64_VRTextureDepthInfo_t;
typedef struct w64_VRTextureDepthInfo_t w64_VRTextureDepthInfo_t;
typedef struct w32_VRTextureDepthInfo_t u32_VRTextureDepthInfo_t;
typedef struct w32_VRTextureDepthInfo_t w32_VRTextureDepthInfo_t;
typedef struct w64_AppOverrideKeys_t u64_AppOverrideKeys_t;
typedef struct w64_AppOverrideKeys_t w64_AppOverrideKeys_t;
typedef struct w32_AppOverrideKeys_t u32_AppOverrideKeys_t;
typedef struct w32_AppOverrideKeys_t w32_AppOverrideKeys_t;
typedef struct w64_COpenVRContext_11030 u64_COpenVRContext_11030;
typedef struct w64_COpenVRContext_11030 w64_COpenVRContext_11030;
typedef struct w32_COpenVRContext_11030 u32_COpenVRContext_11030;
typedef struct w32_COpenVRContext_11030 w32_COpenVRContext_11030;
typedef struct w64_COpenVRContext_1517 u64_COpenVRContext_1517;
typedef struct w64_COpenVRContext_1517 w64_COpenVRContext_1517;
typedef struct w32_COpenVRContext_1517 u32_COpenVRContext_1517;
typedef struct w32_COpenVRContext_1517 w32_COpenVRContext_1517;
typedef struct w64_COpenVRContext_1210 u64_COpenVRContext_1210;
typedef struct w64_COpenVRContext_1210 w64_COpenVRContext_1210;
typedef struct w32_COpenVRContext_1210 u32_COpenVRContext_1210;
typedef struct w32_COpenVRContext_1210 w32_COpenVRContext_1210;
typedef struct w64_COpenVRContext_1016 u64_COpenVRContext_1016;
typedef struct w64_COpenVRContext_1016 w64_COpenVRContext_1016;
typedef struct w32_COpenVRContext_1016 u32_COpenVRContext_1016;
typedef struct w32_COpenVRContext_1016 w32_COpenVRContext_1016;
typedef struct w64_COpenVRContext_1015 u64_COpenVRContext_1015;
typedef struct w64_COpenVRContext_1015 w64_COpenVRContext_1015;
typedef struct w32_COpenVRContext_1015 u32_COpenVRContext_1015;
typedef struct w32_COpenVRContext_1015 w32_COpenVRContext_1015;
typedef struct w64_COpenVRContext_108 u64_COpenVRContext_108;
typedef struct w64_COpenVRContext_108 w64_COpenVRContext_108;
typedef struct w32_COpenVRContext_108 u32_COpenVRContext_108;
typedef struct w32_COpenVRContext_108 w32_COpenVRContext_108;
typedef struct w64_COpenVRContext_102 u64_COpenVRContext_102;
typedef struct w64_COpenVRContext_102 w64_COpenVRContext_102;
typedef struct w32_COpenVRContext_102 u32_COpenVRContext_102;
typedef struct w32_COpenVRContext_102 w32_COpenVRContext_102;
typedef struct w64_COpenVRContext_101 u64_COpenVRContext_101;
typedef struct w64_COpenVRContext_101 w64_COpenVRContext_101;
typedef struct w32_COpenVRContext_101 u32_COpenVRContext_101;
typedef struct w32_COpenVRContext_101 w32_COpenVRContext_101;
typedef struct w64_COpenVRContext_100 u64_COpenVRContext_100;
typedef struct w64_COpenVRContext_100 w64_COpenVRContext_100;
typedef struct w32_COpenVRContext_100 u32_COpenVRContext_100;
typedef struct w32_COpenVRContext_100 w32_COpenVRContext_100;
typedef struct w64_COpenVRContext_0917 u64_COpenVRContext_0917;
typedef struct w64_COpenVRContext_0917 w64_COpenVRContext_0917;
typedef struct w32_COpenVRContext_0917 u32_COpenVRContext_0917;
typedef struct w32_COpenVRContext_0917 w32_COpenVRContext_0917;
typedef struct w64_CameraVideoStreamFrameHeader_t_1017 u64_CameraVideoStreamFrameHeader_t_1017;
typedef struct w64_CameraVideoStreamFrameHeader_t_1017 w64_CameraVideoStreamFrameHeader_t_1017;
typedef struct u32_CameraVideoStreamFrameHeader_t_1017 u32_CameraVideoStreamFrameHeader_t_1017;
typedef struct w32_CameraVideoStreamFrameHeader_t_1017 w32_CameraVideoStreamFrameHeader_t_1017;
typedef struct w64_CameraVideoStreamFrameHeader_t_100 u64_CameraVideoStreamFrameHeader_t_100;
typedef struct w64_CameraVideoStreamFrameHeader_t_100 w64_CameraVideoStreamFrameHeader_t_100;
typedef struct w32_CameraVideoStreamFrameHeader_t_100 u32_CameraVideoStreamFrameHeader_t_100;
typedef struct w32_CameraVideoStreamFrameHeader_t_100 w32_CameraVideoStreamFrameHeader_t_100;
typedef struct u64_CameraVideoStreamFrame_t_0914 u64_CameraVideoStreamFrame_t_0914;
typedef struct w64_CameraVideoStreamFrame_t_0914 w64_CameraVideoStreamFrame_t_0914;
typedef struct u32_CameraVideoStreamFrame_t_0914 u32_CameraVideoStreamFrame_t_0914;
typedef struct w32_CameraVideoStreamFrame_t_0914 w32_CameraVideoStreamFrame_t_0914;
typedef struct u64_CameraVideoStreamFrame_t_0912 u64_CameraVideoStreamFrame_t_0912;
typedef struct w64_CameraVideoStreamFrame_t_0912 w64_CameraVideoStreamFrame_t_0912;
typedef struct w32_CameraVideoStreamFrame_t_0912 u32_CameraVideoStreamFrame_t_0912;
typedef struct w32_CameraVideoStreamFrame_t_0912 w32_CameraVideoStreamFrame_t_0912;
typedef struct w64_Compositor_FrameTiming_1017 u64_Compositor_FrameTiming_1017;
typedef struct w64_Compositor_FrameTiming_1017 w64_Compositor_FrameTiming_1017;
typedef struct w32_Compositor_FrameTiming_1017 u32_Compositor_FrameTiming_1017;
typedef struct w32_Compositor_FrameTiming_1017 w32_Compositor_FrameTiming_1017;
typedef struct w64_Compositor_FrameTiming_103a u64_Compositor_FrameTiming_103a;
typedef struct w64_Compositor_FrameTiming_103a w64_Compositor_FrameTiming_103a;
typedef struct w32_Compositor_FrameTiming_103a u32_Compositor_FrameTiming_103a;
typedef struct w32_Compositor_FrameTiming_103a w32_Compositor_FrameTiming_103a;
typedef struct u64_Compositor_FrameTiming_102 u64_Compositor_FrameTiming_102;
typedef struct w64_Compositor_FrameTiming_102 w64_Compositor_FrameTiming_102;
typedef struct u32_Compositor_FrameTiming_102 u32_Compositor_FrameTiming_102;
typedef struct w32_Compositor_FrameTiming_102 w32_Compositor_FrameTiming_102;
typedef struct w64_Compositor_FrameTiming_0920 u64_Compositor_FrameTiming_0920;
typedef struct w64_Compositor_FrameTiming_0920 w64_Compositor_FrameTiming_0920;
typedef struct w32_Compositor_FrameTiming_0920 u32_Compositor_FrameTiming_0920;
typedef struct w32_Compositor_FrameTiming_0920 w32_Compositor_FrameTiming_0920;
typedef struct w64_Compositor_FrameTiming_0915 u64_Compositor_FrameTiming_0915;
typedef struct w64_Compositor_FrameTiming_0915 w64_Compositor_FrameTiming_0915;
typedef struct w32_Compositor_FrameTiming_0915 u32_Compositor_FrameTiming_0915;
typedef struct w32_Compositor_FrameTiming_0915 w32_Compositor_FrameTiming_0915;
typedef struct u64_Compositor_FrameTiming_0914 u64_Compositor_FrameTiming_0914;
typedef struct w64_Compositor_FrameTiming_0914 w64_Compositor_FrameTiming_0914;
typedef struct u32_Compositor_FrameTiming_0914 u32_Compositor_FrameTiming_0914;
typedef struct w32_Compositor_FrameTiming_0914 w32_Compositor_FrameTiming_0914;
typedef struct u64_Compositor_FrameTiming_0913 u64_Compositor_FrameTiming_0913;
typedef struct w64_Compositor_FrameTiming_0913 w64_Compositor_FrameTiming_0913;
typedef struct u32_Compositor_FrameTiming_0913 u32_Compositor_FrameTiming_0913;
typedef struct w32_Compositor_FrameTiming_0913 w32_Compositor_FrameTiming_0913;
typedef struct u64_Compositor_FrameTiming_0912 u64_Compositor_FrameTiming_0912;
typedef struct w64_Compositor_FrameTiming_0912 w64_Compositor_FrameTiming_0912;
typedef struct u32_Compositor_FrameTiming_0912 u32_Compositor_FrameTiming_0912;
typedef struct w32_Compositor_FrameTiming_0912 w32_Compositor_FrameTiming_0912;
typedef struct u64_Compositor_FrameTiming_093 u64_Compositor_FrameTiming_093;
typedef struct w64_Compositor_FrameTiming_093 w64_Compositor_FrameTiming_093;
typedef struct u32_Compositor_FrameTiming_093 u32_Compositor_FrameTiming_093;
typedef struct w32_Compositor_FrameTiming_093 w32_Compositor_FrameTiming_093;
typedef struct u64_Compositor_FrameTiming_090 u64_Compositor_FrameTiming_090;
typedef struct w64_Compositor_FrameTiming_090 w64_Compositor_FrameTiming_090;
typedef struct u32_Compositor_FrameTiming_090 u32_Compositor_FrameTiming_090;
typedef struct w32_Compositor_FrameTiming_090 w32_Compositor_FrameTiming_090;
typedef struct w64_D3D12TextureData_t u64_D3D12TextureData_t;
typedef struct w64_D3D12TextureData_t w64_D3D12TextureData_t;
typedef struct w32_D3D12TextureData_t u32_D3D12TextureData_t;
typedef struct w32_D3D12TextureData_t w32_D3D12TextureData_t;
typedef struct w64_HiddenAreaMesh_t u64_HiddenAreaMesh_t;
typedef struct w64_HiddenAreaMesh_t w64_HiddenAreaMesh_t;
typedef struct w32_HiddenAreaMesh_t u32_HiddenAreaMesh_t;
typedef struct w32_HiddenAreaMesh_t w32_HiddenAreaMesh_t;
typedef struct u_IVRDebug u_IVRDebug;
typedef struct u_IVRDebug u64_IVRDebug;
typedef struct u_IVRDebug u32_IVRDebug;
typedef struct w_IVRDebug w_IVRDebug;
typedef struct w_IVRDebug w64_IVRDebug;
typedef struct w_IVRDebug w32_IVRDebug;
typedef struct u_IVRSpatialAnchors u_IVRSpatialAnchors;
typedef struct u_IVRSpatialAnchors u64_IVRSpatialAnchors;
typedef struct u_IVRSpatialAnchors u32_IVRSpatialAnchors;
typedef struct w_IVRSpatialAnchors w_IVRSpatialAnchors;
typedef struct w_IVRSpatialAnchors w64_IVRSpatialAnchors;
typedef struct w_IVRSpatialAnchors w32_IVRSpatialAnchors;
typedef struct w64_InputAnalogActionData_t u64_InputAnalogActionData_t;
typedef struct w64_InputAnalogActionData_t w64_InputAnalogActionData_t;
typedef struct u32_InputAnalogActionData_t u32_InputAnalogActionData_t;
typedef struct w32_InputAnalogActionData_t w32_InputAnalogActionData_t;
typedef struct w64_InputDigitalActionData_t u64_InputDigitalActionData_t;
typedef struct w64_InputDigitalActionData_t w64_InputDigitalActionData_t;
typedef struct u32_InputDigitalActionData_t u32_InputDigitalActionData_t;
typedef struct w32_InputDigitalActionData_t w32_InputDigitalActionData_t;
typedef struct w64_InputOriginInfo_t u64_InputOriginInfo_t;
typedef struct w64_InputOriginInfo_t w64_InputOriginInfo_t;
typedef struct u32_InputOriginInfo_t u32_InputOriginInfo_t;
typedef struct w32_InputOriginInfo_t w32_InputOriginInfo_t;
typedef struct w64_InputPoseActionData_t u64_InputPoseActionData_t;
typedef struct w64_InputPoseActionData_t w64_InputPoseActionData_t;
typedef struct u32_InputPoseActionData_t u32_InputPoseActionData_t;
typedef struct w32_InputPoseActionData_t w32_InputPoseActionData_t;
typedef struct w64_InputSkeletalActionData_t_113b u64_InputSkeletalActionData_t_113b;
typedef struct w64_InputSkeletalActionData_t_113b w64_InputSkeletalActionData_t_113b;
typedef struct u32_InputSkeletalActionData_t_113b u32_InputSkeletalActionData_t_113b;
typedef struct w32_InputSkeletalActionData_t_113b w32_InputSkeletalActionData_t_113b;
typedef struct w64_InputSkeletalActionData_t_1016 u64_InputSkeletalActionData_t_1016;
typedef struct w64_InputSkeletalActionData_t_1016 w64_InputSkeletalActionData_t_1016;
typedef struct u32_InputSkeletalActionData_t_1016 u32_InputSkeletalActionData_t_1016;
typedef struct w32_InputSkeletalActionData_t_1016 w32_InputSkeletalActionData_t_1016;
typedef struct w64_InputSkeletonActionData_t u64_InputSkeletonActionData_t;
typedef struct w64_InputSkeletonActionData_t w64_InputSkeletonActionData_t;
typedef struct u32_InputSkeletonActionData_t u32_InputSkeletonActionData_t;
typedef struct w32_InputSkeletonActionData_t w32_InputSkeletonActionData_t;
typedef struct w64_NotificationBitmap u64_NotificationBitmap;
typedef struct w64_NotificationBitmap w64_NotificationBitmap;
typedef struct w32_NotificationBitmap u32_NotificationBitmap;
typedef struct w32_NotificationBitmap w32_NotificationBitmap;
typedef struct w64_NotificationBitmap_t u64_NotificationBitmap_t;
typedef struct w64_NotificationBitmap_t w64_NotificationBitmap_t;
typedef struct w32_NotificationBitmap_t u32_NotificationBitmap_t;
typedef struct w32_NotificationBitmap_t w32_NotificationBitmap_t;
typedef struct u64_RenderModel_t_0912 u64_RenderModel_t_0912;
typedef struct w64_RenderModel_t_0912 w64_RenderModel_t_0912;
typedef struct w32_RenderModel_t_0912 u32_RenderModel_t_0912;
typedef struct w32_RenderModel_t_0912 w32_RenderModel_t_0912;
typedef struct u64_RenderModel_t_090 u64_RenderModel_t_090;
typedef struct w64_RenderModel_t_090 w64_RenderModel_t_090;
typedef struct w32_RenderModel_t_090 u32_RenderModel_t_090;
typedef struct w32_RenderModel_t_090 w32_RenderModel_t_090;
typedef struct u64_VRControllerState001_t u64_VRControllerState001_t;
typedef struct w64_VRControllerState001_t w64_VRControllerState001_t;
typedef struct u32_VRControllerState001_t u32_VRControllerState001_t;
typedef struct w32_VRControllerState001_t w32_VRControllerState001_t;
typedef struct u64_VREvent_t_1168 u64_VREvent_t_1168;
typedef struct w64_VREvent_t_1168 w64_VREvent_t_1168;
typedef struct u32_VREvent_t_1168 u32_VREvent_t_1168;
typedef struct w32_VREvent_t_1168 w32_VREvent_t_1168;
typedef struct u64_VREvent_t_11030 u64_VREvent_t_11030;
typedef struct w64_VREvent_t_11030 w64_VREvent_t_11030;
typedef struct u32_VREvent_t_11030 u32_VREvent_t_11030;
typedef struct w32_VREvent_t_11030 w32_VREvent_t_11030;
typedef struct u64_VREvent_t_1322 u64_VREvent_t_1322;
typedef struct w64_VREvent_t_1322 w64_VREvent_t_1322;
typedef struct u32_VREvent_t_1322 u32_VREvent_t_1322;
typedef struct w32_VREvent_t_1322 w32_VREvent_t_1322;
typedef struct u64_VREvent_t_1210 u64_VREvent_t_1210;
typedef struct w64_VREvent_t_1210 w64_VREvent_t_1210;
typedef struct u32_VREvent_t_1210 u32_VREvent_t_1210;
typedef struct w32_VREvent_t_1210 w32_VREvent_t_1210;
typedef struct u64_VREvent_t_113b u64_VREvent_t_113b;
typedef struct w64_VREvent_t_113b w64_VREvent_t_113b;
typedef struct u32_VREvent_t_113b u32_VREvent_t_113b;
typedef struct w32_VREvent_t_113b w32_VREvent_t_113b;
typedef struct u64_VREvent_t_1016 u64_VREvent_t_1016;
typedef struct w64_VREvent_t_1016 w64_VREvent_t_1016;
typedef struct u32_VREvent_t_1016 u32_VREvent_t_1016;
typedef struct w32_VREvent_t_1016 w32_VREvent_t_1016;
typedef struct u64_VREvent_t_1015 u64_VREvent_t_1015;
typedef struct w64_VREvent_t_1015 w64_VREvent_t_1015;
typedef struct u32_VREvent_t_1015 u32_VREvent_t_1015;
typedef struct w32_VREvent_t_1015 w32_VREvent_t_1015;
typedef struct u64_VREvent_t_1014 u64_VREvent_t_1014;
typedef struct w64_VREvent_t_1014 w64_VREvent_t_1014;
typedef struct u32_VREvent_t_1014 u32_VREvent_t_1014;
typedef struct w32_VREvent_t_1014 w32_VREvent_t_1014;
typedef struct u64_VREvent_t_1013 u64_VREvent_t_1013;
typedef struct w64_VREvent_t_1013 w64_VREvent_t_1013;
typedef struct u32_VREvent_t_1013 u32_VREvent_t_1013;
typedef struct w32_VREvent_t_1013 w32_VREvent_t_1013;
typedef struct u64_VREvent_t_1012 u64_VREvent_t_1012;
typedef struct w64_VREvent_t_1012 w64_VREvent_t_1012;
typedef struct u32_VREvent_t_1012 u32_VREvent_t_1012;
typedef struct w32_VREvent_t_1012 w32_VREvent_t_1012;
typedef struct u64_VREvent_t_1011 u64_VREvent_t_1011;
typedef struct w64_VREvent_t_1011 w64_VREvent_t_1011;
typedef struct u32_VREvent_t_1011 u32_VREvent_t_1011;
typedef struct w32_VREvent_t_1011 w32_VREvent_t_1011;
typedef struct u64_VREvent_t_106 u64_VREvent_t_106;
typedef struct w64_VREvent_t_106 w64_VREvent_t_106;
typedef struct u32_VREvent_t_106 u32_VREvent_t_106;
typedef struct w32_VREvent_t_106 w32_VREvent_t_106;
typedef struct u64_VREvent_t_105 u64_VREvent_t_105;
typedef struct w64_VREvent_t_105 w64_VREvent_t_105;
typedef struct u32_VREvent_t_105 u32_VREvent_t_105;
typedef struct w32_VREvent_t_105 w32_VREvent_t_105;
typedef struct u64_VREvent_t_103 u64_VREvent_t_103;
typedef struct w64_VREvent_t_103 w64_VREvent_t_103;
typedef struct u32_VREvent_t_103 u32_VREvent_t_103;
typedef struct w32_VREvent_t_103 w32_VREvent_t_103;
typedef struct u64_VREvent_t_102 u64_VREvent_t_102;
typedef struct w64_VREvent_t_102 w64_VREvent_t_102;
typedef struct u32_VREvent_t_102 u32_VREvent_t_102;
typedef struct w32_VREvent_t_102 w32_VREvent_t_102;
typedef struct u64_VREvent_t_101 u64_VREvent_t_101;
typedef struct w64_VREvent_t_101 w64_VREvent_t_101;
typedef struct u32_VREvent_t_101 u32_VREvent_t_101;
typedef struct w32_VREvent_t_101 w32_VREvent_t_101;
typedef struct u64_VREvent_t_0918 u64_VREvent_t_0918;
typedef struct w64_VREvent_t_0918 w64_VREvent_t_0918;
typedef struct u32_VREvent_t_0918 u32_VREvent_t_0918;
typedef struct w32_VREvent_t_0918 w32_VREvent_t_0918;
typedef struct u64_VREvent_t_0915 u64_VREvent_t_0915;
typedef struct w64_VREvent_t_0915 w64_VREvent_t_0915;
typedef struct u32_VREvent_t_0915 u32_VREvent_t_0915;
typedef struct w32_VREvent_t_0915 w32_VREvent_t_0915;
typedef struct u64_VREvent_t_0914 u64_VREvent_t_0914;
typedef struct w64_VREvent_t_0914 w64_VREvent_t_0914;
typedef struct u32_VREvent_t_0914 u32_VREvent_t_0914;
typedef struct w32_VREvent_t_0914 w32_VREvent_t_0914;
typedef struct u64_VREvent_t_0912 u64_VREvent_t_0912;
typedef struct w64_VREvent_t_0912 w64_VREvent_t_0912;
typedef struct u32_VREvent_t_0912 u32_VREvent_t_0912;
typedef struct w32_VREvent_t_0912 w32_VREvent_t_0912;
typedef struct u64_VREvent_t_0910 u64_VREvent_t_0910;
typedef struct w64_VREvent_t_0910 w64_VREvent_t_0910;
typedef struct u32_VREvent_t_0910 u32_VREvent_t_0910;
typedef struct w32_VREvent_t_0910 w32_VREvent_t_0910;
typedef struct u64_VREvent_t_097 u64_VREvent_t_097;
typedef struct w64_VREvent_t_097 w64_VREvent_t_097;
typedef struct u32_VREvent_t_097 u32_VREvent_t_097;
typedef struct w32_VREvent_t_097 w32_VREvent_t_097;
typedef struct u64_VREvent_t_093 u64_VREvent_t_093;
typedef struct w64_VREvent_t_093 w64_VREvent_t_093;
typedef struct u32_VREvent_t_093 u32_VREvent_t_093;
typedef struct w32_VREvent_t_093 w32_VREvent_t_093;
typedef struct u64_VREvent_t_092 u64_VREvent_t_092;
typedef struct w64_VREvent_t_092 w64_VREvent_t_092;
typedef struct u32_VREvent_t_092 u32_VREvent_t_092;
typedef struct w32_VREvent_t_092 w32_VREvent_t_092;
typedef struct u64_VREvent_t_090 u64_VREvent_t_090;
typedef struct w64_VREvent_t_090 w64_VREvent_t_090;
typedef struct u32_VREvent_t_090 u32_VREvent_t_090;
typedef struct w32_VREvent_t_090 w32_VREvent_t_090;
typedef struct w64_VRNativeDevice_t u64_VRNativeDevice_t;
typedef struct w64_VRNativeDevice_t w64_VRNativeDevice_t;
typedef struct w32_VRNativeDevice_t u32_VRNativeDevice_t;
typedef struct w32_VRNativeDevice_t w32_VRNativeDevice_t;
typedef struct w64_VROverlayView_t u64_VROverlayView_t;
typedef struct w64_VROverlayView_t w64_VROverlayView_t;
typedef struct u32_VROverlayView_t u32_VROverlayView_t;
typedef struct w32_VROverlayView_t w32_VROverlayView_t;
typedef struct w64_VRTextureWithDepth_t u64_VRTextureWithDepth_t;
typedef struct w64_VRTextureWithDepth_t w64_VRTextureWithDepth_t;
typedef struct w32_VRTextureWithDepth_t u32_VRTextureWithDepth_t;
typedef struct w32_VRTextureWithDepth_t w32_VRTextureWithDepth_t;
typedef struct w64_VRTextureWithPoseAndDepth_t u64_VRTextureWithPoseAndDepth_t;
typedef struct w64_VRTextureWithPoseAndDepth_t w64_VRTextureWithPoseAndDepth_t;
typedef struct w32_VRTextureWithPoseAndDepth_t u32_VRTextureWithPoseAndDepth_t;
typedef struct w32_VRTextureWithPoseAndDepth_t w32_VRTextureWithPoseAndDepth_t;
typedef struct w64_VRTextureWithPose_t u64_VRTextureWithPose_t;
typedef struct w64_VRTextureWithPose_t w64_VRTextureWithPose_t;
typedef struct w32_VRTextureWithPose_t u32_VRTextureWithPose_t;
typedef struct w32_VRTextureWithPose_t w32_VRTextureWithPose_t;
typedef struct w64_VRVulkanDevice_t u64_VRVulkanDevice_t;
typedef struct w64_VRVulkanDevice_t w64_VRVulkanDevice_t;
typedef struct w32_VRVulkanDevice_t u32_VRVulkanDevice_t;
typedef struct w32_VRVulkanDevice_t w32_VRVulkanDevice_t;
typedef struct w64_VRVulkanTextureArrayData_t u64_VRVulkanTextureArrayData_t;
typedef struct w64_VRVulkanTextureArrayData_t w64_VRVulkanTextureArrayData_t;
typedef struct u32_VRVulkanTextureArrayData_t u32_VRVulkanTextureArrayData_t;
typedef struct w32_VRVulkanTextureArrayData_t w32_VRVulkanTextureArrayData_t;
typedef struct w64_VRVulkanTextureData_t u64_VRVulkanTextureData_t;
typedef struct w64_VRVulkanTextureData_t w64_VRVulkanTextureData_t;
typedef struct w32_VRVulkanTextureData_t u32_VRVulkanTextureData_t;
typedef struct w32_VRVulkanTextureData_t w32_VRVulkanTextureData_t;
typedef struct w64_VulkanData_t u64_VulkanData_t;
typedef struct w64_VulkanData_t w64_VulkanData_t;
typedef struct w32_VulkanData_t u32_VulkanData_t;
typedef struct w32_VulkanData_t w32_VulkanData_t;
#pragma pack( push, 8 )
struct w64_RenderModel_TextureMap_t_1237
{
    uint16_t unWidth;
    uint16_t unHeight;
    uint8_t __pad_4[4];
    W64_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
    uint32_t format;
    uint16_t unMipLevels;
    uint8_t __pad_22[2];
#ifdef __cplusplus
    operator u64_RenderModel_TextureMap_t_1237() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RenderModel_TextureMap_t_1237
{
    uint16_t unWidth;
    uint16_t unHeight;
    U64_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
    uint32_t format;
    uint16_t unMipLevels;
    uint8_t __pad_18[2];
#ifdef __cplusplus
    operator w64_RenderModel_TextureMap_t_1237() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_RenderModel_TextureMap_t_1237
{
    uint16_t unWidth;
    uint16_t unHeight;
    W32_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
    uint32_t format;
    uint16_t unMipLevels;
    uint8_t __pad_14[2];
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RenderModel_TextureMap_t_1237 w_RenderModel_TextureMap_t_1237;
typedef u32_RenderModel_TextureMap_t_1237 u_RenderModel_TextureMap_t_1237;
#endif
#ifdef __x86_64__
typedef w64_RenderModel_TextureMap_t_1237 w_RenderModel_TextureMap_t_1237;
typedef u64_RenderModel_TextureMap_t_1237 u_RenderModel_TextureMap_t_1237;
#endif

#pragma pack( push, 8 )
struct w64_RenderModel_TextureMap_t_11111
{
    uint16_t unWidth;
    uint16_t unHeight;
    uint8_t __pad_4[4];
    W64_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
    uint32_t format;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u64_RenderModel_TextureMap_t_11111() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RenderModel_TextureMap_t_11111
{
    uint16_t unWidth;
    uint16_t unHeight;
    U64_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
    uint32_t format;
#ifdef __cplusplus
    operator w64_RenderModel_TextureMap_t_11111() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_RenderModel_TextureMap_t_11111
{
    uint16_t unWidth;
    uint16_t unHeight;
    W32_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
    uint32_t format;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RenderModel_TextureMap_t_11111 w_RenderModel_TextureMap_t_11111;
typedef u32_RenderModel_TextureMap_t_11111 u_RenderModel_TextureMap_t_11111;
#endif
#ifdef __x86_64__
typedef w64_RenderModel_TextureMap_t_11111 w_RenderModel_TextureMap_t_11111;
typedef u64_RenderModel_TextureMap_t_11111 u_RenderModel_TextureMap_t_11111;
#endif

#pragma pack( push, 8 )
struct w64_RenderModel_TextureMap_t_090
{
    uint16_t unWidth;
    uint16_t unHeight;
    uint8_t __pad_4[4];
    W64_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
#ifdef __cplusplus
    operator u64_RenderModel_TextureMap_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RenderModel_TextureMap_t_090
{
    uint16_t unWidth;
    uint16_t unHeight;
    U64_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
#ifdef __cplusplus
    operator w64_RenderModel_TextureMap_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_RenderModel_TextureMap_t_090
{
    uint16_t unWidth;
    uint16_t unHeight;
    W32_PTR(const uint8_t *rubTextureMapData, rubTextureMapData);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RenderModel_TextureMap_t_090 w_RenderModel_TextureMap_t_090;
typedef u32_RenderModel_TextureMap_t_090 u_RenderModel_TextureMap_t_090;
#endif
#ifdef __x86_64__
typedef w64_RenderModel_TextureMap_t_090 w_RenderModel_TextureMap_t_090;
typedef u64_RenderModel_TextureMap_t_090 u_RenderModel_TextureMap_t_090;
#endif

#pragma pack( push, 8 )
struct w64_Texture_t
{
    W64_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_Texture_t
{
    W32_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Texture_t w_Texture_t;
typedef u32_Texture_t u_Texture_t;
#endif
#ifdef __x86_64__
typedef w64_Texture_t w_Texture_t;
typedef u64_Texture_t u_Texture_t;
#endif

#pragma pack( push, 8 )
struct w64_VRTextureDepthInfo_t
{
    W64_PTR(void *handle, handle);
    HmdMatrix44_t mProjection;
    HmdVector2_t vRange;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_VRTextureDepthInfo_t
{
    W32_PTR(void *handle, handle);
    HmdMatrix44_t mProjection;
    HmdVector2_t vRange;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRTextureDepthInfo_t w_VRTextureDepthInfo_t;
typedef u32_VRTextureDepthInfo_t u_VRTextureDepthInfo_t;
#endif
#ifdef __x86_64__
typedef w64_VRTextureDepthInfo_t w_VRTextureDepthInfo_t;
typedef u64_VRTextureDepthInfo_t u_VRTextureDepthInfo_t;
#endif

#pragma pack( push, 8 )
struct w64_AppOverrideKeys_t
{
    W64_PTR(const char *pchKey, pchKey);
    W64_PTR(const char *pchValue, pchValue);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_AppOverrideKeys_t
{
    W32_PTR(const char *pchKey, pchKey);
    W32_PTR(const char *pchValue, pchValue);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_AppOverrideKeys_t w_AppOverrideKeys_t;
typedef u32_AppOverrideKeys_t u_AppOverrideKeys_t;
#endif
#ifdef __x86_64__
typedef w64_AppOverrideKeys_t w_AppOverrideKeys_t;
typedef u64_AppOverrideKeys_t u_AppOverrideKeys_t;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_11030
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVRHeadsetView*/ *m_pVRHeadsetView, m_pVRHeadsetView);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVROverlayView*/ *m_pVROverlayView, m_pVROverlayView);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W64_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W64_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W64_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W64_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
    W64_PTR(void /*IVRDebug*/ *m_pVRDebug, m_pVRDebug);
    W64_PTR(void /*IVRNotifications*/ *m_pVRNotifications, m_pVRNotifications);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_11030
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVRHeadsetView*/ *m_pVRHeadsetView, m_pVRHeadsetView);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVROverlayView*/ *m_pVROverlayView, m_pVROverlayView);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W32_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W32_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W32_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W32_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
    W32_PTR(void /*IVRDebug*/ *m_pVRDebug, m_pVRDebug);
    W32_PTR(void /*IVRNotifications*/ *m_pVRNotifications, m_pVRNotifications);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_11030 w_COpenVRContext_11030;
typedef u32_COpenVRContext_11030 u_COpenVRContext_11030;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_11030 w_COpenVRContext_11030;
typedef u64_COpenVRContext_11030 u_COpenVRContext_11030;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_1517
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W64_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W64_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W64_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W64_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
    W64_PTR(void /*IVRDebug*/ *m_pVRDebug, m_pVRDebug);
    W64_PTR(void /*IVRNotifications*/ *m_pVRNotifications, m_pVRNotifications);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_1517
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W32_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W32_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W32_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W32_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
    W32_PTR(void /*IVRDebug*/ *m_pVRDebug, m_pVRDebug);
    W32_PTR(void /*IVRNotifications*/ *m_pVRNotifications, m_pVRNotifications);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_1517 w_COpenVRContext_1517;
typedef u32_COpenVRContext_1517 u_COpenVRContext_1517;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_1517 w_COpenVRContext_1517;
typedef u64_COpenVRContext_1517 u_COpenVRContext_1517;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_1210
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W64_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W64_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W64_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W64_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
    W64_PTR(void /*IVRNotifications*/ *m_pVRNotifications, m_pVRNotifications);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_1210
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W32_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W32_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W32_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W32_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
    W32_PTR(void /*IVRNotifications*/ *m_pVRNotifications, m_pVRNotifications);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_1210 w_COpenVRContext_1210;
typedef u32_COpenVRContext_1210 u_COpenVRContext_1210;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_1210 w_COpenVRContext_1210;
typedef u64_COpenVRContext_1210 u_COpenVRContext_1210;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_1016
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W64_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W64_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W64_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W64_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_1016
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W32_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W32_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W32_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
    W32_PTR(void /*IVRSpatialAnchors*/ *m_pVRSpatialAnchors, m_pVRSpatialAnchors);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_1016 w_COpenVRContext_1016;
typedef u32_COpenVRContext_1016 u_COpenVRContext_1016;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_1016 w_COpenVRContext_1016;
typedef u64_COpenVRContext_1016 u_COpenVRContext_1016;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_1015
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W64_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W64_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W64_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_1015
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W32_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
    W32_PTR(void /*IVRInput*/ *m_pVRInput, m_pVRInput);
    W32_PTR(void /*IVRIOBuffer*/ *m_pVRIOBuffer, m_pVRIOBuffer);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_1015 w_COpenVRContext_1015;
typedef u32_COpenVRContext_1015 u_COpenVRContext_1015;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_1015 w_COpenVRContext_1015;
typedef u64_COpenVRContext_1015 u_COpenVRContext_1015;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_108
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W64_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_108
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
    W32_PTR(void /*IVRDriverManager*/ *m_pVRDriverManager, m_pVRDriverManager);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_108 w_COpenVRContext_108;
typedef u32_COpenVRContext_108 u_COpenVRContext_108;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_108 w_COpenVRContext_108;
typedef u64_COpenVRContext_108 u_COpenVRContext_108;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_102
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_102
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRResources*/ *m_pVRResources, m_pVRResources);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_102 w_COpenVRContext_102;
typedef u32_COpenVRContext_102 u_COpenVRContext_102;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_102 w_COpenVRContext_102;
typedef u64_COpenVRContext_102 u_COpenVRContext_102;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_101
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W64_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_101
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
    W32_PTR(void /*IVRScreenshots*/ *m_pVRScreenshots, m_pVRScreenshots);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_101 w_COpenVRContext_101;
typedef u32_COpenVRContext_101 u_COpenVRContext_101;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_101 w_COpenVRContext_101;
typedef u64_COpenVRContext_101 u_COpenVRContext_101;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_100
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W64_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_100
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
    W32_PTR(void /*IVRTrackedCamera*/ *m_pVRTrackedCamera, m_pVRTrackedCamera);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_100 w_COpenVRContext_100;
typedef u32_COpenVRContext_100 u_COpenVRContext_100;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_100 w_COpenVRContext_100;
typedef u64_COpenVRContext_100 u_COpenVRContext_100;
#endif

#pragma pack( push, 8 )
struct w64_COpenVRContext_0917
{
    W64_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W64_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W64_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W64_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W64_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W64_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W64_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W64_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W64_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_COpenVRContext_0917
{
    W32_PTR(void /*IVRSystem*/ *m_pVRSystem, m_pVRSystem);
    W32_PTR(void /*IVRChaperone*/ *m_pVRChaperone, m_pVRChaperone);
    W32_PTR(void /*IVRChaperoneSetup*/ *m_pVRChaperoneSetup, m_pVRChaperoneSetup);
    W32_PTR(void /*IVRCompositor*/ *m_pVRCompositor, m_pVRCompositor);
    W32_PTR(void /*IVROverlay*/ *m_pVROverlay, m_pVROverlay);
    W32_PTR(void /*IVRRenderModels*/ *m_pVRRenderModels, m_pVRRenderModels);
    W32_PTR(void /*IVRExtendedDisplay*/ *m_pVRExtendedDisplay, m_pVRExtendedDisplay);
    W32_PTR(void /*IVRSettings*/ *m_pVRSettings, m_pVRSettings);
    W32_PTR(void /*IVRApplications*/ *m_pVRApplications, m_pVRApplications);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_COpenVRContext_0917 w_COpenVRContext_0917;
typedef u32_COpenVRContext_0917 u_COpenVRContext_0917;
#endif
#ifdef __x86_64__
typedef w64_COpenVRContext_0917 w_COpenVRContext_0917;
typedef u64_COpenVRContext_0917 u_COpenVRContext_0917;
#endif

#pragma pack( push, 8 )
struct w64_CameraVideoStreamFrameHeader_t_1017
{
    uint32_t eFrameType;
    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    TrackedDevicePose_t trackedDevicePose;
    uint8_t __pad_100[4];
    uint64_t ulFrameExposureTime;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_CameraVideoStreamFrameHeader_t_1017
{
    uint32_t eFrameType;
    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    TrackedDevicePose_t trackedDevicePose;
    uint8_t __pad_100[4];
    uint64_t ulFrameExposureTime;
#ifdef __cplusplus
    operator u32_CameraVideoStreamFrameHeader_t_1017() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_CameraVideoStreamFrameHeader_t_1017
{
    uint32_t eFrameType;
    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    TrackedDevicePose_t trackedDevicePose;
    uint64_t ulFrameExposureTime;
#ifdef __cplusplus
    operator w32_CameraVideoStreamFrameHeader_t_1017() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CameraVideoStreamFrameHeader_t_1017 w_CameraVideoStreamFrameHeader_t_1017;
typedef u32_CameraVideoStreamFrameHeader_t_1017 u_CameraVideoStreamFrameHeader_t_1017;
#endif
#ifdef __x86_64__
typedef w64_CameraVideoStreamFrameHeader_t_1017 w_CameraVideoStreamFrameHeader_t_1017;
typedef u64_CameraVideoStreamFrameHeader_t_1017 u_CameraVideoStreamFrameHeader_t_1017;
#endif

#pragma pack( push, 4 )
struct w64_CameraVideoStreamFrameHeader_t_100
{
    uint32_t eFrameType;
    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    TrackedDevicePose_t standingTrackedDevicePose;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CameraVideoStreamFrameHeader_t_100
{
    uint32_t eFrameType;
    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    TrackedDevicePose_t standingTrackedDevicePose;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CameraVideoStreamFrameHeader_t_100 w_CameraVideoStreamFrameHeader_t_100;
typedef u32_CameraVideoStreamFrameHeader_t_100 u_CameraVideoStreamFrameHeader_t_100;
#endif
#ifdef __x86_64__
typedef w64_CameraVideoStreamFrameHeader_t_100 w_CameraVideoStreamFrameHeader_t_100;
typedef u64_CameraVideoStreamFrameHeader_t_100 u_CameraVideoStreamFrameHeader_t_100;
#endif

#pragma pack( push, 8 )
struct w64_CameraVideoStreamFrame_t_0914
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nImageDataSize;
    uint32_t m_nFrameSequence;
    uint32_t m_nISPFrameTimeStamp;
    uint32_t m_nISPReferenceTimeStamp;
    uint32_t m_nSyncCounter;
    uint32_t m_nExposureTime;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    uint8_t __pad_44[4];
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    uint64_t m_nFrameCaptureTicks;
    int8_t m_bPoseIsValid;
    uint8_t __pad_73[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    W64_ARRAY(float, 4, m_Pad);
    uint8_t __pad_140[4];
    W64_PTR(void *m_pImageData, m_pImageData);
#ifdef __cplusplus
    operator u64_CameraVideoStreamFrame_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_CameraVideoStreamFrame_t_0914
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nImageDataSize;
    uint32_t m_nFrameSequence;
    uint32_t m_nISPFrameTimeStamp;
    uint32_t m_nISPReferenceTimeStamp;
    uint32_t m_nSyncCounter;
    uint32_t m_nExposureTime;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    uint64_t m_nFrameCaptureTicks;
    int8_t m_bPoseIsValid;
    uint8_t __pad_69[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    U64_ARRAY(float, 4, m_Pad);
    U64_PTR(void *m_pImageData, m_pImageData);
#ifdef __cplusplus
    operator w64_CameraVideoStreamFrame_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_CameraVideoStreamFrame_t_0914
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nImageDataSize;
    uint32_t m_nFrameSequence;
    uint32_t m_nISPFrameTimeStamp;
    uint32_t m_nISPReferenceTimeStamp;
    uint32_t m_nSyncCounter;
    uint32_t m_nExposureTime;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    uint8_t __pad_44[4];
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    uint64_t m_nFrameCaptureTicks;
    int8_t m_bPoseIsValid;
    uint8_t __pad_73[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    W32_ARRAY(float, 4, m_Pad);
    W32_PTR(void *m_pImageData, m_pImageData);
#ifdef __cplusplus
    operator u32_CameraVideoStreamFrame_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_CameraVideoStreamFrame_t_0914
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nImageDataSize;
    uint32_t m_nFrameSequence;
    uint32_t m_nISPFrameTimeStamp;
    uint32_t m_nISPReferenceTimeStamp;
    uint32_t m_nSyncCounter;
    uint32_t m_nExposureTime;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    uint64_t m_nFrameCaptureTicks;
    int8_t m_bPoseIsValid;
    uint8_t __pad_69[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    U32_ARRAY(float, 4, m_Pad);
    U32_PTR(void *m_pImageData, m_pImageData);
#ifdef __cplusplus
    operator w32_CameraVideoStreamFrame_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CameraVideoStreamFrame_t_0914 w_CameraVideoStreamFrame_t_0914;
typedef u32_CameraVideoStreamFrame_t_0914 u_CameraVideoStreamFrame_t_0914;
#endif
#ifdef __x86_64__
typedef w64_CameraVideoStreamFrame_t_0914 w_CameraVideoStreamFrame_t_0914;
typedef u64_CameraVideoStreamFrame_t_0914 u_CameraVideoStreamFrame_t_0914;
#endif

#pragma pack( push, 8 )
struct w64_CameraVideoStreamFrame_t_0912
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFrameSequence;
    uint32_t m_nTimeStamp;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    uint32_t m_nImageDataSize;
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    int8_t m_bPoseIsValid;
    uint8_t __pad_49[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    W64_ARRAY(float, 4, m_Pad);
    uint8_t __pad_116[4];
    W64_PTR(void *m_pImageData, m_pImageData);
#ifdef __cplusplus
    operator u64_CameraVideoStreamFrame_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_CameraVideoStreamFrame_t_0912
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFrameSequence;
    uint32_t m_nTimeStamp;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    uint32_t m_nImageDataSize;
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    int8_t m_bPoseIsValid;
    uint8_t __pad_49[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    U64_ARRAY(float, 4, m_Pad);
    U64_PTR(void *m_pImageData, m_pImageData);
#ifdef __cplusplus
    operator w64_CameraVideoStreamFrame_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_CameraVideoStreamFrame_t_0912
{
    uint32_t m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFrameSequence;
    uint32_t m_nTimeStamp;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    uint32_t m_nImageDataSize;
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    int8_t m_bPoseIsValid;
    uint8_t __pad_49[3];
    HmdMatrix34_t m_matDeviceToAbsoluteTracking;
    W32_ARRAY(float, 4, m_Pad);
    W32_PTR(void *m_pImageData, m_pImageData);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CameraVideoStreamFrame_t_0912 w_CameraVideoStreamFrame_t_0912;
typedef u32_CameraVideoStreamFrame_t_0912 u_CameraVideoStreamFrame_t_0912;
#endif
#ifdef __x86_64__
typedef w64_CameraVideoStreamFrame_t_0912 w_CameraVideoStreamFrame_t_0912;
typedef u64_CameraVideoStreamFrame_t_0912 u_CameraVideoStreamFrame_t_0912;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_1017
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumMisPresented;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
    uint32_t m_nNumVSyncsReadyForUse;
    uint32_t m_nNumVSyncsToFirstView;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_1017
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumMisPresented;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
    uint32_t m_nNumVSyncsReadyForUse;
    uint32_t m_nNumVSyncsToFirstView;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_1017 w_Compositor_FrameTiming_1017;
typedef u32_Compositor_FrameTiming_1017 u_Compositor_FrameTiming_1017;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_1017 w_Compositor_FrameTiming_1017;
typedef u64_Compositor_FrameTiming_1017 u_Compositor_FrameTiming_1017;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_103a
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumMisPresented;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_103a
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumMisPresented;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_103a w_Compositor_FrameTiming_103a;
typedef u32_Compositor_FrameTiming_103a u_Compositor_FrameTiming_103a;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_103a w_Compositor_FrameTiming_103a;
typedef u64_Compositor_FrameTiming_103a u_Compositor_FrameTiming_103a;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_102
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    uint8_t __pad_20[4];
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
#ifdef __cplusplus
    operator u64_Compositor_FrameTiming_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_Compositor_FrameTiming_102
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
#ifdef __cplusplus
    operator w64_Compositor_FrameTiming_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_102
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    uint8_t __pad_20[4];
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
#ifdef __cplusplus
    operator u32_Compositor_FrameTiming_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_Compositor_FrameTiming_102
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
#ifdef __cplusplus
    operator w32_Compositor_FrameTiming_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_102 w_Compositor_FrameTiming_102;
typedef u32_Compositor_FrameTiming_102 u_Compositor_FrameTiming_102;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_102 w_Compositor_FrameTiming_102;
typedef u64_Compositor_FrameTiming_102 u_Compositor_FrameTiming_102;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_0920
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    double m_flSystemTimeInSeconds;
    float m_flSceneRenderGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
    int32_t m_nFidelityLevel;
    uint32_t m_nReprojectionFlags;
    uint8_t __pad_172[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_0920
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    double m_flSystemTimeInSeconds;
    float m_flSceneRenderGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
    int32_t m_nFidelityLevel;
    uint32_t m_nReprojectionFlags;
    uint8_t __pad_172[4];
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_0920 w_Compositor_FrameTiming_0920;
typedef u32_Compositor_FrameTiming_0920 u_Compositor_FrameTiming_0920;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_0920 w_Compositor_FrameTiming_0920;
typedef u64_Compositor_FrameTiming_0920 u_Compositor_FrameTiming_0920;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_0915
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    double m_flSystemTimeInSeconds;
    float m_flSceneRenderGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
    int32_t m_nFidelityLevel;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_0915
{
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    double m_flSystemTimeInSeconds;
    float m_flSceneRenderGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    TrackedDevicePose_t m_HmdPose;
    int32_t m_nFidelityLevel;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_0915 w_Compositor_FrameTiming_0915;
typedef u32_Compositor_FrameTiming_0915 u_Compositor_FrameTiming_0915;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_0915 w_Compositor_FrameTiming_0915;
typedef u64_Compositor_FrameTiming_0915 u_Compositor_FrameTiming_0915;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_0914
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
    uint32_t m_nPresents;
    uint8_t __pad_156[4];
#ifdef __cplusplus
    operator u64_Compositor_FrameTiming_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_Compositor_FrameTiming_0914
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
    uint32_t m_nPresents;
#ifdef __cplusplus
    operator w64_Compositor_FrameTiming_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_0914
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
    uint32_t m_nPresents;
    uint8_t __pad_156[4];
#ifdef __cplusplus
    operator u32_Compositor_FrameTiming_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_Compositor_FrameTiming_0914
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
    uint32_t m_nPresents;
#ifdef __cplusplus
    operator w32_Compositor_FrameTiming_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_0914 w_Compositor_FrameTiming_0914;
typedef u32_Compositor_FrameTiming_0914 u_Compositor_FrameTiming_0914;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_0914 w_Compositor_FrameTiming_0914;
typedef u64_Compositor_FrameTiming_0914 u_Compositor_FrameTiming_0914;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_0913
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
#ifdef __cplusplus
    operator u64_Compositor_FrameTiming_0913() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_Compositor_FrameTiming_0913
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
#ifdef __cplusplus
    operator w64_Compositor_FrameTiming_0913() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_0913
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
#ifdef __cplusplus
    operator u32_Compositor_FrameTiming_0913() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_Compositor_FrameTiming_0913
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
#ifdef __cplusplus
    operator w32_Compositor_FrameTiming_0913() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_0913 w_Compositor_FrameTiming_0913;
typedef u32_Compositor_FrameTiming_0913 u_Compositor_FrameTiming_0913;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_0913 w_Compositor_FrameTiming_0913;
typedef u64_Compositor_FrameTiming_0913 u_Compositor_FrameTiming_0913;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_0912
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    uint8_t __pad_148[4];
#ifdef __cplusplus
    operator u64_Compositor_FrameTiming_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_Compositor_FrameTiming_0912
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
#ifdef __cplusplus
    operator w64_Compositor_FrameTiming_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_0912
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    uint8_t __pad_148[4];
#ifdef __cplusplus
    operator u32_Compositor_FrameTiming_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_Compositor_FrameTiming_0912
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
#ifdef __cplusplus
    operator w32_Compositor_FrameTiming_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_0912 w_Compositor_FrameTiming_0912;
typedef u32_Compositor_FrameTiming_0912 u_Compositor_FrameTiming_0912;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_0912 w_Compositor_FrameTiming_0912;
typedef u64_Compositor_FrameTiming_0912 u_Compositor_FrameTiming_0912;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_093
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    uint8_t __pad_140[4];
#ifdef __cplusplus
    operator u64_Compositor_FrameTiming_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_Compositor_FrameTiming_093
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
#ifdef __cplusplus
    operator w64_Compositor_FrameTiming_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_093
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    uint8_t __pad_140[4];
#ifdef __cplusplus
    operator u32_Compositor_FrameTiming_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_Compositor_FrameTiming_093
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
#ifdef __cplusplus
    operator w32_Compositor_FrameTiming_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_093 w_Compositor_FrameTiming_093;
typedef u32_Compositor_FrameTiming_093 u_Compositor_FrameTiming_093;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_093 w_Compositor_FrameTiming_093;
typedef u64_Compositor_FrameTiming_093 u_Compositor_FrameTiming_093;
#endif

#pragma pack( push, 8 )
struct w64_Compositor_FrameTiming_090
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    uint8_t __pad_108[4];
#ifdef __cplusplus
    operator u64_Compositor_FrameTiming_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_Compositor_FrameTiming_090
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
#ifdef __cplusplus
    operator w64_Compositor_FrameTiming_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_Compositor_FrameTiming_090
{
    uint32_t size;
    uint8_t __pad_4[4];
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
    uint8_t __pad_108[4];
#ifdef __cplusplus
    operator u32_Compositor_FrameTiming_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_Compositor_FrameTiming_090
{
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    TrackedDevicePose_t pose;
#ifdef __cplusplus
    operator w32_Compositor_FrameTiming_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_Compositor_FrameTiming_090 w_Compositor_FrameTiming_090;
typedef u32_Compositor_FrameTiming_090 u_Compositor_FrameTiming_090;
#endif
#ifdef __x86_64__
typedef w64_Compositor_FrameTiming_090 w_Compositor_FrameTiming_090;
typedef u64_Compositor_FrameTiming_090 u_Compositor_FrameTiming_090;
#endif

#pragma pack( push, 8 )
struct w64_D3D12TextureData_t
{
    W64_PTR(void /*ID3D12Resource*/ *m_pResource, m_pResource);
    W64_PTR(void /*ID3D12CommandQueue*/ *m_pCommandQueue, m_pCommandQueue);
    uint32_t m_nNodeMask;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_D3D12TextureData_t
{
    W32_PTR(void /*ID3D12Resource*/ *m_pResource, m_pResource);
    W32_PTR(void /*ID3D12CommandQueue*/ *m_pCommandQueue, m_pCommandQueue);
    uint32_t m_nNodeMask;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_D3D12TextureData_t w_D3D12TextureData_t;
typedef u32_D3D12TextureData_t u_D3D12TextureData_t;
#endif
#ifdef __x86_64__
typedef w64_D3D12TextureData_t w_D3D12TextureData_t;
typedef u64_D3D12TextureData_t u_D3D12TextureData_t;
#endif

#pragma pack( push, 8 )
struct w64_HiddenAreaMesh_t
{
    W64_PTR(const HmdVector2_t *pVertexData, pVertexData);
    uint32_t unTriangleCount;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HiddenAreaMesh_t
{
    W32_PTR(const HmdVector2_t *pVertexData, pVertexData);
    uint32_t unTriangleCount;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HiddenAreaMesh_t w_HiddenAreaMesh_t;
typedef u32_HiddenAreaMesh_t u_HiddenAreaMesh_t;
#endif
#ifdef __x86_64__
typedef w64_HiddenAreaMesh_t w_HiddenAreaMesh_t;
typedef u64_HiddenAreaMesh_t u_HiddenAreaMesh_t;
#endif

struct w_IVRDebug_IVRDebug_001
{
#ifdef __cplusplus
    virtual uint32_t EmitVrProfilerEvent( const char * ) = 0;
    virtual uint32_t BeginVrProfilerEvent( uint64_t * ) = 0;
    virtual uint32_t FinishVrProfilerEvent( uint64_t, const char * ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRDebug_IVRDebug_001
{
#ifdef __cplusplus
    virtual uint32_t EmitVrProfilerEvent( const char * ) = 0;
    virtual uint32_t BeginVrProfilerEvent( uint64_t * ) = 0;
    virtual uint32_t FinishVrProfilerEvent( uint64_t, const char * ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct w_IVRSpatialAnchors_IVRSpatialAnchors_001
{
#ifdef __cplusplus
    virtual uint32_t CreateSpatialAnchorFromDescriptor( const char *, uint32_t * ) = 0;
    virtual uint32_t CreateSpatialAnchorFromPose( uint32_t, uint32_t, SpatialAnchorPose_t *, uint32_t * ) = 0;
    virtual uint32_t GetSpatialAnchorPose( uint32_t, uint32_t, SpatialAnchorPose_t * ) = 0;
    virtual uint32_t GetSpatialAnchorDescriptor( uint32_t, char *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSpatialAnchors_IVRSpatialAnchors_001
{
#ifdef __cplusplus
    virtual uint32_t CreateSpatialAnchorFromDescriptor( const char *, uint32_t * ) = 0;
    virtual uint32_t CreateSpatialAnchorFromPose( uint32_t, uint32_t, SpatialAnchorPose_t *, uint32_t * ) = 0;
    virtual uint32_t GetSpatialAnchorPose( uint32_t, uint32_t, SpatialAnchorPose_t * ) = 0;
    virtual uint32_t GetSpatialAnchorDescriptor( uint32_t, char *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

#pragma pack( push, 8 )
struct w64_InputAnalogActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    float x;
    float y;
    float z;
    float deltaX;
    float deltaY;
    float deltaZ;
    float fUpdateTime;
    uint8_t __pad_44[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputAnalogActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    float x;
    float y;
    float z;
    float deltaX;
    float deltaY;
    float deltaZ;
    float fUpdateTime;
    uint8_t __pad_44[4];
#ifdef __cplusplus
    operator u32_InputAnalogActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputAnalogActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[3];
    uint64_t activeOrigin;
    float x;
    float y;
    float z;
    float deltaX;
    float deltaY;
    float deltaZ;
    float fUpdateTime;
#ifdef __cplusplus
    operator w32_InputAnalogActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputAnalogActionData_t w_InputAnalogActionData_t;
typedef u32_InputAnalogActionData_t u_InputAnalogActionData_t;
#endif
#ifdef __x86_64__
typedef w64_InputAnalogActionData_t w_InputAnalogActionData_t;
typedef u64_InputAnalogActionData_t u_InputAnalogActionData_t;
#endif

#pragma pack( push, 8 )
struct w64_InputDigitalActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    int8_t bState;
    int8_t bChanged;
    uint8_t __pad_18[2];
    float fUpdateTime;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputDigitalActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    int8_t bState;
    int8_t bChanged;
    uint8_t __pad_18[2];
    float fUpdateTime;
#ifdef __cplusplus
    operator u32_InputDigitalActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputDigitalActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[3];
    uint64_t activeOrigin;
    int8_t bState;
    int8_t bChanged;
    uint8_t __pad_14[2];
    float fUpdateTime;
#ifdef __cplusplus
    operator w32_InputDigitalActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputDigitalActionData_t w_InputDigitalActionData_t;
typedef u32_InputDigitalActionData_t u_InputDigitalActionData_t;
#endif
#ifdef __x86_64__
typedef w64_InputDigitalActionData_t w_InputDigitalActionData_t;
typedef u64_InputDigitalActionData_t u_InputDigitalActionData_t;
#endif

#pragma pack( push, 8 )
struct w64_InputOriginInfo_t
{
    uint64_t devicePath;
    uint32_t trackedDeviceIndex;
    W64_ARRAY(char, 128, rchRenderModelComponentName);
    uint8_t __pad_140[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputOriginInfo_t
{
    uint64_t devicePath;
    uint32_t trackedDeviceIndex;
    W32_ARRAY(char, 128, rchRenderModelComponentName);
    uint8_t __pad_140[4];
#ifdef __cplusplus
    operator u32_InputOriginInfo_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputOriginInfo_t
{
    uint64_t devicePath;
    uint32_t trackedDeviceIndex;
    U32_ARRAY(char, 128, rchRenderModelComponentName);
#ifdef __cplusplus
    operator w32_InputOriginInfo_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputOriginInfo_t w_InputOriginInfo_t;
typedef u32_InputOriginInfo_t u_InputOriginInfo_t;
#endif
#ifdef __x86_64__
typedef w64_InputOriginInfo_t w_InputOriginInfo_t;
typedef u64_InputOriginInfo_t u_InputOriginInfo_t;
#endif

#pragma pack( push, 8 )
struct w64_InputPoseActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    TrackedDevicePose_t pose;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputPoseActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    TrackedDevicePose_t pose;
#ifdef __cplusplus
    operator u32_InputPoseActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputPoseActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[3];
    uint64_t activeOrigin;
    TrackedDevicePose_t pose;
#ifdef __cplusplus
    operator w32_InputPoseActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputPoseActionData_t w_InputPoseActionData_t;
typedef u32_InputPoseActionData_t u_InputPoseActionData_t;
#endif
#ifdef __x86_64__
typedef w64_InputPoseActionData_t w_InputPoseActionData_t;
typedef u64_InputPoseActionData_t u_InputPoseActionData_t;
#endif

#pragma pack( push, 8 )
struct w64_InputSkeletalActionData_t_113b
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputSkeletalActionData_t_113b
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
#ifdef __cplusplus
    operator u32_InputSkeletalActionData_t_113b() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputSkeletalActionData_t_113b
{
    int8_t bActive;
    uint8_t __pad_1[3];
    uint64_t activeOrigin;
#ifdef __cplusplus
    operator w32_InputSkeletalActionData_t_113b() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputSkeletalActionData_t_113b w_InputSkeletalActionData_t_113b;
typedef u32_InputSkeletalActionData_t_113b u_InputSkeletalActionData_t_113b;
#endif
#ifdef __x86_64__
typedef w64_InputSkeletalActionData_t_113b w_InputSkeletalActionData_t_113b;
typedef u64_InputSkeletalActionData_t_113b u_InputSkeletalActionData_t_113b;
#endif

#pragma pack( push, 8 )
struct w64_InputSkeletalActionData_t_1016
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    uint32_t boneCount;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputSkeletalActionData_t_1016
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
    uint32_t boneCount;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_InputSkeletalActionData_t_1016() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputSkeletalActionData_t_1016
{
    int8_t bActive;
    uint8_t __pad_1[3];
    uint64_t activeOrigin;
    uint32_t boneCount;
#ifdef __cplusplus
    operator w32_InputSkeletalActionData_t_1016() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputSkeletalActionData_t_1016 w_InputSkeletalActionData_t_1016;
typedef u32_InputSkeletalActionData_t_1016 u_InputSkeletalActionData_t_1016;
#endif
#ifdef __x86_64__
typedef w64_InputSkeletalActionData_t_1016 w_InputSkeletalActionData_t_1016;
typedef u64_InputSkeletalActionData_t_1016 u_InputSkeletalActionData_t_1016;
#endif

#pragma pack( push, 8 )
struct w64_InputSkeletonActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_InputSkeletonActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[7];
    uint64_t activeOrigin;
#ifdef __cplusplus
    operator u32_InputSkeletonActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_InputSkeletonActionData_t
{
    int8_t bActive;
    uint8_t __pad_1[3];
    uint64_t activeOrigin;
#ifdef __cplusplus
    operator w32_InputSkeletonActionData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_InputSkeletonActionData_t w_InputSkeletonActionData_t;
typedef u32_InputSkeletonActionData_t u_InputSkeletonActionData_t;
#endif
#ifdef __x86_64__
typedef w64_InputSkeletonActionData_t w_InputSkeletonActionData_t;
typedef u64_InputSkeletonActionData_t u_InputSkeletonActionData_t;
#endif

#pragma pack( push, 8 )
struct w64_NotificationBitmap
{
    W64_PTR(void *bytes, bytes);
    int32_t width;
    int32_t height;
    int32_t depth;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_NotificationBitmap
{
    W32_PTR(void *bytes, bytes);
    int32_t width;
    int32_t height;
    int32_t depth;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_NotificationBitmap w_NotificationBitmap;
typedef u32_NotificationBitmap u_NotificationBitmap;
#endif
#ifdef __x86_64__
typedef w64_NotificationBitmap w_NotificationBitmap;
typedef u64_NotificationBitmap u_NotificationBitmap;
#endif

#pragma pack( push, 8 )
struct w64_NotificationBitmap_t
{
    W64_PTR(void *m_pImageData, m_pImageData);
    int32_t m_nWidth;
    int32_t m_nHeight;
    int32_t m_nBytesPerPixel;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_NotificationBitmap_t
{
    W32_PTR(void *m_pImageData, m_pImageData);
    int32_t m_nWidth;
    int32_t m_nHeight;
    int32_t m_nBytesPerPixel;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_NotificationBitmap_t w_NotificationBitmap_t;
typedef u32_NotificationBitmap_t u_NotificationBitmap_t;
#endif
#ifdef __x86_64__
typedef w64_NotificationBitmap_t w_NotificationBitmap_t;
typedef u64_NotificationBitmap_t u_NotificationBitmap_t;
#endif

#pragma pack( push, 8 )
struct w64_RenderModel_t_0912
{
    W64_PTR(const RenderModel_Vertex_t *rVertexData, rVertexData);
    uint32_t unVertexCount;
    uint8_t __pad_12[4];
    W64_PTR(const uint16_t *rIndexData, rIndexData);
    uint32_t unTriangleCount;
    int32_t diffuseTextureId;
#ifdef __cplusplus
    operator u64_RenderModel_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RenderModel_t_0912
{
    U64_PTR(const RenderModel_Vertex_t *rVertexData, rVertexData);
    uint32_t unVertexCount;
    U64_PTR(const uint16_t *rIndexData, rIndexData);
    uint32_t unTriangleCount;
    int32_t diffuseTextureId;
#ifdef __cplusplus
    operator w64_RenderModel_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_RenderModel_t_0912
{
    W32_PTR(const RenderModel_Vertex_t *rVertexData, rVertexData);
    uint32_t unVertexCount;
    W32_PTR(const uint16_t *rIndexData, rIndexData);
    uint32_t unTriangleCount;
    int32_t diffuseTextureId;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RenderModel_t_0912 w_RenderModel_t_0912;
typedef u32_RenderModel_t_0912 u_RenderModel_t_0912;
#endif
#ifdef __x86_64__
typedef w64_RenderModel_t_0912 w_RenderModel_t_0912;
typedef u64_RenderModel_t_0912 u_RenderModel_t_0912;
#endif

#pragma pack( push, 8 )
struct w64_RenderModel_t_090
{
    uint64_t ulInternalHandle;
    W64_PTR(const RenderModel_Vertex_t *rVertexData, rVertexData);
    uint32_t unVertexCount;
    uint8_t __pad_20[4];
    W64_PTR(const uint16_t *rIndexData, rIndexData);
    uint32_t unTriangleCount;
    uint8_t __pad_36[4];
    w64_RenderModel_TextureMap_t_090 diffuseTexture;
#ifdef __cplusplus
    operator u64_RenderModel_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RenderModel_t_090
{
    uint64_t ulInternalHandle;
    U64_PTR(const RenderModel_Vertex_t *rVertexData, rVertexData);
    uint32_t unVertexCount;
    U64_PTR(const uint16_t *rIndexData, rIndexData);
    uint32_t unTriangleCount;
    u64_RenderModel_TextureMap_t_090 diffuseTexture;
#ifdef __cplusplus
    operator w64_RenderModel_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RenderModel_t_090
{
    uint64_t ulInternalHandle;
    W32_PTR(const RenderModel_Vertex_t *rVertexData, rVertexData);
    uint32_t unVertexCount;
    W32_PTR(const uint16_t *rIndexData, rIndexData);
    uint32_t unTriangleCount;
    w32_RenderModel_TextureMap_t_090 diffuseTexture;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RenderModel_t_090 w_RenderModel_t_090;
typedef u32_RenderModel_t_090 u_RenderModel_t_090;
#endif
#ifdef __x86_64__
typedef w64_RenderModel_t_090 w_RenderModel_t_090;
typedef u64_RenderModel_t_090 u_RenderModel_t_090;
#endif

#pragma pack( push, 8 )
struct w64_VRControllerState001_t
{
    uint32_t unPacketNum;
    uint8_t __pad_4[4];
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    W64_ARRAY(VRControllerAxis_t, 5, rAxis);
#ifdef __cplusplus
    operator u64_VRControllerState001_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VRControllerState001_t
{
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    U64_ARRAY(VRControllerAxis_t, 5, rAxis);
#ifdef __cplusplus
    operator w64_VRControllerState001_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VRControllerState001_t
{
    uint32_t unPacketNum;
    uint8_t __pad_4[4];
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    W32_ARRAY(VRControllerAxis_t, 5, rAxis);
#ifdef __cplusplus
    operator u32_VRControllerState001_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VRControllerState001_t
{
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    U32_ARRAY(VRControllerAxis_t, 5, rAxis);
#ifdef __cplusplus
    operator w32_VRControllerState001_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRControllerState001_t w_VRControllerState001_t;
typedef u32_VRControllerState001_t u_VRControllerState001_t;
#endif
#ifdef __x86_64__
typedef w64_VRControllerState001_t w_VRControllerState001_t;
typedef u64_VRControllerState001_t u_VRControllerState001_t;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1168
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1168 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1168() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1168
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1168 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1168() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1168
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1168 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1168() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1168
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1168 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1168() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1168 w_VREvent_t_1168;
typedef u32_VREvent_t_1168 u_VREvent_t_1168;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1168 w_VREvent_t_1168;
typedef u64_VREvent_t_1168 u_VREvent_t_1168;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_11030
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_11030 data;
#ifdef __cplusplus
    operator u64_VREvent_t_11030() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_11030
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_11030 data;
#ifdef __cplusplus
    operator w64_VREvent_t_11030() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_11030
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_11030 data;
#ifdef __cplusplus
    operator u32_VREvent_t_11030() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_11030
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_11030 data;
#ifdef __cplusplus
    operator w32_VREvent_t_11030() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_11030 w_VREvent_t_11030;
typedef u32_VREvent_t_11030 u_VREvent_t_11030;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_11030 w_VREvent_t_11030;
typedef u64_VREvent_t_11030 u_VREvent_t_11030;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1322
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1322 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1322() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1322
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1322 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1322() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1322
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1322 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1322() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1322
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1322 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1322() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1322 w_VREvent_t_1322;
typedef u32_VREvent_t_1322 u_VREvent_t_1322;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1322 w_VREvent_t_1322;
typedef u64_VREvent_t_1322 u_VREvent_t_1322;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1210
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1210 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1210() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1210
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1210 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1210() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1210
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1210 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1210() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1210
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1210 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1210() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1210 w_VREvent_t_1210;
typedef u32_VREvent_t_1210 u_VREvent_t_1210;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1210 w_VREvent_t_1210;
typedef u64_VREvent_t_1210 u_VREvent_t_1210;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_113b
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_113b data;
#ifdef __cplusplus
    operator u64_VREvent_t_113b() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_113b
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_113b data;
#ifdef __cplusplus
    operator w64_VREvent_t_113b() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_113b
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_113b data;
#ifdef __cplusplus
    operator u32_VREvent_t_113b() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_113b
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_113b data;
#ifdef __cplusplus
    operator w32_VREvent_t_113b() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_113b w_VREvent_t_113b;
typedef u32_VREvent_t_113b u_VREvent_t_113b;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_113b w_VREvent_t_113b;
typedef u64_VREvent_t_113b u_VREvent_t_113b;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1016
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1016 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1016() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1016
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1016 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1016() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1016
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1016 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1016() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1016
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1016 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1016() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1016 w_VREvent_t_1016;
typedef u32_VREvent_t_1016 u_VREvent_t_1016;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1016 w_VREvent_t_1016;
typedef u64_VREvent_t_1016 u_VREvent_t_1016;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1015
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1015 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1015() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1015
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1015 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1015() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1015
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1015 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1015() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1015
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1015 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1015() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1015 w_VREvent_t_1015;
typedef u32_VREvent_t_1015 u_VREvent_t_1015;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1015 w_VREvent_t_1015;
typedef u64_VREvent_t_1015 u_VREvent_t_1015;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1014
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1014 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1014() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1014
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1014 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1014() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1014
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1014 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1014() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1014
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1014 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1014() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1014 w_VREvent_t_1014;
typedef u32_VREvent_t_1014 u_VREvent_t_1014;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1014 w_VREvent_t_1014;
typedef u64_VREvent_t_1014 u_VREvent_t_1014;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1013
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1013 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1013() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1013
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1013 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1013() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1013
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1013 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1013() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1013
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1013 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1013() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1013 w_VREvent_t_1013;
typedef u32_VREvent_t_1013 u_VREvent_t_1013;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1013 w_VREvent_t_1013;
typedef u64_VREvent_t_1013 u_VREvent_t_1013;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1012
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1012 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1012() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1012
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1012 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1012() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1012
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1012 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1012() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1012
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1012 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1012() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1012 w_VREvent_t_1012;
typedef u32_VREvent_t_1012 u_VREvent_t_1012;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1012 w_VREvent_t_1012;
typedef u64_VREvent_t_1012 u_VREvent_t_1012;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_1011
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1011 data;
#ifdef __cplusplus
    operator u64_VREvent_t_1011() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_1011
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1011 data;
#ifdef __cplusplus
    operator w64_VREvent_t_1011() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_1011
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_1011 data;
#ifdef __cplusplus
    operator u32_VREvent_t_1011() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_1011
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_1011 data;
#ifdef __cplusplus
    operator w32_VREvent_t_1011() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_1011 w_VREvent_t_1011;
typedef u32_VREvent_t_1011 u_VREvent_t_1011;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_1011 w_VREvent_t_1011;
typedef u64_VREvent_t_1011 u_VREvent_t_1011;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_106
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_106 data;
#ifdef __cplusplus
    operator u64_VREvent_t_106() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_106
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_106 data;
#ifdef __cplusplus
    operator w64_VREvent_t_106() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_106
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_106 data;
#ifdef __cplusplus
    operator u32_VREvent_t_106() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_106
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_106 data;
#ifdef __cplusplus
    operator w32_VREvent_t_106() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_106 w_VREvent_t_106;
typedef u32_VREvent_t_106 u_VREvent_t_106;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_106 w_VREvent_t_106;
typedef u64_VREvent_t_106 u_VREvent_t_106;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_105
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_105 data;
#ifdef __cplusplus
    operator u64_VREvent_t_105() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_105
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_105 data;
#ifdef __cplusplus
    operator w64_VREvent_t_105() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_105
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_105 data;
#ifdef __cplusplus
    operator u32_VREvent_t_105() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_105
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_105 data;
#ifdef __cplusplus
    operator w32_VREvent_t_105() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_105 w_VREvent_t_105;
typedef u32_VREvent_t_105 u_VREvent_t_105;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_105 w_VREvent_t_105;
typedef u64_VREvent_t_105 u_VREvent_t_105;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_103
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_103 data;
#ifdef __cplusplus
    operator u64_VREvent_t_103() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_103
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_103 data;
#ifdef __cplusplus
    operator w64_VREvent_t_103() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_103
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_103 data;
#ifdef __cplusplus
    operator u32_VREvent_t_103() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_103
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_103 data;
#ifdef __cplusplus
    operator w32_VREvent_t_103() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_103 w_VREvent_t_103;
typedef u32_VREvent_t_103 u_VREvent_t_103;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_103 w_VREvent_t_103;
typedef u64_VREvent_t_103 u_VREvent_t_103;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_102
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_102 data;
#ifdef __cplusplus
    operator u64_VREvent_t_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_102
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_102 data;
#ifdef __cplusplus
    operator w64_VREvent_t_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_102
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_102 data;
#ifdef __cplusplus
    operator u32_VREvent_t_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_102
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_102 data;
#ifdef __cplusplus
    operator w32_VREvent_t_102() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_102 w_VREvent_t_102;
typedef u32_VREvent_t_102 u_VREvent_t_102;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_102 w_VREvent_t_102;
typedef u64_VREvent_t_102 u_VREvent_t_102;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_101
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_101 data;
#ifdef __cplusplus
    operator u64_VREvent_t_101() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_101
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_101 data;
#ifdef __cplusplus
    operator w64_VREvent_t_101() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_101
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_101 data;
#ifdef __cplusplus
    operator u32_VREvent_t_101() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_101
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_101 data;
#ifdef __cplusplus
    operator w32_VREvent_t_101() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_101 w_VREvent_t_101;
typedef u32_VREvent_t_101 u_VREvent_t_101;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_101 w_VREvent_t_101;
typedef u64_VREvent_t_101 u_VREvent_t_101;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_0918
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_0918 data;
#ifdef __cplusplus
    operator u64_VREvent_t_0918() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_0918
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_0918 data;
#ifdef __cplusplus
    operator w64_VREvent_t_0918() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_0918
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_0918 data;
#ifdef __cplusplus
    operator u32_VREvent_t_0918() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_0918
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_0918 data;
#ifdef __cplusplus
    operator w32_VREvent_t_0918() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_0918 w_VREvent_t_0918;
typedef u32_VREvent_t_0918 u_VREvent_t_0918;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_0918 w_VREvent_t_0918;
typedef u64_VREvent_t_0918 u_VREvent_t_0918;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_0915
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_0915 data;
#ifdef __cplusplus
    operator u64_VREvent_t_0915() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_0915
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_0915 data;
#ifdef __cplusplus
    operator w64_VREvent_t_0915() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_0915
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    uint8_t __pad_12[4];
    VREvent_Data_t_0915 data;
#ifdef __cplusplus
    operator u32_VREvent_t_0915() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_0915
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    float eventAgeSeconds;
    VREvent_Data_t_0915 data;
#ifdef __cplusplus
    operator w32_VREvent_t_0915() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_0915 w_VREvent_t_0915;
typedef u32_VREvent_t_0915 u_VREvent_t_0915;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_0915 w_VREvent_t_0915;
typedef u64_VREvent_t_0915 u_VREvent_t_0915;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_0914
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0914 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_0914
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0914 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_0914
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0914 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_0914
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0914 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_0914() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_0914 w_VREvent_t_0914;
typedef u32_VREvent_t_0914 u_VREvent_t_0914;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_0914 w_VREvent_t_0914;
typedef u64_VREvent_t_0914 u_VREvent_t_0914;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_0912
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0912 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_0912
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0912 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_0912
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0912 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_0912
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0912 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_0912() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_0912 w_VREvent_t_0912;
typedef u32_VREvent_t_0912 u_VREvent_t_0912;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_0912 w_VREvent_t_0912;
typedef u64_VREvent_t_0912 u_VREvent_t_0912;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_0910
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0910 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_0910() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_0910
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0910 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_0910() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_0910
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0910 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_0910() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_0910
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_0910 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_0910() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_0910 w_VREvent_t_0910;
typedef u32_VREvent_t_0910 u_VREvent_t_0910;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_0910 w_VREvent_t_0910;
typedef u64_VREvent_t_0910 u_VREvent_t_0910;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_097
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_097 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_097() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_097
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_097 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_097() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_097
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_097 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_097() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_097
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_097 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_097() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_097 w_VREvent_t_097;
typedef u32_VREvent_t_097 u_VREvent_t_097;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_097 w_VREvent_t_097;
typedef u64_VREvent_t_097 u_VREvent_t_097;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_093
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_093 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_093
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_093 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_093
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_093 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_093
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_093 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_093() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_093 w_VREvent_t_093;
typedef u32_VREvent_t_093 u_VREvent_t_093;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_093 w_VREvent_t_093;
typedef u64_VREvent_t_093 u_VREvent_t_093;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_092
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_092 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_092() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_092
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_092 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_092() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_092
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_092 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_092() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_092
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_092 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_092() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_092 w_VREvent_t_092;
typedef u32_VREvent_t_092 u_VREvent_t_092;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_092 w_VREvent_t_092;
typedef u64_VREvent_t_092 u_VREvent_t_092;
#endif

#pragma pack( push, 8 )
struct w64_VREvent_t_090
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_090 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_VREvent_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_VREvent_t_090
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_090 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w64_VREvent_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VREvent_t_090
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_090 data;
    float eventAgeSeconds;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_VREvent_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VREvent_t_090
{
    uint32_t eventType;
    uint32_t trackedDeviceIndex;
    VREvent_Data_t_090 data;
    float eventAgeSeconds;
#ifdef __cplusplus
    operator w32_VREvent_t_090() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VREvent_t_090 w_VREvent_t_090;
typedef u32_VREvent_t_090 u_VREvent_t_090;
#endif
#ifdef __x86_64__
typedef w64_VREvent_t_090 w_VREvent_t_090;
typedef u64_VREvent_t_090 u_VREvent_t_090;
#endif

#pragma pack( push, 8 )
struct w64_VRNativeDevice_t
{
    W64_PTR(void *handle, handle);
    uint32_t eType;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_VRNativeDevice_t
{
    W32_PTR(void *handle, handle);
    uint32_t eType;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRNativeDevice_t w_VRNativeDevice_t;
typedef u32_VRNativeDevice_t u_VRNativeDevice_t;
#endif
#ifdef __x86_64__
typedef w64_VRNativeDevice_t w_VRNativeDevice_t;
typedef u64_VRNativeDevice_t u_VRNativeDevice_t;
#endif

#pragma pack( push, 8 )
struct w64_VROverlayView_t
{
    uint64_t overlayHandle;
    w64_Texture_t texture;
    VRTextureBounds_t textureBounds;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VROverlayView_t
{
    uint64_t overlayHandle;
    w32_Texture_t texture;
    VRTextureBounds_t textureBounds;
    uint8_t __pad_36[4];
#ifdef __cplusplus
    operator u32_VROverlayView_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VROverlayView_t
{
    uint64_t overlayHandle;
    u32_Texture_t texture;
    VRTextureBounds_t textureBounds;
#ifdef __cplusplus
    operator w32_VROverlayView_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VROverlayView_t w_VROverlayView_t;
typedef u32_VROverlayView_t u_VROverlayView_t;
#endif
#ifdef __x86_64__
typedef w64_VROverlayView_t w_VROverlayView_t;
typedef u64_VROverlayView_t u_VROverlayView_t;
#endif

#pragma pack( push, 8 )
struct w64_VRTextureWithDepth_t
{
    W64_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
    w64_VRTextureDepthInfo_t depth;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_VRTextureWithDepth_t
{
    W32_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
    w32_VRTextureDepthInfo_t depth;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRTextureWithDepth_t w_VRTextureWithDepth_t;
typedef u32_VRTextureWithDepth_t u_VRTextureWithDepth_t;
#endif
#ifdef __x86_64__
typedef w64_VRTextureWithDepth_t w_VRTextureWithDepth_t;
typedef u64_VRTextureWithDepth_t u_VRTextureWithDepth_t;
#endif

#pragma pack( push, 8 )
struct w64_VRTextureWithPoseAndDepth_t
{
    W64_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
    HmdMatrix34_t mDeviceToAbsoluteTracking;
    w64_VRTextureDepthInfo_t depth;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_VRTextureWithPoseAndDepth_t
{
    W32_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
    HmdMatrix34_t mDeviceToAbsoluteTracking;
    w32_VRTextureDepthInfo_t depth;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRTextureWithPoseAndDepth_t w_VRTextureWithPoseAndDepth_t;
typedef u32_VRTextureWithPoseAndDepth_t u_VRTextureWithPoseAndDepth_t;
#endif
#ifdef __x86_64__
typedef w64_VRTextureWithPoseAndDepth_t w_VRTextureWithPoseAndDepth_t;
typedef u64_VRTextureWithPoseAndDepth_t u_VRTextureWithPoseAndDepth_t;
#endif

#pragma pack( push, 8 )
struct w64_VRTextureWithPose_t
{
    W64_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
    HmdMatrix34_t mDeviceToAbsoluteTracking;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_VRTextureWithPose_t
{
    W32_PTR(void *handle, handle);
    uint32_t eType;
    uint32_t eColorSpace;
    HmdMatrix34_t mDeviceToAbsoluteTracking;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRTextureWithPose_t w_VRTextureWithPose_t;
typedef u32_VRTextureWithPose_t u_VRTextureWithPose_t;
#endif
#ifdef __x86_64__
typedef w64_VRTextureWithPose_t w_VRTextureWithPose_t;
typedef u64_VRTextureWithPose_t u_VRTextureWithPose_t;
#endif

#pragma pack( push, 8 )
struct w64_VRVulkanDevice_t
{
    W64_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W64_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W64_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W64_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_uQueueFamilyIndex;
    uint8_t __pad_36[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_VRVulkanDevice_t
{
    W32_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W32_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W32_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W32_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_uQueueFamilyIndex;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRVulkanDevice_t w_VRVulkanDevice_t;
typedef u32_VRVulkanDevice_t u_VRVulkanDevice_t;
#endif
#ifdef __x86_64__
typedef w64_VRVulkanDevice_t w_VRVulkanDevice_t;
typedef u64_VRVulkanDevice_t u_VRVulkanDevice_t;
#endif

#pragma pack( push, 8 )
struct w64_VRVulkanTextureArrayData_t
{
    uint64_t m_nImage;
    W64_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W64_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W64_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W64_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint8_t __pad_60[4];
    uint32_t m_unArrayIndex;
    uint32_t m_unArraySize;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VRVulkanTextureArrayData_t
{
    uint64_t m_nImage;
    W32_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W32_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W32_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W32_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint8_t __pad_44[4];
    uint32_t m_unArrayIndex;
    uint32_t m_unArraySize;
#ifdef __cplusplus
    operator u32_VRVulkanTextureArrayData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_VRVulkanTextureArrayData_t
{
    uint64_t m_nImage;
    U32_PTR(VkDevice_T *m_pDevice, m_pDevice);
    U32_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    U32_PTR(VkInstance_T *m_pInstance, m_pInstance);
    U32_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint32_t m_unArrayIndex;
    uint32_t m_unArraySize;
#ifdef __cplusplus
    operator w32_VRVulkanTextureArrayData_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRVulkanTextureArrayData_t w_VRVulkanTextureArrayData_t;
typedef u32_VRVulkanTextureArrayData_t u_VRVulkanTextureArrayData_t;
#endif
#ifdef __x86_64__
typedef w64_VRVulkanTextureArrayData_t w_VRVulkanTextureArrayData_t;
typedef u64_VRVulkanTextureArrayData_t u_VRVulkanTextureArrayData_t;
#endif

#pragma pack( push, 8 )
struct w64_VRVulkanTextureData_t
{
    uint64_t m_nImage;
    W64_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W64_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W64_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W64_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint8_t __pad_60[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VRVulkanTextureData_t
{
    uint64_t m_nImage;
    W32_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W32_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W32_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W32_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint8_t __pad_44[4];
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VRVulkanTextureData_t w_VRVulkanTextureData_t;
typedef u32_VRVulkanTextureData_t u_VRVulkanTextureData_t;
#endif
#ifdef __x86_64__
typedef w64_VRVulkanTextureData_t w_VRVulkanTextureData_t;
typedef u64_VRVulkanTextureData_t u_VRVulkanTextureData_t;
#endif

#pragma pack( push, 8 )
struct w64_VulkanData_t
{
    uint64_t m_nImage;
    W64_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W64_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W64_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W64_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint8_t __pad_60[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_VulkanData_t
{
    uint64_t m_nImage;
    W32_PTR(VkDevice_T *m_pDevice, m_pDevice);
    W32_PTR(VkPhysicalDevice_T *m_pPhysicalDevice, m_pPhysicalDevice);
    W32_PTR(VkInstance_T *m_pInstance, m_pInstance);
    W32_PTR(VkQueue_T *m_pQueue, m_pQueue);
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
    uint8_t __pad_44[4];
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_VulkanData_t w_VulkanData_t;
typedef u32_VulkanData_t u_VulkanData_t;
#endif
#ifdef __x86_64__
typedef w64_VulkanData_t w_VulkanData_t;
typedef u64_VulkanData_t u_VulkanData_t;
#endif

