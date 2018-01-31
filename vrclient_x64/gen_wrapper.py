#!/usr/bin/python2

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../lsteamclient/gen_wrapper.py

import pprint
import sys
import clang.cindex
import os
import re

sdk_versions = [
    "v1.0.12",
    "v1.0.11",
    "v1.0.10",
    "v1.0.9",
    "v1.0.8",
    "v1.0.7",
    "v1.0.6",
    "v1.0.5",
    "v1.0.4",
    "v1.0.3",
    "v1.0.2",
    "v1.0.1",
    "v1.0.0",
    "v0.9.20",
    "v0.9.19",
    "v0.9.18",
    "v0.9.17",
    "v0.9.16",
    "v0.9.15",
    "v0.9.14",
    "v0.9.13",
    "v0.9.12",
#    "v0.9.11", problematic GetComponentState, may cause crash since we don't implement it
    "v0.9.10",
    "v0.9.9",
    "v0.9.8",
    "v0.9.7",
    "v0.9.6",
#    "v0.9.5", doesn't compile, fixed in 0.9.6
    "v0.9.4",
    "0.9.3",
    "0.9.2",
    "0.9.1",
    "0.9.0",
]

files = [
    ("openvr.h",
        [ #classes
        "IVRApplications",
        "IVRChaperone",
        "IVRChaperoneSetup",
        "IVRCompositor",
        "IVRDriverManager",
        "IVRExtendedDisplay",
        "IVRNotifications",
        "IVROverlay",
        "IVRRenderModels",
        "IVRResources",
        "IVRScreenshots",
        "IVRSettings",
        "IVRSystem",
        "IVRTrackedCamera",
        ], [ #user-allocated structs
        "VRControllerState001_t",
        "VREvent_t",
        ], [ #vrclient-allocated structs
        "RenderModel_t",
        "RenderModel_TextureMap_t",
        ]
    ),
    ("ivrclientcore.h",
        [ #classes
        "IVRClientCore",
        ], [ #user-allocated structs
        ], [ #vrclient-allocated structs
        ]
    ),
]

aliases = {
    #Some interface versions are not present in the public SDK
    #headers, but are actually requested by games. It would be nice
    #to verify that these interface versions are actually binary
    #compatible. Lacking that, we hope the next highest version
    #is compatible.
#    "SteamClient012":["SteamClient013"],
#    "SteamUtils004":["SteamUtils003"], # TimeShift uses SteamUtils003


    #leaving these commented-out. let's see if they turn up in practice,
    #and handle them correctly if so.

#    "SteamFriends011":["SteamFriends010"],
#    "SteamFriends013":["SteamFriends012"],
#    "SteamGameServer008":["SteamGameServer007", "SteamGameServer006"],
#    "SteamMatchMaking004":["SteamMatchMaking003"],
#    "SteamMatchMaking006":["SteamMatchMaking005"],
#    "STEAMREMOTESTORAGE_INTERFACE_VERSION004":["STEAMREMOTESTORAGE_INTERFACE_VERSION003"],
#    "STEAMREMOTESTORAGE_INTERFACE_VERSION008":["STEAMREMOTESTORAGE_INTERFACE_VERSION007"],
#    "STEAMREMOTESTORAGE_INTERFACE_VERSION010":["STEAMREMOTESTORAGE_INTERFACE_VERSION009"],
#    "STEAMUGC_INTERFACE_VERSION005":["STEAMUGC_INTERFACE_VERSION004"],
#    "STEAMUGC_INTERFACE_VERSION007":["STEAMUGC_INTERFACE_VERSION006"],
#    "SteamUser016":["SteamUser015"],
#    "STEAMUSERSTATS_INTERFACE_VERSION009":["STEAMUSERSTATS_INTERFACE_VERSION008"],
}

# TODO: we could do this automatically by creating temp files and
# having clang parse those and detect when the MS-style padding results
# in identical struct widths. But there's only a couple, so let's cheat...
skip_structs = [
#        "RemoteStorageGetPublishedFileDetailsResult_t_9740",
#        "SteamUGCQueryCompleted_t_20",
#        "SteamUGCRequestUGCDetailsResult_t_9764"
]

print_sizes = []

class_versions = {}

def display_sdkver(s):
    if s.startswith("v"):
        s = s[1:]
    return s.replace(".", "")

def strip_ns(name):
    return name.replace("vr::","")

