Proton Debugging Tips
=====================

For loading dev builds of games onto a Steam Deck see
<https://partner.steamgames.com/doc/steamdeck/loadgames>


Debug Proton Builds
-------------------

See [README.md#debugging](../README.md#debugging).


Attaching A Debugger
--------------------

Running GDB and attaching to a running .exe works out of the box:

```
$ ps | grep Game
2263566 ?        tsl    0:09 Z:\home\ivyl\.local\share\Steam\steamapps\common\Game\Game.exe

$ gdb
GNU gdb (GDB) 14.1
...
(gdb) attach 2263566
Attaching to process 2263566
[New LWP 2263569]
...
0x000075dce0cd788d in ?? ()
```

With Proton Experimental (and >= 9.0-2), GDB should be able to load the symbols right
away. However, for the most seamless experience you will want to use a
custom version of GDB with a couple of patches to better integrate with
Wine.

You can find this fork at https://gitlab.winehq.org/rbernon/binutils-gdb,
which you can build with `configure && make all-gdb && make install-gdb`.
Make sure to have python development packages installed, as GDB python
support will be required.

With this custom GDB you can `source` [Wine's custom unwinder](https://github.com/ValveSoftware/wine/blob/experimental_9.0/tools/gdbunwind.py)
in your `~/.gdbinit`, and you will get backtraces across PE / unix boundaries.


With older Proton you can use `source` [wine's
gdbinit](https://github.com/ValveSoftware/wine/blob/proton_8.0/tools/gdbinit.py)
to make `load-symbol-files` command available that uses `/proc/$pid/maps` to
load the symbols:


```
(gdb) source ~/src/proton/wine/tools/gdbinit.py

(gdb) load-symbol-files
loading symbols for /home/ivyl/.local/share/Steam/steamapps/common/Proton - Experimental/files/lib64/wine/x86_64-windows/kernelbase.dll
...

(gdb) bt
#0  0x000075dce0cd788d in ?? ()
#1  0x000075dcdf26e842 in futex_wait (timeout=0x0, val=0, addr=0x75dcdd8383e0) at ../src-wine/dlls/ntdll/unix/sync.c:127
#2  NtWaitForAlertByThreadId (address=<optimized out>, timeout=0x0) at ../src-wine/dlls/ntdll/unix/sync.c:2658
#3  <signal handler called>
#4  0x000000017000ebb4 in NtWaitForAlertByThreadId ()
#5  0x00000001700367f9 in RtlWaitOnAddress (addr=addr@entry=0x4850970, cmp=0x3d12fa9c, cmp@entry=0x3d12fabc, size=size@entry=4, timeout=timeout@entry=0x0) at ../src-wine/dlls/ntdll/sync.c:941
#6  0x000000017003276a in RtlSleepConditionVariableSRW (variable=0x4850970, lock=0x4850908, timeout=0x0, flags=<optimized out>) at ../src-wine/dlls/ntdll/sync.c:837
#7  0x000000007b061e41 in SleepConditionVariableSRW (variable=<optimized out>, lock=<optimized out>, timeout=<optimized out>, flags=<optimized out>) at ../src-wine/dlls/kernelbase/sync.c:1064
#8  0x000000035915c892 in dxvk::condition_variable::wait (lock=..., this=0x4850970) at ../src-dxvk/src/dxvk/../util/log/../thread.h:251
#9  dxvk::condition_variable::wait<dxvk::DxvkPipelineWorkers::runWorker(dxvk::DxvkPipelinePriority)::<lambda()> > (pred=..., lock=..., this=0x4850970) at ../src-dxvk/src/dxvk/../util/log/../thread.h:257
#10 dxvk::DxvkPipelineWorkers::runWorker (this=0x48508f0, maxPriority=dxvk::DxvkPipelinePriority::Normal) at ../src-dxvk/src/dxvk/dxvk_pipemanager.cpp:140
#11 0x00000003591a7781 in std::function<void ()>::operator()() const (this=0x4852ee0) at /usr/x86_64-w64-mingw32/include/c++/10.3.0/bits/std_function.h:622
#12 dxvk::thread::threadProc (arg=0x4852ed0, arg@entry=<error reading variable: value has been optimized out>) at ../src-dxvk/src/util/thread.cpp:68
#13 0x000000007b6146ed in BaseThreadInitThunk (unknown=<optimized out>, entry=<optimized out>, arg=<optimized out>) at ../src-wine/dlls/kernel32/thread.c:61
#14 0x000000017000f1a7 in RtlUserThreadStart ()
#15 0x0000000000000000 in ?? ()
```


Attaching Before The Program Starts
-----------------------------------

Launch the software with `PROTON_WAIT_ATTACH=1 %command%` set as the launch
command in game's properties. Our `steam.exe` shim will then wait for debugger
and only then exec the proper executable.

Make sure that you follow child processes:

```
set follow-fork-mode child
```


Getting Shell Inside Of The Steam Runtime
------------------------------------------

Set your launch options to: `PROTON_LOG=1 STEAM_COMPAT_LAUNCHER_SERVICE=proton
%command%`

Then in `steam-$GAMEID.log` you should see the following:

```
Starting program with command-launcher service.

To run commands in the per-app container, use a command like:

/home/ivyl/.local/share/Steam/steamapps/common/SteamLinuxRuntime_sniper/pressure-vessel/bin/steam-runtime-launch-client \
	--bus-name=:1.307 \
	--directory='' \
	-- \
	bash
```

After invoking it you end up in a shell with the environment variables,
including `WINEPREFIX` are set and you can invoke `wine` directly, e.g.:

```
[ivyl@crabcraft x64]$ wine winedbg
Wine-dbg> info process
 pid      threads  executable (all id:s are in hex)
 0000028c 1        'start.exe'
 0000029c 1        \_ 'winedbg.exe'
=000002a4 1           \_ 'winedbg.exe'
 00000294 2        \_ 'conhost.exe'
 00000030 10       'services.exe'
 000000e4 6        \_ 'rpcss.exe'
 000000b0 3        \_ 'svchost.exe'
 00000094 6        \_ 'plugplay.exe'
 00000064 9        \_ 'winedevice.exe'
 0000003c 8        \_ 'winedevice.exe'
 00000020 3        'steam.exe'
 00000128 62       \_ 'Game.exe'
 000000d0 3        \_ 'explorer.exe'
 0000010c 3           \_ 'tabtip.exe'
```

**NOTE:** If you need a predictable bus name instead of the unique connection
name (the `:1.307` from example above) you can use `com.steampowered.App1234567`
where 1234567 is the Steam App ID for the title you are debugging.

You can always use a tool like `qdbus` to list available bus names.


Starting A Different Binary
---------------------------

If you want to start a different binary than the game's default you can use a
few methods. All of the examples below will use `winecfg`.

### Substitution

You can use the following launch option:

```
echo "%command%" | sed 's/proton waitforexitandrun .*/proton waitforexitandrun winecfg/' | sh
```

The full substitution of `proton waitforexitandrun .*` is necessary as the
original `%command%` is very long and may contain multiple mentions of `proton`
or the original binary.

### Pressure-Vessel Shell

[Pressure-vessel][pv] allows to spawn an xterm instead of launching Proton. This
can be accomplished by setting `PRESSURE_VESSEL_SHELL=instead`. The easiest way
is to set the launch option to:

[pv]: (https://gitlab.steamos.cloud/steamrt/steam-runtime-tools/-/tree/main/pressure-vessel)

`PRESSURE_VESSEL_SHELL=instead %command%`

The original coommand is then contained in `$@`, e.g.:

```
/home/ivyl/.local/share/Steam/steamapps/common/SteamLinuxRuntime_sniper/pressure-vessel/bin/steam-runtime-launcher-interface-0 container-runtime /home/ivyl/.local/share/Steam/steamapps/common/Proton - Experimental/proton waitforexitandrun /home/ivyl/.local/share/Steam/steamapps/common/Game/Game.exe
```

From this point you can invoke `proton` script as all the required environment
variables are set. If you are copying the path from `$@` make sure to escape or
quote parts that contain spaces.

To start `winecfg` something like this can be entered:

```
"/home/ivyl/.local/share/Steam/steamapps/common/Proton - Experimental/proton" waitforexitandrun winecfg
```
