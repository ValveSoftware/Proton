---
How to make Proton work with PRIME
---

# Setup

## Context

PRIME is a technology that allows one GPU to perform graphics rendering and
another GPU to display the result on the screen.

This document assumes that PRIME / GPU offloading is configured and working
for native software and will touch only on things specific to Proton.

If you need help with configuring PRIME in the first place you may find the
following resources useful:

 * https://wiki.archlinux.org/index.php/PRIME
 * https://wiki.debian.org/NVIDIA%20Optimus


Here, the two most common PRIME scenarios are covered, but the content should
be enough to troubleshoot and make any other configuration work.


## AMD -> Integrated Intel (Mesa -> Mesa)

In Steam, set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    DRI_PRIME=1 %command%

That's it. This should be enough to have everything working.


## Nvidia -> Integrated Intel (Nvidia's Proprietary Driver -> Mesa)

In Steam set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    __NV_PRIME_RENDER_OFFLOAD=1 __GLX_VENDOR_LIBRARY_NAME=nvidia %command%

For most games, Nvidia GPUs are reported as AMD GPUs to workaround issues with
NVAPI. This means that DXGI will report your GPU as RX480.  Because of that
DXVK/VKD3D won't recognize the vendor/product ids and will pick a GPU on their
own, so you have to add other options to force the correct choice.

DXVK (used for DirectX 9-11 games) takes GPU name so you might have to
prepend the following to 'LAUNCH OPTIONS': `DXVK_FILTER_DEVICE_NAME="GeForce"`.
A different or more specific name may be required (e.g. "Quadro").

VKD3D-Proton (used for DirectX 12 games) takes GPU id as reported by the
`vulkaninfo` program (usually packaged as `vulkan-tools`). In this case you
have to prepend the following to 'LAUNCH OPTIONS': `VKD3D_VULKAN_DEVICE=0`.
Replace `0` with the appropriate GPU id.


# Troubleshooting

## Performance

Having vsync enabled in-game is known to cause problems in PRIME
configurations. If you experience poor framerates / freezes try disabling
vsync.

## Device selection

To make sure that all libraries have selected the correct GPU you can check
the logs.

In the game's properties set the following 'LAUNCH OPTIONS':

    PROTON_LOG=1 WINEDEBUG=+d3d VKD3D_DEBUG=trace

After running the game, you should find a file named `steam-$APPID.log` in your
Home directory.

For wined3d/DXGI, look for:

```
trace:d3d:wined3d_adapter_init_gl_caps GL_RENDERER: "Radeon RX 580 Series (POLARIS10, DRM 3.40.0, 5.10.9-zen1-1-zen, LLVM 11.0.1)".
```

For DXVK, look for:

```
info:  DXVK: v1.7.3-36-g85c70ad5
...
info:  AMD RADV POLARIS10 (ACO):
info:    Driver: 20.3.3
info:    Vulkan: 1.2.145
```

For VKD3D-Proton, look for:

```
trace:vkd3d_trace_physical_device_properties: Device name: AMD RADV POLARIS10 (ACO).
trace:vkd3d_trace_physical_device_properties: Vendor ID: 0x1002, Device ID: 0x67df.
```

Refer to the main README and each project's own documentation for more details
on logging. Extra logging can destroy game performance. Make sure that you
clear your 'LAUNCH OPTIONS' after troubleshooting.
