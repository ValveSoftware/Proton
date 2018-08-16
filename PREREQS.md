GRAPHICS DRIVERS REQUIREMENTS

Some of the newest titles available on Linux with Steam Play require cutting-edge drivers that are not distributed with the latest Ubuntu 18.04 release. To achieve the highest level of compatibility with Windows game titles, we recommend installing the following drivers. 

NVIDIA
Linux users with NVIDIA graphics cards should install the latest NVIDIA proprietary drivers. 

    1. Open a terminal window.  (Ctrl + Alt+ T) 
    2. Enter the following commands in terminal to add the required PPA repository:
sudo add-apt-repository ppa:graphics-drivers/ppa
sudo apt update
    3. Provide your user password when requested.
    4. Open Software and Updates. 
    5. Select the Additional Drivers tab.
    6. Choose nvidia-driver-396  
    7. Click Apply Changes (this can take several minutes).
    8. Provide your user password when requested.  
    9. Log out of user or reboot to ensure the driver has updated correctly.  

Further details about this PPA repository are available here: 
https://launchpad.net/~graphics-drivers/+archive/ubuntu/ppa

AMD/Intel
Linux users with AMD or Intel graphics cards should install the latest release of Padoka, a development version of the Mesa 3D Graphics Library: https://launchpad.net/~paulo-miguel-dias/+archive/ubuntu/mesa
