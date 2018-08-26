#!/usr/bin/env python

#script to launch Wine with the correct environment

from __future__ import print_function

import filecmp
import json
import os
import shutil
import struct
import subprocess
import sys
import tarfile

from filelock import FileLock, Timeout

#To enable debug logging, copy "user_settings.sample.py" to "user_settings.py"
#and edit it if needed.

CURRENT_PREFIX_VERSION="3.7-2"

PFX="Proton: "

if "Darwin" in os.uname()[0]:
    ld_path_var = "DYLD_LIBRARY_PATH"
else:
    ld_path_var = "LD_LIBRARY_PATH"

def log(msg):
    sys.stderr.write(PFX + msg + os.linesep)
    sys.stderr.flush()

def upgrade_pfx(old_ver):
    if old_ver == CURRENT_PREFIX_VERSION:
        return

    log("Upgrading prefix from " + str(old_ver) + " to " + CURRENT_PREFIX_VERSION + " (" + os.environ["STEAM_COMPAT_DATA_PATH"] + ")")

    if old_ver == None:
        return

    old_proton_ver, old_prefix_ver = old_ver.split('-')

    if old_proton_ver == "3.7" and old_prefix_ver == "1":
        if not os.path.exists(prefix + "/drive_c/windows/syswow64/kernel32.dll"):
            #shipped a busted 64-bit-only installation on 20180822. detect and wipe clean
            log("Detected broken 64-bit-only installation, re-creating prefix.")
            shutil.rmtree(prefix)

def run_wine(args):
    subprocess.call(args, env=env, stderr=lfile)

def makedirs(path):
    try:
        os.makedirs(path)
    except:
        #already exists
        pass

def real_copy(src, dst):
    if os.path.islink(src):
        os.symlink(os.readlink(src), dst)
    else:
        shutil.copy(src,dst)

def mergedirs(src, dst):
    for src_dir, dirs, files in os.walk(src):
        dst_dir = src_dir.replace(src, dst, 1)
        if not os.path.exists(dst_dir):
            os.makedirs(dst_dir)
        for dir_ in dirs:
            src_file = os.path.join(src_dir, dir_)
            dst_file = os.path.join(dst_dir, dir_)
            if os.path.islink(src_file) and not os.path.exists(dst_file):
                real_copy(src_file, dst_file)
        for file_ in files:
            src_file = os.path.join(src_dir, file_)
            dst_file = os.path.join(dst_dir, file_)
            if not os.path.exists(dst_file):
                real_copy(src_file, dst_file)

if not ("STEAM_COMPAT_DATA_PATH" in os.environ):
    log("No compat data path?")
    sys.exit(1)

basedir = os.path.dirname(sys.argv[0])
bindir = basedir + "/dist/bin/"
libdir = basedir + "/dist/lib"
lib64dir = basedir + "/dist/lib64"
wine_path = bindir + "/wine64"

#extract if needed
dist_lock = FileLock(basedir + "/dist.lock", timeout=-1)
with dist_lock:
    if not os.path.exists(basedir + "/dist") or \
            not os.path.exists(basedir + "/dist/version") or \
            not filecmp.cmp(basedir + "/version", basedir + "/dist/version"):
        if os.path.exists(basedir + "/dist"):
            shutil.rmtree(basedir + "/dist")
        tar = tarfile.open(basedir + "/proton_dist.tar.gz", mode="r:gz")
        tar.extractall(path=basedir + "/dist")
        tar.close()
        shutil.copy(basedir + "/version", basedir + "/dist/")

env = dict(os.environ)
dlloverrides = {}

#for performance, logging is disabled by default; override with user_settings.py
env["DXVK_LOG_LEVEL"] = "none"
env["WINEDEBUG"] = "-all"
env.pop("WINEARCH", "")

if ld_path_var in os.environ:
    env[ld_path_var] = lib64dir + ":" + libdir + ":" + os.environ[ld_path_var]
else:
    env[ld_path_var] = lib64dir + ":" + libdir

env["WINEDLLPATH"] = lib64dir + "/wine:" + libdir + "/wine"

if "PATH" in os.environ:
    env["PATH"] = bindir + ":" + os.environ["PATH"]
