---
How controllers work in Proton
---

There are five methods that Windows games can use to access controllers:
dinput, xinput, winmm, hid, and rawinput. Games can use any combination of all
of these APIs.

rawinput allows direct access to the gamepad hardware. The application must
know the HID protocol, and/or know the device-specific protocol for
non-standard devices like Xbox controllers.

hid is a layer above rawinput, where Windows will talk HID to the controller on
the game's behalf. This turns the raw HID protocol data into usable things like
buttons and joysticks.

dinput is a "legacy" API that allows applictions to talk to any type of
joystick. On Windows, it is likely implemented on top of HID. Notably, dinput
allows easy access to controllers that no other API does, so it is still used
by modern games despite being "legacy."

xinput is the new API that supports only Xbox controllers. On Windows, it is
likely implemented on top of rawinput, as Xbox controllers do not behave like
standard HID devices.

winmm is the very legacy API, for when joysticks were hooked up through the
soundcard. On modern Windows, it is likely implemented on top of hid.


Here is a diagram for how these APIs are mapped down to the system by Proton:


               --------
              |game.exe|
               --------
             / | | |  |            application
    ********|**|*|*|**|***********************
     ------ /  | | |  |                   wine
    |xinput|   | | |  |
     ------   /  | |  |
      |      /   | |  |
     ---    /   /  |   \
    |hid|---   /   |    \
     ---      /    |     \
      |      /     |      \
     --------    ------    -----
    |rawinput|  |dinput|  |winmm|
     --------    ------    -----
       |           |         |
     -----------   |   ----------------
    |winebus.sys|  |  |winejoystick.drv|
     -----------   |   ----------------
       |        \ /          |            wine
    ***|*********|***********|****************
       \         |           |           linux
        \      ----          |
         \    |SDL2|         |
          \    ----          |
           \     | \         |
            \    |  ----     |
             \   |      \    |
              ------    -----------
             |hidraw|  |input event|
              ------    -----------

Some things to note:

SDL2 provides the controller mapping feature of the Steam client. If you don't
go through SDL2, then you don't get that mapping feature. Also notice that
winebus.sys must turn SDL2 events into usable winebus data (HID protocol). We
also allow direct access to hidraw devices so games which can speak HID (or
other) protocol can talk directly to those devices.

Xbox controllers do not speak real HID. Instead Windows provides a HID
compatibility layer so dinput, which is implemented on top of HID, will present
the Xbox controller to legacy games. Of course some games (Unity) have noticed
that, and talk directly to this internal HID interface, so we had to duplicate
it bit-for-bit in winebus.sys.

Some games support talking directly to certain controller types. For example,
many modern games support PlayStation 4 controllers directly and will provide
layouts and button images in-game specific to DualShock 4 controllers. For this
reason, we don't want to present every controller through xinput, which should
only present Xbox controllers.

However, we also want users to be able to use any controller, even if the game
only supports xinput. Steam provides a controller mapping feature, which is
presented as a virtual Steam Controller. We turn this virtual Steam Controller
into an xinput device. This means any controller which is mapped will appear to
the game as an xinput device, in addition to the other APIs. Controllers which
are not mapped will appear as the real controller, which the game may or may
not support.

One final snag is that many distros do not allow user access to hidraw devices.
Steam ships some udev rules to allow this for certain common controller types,
but not most. In other words, your user may not have access to the hidraw
device for your controller, especially if it is a less well-known controller.
In those cases, we access it through SDL2 via its linux js backend and try to
treat it as an Xbox controller, even if it is not mapped with the Steam client
mapping feature.


Future improvements:

winmm's joystick APIs should be implemented on top of HID so it can use the
Steam controller mapping feature via winebus/SDL2.

xinput should be implemented on top of rawinput, as the Xbox HID compatibility
layer does not provide all of the features xinput requires. We currently use a
hack to work around this.

dinput should be implemented on top of HID, so we can avoid the code
duplication we have now with both winebus and dinput using SDL2 directly.
