#!/usr/bin/env python3

# Copyright (c) 2020 Google Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import datetime
import errno
import os
import os.path
import re
import subprocess
import sys
import time

usage = """{} emits a string to stdout or file with project version information.

args: <project-dir> [<input-string>] [-i <input-file>] [-o <output-file>]

Either <input-string> or -i <input-file> needs to be provided.

The tool will output the provided string or file content with the following
tokens substituted:

 <major>   - The major version point parsed from the CHANGES.md file.
 <minor>   - The minor version point parsed from the CHANGES.md file.
 <patch>   - The point version point parsed from the CHANGES.md file.
 <flavor>  - The optional dash suffix parsed from the CHANGES.md file (excluding
             dash prefix).
 <-flavor> - The optional dash suffix parsed from the CHANGES.md file (including
             dash prefix).
 <date>    - The optional date of the release in the form YYYY-MM-DD
 <commit>  - The git commit information for the directory taken from
             "git describe" if that succeeds, or "git rev-parse HEAD"
             if that succeeds, or otherwise a message containing the phrase
             "unknown hash".

-o is an optional flag for writing the output string to the given file. If
   ommitted then the string is printed to stdout.
"""

def mkdir_p(directory):
    """Make the directory, and all its ancestors as required.  Any of the
    directories are allowed to already exist."""

    if directory == "":
        # We're being asked to make the current directory.
        return

    try:
        os.makedirs(directory)
    except OSError as e:
        if e.errno == errno.EEXIST and os.path.isdir(directory):
            pass
        else:
            raise


def command_output(cmd, directory):
    """Runs a command in a directory and returns its standard output stream.

    Captures the standard error stream.

    Raises a RuntimeError if the command fails to launch or otherwise fails.
    """
    p = subprocess.Popen(cmd,
                         cwd=directory,
                         stdout=subprocess.PIPE,
                         stderr=subprocess.PIPE)
    (stdout, _) = p.communicate()
    if p.returncode != 0:
        raise RuntimeError('Failed to run %s in %s' % (cmd, directory))
    return stdout


def deduce_software_version(directory):
    """Returns a software version number parsed from the CHANGES.md file
    in the given directory.

    The CHANGES.md file describes most recent versions first.
    """

    # Match the first well-formed version-and-date line.
    # Allow trailing whitespace in the checked-out source code has
    # unexpected carriage returns on a linefeed-only system such as
    # Linux.
    pattern = re.compile(r'^#* +(\d+)\.(\d+)\.(\d+)(-\w+)? (\d\d\d\d-\d\d-\d\d)? *$')
    changes_file = os.path.join(directory, 'CHANGES.md')
    with open(changes_file, mode='r') as f:
        for line in f.readlines():
            match = pattern.match(line)
            if match:
                flavor = match.group(4)
                if flavor == None:
                    flavor = ""
                return {
                    "major": match.group(1),
                    "minor": match.group(2),
                    "patch": match.group(3),
                    "flavor": flavor.lstrip("-"),
                    "-flavor": flavor,
                    "date": match.group(5),
                }
    raise Exception('No version number found in {}'.format(changes_file))


def describe(directory):
    """Returns a string describing the current Git HEAD version as descriptively
    as possible.

    Runs 'git describe', or alternately 'git rev-parse HEAD', in directory.  If
    successful, returns the output; otherwise returns 'unknown hash, <date>'."""
    try:
        # decode() is needed here for Python3 compatibility. In Python2,
        # str and bytes are the same type, but not in Python3.
        # Popen.communicate() returns a bytes instance, which needs to be
        # decoded into text data first in Python3. And this decode() won't
        # hurt Python2.
        return command_output(['git', 'describe'], directory).rstrip().decode()
    except:
        try:
            return command_output(
                ['git', 'rev-parse', 'HEAD'], directory).rstrip().decode()
        except:
            # This is the fallback case where git gives us no information,
            # e.g. because the source tree might not be in a git tree.
            # In this case, usually use a timestamp.  However, to ensure
            # reproducible builds, allow the builder to override the wall
            # clock time with environment variable SOURCE_DATE_EPOCH
            # containing a (presumably) fixed timestamp.
            timestamp = int(os.environ.get('SOURCE_DATE_EPOCH', time.time()))
            formatted = datetime.datetime.utcfromtimestamp(timestamp).isoformat()
            return 'unknown hash, {}'.format(formatted)

def parse_args():
    directory = None
    input_string = None
    input_file = None
    output_file = None

    if len(sys.argv) < 2:
        raise Exception("Invalid number of arguments")

    directory = sys.argv[1]
    i = 2

    if not sys.argv[i].startswith("-"):
        input_string = sys.argv[i]
        i = i + 1

    while i < len(sys.argv):
        opt = sys.argv[i]
        i = i + 1

        if opt == "-i" or opt == "-o":
            if i == len(sys.argv):
                raise Exception("Expected path after {}".format(opt))
            val = sys.argv[i]
            i = i + 1
            if (opt == "-i"):
                input_file = val
            elif (opt == "-o"):
                output_file = val
            else:
                raise Exception("Unknown flag {}".format(opt))

    return {
        "directory": directory,
        "input_string": input_string,
        "input_file": input_file,
        "output_file": output_file,
    }

def main():
    args = None
    try:
        args = parse_args()
    except Exception as e:
        print(e)
        print("\nUsage:\n")
        print(usage.format(sys.argv[0]))
        sys.exit(1)

    directory = args["directory"]
    template = args["input_string"]
    if template == None:
        with open(args["input_file"], 'r') as f:
            template = f.read()
    output_file = args["output_file"]

    software_version = deduce_software_version(directory)
    commit = describe(directory)
    output = template \
        .replace("@major@", software_version["major"]) \
        .replace("@minor@", software_version["minor"]) \
        .replace("@patch@", software_version["patch"]) \
        .replace("@flavor@", software_version["flavor"]) \
        .replace("@-flavor@", software_version["-flavor"]) \
        .replace("@date@", software_version["date"]) \
        .replace("@commit@", commit)

    if output_file is None:
        print(output)
    else:
        mkdir_p(os.path.dirname(output_file))

        if os.path.isfile(output_file):
            with open(output_file, 'r') as f:
                if output == f.read():
                    return

        with open(output_file, 'w') as f:
            f.write(output)

if __name__ == '__main__':
    main()