else:
    env["PATH"] = bindir

with dist_lock:
    if not os.path.isdir(basedir + "/dist/share/default_pfx"):
        #make default prefix
        env["WINEPREFIX"] = basedir + "/dist/share/default_pfx"
        run_wine([wine_path, "wineboot"])
        run_wine([bindir + "/wineserver", "-w"])

prefix = os.environ["STEAM_COMPAT_DATA_PATH"] + "/pfx/"
env["WINEPREFIX"] = prefix

if "PROTON_LOG" in env:
    env["WINEDEBUG"] = "+timestamp,+pid,+tid,+seh,+debugstr,+module"

#load environment overrides
if os.path.exists(basedir + "/user_settings.py"):
    try:
        import user_settings
        env.update(user_settings.user_settings)
    except e:
        log("************************************************")
        log("THERE IS AN ERROR IN YOUR user_settings.py FILE:")
        log("%s" % sys.exc_info()[1])
        log("************************************************")

def check_environment(env_name, config_name):
    if not env_name in env:
        return
    if env[env_name] == "0" or len(env[env_name]) == 0:
        config_opts.discard(config_name)
    else:
        config_opts.add(config_name)

if "STEAM_COMPAT_CONFIG" in os.environ:
    config_opts = set(os.environ["STEAM_COMPAT_CONFIG"].split(","))
else:
    config_opts = set()

check_environment("PROTON_USE_WINED3D11", "wined3d11")
check_environment("PROTON_NO_D3D11", "nod3d11")
check_environment("PROTON_NO_ESYNC", "noesync")

if not "noesync" in config_opts:
    env["WINEESYNC"] = "1"

lfile = None
if "SteamGameId" in env:
    if env["WINEDEBUG"] != "-all":
        lfile_path = os.environ["HOME"] + "/steam-" + os.environ["SteamGameId"] + ".log"
        if os.path.exists(lfile_path):
            os.remove(lfile_path)
        lfile = open(lfile_path, "w+")
else:
    env["WINEDEBUG"] = "-all"

