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


## DirectX 9, 10, 11 and 12 (DXVK and VKD3D-Proton)

The implementations of those graphics APIs are built on top of Vulkan and
**most of the games should work out of the box.** Discrete GPUs are
prioritized (i.e. enumerated first) and games should default to them.

If you have multiple discrete GPUs or the wrong GPU is selected as the
default one and the game doesn't have the means of selecting an adapter you
can limit what gets enumerated.

In Steam, set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    DXVK_FILTER_DEVICE_NAME="GTX 1650" %command%

This should work for GeForce GTX 1650. A different name may be required for
your particular graphics card (e.g. "VEGA10" for Vega 56/64). You can use
`vulkaninfo` program (usually packaged as `vulkan-tools`) to check the names
of your GPUs.


## DirectX 8 and OpenGL

Those APIs are implemented on top of OpenGL and require a bit more
configuration.

The two most common PRIME scenarios are covered, but the content should be
enough to troubleshoot and make any other configuration work.

### AMD -> Integrated Intel (Mesa -> Mesa)

In Steam, set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    DRI_PRIME=1 %command%

### Nvidia -> Integrated Intel (Nvidia's Proprietary Driver -> Mesa)

In Steam set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    __NV_PRIME_RENDER_OFFLOAD=1 __GLX_VENDOR_LIBRARY_NAME=nvidia %command%


## Vulkan

In case Vulkan games don't allow you to select a GPU or you experience
problems with graphics APIs implemented on top of Vulkan you can limit or
alter the GPU selection.

### AMD -> Integrated Intel (Mesa -> Mesa)

In Steam, set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    DRI_PRIME=1 %command%

This will cause the devices to change order, i.e. the first GPU will swap
places with another one.

You can also limit the selection using Mesa's DEVICE_SELECT Vulkan layer. To
list the GPUs:

    $ MESA_VK_DEVICE_SELECT=list vulkaninfo
    selectable devices:
      GPU 0: 1002:67df "AMD RADV POLARIS10 (ACO)" discrete GPU 0000:01:00.0
      GPU 1: 8086:412 "Intel(R) HD Graphics 4600 (HSW GT2)" integrated GPU 0000:00:02.0

Then set the launch options using one of the vendor and product ids, e.g.:

    DRI_PRIME=1 MESA_VK_DEVICE_SELECT=1002:67df $command%


### Nvidia -> Integrated Intel (Nvidia's Proprietary Driver -> Mesa)

In Steam set your game's Properties -> GENERAL -> LAUNCH OPTIONS to:

    __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only %command%

This will load the Optimus Vulkan layer and use it to limit the GPU selection
to NVIDIA only. Using `non_NVIDIA_only` will do the opposite.


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