def handle_method(cfile, classname, winclassname, cppname, method, cpp, cpp_h, existing_methods):
    used_name = method.spelling
    idx = '2'
    while used_name in existing_methods:
        used_name = "%s_%s" % (method.spelling, idx)
        idx = chr(ord(idx) + 1)
    returns_record = method.result_type.get_canonical().kind == clang.cindex.TypeKind.RECORD
    if returns_record:
        parambytes = 8 #_this + return pointer
    else:
        parambytes = 4 #_this
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            parambytes += param.type.get_size()
    cfile.write("DEFINE_THISCALL_WRAPPER(%s_%s, %s)\n" % (winclassname, used_name, parambytes))
    cpp_h.write("extern ")
    if strip_ns(method.result_type.spelling).startswith("IVR"):
        cfile.write("win%s " % (strip_ns(method.result_type.spelling)))
        cpp.write("void *")
        cpp_h.write("void *")
    elif returns_record:
        cfile.write("%s *" % strip_ns(method.result_type.spelling))
        cpp.write("%s " % method.result_type.spelling)
        cpp_h.write("%s " % strip_ns(method.result_type.spelling))
    else:
        cfile.write("%s " % strip_ns(method.result_type.spelling))
        cpp.write("%s " % method.result_type.spelling)
        cpp_h.write("%s " % strip_ns(method.result_type.spelling))
    cfile.write('__thiscall %s_%s(%s *_this' % (winclassname, used_name, winclassname))
    cpp.write("%s_%s(void *linux_side" % (cppname, used_name))
    cpp_h.write("%s_%s(void *" % (cppname, used_name))
    if returns_record:
        cfile.write(", %s *_r" % strip_ns(method.result_type.spelling))
    unnamed = 'a'
    do_lin_to_win = None
    do_wrap = None
    do_unwrap = None
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            if param.type.kind == clang.cindex.TypeKind.POINTER and \
                    param.type.get_pointee().kind == clang.cindex.TypeKind.UNEXPOSED:
                #unspecified function pointer
                typename = "void *"
            else:
                typename = param.type.spelling.split("::")[-1].replace("&", "*");
                if param.type.kind == clang.cindex.TypeKind.POINTER:
                    if strip_ns(param.type.get_pointee().get_canonical().spelling) in user_structs:
                        do_lin_to_win = (strip_ns(param.type.get_pointee().get_canonical().spelling), param.spelling)
                        typename = "win" + do_lin_to_win[0] + "_" + display_sdkver(sdkver) + " *"
                    elif strip_ns(param.type.get_pointee().get_canonical().spelling) in system_structs:
                        do_unwrap = (strip_ns(param.type.get_pointee().get_canonical().spelling), param.spelling)
                        typename = "win" + do_unwrap[0] + "_" + display_sdkver(sdkver) + " *"
                    elif param.type.get_pointee().kind == clang.cindex.TypeKind.POINTER and \
                            strip_ns(param.type.get_pointee().get_pointee().get_canonical().spelling) in system_structs:
                        do_wrap = (strip_ns(param.type.get_pointee().get_pointee().get_canonical().spelling), param.spelling)
                        typename = "win" + do_wrap[0] + "_" + display_sdkver(sdkver) + " **"
            if param.spelling == "":
                cfile.write(", %s _%s" % (typename, unnamed))
                cpp.write(", %s _%s" % (typename, unnamed))
                cpp_h.write(", %s" % typename)
                unnamed = chr(ord(unnamed) + 1)
            else:
                cfile.write(", %s %s" % (typename, param.spelling))
                cpp.write(", %s %s" % (typename, param.spelling))
                cpp_h.write(", %s" % (typename))
    cfile.write(")\n{\n")
    cpp.write(")\n{\n")
    cpp_h.write(");\n")

    char_param_is_unix_path = "GetAppInstallDir" in used_name or \
            "GetItemInstallInfo" in used_name
    path_param_name = None
    path_size_param_name = None

    if char_param_is_unix_path:
        cfile.write("    uint32 path_result;\n")

    if do_lin_to_win:
        cpp.write("    %s lin;\n" % do_lin_to_win[0])
        cpp.write("    %s _ret;\n" % method.result_type.spelling)

    if do_wrap:
        cpp.write("    %s *lin;\n" % do_wrap[0])
        cpp.write("    %s _ret;\n" % method.result_type.spelling)

    cfile.write("    TRACE(\"%p\\n\", _this);\n")

    if method.result_type.kind == clang.cindex.TypeKind.VOID:
        cfile.write("    ")
        cpp.write("    ")
    elif char_param_is_unix_path:
        cfile.write("    path_result = ")
        cpp.write("    return ")
    elif returns_record:
        cfile.write("    *_r = ")
        cpp.write("    return ")
    elif do_lin_to_win:
        cfile.write("    return ")
        cpp.write("    _ret = ")
    elif do_wrap:
        cfile.write("    return ")
        cpp.write("    _ret = ")
    else:
        cfile.write("    return ")
        cpp.write("    return ")

    should_gen_wrapper = strip_ns(method.result_type.spelling).startswith("IVR") or \
            used_name.startswith("GetGenericInterface")
    if should_gen_wrapper:
        cfile.write("create_win_interface(pchNameAndVersion,\n        ")

    cfile.write("%s_%s(_this->linux_side" % (cppname, used_name))
    cpp.write("((%s*)linux_side)->%s(" % (classname, method.spelling))
    unnamed = 'a'
    first = True
    next_is_size = False
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            if not first:
                cpp.write(", ")
            else:
                first = False
            if char_param_is_unix_path:
                if param.type.spelling == "char *":
                    path_param_name = param.spelling
                elif not path_param_name is None and \
                        (param.type.spelling == "uint32" or
                                param.type.spelling == "int"):
                    path_size_param_name = param.spelling
            if param.spelling == "":
                cfile.write(", _%s" % unnamed)
                cpp.write("(%s)_%s" % (param.type.spelling, unnamed))
                unnamed = chr(ord(unnamed) + 1)
            else:
                cfile.write(", %s" % param.spelling)
                if do_lin_to_win and do_lin_to_win[1] == param.spelling or \
                        do_wrap and do_wrap[1] == param.spelling:
                    cpp.write("&lin")
                    if do_lin_to_win and do_lin_to_win[0] == "VREvent_t":
                        next_is_size = True
                elif do_unwrap and do_unwrap[1] == param.spelling:
                    cpp.write("struct_%s_%s_unwrap(%s)" % (strip_ns(do_unwrap[0]), display_sdkver(sdkver), do_unwrap[1]))
                elif next_is_size:
                    next_is_size = False
                    if param.type.spelling == "uint32_t":
                        cpp.write("sizeof(lin)")
                    else:
                        cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
                elif "&" in param.type.spelling:
                    cpp.write("*%s" % param.spelling)
                else:
                    cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
    if should_gen_wrapper:
        cfile.write(")")
    cfile.write(");\n")
    cpp.write(");\n")
    if returns_record:
        cfile.write("    return _r;\n")
    if char_param_is_unix_path and not path_param_name is None and not path_size_param_name is None:
        cfile.write("    return steamclient_unix_path_to_dos_path(path_result, %s, %s);\n" % (path_param_name, path_size_param_name))
    if do_lin_to_win:
        cpp.write("    struct_%s_%s_lin_to_win(&lin, %s);\n" % (strip_ns(do_lin_to_win[0]), display_sdkver(sdkver), do_lin_to_win[1]))
        cpp.write("    return _ret;\n")
    if do_wrap:
        cpp.write("    if(_ret == 0)\n")
        cpp.write("        *%s = struct_%s_%s_wrap(lin);\n" % (do_wrap[1], strip_ns(do_wrap[0]), display_sdkver(sdkver)))
        cpp.write("    return _ret;\n")
    cfile.write("}\n\n")
    cpp.write("}\n\n")
    return used_name