prefix_lock = FileLock(os.environ["STEAM_COMPAT_DATA_PATH"] + "/pfx.lock", timeout=-1)
with prefix_lock:
    version_file = os.environ["STEAM_COMPAT_DATA_PATH"] + "/version"
    if os.path.exists(version_file):
        with open(version_file, "r") as f:
            upgrade_pfx(f.readline().strip())
    else:
        upgrade_pfx(None)

    if not os.path.exists(prefix + "/user.reg"):
        #copy default prefix into place
        mergedirs(basedir + "/dist/share/default_pfx", prefix)

    with open(version_file, "w") as f:
        f.write(CURRENT_PREFIX_VERSION + "\n")

    #copy steam files into place
    if "STEAM_COMPAT_CLIENT_INSTALL_PATH" in os.environ:
        #modern steam client sets this
        steamdir = os.environ["STEAM_COMPAT_CLIENT_INSTALL_PATH"]
    elif "STEAM_CLIENT_CONFIG_FILE" in os.environ:
        #fallback for old steam clients (should remove once changes graduate)
        steamdir = os.path.dirname(os.environ["STEAM_CLIENT_CONFIG_FILE"])
    else:
        #linux-only fallback, really shouldn't get here
        steamdir = os.environ["HOME"] + ".steam/root/"
    dst = prefix + "/drive_c/Program Files (x86)/"
    makedirs(dst + "Steam")
    filestocopy = ["steamclient.dll",
            "steamclient64.dll",
            "Steam.dll"]
    for f in filestocopy:
        if os.path.isfile(steamdir + "/legacycompat/" + f):
            dstfile = dst + "Steam/" + f
            if os.path.isfile(dstfile):
                os.remove(dstfile)
            shutil.copy(steamdir + "/legacycompat/" + f, dstfile)

    #copy openvr files into place
    dst = prefix + "/drive_c/vrclient/bin/"
    makedirs(dst)
    shutil.copy(basedir + "/dist/lib/wine/fakedlls/vrclient.dll", dst)
    shutil.copy(basedir + "/dist/lib64/wine/fakedlls/vrclient_x64.dll", dst)

    shutil.copy(basedir + "/dist/lib/wine/dxvk/openvr_api_dxvk.dll", prefix + "/drive_c/windows/syswow64/")
    shutil.copy(basedir + "/dist/lib64/wine/dxvk/openvr_api_dxvk.dll", prefix + "/drive_c/windows/system32/")

    #parse linux openvr config and present it in win32 format to the app.
    #logic from openvr's CVRPathRegistry_Public::GetPaths

    #check environment for overrides
    vr_runtime = None
    if "VR_OVERRIDE" in env:
        vr_runtime = env["VR_OVERRIDE"]
        env.pop("VR_OVERRIDE")

    vr_config = None
    if "VR_CONFIG_PATH" in env:
        vr_config = env["VR_CONFIG_PATH"]
        env.pop("VR_CONFIG_PATH")

    vr_log = None
    if "VR_LOG_PATH" in env:
        vr_log = env["VR_LOG_PATH"]
        env.pop("VR_LOG_PATH")

    #load from json if needed
    if vr_runtime is None or \
            vr_config is None or \
            vr_log is None:
        try:
            #TODO: support mac
            if "XDG_CONFIG_HOME" in os.environ:
                path = os.environ["XDG_CONFIG_HOME"]
            else:
                path = os.environ["HOME"] + "/.config"
            path = path + "/openvr/openvrpaths.vrpath"

            j = json.load(open(path, "r"))

            if vr_runtime is None:
                vr_runtime = j["runtime"][0]

            if vr_config is None:
                vr_config = j["config"][0]

            if vr_log is None:
                vr_log = j["log"][0]
        except:
            pass

    makedirs(prefix + "/drive_c/users/steamuser/Local Settings/Application Data/openvr")

    #remove existing file
    vrpaths_name = prefix + "/drive_c/users/steamuser/Local Settings/Application Data/openvr/openvrpaths.vrpath"
    if os.path.exists(vrpaths_name):
        os.remove(vrpaths_name)

    #dump new file
    if not vr_runtime is None:
        try:
            env["PROTON_VR_RUNTIME"] = vr_runtime

            j = { "runtime": [ "C:\\vrclient\\", "C:\\vrclient" ] }

            if not vr_config is None:
                win_vr_config = subprocess.check_output([wine_path, "winepath", "-w", vr_config], env=env, stderr=lfile)
                j["config"] = [ win_vr_config.strip() ]

            if not vr_log is None:
                win_vr_log = subprocess.check_output([wine_path, "winepath", "-w", vr_log], env=env, stderr=lfile)
                j["log"] = [ win_vr_log.strip() ]

            j["version"] = 1
            j["jsonid"] = "vrpathreg"

            json.dump(j, open(vrpaths_name, "w"), indent=2)
        except:
            pass

    def make_dxvk_links(dll_dir, link_dir):
        if os.path.lexists(link_dir + "/d3d11.dll"):
            os.remove(link_dir + "/d3d11.dll")
        if os.path.lexists(link_dir + "/dxgi.dll"):
            os.remove(link_dir + "/dxgi.dll")
        os.symlink(dll_dir + "/d3d11.dll", link_dir + "/d3d11.dll")
        os.symlink(dll_dir + "/dxgi.dll", link_dir + "/dxgi.dll")

    if "wined3d11" in config_opts:
        #use gl-based wined3d for d3d11
        make_dxvk_links(basedir + "/dist/lib64/wine/",
            prefix + "drive_c/windows/system32")
        make_dxvk_links(basedir + "/dist/lib/wine/",
            prefix + "drive_c/windows/syswow64")
    else:
        #use vulkan-based dxvk for d3d11
        make_dxvk_links(basedir + "/dist/lib64/wine/dxvk/",
            prefix + "drive_c/windows/system32")
        make_dxvk_links(basedir + "/dist/lib/wine/dxvk/",
            prefix + "drive_c/windows/syswow64")
        dlloverrides["dxgi"] = "n"
        dlloverrides["d3d11"] = "n"

