# GRAPHICS DRIVERS QUICKSTART - UBUNTU 18.04

Some of the newest titles available on Linux with Steam Play require cutting-edge drivers that are not distributed with the latest Ubuntu 18.04 release. To achieve the highest level of compatibility with Windows game titles, we recommend installing the following drivers:

## NVIDIA

Linux users with NVIDIA graphics cards should install the latest NVIDIA proprietary drivers; version 396.51 is required. They can be installed directly from Canonical's repository for third-party drivers:

```
sudo add-apt-repository ppa:graphics-drivers/ppa
sudo apt update
sudo apt install nvidia-396
```

Provide your user password when requested and reboot after the last command completes to ensure the driver has updated correctly.  

Further details about this PPA repository are available here: 
https://launchpad.net/~graphics-drivers/+archive/ubuntu/ppa

## AMD/Intel

Linux users with AMD or Intel graphics cards should install recent versions of Mesa and LLVM through this repository: https://launchpad.net/~paulo-miguel-dias/+archive/ubuntu/mesa

```
sudo add-apt-repository ppa:paulo-miguel-dias/mesa
sudo apt update
sudo apt dist-upgrade
```

Provide your user password when requested and reboot after the last command completes to ensure the driver has updated correctly.

In addition, AMD users that want to play VR games should also add this repository: https://launchpad.net/~kisak/+archive/ubuntu/steamvr4pk

```
sudo add-apt-repository ppa:kisak/steamvr4pk
sudo apt update
sudo apt dist-upgrade
```

VR is not currently supported on Intel graphics.

# GRAPHICS DRIVERS REQUIREMENTS - GENERAL

## DirectX 11 games:
You will need NVIDIA 396.51 or Mesa 18.1.x at a minimum. LLVM7 is recommended to play DX11 games without GPU hangs.


