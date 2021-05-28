#!/usr/bin/env python3

import sys
import os
import stat
import pefile

for path in sys.argv[1:]:
    pe = pefile.PE(path)

    for section in pe.sections:
        if section.Name.decode("utf-8")[0:5] == ".text":
            section.Characteristics &= ~pefile.SECTION_CHARACTERISTICS['IMAGE_SCN_CNT_INITIALIZED_DATA']
        section.Characteristics &= ~pefile.SECTION_CHARACTERISTICS['IMAGE_SCN_ALIGN_MASK']

    pe.OPTIONAL_HEADER.CheckSum = pe.generate_checksum()

    perm = stat.S_IMODE(os.stat(path).st_mode)
    if (perm & stat.S_IWUSR) == 0:
        os.chmod(path, perm | stat.S_IWUSR)

    pe.write(path)

    if (perm & stat.S_IWUSR) == 0:
        os.chmod(path, perm)