if "nod3d11" in config_opts:
    dlloverrides["d3d11"] = ""
    if "dxgi" in dlloverrides:
        del dlloverrides["dxgi"]

s = ""
for dll in dlloverrides:
    setting = dlloverrides[dll]
    if len(s) > 0:
        s = s + ";" + dll + "=" + setting
    else:
        s = dll + "=" + setting
env["WINEDLLOVERRIDES"] = s

ARCH_UNKNOWN=0
ARCH_I386=1
ARCH_X86_64=2
def determine_architecture(path):
    #algorithm from file's msdos magic file
    try:
        with open(path, "rb") as f:
            magic = f.read(2)
            if magic != b"MZ":
                return ARCH_UNKNOWN
            f.seek(0x18)
            reloc = struct.unpack('<H', f.read(2))[0]
            if reloc < 0x40:
                #DOS
                return ARCH_I386
            f.seek(0x3c)
            pe_offs = struct.unpack('<L', f.read(4))[0]
            f.seek(pe_offs)
            magic = f.read(4)
            if magic != b"PE\0\0":
                return ARCH_UNKNOWN
            f.seek(pe_offs + 4)
            arch = struct.unpack('<H', f.read(2))[0]
            if arch == 0x8664:
                return ARCH_X86_64
            if arch == 0x014c:
                return ARCH_I386
            return ARCH_UNKNOWN
    except:
        return ARCH_UNKNOWN

game_arch = determine_architecture(sys.argv[2])

def dump_dbg_env(f):
    f.write("PATH=\"" + env["PATH"] + "\" \\\n")
    f.write("\tTERM=\"xterm\" \\\n") #XXX
    f.write("\tWINEDEBUG=\"-all\" \\\n")
    f.write("\tWINEDLLPATH=\"" + env["WINEDLLPATH"] + "\" \\\n")
    f.write("\t" + ld_path_var + "=\"" + env[ld_path_var] + "\" \\\n")
    f.write("\tWINEPREFIX=\"" + env["WINEPREFIX"] + "\" \\\n")
    if "SteamGameId" in env:
        f.write("\tSteamGameId=\"" + env["SteamGameId"] + "\" \\\n")
    if "SteamAppId" in env:
        f.write("\tSteamAppId=\"" + env["SteamAppId"] + "\" \\\n")
    if "PROTON_VR_RUNTIME" in env:
        f.write("\tPROTON_VR_RUNTIME=\"" + env["PROTON_VR_RUNTIME"] + "\" \\\n")
    if "WINEDLLOVERRIDES" in env:
        f.write("\tWINEDLLOVERRIDES=\"" + env["WINEDLLOVERRIDES"] + "\" \\\n")
    if "STEAM_COMPAT_CLIENT_INSTALL_PATH" in env:
        f.write("\tSTEAM_COMPAT_CLIENT_INSTALL_PATH=\"" + env["STEAM_COMPAT_CLIENT_INSTALL_PATH"] + "\" \\\n")

