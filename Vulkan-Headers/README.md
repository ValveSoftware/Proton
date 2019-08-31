# Vulkan-Headers

Vulkan header files and API registry

## Repository Content

The contents of this repository are largely obtained from other repositories and are
collected, coordinated, and curated here.

Do not propose pull requests to this repository which modify any files under
include/vulkan/ or registry/. All such files are generated from the
Vulkan-Docs repository and, in the case of include/vulkan/vulkan.hpp, the
Vulkan-Hpp repository. Any changes must be made in those repositories.

The projects for these repositories are:

- [KhronosGroup/Vulkan-Docs](https://github.com/KhronosGroup/Vulkan-Docs)
  - Core Vulkan headers and Registry
- [KhronosGroup/Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp)
  - C++ Bindings for Vulkan

Please visit the appropriate project in the above list for obtaining additional information,
asking questions, or opening issues.

## Version Tagging Scheme

Updates to the `Vulkan-Headers` repository which correspond to a new Vulkan
specification release are tagged using the following format:
`v<`_`version`_`>` (e.g., `v1.1.96`).

**Note**: Marked version releases have undergone thorough testing but do not
imply the same quality level as SDK tags. SDK tags follow the
`sdk-<`_`version`_`>.<`_`patch`_`>` format (e.g., `sdk-1.1.92.0`).

This scheme was adopted following the 1.1.96 Vulkan specification release.
