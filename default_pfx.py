#!/usr/bin/env python3

# usage: default_pfx.py path/to/default_pfx_dir path/to/dist

"Helper module for building the default prefix"

import os
import subprocess
import re

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
    skip_dlls = [ 'amd_ags_x64.dll' ]
    for walk_dir, dirs, files in os.walk(default_pfx_dir):
        for file_ in files:
            filename = os.path.join(walk_dir, file_)
            if file_ in skip_dlls:
                continue
            if os.path.isfile(filename) and file_is_wine_builtin_dll(filename):
                bitness = dll_bitness(filename)
                if bitness == 32:
                    libdir = os.path.join(dist_dir, 'lib/wine/i386-windows')
                elif bitness == 64:
                    libdir = os.path.join(dist_dir, 'lib64/wine/x86_64-windows')
                else:
                    continue
                if os.path.exists(os.path.join(libdir, file_)):
                    target = os.path.join(libdir, file_)
                else:
                    continue
                os.unlink(filename)
                make_relative_symlink(target, filename)

KEY_RE = re.compile(r'\[(.+)\] ([0-9]+)')
VALUE_RE = re.compile(r'"(.*)"="(.+)"')

def filter_registry(filename):
    """Remove registry values that contain a fully qualified path
    inside some well-known registry keys. These paths are devised on
    the build machine and it makes no sense to distribute them. Plus,
    they are known to cause bugs."""

    FILTER_KEYS = [
        r'Software\\Microsoft\\Windows\\CurrentVersion\\Fonts',
        r'Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts',
        r'Software\\Wine\\Fonts\\External Fonts',
    ]

    filtering = False
    with open(filename) as fin:
        with open(filename + '.tmp', 'w') as fout:
            for line in fin:
                line = line.strip()

                match = KEY_RE.match(line)
                if match is not None:
                    fout.write(line + '\n')
                    filtering = match.group(1) in FILTER_KEYS
                    continue

                match = VALUE_RE.match(line)
                if match is not None:
                    if not filtering or match.group(2)[1:2] != ':':
                        fout.write(line + '\n')
                    continue

                fout.write(line + '\n')

    os.rename(filename + '.tmp', filename)

#steampipe can't handle filenames with colons, so we remove them here
#and restore them in the proton script
def fixup_drive_links(default_pfx_dir):
    for walk_dir, dirs, files in os.walk(os.path.join(default_pfx_dir, "dosdevices")):
        for dir_ in dirs:
            if ":" in dir_:
                os.remove(os.path.join(walk_dir, dir_))

def make_default_pfx(default_pfx_dir, dist_dir):
    local_env = dict(os.environ)

    ld_path = dist_dir + "/lib64:" + dist_dir + "/lib"

    local_env["LD_LIBRARY_PATH"] = ld_path
    local_env["WINEPREFIX"] = default_pfx_dir
    local_env["WINEDEBUG"] = "-all"
    runtime_args = []

    subprocess.run(runtime_args + ["/bin/bash", "-c",
        os.path.join(dist_dir, 'bin', 'wine') + " wineboot && " +
        os.path.join(dist_dir, 'bin', 'wineserver') + " -w"],

        env=local_env, check=True)
    setup_dll_symlinks(default_pfx_dir, dist_dir)
    fixup_drive_links(default_pfx_dir)

    filter_registry(os.path.join(default_pfx_dir, 'user.reg'))
    filter_registry(os.path.join(default_pfx_dir, 'system.reg'))

if __name__ == '__main__':
    import sys
    make_default_pfx(sys.argv[1], sys.argv[2])
