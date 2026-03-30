#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <assert.h>

#include <windef.h>
#include <winbase.h>

#ifdef __cplusplus
#include <array>
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

#if defined(__cplusplus)
template< typename T >
#endif /* __cplusplus */
struct ptr32
{
    uint32_t value;

#if defined(__cplusplus)
    template< typename U > struct pointee { using type = U; };
    template< typename U > struct pointee< U** > { using type = struct ptr32< U* >*; };
    using Type = typename pointee< T >::type;

    struct ptr32& operator=( const Type ptr )
    {
        assert( (UINT64)ptr == (uint32_t)(UINT_PTR)ptr );
        this->value = (UINT_PTR)ptr;
        return *this;
    }
    operator Type() const
    {
        return (Type)(UINT_PTR)this->value;
    }
#endif /* __cplusplus */
};

#ifdef __i386__
#define U64_PTR( decl, name, type ) uint64_t name
#define U32_PTR( decl, name, type ) decl
#define W64_PTR( decl, name, type ) uint64_t name
#define W32_PTR( decl, name, type ) decl
#endif

#if defined(__x86_64__) || defined(__aarch64__)
#define U64_PTR( decl, name, type ) decl
#define U32_PTR( decl, name, type ) uint32_t name
#define W64_PTR( decl, name, type ) decl
#if defined(__cplusplus)
#define W32_PTR( decl, name, type ) struct ptr32< type > name
#else /* __cplusplus */
#define W32_PTR( decl, name, type ) struct ptr32 name
#endif /* __cplusplus */
#endif /* defined(__x86_64__) || defined(__aarch64__) */

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

#define VRApplication_Background 3

#define VRInitError_Init_NoServerForBackgroundApp 121

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
    Submit_TextureWithMotion = 0x200 | Submit_TextureWithPose | Submit_TextureWithDepth,
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

struct u_iface
{
    UINT64 handle;
#ifdef __cplusplus
    template< typename T > struct u_iface &operator=(const T* value) { this->handle = (UINT_PTR)value; return *this; }
    template< typename T > operator T*() const { return (T*)(UINT_PTR)this->handle; }
#endif /* __cplusplus */
};

struct u_buffer
{
    UINT64 ptr;
    UINT64 len;
#ifdef __cplusplus
    struct u_buffer &operator=(const char* value) { this->ptr = (UINT_PTR)value; this->len = value ? strlen( value ) + 1 : 0; return *this; }
    operator char*() const { return (char*)(UINT_PTR)this->ptr; }
#endif /* __cplusplus */
};