def get_iface_version(classname):
    if classname in iface_versions.keys():
        ver = iface_versions[classname]
    else:
        ver = "UNVERSIONED"
    if classname in class_versions.keys() and ver in class_versions[classname]:
        return (ver, True)
    if not classname in class_versions.keys():
        class_versions[classname] = []
    class_versions[classname].append(ver)
    return (ver, False)

def handle_class(sdkver, classnode):
    print("handle_class: " + classnode.displayname)
    children = list(classnode.get_children())
    if len(children) == 0:
        return
    (iface_version, already_generated) = get_iface_version(classnode.spelling)
    if already_generated:
        return
    winname = "win%s" % classnode.spelling
    cppname = "cpp%s_%s" % (classnode.spelling, iface_version)

    file_exists = os.path.isfile("%s.c" % winname)
    cfile = open("%s.c" % winname, "a")
    if not file_exists:
        cfile.write("""/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

""")

    cpp = open("%s.cpp" % cppname, "w")
    cpp.write("#include \"vrclient_private.h\"\n")
    cpp.write("#include \"vrclient_defs.h\"\n")
    if os.path.isfile("openvr_%s/ivrclientcore.h" % sdkver):
        cpp.write("#include \"openvr_%s/ivrclientcore.h\"\n" % sdkver)
    else:
        cpp.write("#include \"openvr_%s/openvr.h\"\n" % sdkver)
    cpp.write("using namespace vr;\n")
    cpp.write("extern \"C\" {\n")
    cpp.write("#include \"struct_converters.h\"\n")
    cpp.write("}\n")
    cpp.write("#include \"%s.h\"\n" % cppname)
    cpp.write("#ifdef __cplusplus\nextern \"C\" {\n#endif\n")

    cpp_h = open("%s.h" % cppname, "w")
    cpp_h.write("#ifdef __cplusplus\nextern \"C\" {\n#endif\n")

    winclassname = "win%s_%s" % (classnode.spelling, iface_version)
    cfile.write("#include \"%s.h\"\n\n" % cppname)
    cfile.write("typedef struct __%s {\n" % winclassname)
    cfile.write("    vtable_ptr *vtable;\n")
    cfile.write("    void *linux_side;\n")
    cfile.write("} %s;\n\n" % winclassname)
    methods = []
    for child in children:
        if child.kind == clang.cindex.CursorKind.CXX_METHOD:
            methods.append(handle_method(cfile, classnode.spelling, winclassname, cppname, child, cpp, cpp_h, methods))

    cfile.write("extern vtable_ptr %s_vtable;\n\n" % winclassname)
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("void __asm_dummy_vtables(void) {\n")
    cfile.write("#endif\n")
    cfile.write("    __ASM_VTABLE(%s,\n" % winclassname)
    for method in methods:
        cfile.write("        VTABLE_ADD_FUNC(%s_%s)\n" % (winclassname, method))
    cfile.write("    );\n")
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("}\n")
    cfile.write("#endif\n\n")
    cfile.write("%s *create_%s(void *linux_side)\n{\n" % (winclassname, winclassname))
    cfile.write("    %s *r = HeapAlloc(GetProcessHeap(), 0, sizeof(%s));\n" % (winclassname, winclassname))
    cfile.write("    TRACE(\"-> %p\\n\", r);\n")
    cfile.write("    r->vtable = &%s_vtable;\n" % winclassname)
    cfile.write("    r->linux_side = linux_side;\n")
    cfile.write("    return r;\n}\n\n")

    cpp.write("#ifdef __cplusplus\n}\n#endif\n")
    cpp_h.write("#ifdef __cplusplus\n}\n#endif\n")

    constructors = open("win_constructors.h", "a")
    constructors.write("extern void *create_%s(void *);\n" % winclassname)

    constructors = open("win_constructors_table.dat", "a")
    constructors.write("    {\"%s\", &create_%s},\n" % (iface_version, winclassname))
    if iface_version in aliases.keys():
        for alias in aliases[iface_version]:
            constructors.write("    {\"%s\", &create_%s}, /* alias */\n" % (alias, winclassname))


