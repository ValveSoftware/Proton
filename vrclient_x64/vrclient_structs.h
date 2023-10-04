#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include <windef.h>
#include <winbase.h>

#ifdef __cplusplus
#include <array>
extern "C"
{
#endif /* __cplusplus */

#ifdef __cplusplus
#define U64_ARRAY( type, count, name ) std::array<type, count> name
#define U32_ARRAY( type, count, name ) std::array<type, count> name
#define W64_ARRAY( type, count, name ) std::array<type, count> name
#define W32_ARRAY( type, count, name ) std::array<type, count> name
#else
#define U64_ARRAY( type, count, name ) type name[count]
#define U32_ARRAY( type, count, name ) type name[count]
#define W64_ARRAY( type, count, name ) type name[count]
#define W32_ARRAY( type, count, name ) type name[count]
#endif

#define W_CDECL   __cdecl
#define W_STDCALL __stdcall
#define U_CDECL   __attribute__((sysv_abi))
#define U_STDCALL __attribute__((sysv_abi))

#ifdef __i386__
#define U64_PTR( decl, name ) uint64_t name
#define U32_PTR( decl, name ) decl
#define W64_PTR( decl, name ) uint64_t name
#define W32_PTR( decl, name ) decl
#define U_PTR U32_PTR
#define W_PTR W32_PTR
#endif

#ifdef __x86_64__
#define U64_PTR( decl, name ) decl
#define U32_PTR( decl, name ) uint32_t name
#define W64_PTR( decl, name ) decl
#define W32_PTR( decl, name ) uint32_t name
#define U_PTR U64_PTR
#define W_PTR W64_PTR
#endif

typedef struct HmdColor_t HmdColor_t;
typedef struct HmdMatrix33_t HmdMatrix33_t;
typedef struct HmdMatrix34_t HmdMatrix34_t;
typedef struct HmdMatrix44_t HmdMatrix44_t;
typedef struct HmdQuad_t HmdQuad_t;
typedef struct HmdQuaternion_t HmdQuaternion_t;
typedef struct HmdQuaternionf_t HmdQuaternionf_t;
typedef struct HmdVector2_t HmdVector2_t;
typedef struct HmdVector3_t HmdVector3_t;
typedef struct HmdVector3d_t HmdVector3d_t;
typedef struct HmdVector4_t HmdVector4_t;

struct HmdColor_t { float r, g, b, a; };
struct HmdMatrix33_t { float m[3][4]; };
struct HmdMatrix34_t { float m[3][4]; };
struct HmdMatrix44_t { float m[4][4]; };
struct HmdQuaternion_t { double w, x, y, z; };
struct HmdQuaternionf_t { float w, x, y, z; };
struct HmdVector2_t { float v[2]; };
struct HmdVector3_t { float v[3]; };
struct HmdVector3d_t { double v[3]; };
struct HmdVector4_t { float v[4]; };
struct HmdQuad_t { HmdVector3_t vCorners[4]; };

typedef struct IntersectionMaskRectangle_t IntersectionMaskRectangle_t;
struct IntersectionMaskRectangle_t
{
    float m_flTopLeftX;
    float m_flTopLeftY;
    float m_flWidth;
    float m_flHeight;
};

typedef struct IntersectionMaskCircle_t IntersectionMaskCircle_t;
struct IntersectionMaskCircle_t
{
    float m_flCenterX;
    float m_flCenterY;
    float m_flRadius;
};

typedef struct VkDevice_T VkDevice_T;
typedef struct VkInstance_T VkInstance_T;
typedef struct VkPhysicalDevice_T VkPhysicalDevice_T;
typedef struct VkQueue_T VkQueue_T;

#include "vrclient_structs_generated.h"

#define VROverlayError_InvalidHandle 11
#define VRRenderModelError_None 0
#define VRRenderModelError_Loading 100
#define VRRenderModelError_NotSupported 200
#define VRRenderModelError_InvalidArg 300
#define VRRenderModelError_InvalidTexture 400

#define VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff 2

enum EVRSubmitFlags
{
    Submit_Default = 0x00,
    Submit_LensDistortionAlreadyApplied = 0x01,
    Submit_GlRenderBuffer = 0x02,
    Submit_Reserved = 0x04,
    Submit_TextureWithPose = 0x08,
    Submit_TextureWithDepth = 0x10,
    Submit_FrameDiscontinuty = 0x20,
    Submit_VulkanTextureWithArrayData = 0x40,
    Submit_GlArrayTexture = 0x80,
    Submit_Reserved2 = 0x08000,
    Submit_Reserved3 = 0x10000,
};

enum ETextureType
{
    TextureType_DirectX = 0,
    TextureType_OpenGL = 1,
    TextureType_Vulkan = 2,
    TextureType_IOSurface = 3,
    TextureType_DirectX12 = 4,
    TextureType_DXGISharedHandle = 5,
};

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
