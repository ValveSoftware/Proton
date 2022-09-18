# Revision history for `glslang`

All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](https://semver.org/).

## 11.11.0 2022-08-11

### Other changes
* Add OpSource support to C interface
* Deprecate samplerBuffer for spirv1.6 and later
* Add support for SPV_AMD_shader_early_and_late_fragment_tests

## 11.10.0 2022-06-02

### Other changes
* Generate OpLine before OpFunction
* Add support for VK_EXT_fragment_shader_barycentric
* Add whitelist filtering for debug comments in SPIRV-Remap
* Add support for GL_EXT_ray_cull_mask

## 11.9.0 2022-04-06

### Other changes
* Add GLSL version override functionality
* Add eliminate-dead-input-components to -Os
* Add enhanced-msgs option
* Explicitly use Python 3 for builds

## 11.8.0 2022-01-27

### Other changes
* Add support for SPIR-V 1.6
* Add support for Vulkan 1.3
* Add --hlsl-dx-position-w option

## 11.7.0 2021-11-11

### Other changes
* Add support for targeting Vulkan 1.2 in the C API

## 11.6.0 2021-08-25

### Other changes
* Atomic memory function only for shader storage block member or shared variable
* Add support for gl_MaxVaryingVectors for ogl
* Fix loading bool arrays from interface blocks
* Generate separate stores for partially swizzled memory stores
* Allow layout(std430) uniform with GL_EXT_scalar_block_layout
* Support for pragma STDGL invariant(all)
* Support for GL_NV_ray_tracing_motion_blur

## 11.5.0 2021-06-23

### Other changes
* Implement GLSL_EXT_shader_atomic_float2
* Implement GL_EXT_spirv_intrinsics
* Fixed SPIR-V remapper not remapping OpExtInst instruction set IDs
* only declare compatibility gl_ variables in compatibility mode
* Add support for float spec const vector initialization
* Implement GL_EXT_subgroup_uniform_control_flow.
* Fix arrays dimensioned with spec constant sized gl_WorkGroupSize
* Add support for 64bit integer scalar and vector types to bitCount() builtin

## 11.4.0 2021-04-22

### Other changes
* Fix to keep source compatible with CMake 3.10.2

## 11.3.0 2021-04-21

### Other changes
* Added --depfile
* Added --auto-sampled-textures
* Now supports InterpolateAt-based functions
* Supports cross-stage automatic IO mapping
* Supports GL_EXT_vulkan_glsl_relaxed (-R option)

## 11.2.0 2021-02-18

### Other changes
* Removed Python requirement when not building with spirv-tools
* Add support for GL_EXT_shared_memory_block
* Implement GL_EXT_null_initializer
* Add CMake support for Fuschia

## 11.1.0 2020-12-07

### Other changes
* Added ray-tracing extension support

## 11.0.0 2020-07-20

### Breaking changes

#### Visual Studio 2013 is no longer supported

[As scheduled](https://github.com/KhronosGroup/glslang/blob/9eef54b2513ca6b40b47b07d24f453848b65c0df/README.md#planned-deprecationsremovals),
Microsoft Visual Studio 2013 is no longer officially supported. Please upgrade
to at least Visual Studio 2015.

## 10.15.3847 2020-07-20

### Breaking changes

* The following files have been removed:
  * `glslang/include/revision.h`
  * `glslang/include/revision.template`

The `GLSLANG_MINOR_VERSION` and `GLSLANG_PATCH_LEVEL` defines have been removed
from the public headers. \
Instead each build script now uses the new `build_info.py`
script along with the `build_info.h.tmpl` and this `CHANGES.md` file to generate
the glslang build-time generated header `glslang/build_info.h`.

The new public API to obtain the `glslang` version is `glslang::GetVersion()`.

### Other changes
* `glslang` shared objects produced by CMake are now `SONAME` versioned using
   [Semantic Versioning 2.0.0](https://semver.org/).