generated_struct_handlers = []
cpp_files_need_close_brace = []

LIN_TO_WIN=1
WRAPPERS=2

#because of struct packing differences between win32 and linux, we
#need to convert these structs from their linux layout to the win32
#layout.
#TODO: could we optimize this by detecting if the structs are the
#same layout at generation-time?
def handle_struct(sdkver, struct, which):
    handler_name = "%s_%s" % (struct.displayname, display_sdkver(sdkver))

    if handler_name in generated_struct_handlers:
        # we already have a handler for the struct struct of this size
        return

    filename_base = "struct_converters_%s" % display_sdkver(sdkver)
    cppname = "%s.cpp" % filename_base
    file_exists = os.path.isfile(cppname)
    cppfile = open(cppname, "a")
    if not file_exists:
        cppfile.write("#include <stdlib.h>\n");
        cppfile.write("#include <string.h>\n");
        cppfile.write("#include \"vrclient_private.h\"\n")
        cppfile.write("#include \"vrclient_defs.h\"\n")
        cppfile.write("#include \"openvr_%s/openvr.h\"\n" % sdkver)
        cppfile.write("using namespace vr;\n")
        cppfile.write("extern \"C\" {\n")
        cppfile.write("#include \"struct_converters.h\"\n")
        cpp_files_need_close_brace.append(cppname)

    hfile = open("struct_converters.h", "a")

    hfile.write("typedef struct win%s win%s;\n" % (handler_name, handler_name))

    cppfile.write("struct win%s {\n" % handler_name)
    for m in struct.get_children():
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                cppfile.write("    %s %s[%u];\n" % (m.type.element_type.spelling, m.displayname, m.type.element_count))
            else:
                cppfile.write("    %s %s;\n" % (m.type.spelling, m.displayname))
    if which == WRAPPERS:
        cppfile.write("\n    %s *linux_side;\n" % struct.displayname)
    cppfile.write("}  __attribute__ ((ms_struct));\n\n")

    if which == LIN_TO_WIN:
        hfile.write("extern void struct_%s_lin_to_win(void *l, void *w);\n" % handler_name)
        cppfile.write("void struct_%s_lin_to_win(void *l, void *w)\n{\n" % handler_name)
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (handler_name, handler_name))
    elif which == WRAPPERS:
        hfile.write("extern struct win%s *struct_%s_wrap(void *l);\n" % (handler_name, handler_name))
        cppfile.write("struct win%s *struct_%s_wrap(void *l)\n{\n" % (handler_name, handler_name))
        cppfile.write("    struct win%s *win = (struct win%s *)malloc(sizeof(*win));\n" % (handler_name, handler_name))

    cppfile.write("    %s *lin = (%s *)l;\n" % (struct.displayname, struct.displayname))

    for m in struct.get_children():
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                #TODO: if this is a struct, or packed differently, we'll have to
                # copy each element in a for-loop
                cppfile.write("    memcpy(win->%s, lin->%s, sizeof(win->%s));\n" % (m.displayname, m.displayname, m.displayname))
            else:
                cppfile.write("    win->%s = lin->%s;\n" % (m.displayname, m.displayname))

    if which == WRAPPERS:
        cppfile.write("    win->linux_side = lin;\n");
        cppfile.write("    return win;\n")

    cppfile.write("}\n\n")

    if which == WRAPPERS:
        hfile.write("extern %s *struct_%s_unwrap(win%s *w);\n" % (struct.displayname, handler_name, handler_name))
        cppfile.write("struct %s *struct_%s_unwrap(win%s *w)\n{\n" % (struct.displayname, handler_name, handler_name))
        cppfile.write("    %s *ret = w->linux_side;\n" % struct.displayname)
        cppfile.write("    free(w);\n")
        cppfile.write("    return ret;\n")
        cppfile.write("}\n\n")

    generated_struct_handlers.append(handler_name)