def dump_dbg_scripts():
    exe_name = os.path.basename(sys.argv[2])

    dir = env.get("PROTON_DEBUG_DIR", "/tmp") + "/proton_" + os.environ["USER"] + "/"
    makedirs(dir)

    with open(dir + "winedbg", "w") as f:
        f.write("#!/bin/bash\n")
        f.write("#Run winedbg with args\n\n")
        f.write("cd \"" + os.getcwd() + "\"\n")
        dump_dbg_env(f)
        f.write("\t\"" + wine_path + "\" winedbg \"$@\"\n")
    os.chmod(dir + "winedbg", 0o755)

    with open(dir + "winedbg_run", "w") as f:
        f.write("#!/bin/bash\n")
        f.write("#Run winedbg and prepare to run game or given program\n\n")
        f.write("cd \"" + os.getcwd() + "\"\n")
        f.write("DEF_CMD=(")
        first = True
        for arg in sys.argv[2:]:
            if first:
                f.write("\"" + arg + "\"")
                first = False
            else:
                f.write(" \"" + arg + "\"")
        f.write(")\n")
        dump_dbg_env(f)
        f.write("\t\"" + wine_path + "\" winedbg \"${@:-${DEF_CMD[@]}}\"\n")
    os.chmod(dir + "winedbg_run", 0o755)

    with open(dir + "gdb_attach", "w") as f:
        f.write("#!/bin/bash\n")
        f.write("#Run winedbg in gdb mode and auto-attach to already-running program\n\n")
        f.write("cd \"" + os.getcwd() + "\"\n")
        f.write("EXE_NAME=${1:-\"" + exe_name + "\"}\n")
        f.write("WPID_HEX=$(\"" + dir + "winedbg\" --command 'info process' | grep -i \"$EXE_NAME\" | cut -f2 -d' ' | tr -d '0')\n")
        f.write("if [ -z \"$WPID_HEX\" ]; then \n")
        f.write("    echo \"Program does not appear to be running: \\\"$EXE_NAME\\\"\"\n")
        f.write("    exit 1\n")
        f.write("fi\n")
        f.write("WPID_DEC=$(printf %d 0x$WPID_HEX)\n")
        dump_dbg_env(f)
        f.write("\t\"" + wine_path + "\" winedbg --gdb $WPID_DEC\n")
    os.chmod(dir + "gdb_attach", 0o755)

    with open(dir + "gdb_run", "w") as f:
        f.write("#!/bin/bash\n")
        f.write("#Run winedbg in gdb mode and prepare to run game or given program\n\n")
        f.write("cd \"" + os.getcwd() + "\"\n")
        f.write("DEF_CMD=(")
        first = True
        for arg in sys.argv[2:]:
            if first:
                f.write("\"" + arg + "\"")
                first = False
            else:
                f.write(" \"" + arg + "\"")
        f.write(")\n")
        dump_dbg_env(f)
        f.write("\t\"" + wine_path + "\" winedbg --gdb \"${@:-${DEF_CMD[@]}}\"\n")
    os.chmod(dir + "gdb_run", 0o755)

    with open(dir + "run", "w") as f:
        f.write("#!/bin/bash\n")
        f.write("#Run game or given command in environment\n\n")
        f.write("cd \"" + os.getcwd() + "\"\n")
        f.write("DEF_CMD=(")
        first = True
        for arg in sys.argv[2:]:
            if first:
                f.write("\"" + arg + "\"")
                first = False
            else:
                f.write(" \"" + arg + "\"")
        f.write(")\n")
        dump_dbg_env(f)
        if game_arch == ARCH_UNKNOWN:
            f.write("\t\"" + wine_path + "\" start \"${@:-${DEF_CMD[@]}}\"\n")
        else:
            f.write("\t\"" + wine_path + "\" \"${@:-${DEF_CMD[@]}}\"\n")
    os.chmod(dir + "run", 0o755)

def run():
    if "PROTON_DUMP_DEBUG_COMMANDS" in env:
        try:
            dump_dbg_scripts()
        except:
            log("Unable to write debug scripts! " + str(sys.exc_info()[1]))
    if game_arch == ARCH_UNKNOWN:
        #probably a batch script or something, hopefully start.exe can handle it
        run_wine([wine_path, "start", "/unix"] + sys.argv[2:])
    else:
        run_wine([wine_path] + sys.argv[2:])

if sys.version_info[0] == 2:
    binary_stdout = sys.stdout
elif sys.version_info[0] == 3:
    binary_stdout = sys.stdout.buffer
else:
    raise Exception("Unsupported python version")

#determine mode
if sys.argv[1] == "run":
    #start target app
    run()
elif sys.argv[1] == "waitforexitandrun":
    #wait for wineserver to shut down
    run_wine([bindir + "/wineserver", "-w"])
    #then run
    run()
elif sys.argv[1] == "getcompatpath":
    #linux -> windows path
    path = subprocess.check_output([wine_path, "winepath", "-w", sys.argv[2]], env=env, stderr=lfile)
    binary_stdout.write(path)
elif sys.argv[1] == "getnativepath":
    #windows -> linux path
    path = subprocess.check_output([wine_path, "winepath", sys.argv[2]], env=env, stderr=lfile)
    binary_stdout.write(path)
else:
    log("Need a verb.")
    sys.exit(1)

sys.exit(0)
