#!/usr/bin/env python3

#Steampipe doesn't support certain unix-y things which may be required by
#native Linux applications. This file will process a directory of Linux files
#and store the file properties into a manifest file. After a round trip through
#Steampipe, the original file properties can be restored using this same
#script.

import json
import os
import secrets
import stat

DEFAULT_MANIFEST_NAME = "steampipe_fixups.json"

def usage():
    print("Usage:")
    print("\t" + sys.argv[0] + "\tprepare\t<path to directory to process>\t[manifest output file]")
    print("\t\tProcess the given path and output the manifest file to the given path, or <path/" + DEFAULT_MANIFEST_NAME + "> if unspecified.")
    print("")
    print("\t" + sys.argv[0] + "\trestore\t<path to directory to process>\t[manifest file]")
    print("\t\tRestore the given path using the manifest file, or <path/" + DEFAULT_MANIFEST_NAME + "> if unspecified.")

empty_dirs = []
no_write_paths = []

def canonicalize(path, prefix):
    return path.replace(prefix, "", 1).lstrip('/')

def process_dir(path):
    for root, subdirs, files in os.walk(path):
        if len(subdirs) == 0 and len(files) == 0:
            empty_dirs.append(canonicalize(root, path))

        for file_ in files:
            this_file = os.path.join(root, file_)
            stat_result = os.lstat(this_file)
            if (stat_result.st_mode & stat.S_IWUSR) == 0:
                no_write_paths.append(canonicalize(this_file, path))

    return 0

def write_manifest(manifest):
    out = open(manifest, "w")
    json.dump(
        {
            "id": str(secrets.randbits(32)), #we need steampipe to update this file for every build
            "empty_dirs": empty_dirs,
            "no_write_paths": no_write_paths,
        },
        out,
        indent = 4,
        sort_keys = True
    )
    return 0

def do_process(path, manifest):
    if os.path.exists(manifest):
        os.remove(manifest)

    ret = process_dir(path)
    if ret != 0:
        return ret

    #output should be deterministic
    empty_dirs.sort()
    no_write_paths.sort()

    ret = write_manifest(manifest)
    if ret != 0:
        return ret

    return 0

def do_restore(path, manifest):
    loaded = json.load(open(manifest, "r"))

    empty_dirs = loaded["empty_dirs"]
    no_write_paths = loaded["no_write_paths"]

    for empty_dir in empty_dirs:
        try:
            os.makedirs(os.path.join(path, empty_dir))
        except OSError:
            #already exists
            pass

    for file_ in no_write_paths:
        this_file = os.path.join(path, file_)
        stat_result = os.lstat(this_file)
        os.chmod(this_file,
                stat_result.st_mode & ~(stat.S_IWUSR | stat.S_IWGRP | stat.S_IWOTH))

    return 0

if __name__ == '__main__':
    import sys
    if len(sys.argv) < 3 or len(sys.argv) > 4:
        usage()
        sys.exit(1)

    verb = sys.argv[1]
    path = sys.argv[2]
    if len(sys.argv) >= 4:
        manifest = sys.argv[3]
    else:
        manifest = os.path.join(path, DEFAULT_MANIFEST_NAME)

    if verb == "process":
        sys.exit(do_process(path, manifest))

    if verb == "restore":
        sys.exit(do_restore(path, manifest))

    usage()
    sys.exit(1)