#clang.cindex.Config.set_library_file("/usr/lib/llvm-3.8/lib/libclang-3.8.so.1");

prog = re.compile("^.*const\s*char.* (\w*)_Version.*\"(.*)\"")
for sdkver in sdk_versions:
    iface_versions = {}
    print("sdkver is: " + sdkver)
    for f in os.listdir("openvr_%s" % sdkver):
        x = open("openvr_%s/%s" % (sdkver, f), "r")
        for l in x:
            if "_Version" in l:
                result = prog.match(l)
                if result:
                    iface, version = result.group(1, 2)
                    iface_versions[iface] = version

    for fname, classes, user_structs, system_structs in files:
        # Parse as 32-bit C++
        input_name = "openvr_%s/%s" % (sdkver, fname)
        sys.stdout.write("about to parse %s\n" % input_name)
        if not os.path.isfile(input_name):
            continue
        index = clang.cindex.Index.create()
        tu = index.parse(input_name, args=['-x', 'c++', '-std=c++11', '-DGNUC', '-Iopenvr_%s/' % sdkver, '-I/usr/lib/clang/5.0.0/include/'])

        diagnostics = list(tu.diagnostics)
        if len(diagnostics) > 0:
            print 'There were parse errors'
            pprint.pprint(diagnostics)
        else:
            children = list(tu.cursor.get_children())
            for child in children:
                if child.kind == clang.cindex.CursorKind.NAMESPACE and child.displayname == "vr":
                    for vrchild in list(child.get_children()):
                        if vrchild.kind == clang.cindex.CursorKind.CLASS_DECL and vrchild.displayname in classes:
                            handle_class(sdkver, vrchild)
                        if vrchild.kind == clang.cindex.CursorKind.STRUCT_DECL or \
                                vrchild.kind == clang.cindex.CursorKind.CLASS_DECL:
                            if strip_ns(vrchild.displayname) in user_structs:
                                handle_struct(sdkver, vrchild, LIN_TO_WIN)
                            elif strip_ns(vrchild.displayname) in system_structs:
                                handle_struct(sdkver, vrchild, WRAPPERS)
                        if vrchild.displayname in print_sizes:
                            sys.stdout.write("size of %s is %u\n" % (vrchild.displayname, vrchild.type.get_size()))

for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")
