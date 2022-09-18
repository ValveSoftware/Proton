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

import glob
import sys
import os

def generate_main(glsl_files, output_header_file):
    # Write commit ID to output header file
    with open(output_header_file, "w") as header_file:
        # Copyright Notice
        header_string =  '/***************************************************************************\n'
        header_string += ' *\n'
        header_string += ' * Copyright (c) 2015-2021 The Khronos Group Inc.\n'
        header_string += ' * Copyright (c) 2015-2021 Valve Corporation\n'
        header_string += ' * Copyright (c) 2015-2021 LunarG, Inc.\n'
        header_string += ' * Copyright (c) 2015-2021 Google Inc.\n'
        header_string += ' * Copyright (c) 2021 Advanced Micro Devices, Inc.All rights reserved.\n'
        header_string += ' *\n'
        header_string += ' ****************************************************************************/\n'
        header_string += '#pragma once\n\n'
        header_string += '#ifndef _INTRINSIC_EXTENSION_HEADER_H_\n'
        header_string += '#define _INTRINSIC_EXTENSION_HEADER_H_\n\n'
        header_file.write(header_string)

        symbol_name_list = []

        for i in glsl_files:
            glsl_contents = open(i,"r").read()

            filename = os.path.basename(i)
            symbol_name = filename.split(".")[0]
            symbol_name_list.append(symbol_name)
            header_name = symbol_name + ".h"
            header_str = 'std::string %s_GLSL = R"(\n%s\n)";\n' % (symbol_name, glsl_contents)
            header_str += '\n'
            header_file.write(header_str)

        contents = ''
        contents += '\n'
        contents += 'std::string getIntrinsic(const char* const* shaders, int n) {\n'
        contents += '\tstd::string shaderString = "";\n';

        contents += '\tfor (int i = 0; i < n; i++) {\n'

        for symbol_name in symbol_name_list:
            contents += '\t\tif (strstr(shaders[i], "%s") != NULL) {\n'   % (symbol_name)
            contents += '\t\t    shaderString.append(%s_GLSL);\n' % (symbol_name)
            contents += '\t\t}\n'

        contents += '\t}\n'
        contents += '\treturn shaderString;\n';
        contents += '}\n'

        contents += '\n#endif\n'
        header_file.write(contents)

def main():
    if len(sys.argv) < 2:
        raise Exception("Invalid number of arguments")

    i = 0
    while i < len(sys.argv):
        opt = sys.argv[i]
        i = i + 1

        if opt == "-i" or opt == "-o":
            if i == len(sys.argv):
                raise Exception("Expected path after {}".format(opt))
            val = sys.argv[i]
            i = i + 1
            if (opt == "-i"):
                input_dir = val
            elif (opt == "-o"):
                output_file = val
            else:
                raise Exception("Unknown flag {}".format(opt))

    glsl_files = glob.glob(input_dir + '/*.glsl')

    # Generate main header
    generate_main(glsl_files, output_file)

if __name__ == '__main__':
    main()
