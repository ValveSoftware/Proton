#!/usr/bin/env python3

# usage: default_pfx.py path/to/default_pfx_dir path/to/dist

"Helper module for building the default prefix"

import os
import subprocess

def file_is_wine_builtin_dll(path):
    if not os.path.exists(path):
        return False
    try:
        sfile = open(path, "rb")
        sfile.seek(0x40)
        tag = sfile.read(20)
        return tag.startswith((b"Wine placeholder DLL", b"Wine builtin DLL"))
    except IOError:
        return False

def little_endian_bytes_to_uint(b):
    result = 0
    multiplier = 1
    for i in b:
        result += i * multiplier
        multiplier <<= 8
    return result

def dll_bitness(path):
    if not os.path.exists(path):
        return 0
    try:
        sfile = open(path, "rb")
        sfile.seek(0x3c)
        ntheader_ofs = little_endian_bytes_to_uint(sfile.read(4))
        sfile.seek(0x18 + ntheader_ofs)
        magic = sfile.read(2)
        if magic == bytes((11, 1)):
            return 32
        if magic == bytes((11, 2)):
            return 64
        return 0
    except IOError:
        return 0

def make_relative_symlink(target, linkname):
    target = os.path.abspath(target)
    linkname = os.path.abspath(linkname)
    rel = os.path.relpath(target, os.path.dirname(linkname))
    os.symlink(rel, linkname)

def setup_dll_symlinks(default_pfx_dir, dist_dir):
    for walk_dir, dirs, files in os.walk(default_pfx_dir):
        for file_ in files:
            filename = os.path.join(walk_dir, file_)
            if os.path.isfile(filename) and file_is_wine_builtin_dll(filename):
                bitness = dll_bitness(filename)
                if bitness == 32:
                    libdir = os.path.join(dist_dir, 'lib/wine')
                elif bitness == 64:
                    libdir = os.path.join(dist_dir, 'lib64/wine')
                else:
                    continue
                if os.path.exists(os.path.join(libdir, file_)):
                    target = os.path.join(libdir, file_)
                elif os.path.exists(os.path.join(libdir, 'fakedlls', file_)):
                    target = os.path.join(libdir, 'fakedlls', file_)
                else:
                    continue
                os.unlink(filename)
                make_relative_symlink(target, filename)

#steampipe can't handle filenames with colons, so we remove them here
#and restore them in the proton script
def fixup_drive_links(default_pfx_dir):
    for walk_dir, dirs, files in os.walk(os.path.join(default_pfx_dir, "dosdevices")):
        for dir_ in dirs:
            if ":" in dir_:
                os.remove(os.path.join(walk_dir, dir_))

def make_default_pfx(default_pfx_dir, dist_dir, runtime):
    local_env = dict(os.environ)

    ld_path = dist_dir + "/lib64:" + dist_dir + "/lib"

    if runtime is None:
        local_env["LD_LIBRARY_PATH"] = ld_path
        local_env["WINEPREFIX"] = default_pfx_dir
        local_env["WINEDEBUG"] = "-all"
        runtime_args = []
    else:
        #the runtime clears the environment, so we pass it in on the CL via env
        runtime_args = runtime + ["env",
                "LD_LIBRARY_PATH=" + ld_path,
                "WINEPREFIX=" + default_pfx_dir,
                "WINEDEBUG=-all"]

    subprocess.run(runtime_args + ["/bin/bash", "-c",
        os.path.join(dist_dir, 'bin', 'wine') + " wineboot && " +
        os.path.join(dist_dir, 'bin', 'wineserver') + " -w"],

        env=local_env, check=True)
    setup_dll_symlinks(default_pfx_dir, dist_dir)
    fixup_drive_links(default_pfx_dir)

if __name__ == '__main__':
    import sys
    if len(sys.argv) > 3:
        make_default_pfx(sys.argv[1], sys.argv[2], sys.argv[3:])
    else:
        make_default_pfx(sys.argv[1], sys.argv[2], None)
