#!/usr/bin/env python2

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../vrclient/gen_wrapper.py

from __future__ import print_function

import pprint
import sys
import clang.cindex
import os
import re

sdk_versions = [
    "142",
    "141",
    "140",
    "139",
    "138a",
    "138",
    "137",
    "136",
    "135a",
    "135",
    "134",
    "133b",
    "133a",
    "133",
    "132",
    "131",
    "130",
    "129a",
    "129",
    "128",
    "127",
    "126a",
    "126",
    "125",
    "124",
    "123a",
    "123",
    "122",
    "121",
    "120",
    "119",
    "118",
    "117",
    "116",
    "115",
    "114",
    "113",
    "112",
    "111",
    "110",
    "109",
    "108",
    "107",
    "106",
    "105",
    "104",
    "103",
    "102",
    "101",
    "100",
]

files = [
    ("steam_api.h", [
        "ISteamApps",
        "ISteamAppList",
        "ISteamClient",
        "ISteamController",
        "ISteamFriends",
        "ISteamHTMLSurface",
        "ISteamHTTP",
        "ISteamInventory",
        "ISteamMatchmaking",
        "ISteamMatchmakingServers",
        "ISteamMusic",
        "ISteamMusicRemote",
        "ISteamNetworking",
        "ISteamRemoteStorage",
        "ISteamScreenshots",
        "ISteamUGC",
        "ISteamUnifiedMessages",
        "ISteamUser",
        "ISteamUserStats",
        "ISteamUtils",
        "ISteamVideo"
    ]),
    ("isteamappticket.h", [
        "ISteamAppTicket"
    ]),
    ("isteamgameserver.h", [
        "ISteamGameServer"
    ]),
    ("isteamgameserverstats.h", [
        "ISteamGameServerStats"
    ]),
    ("isteammasterserverupdater.h", [
        "ISteamMasterServerUpdater"
    ]),
    ("isteamgamecoordinator.h", [
        "ISteamGameCoordinator"
    ]),
    ("isteamparentalsettings.h", [
        "ISteamParentalSettings"
    ]),
]

aliases = {
    #Some interface versions are not present in the public SDK
    #headers, but are actually requested by games. It would be nice
    #to verify that these interface versions are actually binary
    #compatible. Lacking that, we hope the next highest version
    #is compatible.
    "SteamClient012":["SteamClient013"],
    "SteamUtils004":["SteamUtils003"], # TimeShift uses SteamUtils003


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
        "RemoteStorageGetPublishedFileDetailsResult_t_9740",
        "SteamUGCQueryCompleted_t_20",
        "SteamUGCRequestUGCDetailsResult_t_9764"
]

print_sizes = []

class_versions = {}

def handle_destructor(cfile, classname, winclassname, method):
    cfile.write("DEFINE_THISCALL_WRAPPER(%s_destructor, 4)\n" % winclassname)
    cfile.write("void __thiscall %s_destructor(%s *_this)\n{/* never called */}\n\n" % (winclassname, winclassname))
    return "destructor"

def handle_method(cfile, classname, winclassname, cppname, method, cpp, cpp_h, existing_methods):
    used_name = method.spelling
    if used_name in existing_methods:
        number = '2'
        while used_name in existing_methods:
            idx = existing_methods.index(used_name)
            used_name = "%s_%s" % (method.spelling, number)
            number = chr(ord(number) + 1)
        existing_methods.insert(idx, used_name)
    else:
        existing_methods.append(used_name)
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
    if method.result_type.spelling.startswith("ISteam"):
        cfile.write("win%s " % (method.result_type.spelling))
        cpp.write("void *")
        cpp_h.write("void *")
    elif returns_record:
        cfile.write("%s *" % method.result_type.spelling)
        cpp.write("%s " % (method.result_type.spelling))
        cpp_h.write("%s " % (method.result_type.spelling))
    else:
        cfile.write("%s " % (method.result_type.spelling))
        cpp.write("%s " % (method.result_type.spelling))
        cpp_h.write("%s " % (method.result_type.spelling))
    cfile.write('__thiscall %s_%s(%s *_this' % (winclassname, used_name, winclassname))
    cpp.write("%s_%s(void *linux_side" % (cppname, used_name))
    cpp_h.write("%s_%s(void *" % (cppname, used_name))
    if returns_record:
        cfile.write(", %s *_r" % method.result_type.spelling)
    unnamed = 'a'
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            if param.type.kind == clang.cindex.TypeKind.POINTER and \
                    param.type.get_pointee().kind == clang.cindex.TypeKind.UNEXPOSED:
                #unspecified function pointer
                typename = "void *"
            else:
                typename = param.type.spelling.split("::")[-1];
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
    else:
        cfile.write("    return ")
        cpp.write("    return ")

    should_gen_wrapper = method.result_type.spelling.startswith("ISteam") or \
            used_name.startswith("GetISteamGenericInterface")
    if should_gen_wrapper:
        cfile.write("create_win_interface(pchVersion,\n        ")

    cfile.write("%s_%s(_this->linux_side" % (cppname, used_name))
    cpp.write("((%s*)linux_side)->%s(" % (classname, method.spelling))
    unnamed = 'a'
    first = True
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
            elif "ISteamMatchmakingServerListResponse" in param.type.spelling:
                cfile.write(", create_LinuxMatchmakingServerListResponse(%s)" % param.spelling)
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
            else:
                cfile.write(", %s" % param.spelling)
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
    if should_gen_wrapper:
        cfile.write(")")
    cfile.write(");\n")
    cpp.write(");\n")
    if returns_record:
        cfile.write("    return _r;\n")
    if char_param_is_unix_path and not path_param_name is None and not path_size_param_name is None:
        cfile.write("    return steamclient_unix_path_to_dos_path(path_result, %s, %s);\n" % (path_param_name, path_size_param_name))
    cfile.write("}\n\n")
    cpp.write("}\n\n")

def get_iface_version(classname):
    # ISteamClient -> STEAMCLIENT_INTERFACE_VERSION
    defname = "%s_INTERFACE_VERSION" % classname[1:].upper()
    if defname in iface_versions.keys():
        ver = iface_versions[defname]
    else:
        ver = "UNVERSIONED"
    if classname in class_versions.keys() and ver in class_versions[classname]:
        return (ver, True)
    if not classname in class_versions.keys():
        class_versions[classname] = []
    class_versions[classname].append(ver)
    return (ver, False)

def handle_class(sdkver, classnode):
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

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

""")

    cpp = open("%s.cpp" % cppname, "w")
    cpp.write("#include \"steamclient_private.h\"\n")
    cpp.write("#include \"steam_defs.h\"\n")
    cpp.write("#include \"steamworks_sdk_%s/steam_api.h\"\n" % sdkver)
    if not fname == "steam_api.h":
        cpp.write("#include \"steamworks_sdk_%s/%s\"\n" % (sdkver, fname))
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
            handle_method(cfile, classnode.spelling, winclassname, cppname, child, cpp, cpp_h, methods)
        elif child.kind == clang.cindex.CursorKind.DESTRUCTOR:
            methods.append(handle_destructor(cfile, classnode.spelling, winclassname, child))

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


generated_cb_handlers = []
generated_cb_ids = []
cpp_files_need_close_brace = []
cb_table = {}

#because of struct packing differences between win32 and linux, we
#need to convert these structs from their linux layout to the win32
#layout.
#TODO: could we optimize this by detecting if the structs are the
#same layout at generation-time?
def handle_callback_struct(sdkver, callback, cb_num):
    handler_name = "%s_%s" % (callback.displayname, callback.type.get_size())

    if handler_name in generated_cb_handlers:
        # we already have a handler for the callback struct of this size
        return

    if handler_name in skip_structs:
        # due to padding, some structs have the same width across versions of
        # the SDK. since we key our lin->win conversion on the win struct size,
        # we can skip the smaller structs and just write into the padding on
        # older versions
        # TODO: we could automate this. see comment near skip_structs declaration
        return

    cb_id = cb_num | (callback.type.get_size() << 16)
    if cb_id in generated_cb_ids:
        # either this cb changed name, or steam used the same ID for different structs
        return

    generated_cb_ids.append(cb_id)

    filename_base = "cb_converters_%s" % sdkver
    cppname = "%s.cpp" % filename_base
    file_exists = os.path.isfile(cppname)
    cppfile = open(cppname, "a")
    if not file_exists:
        cppfile.write("#include \"steamclient_private.h\"\n")
        cppfile.write("#include \"steam_defs.h\"\n")
        cppfile.write("#include \"steamworks_sdk_%s/steam_api.h\"\n" % sdkver)
        cppfile.write("#include \"steamworks_sdk_%s/isteamgameserver.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamgameserverstats.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamgameserverstats.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamgamecoordinator.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamgamecoordinator.h\"\n" % sdkver)
        cppfile.write("extern \"C\" {\n")
        cpp_files_need_close_brace.append(cppname)

    datfile = open("cb_converters.dat", "a")
    datfile.write("case 0x%08x: win_msg->m_cubParam = sizeof(struct win%s); win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); cb_%s(lin_msg.m_pubParam, win_msg->m_pubParam); break;\n" % (cb_id, handler_name, handler_name))

    hfile = open("cb_converters.h", "a")
    hfile.write("struct win%s {\n" % handler_name)
    for m in callback.get_children():
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                hfile.write("    %s %s[%u];\n" % (m.type.element_type.spelling, m.displayname, m.type.element_count))
            else:
                hfile.write("    %s %s;\n" % (m.type.spelling, m.displayname))
    hfile.write("}  __attribute__ ((ms_struct));\n")
    hfile.write("extern void cb_%s(void *l, void *w);\n" % handler_name)

    cppfile.write("struct win%s {\n" % handler_name)
    for m in callback.get_children():
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                cppfile.write("    %s %s[%u];\n" % (m.type.element_type.spelling, m.displayname, m.type.element_count))
            else:
                cppfile.write("    %s %s;\n" % (m.type.spelling, m.displayname))
    cppfile.write("}  __attribute__ ((ms_struct));\n")

    cppfile.write("void cb_%s(void *l, void *w)\n{\n" % handler_name)
    cppfile.write("    %s *lin = (%s *)l;\n" % (callback.displayname, callback.displayname))
    cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (handler_name, handler_name))
    for m in callback.get_children():
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                #TODO: if this is a struct, or packed differently, we'll have to
                # copy each element in a for-loop
                cppfile.write("    memcpy(win->%s, lin->%s, sizeof(win->%s));\n" % (m.displayname, m.displayname, m.displayname))
            else:
                cppfile.write("    win->%s = lin->%s;\n" % (m.displayname, m.displayname))
    cppfile.write("}\n\n")

    generated_cb_handlers.append(handler_name)

    if not cb_num in cb_table.keys():
        # latest SDK linux size, list of windows struct names
        cb_table[cb_num] = (callback.type.get_size(), [])
    cb_table[cb_num][1].append(handler_name)


def handle_callback_maybe(sdkver, callback):
    members = callback.get_children()
    for c in members:
        if c.kind == clang.cindex.CursorKind.ENUM_DECL:
            enums = c.get_children()
            for e in enums:
                if e.displayname == "k_iCallback":
                    handle_callback_struct(sdkver, callback, e.enum_value)




#clang.cindex.Config.set_library_file("/usr/lib/llvm-3.8/lib/libclang-3.8.so.1");

prog = re.compile("^#define\s*(\w*)\s*\"(.*)\"")
for sdkver in sdk_versions:
    iface_versions = {}
    for f in os.listdir("steamworks_sdk_%s" % sdkver):
        x = open("steamworks_sdk_%s/%s" % (sdkver, f), "r")
        for l in x:
            if "INTERFACE_VERSION" in l:
                result = prog.match(l)
                if result:
                    iface, version = result.group(1, 2)
                    iface_versions[iface] = version

    for fname, classes in files:
        # Parse as 32-bit C++
        input_name = "steamworks_sdk_%s/%s" % (sdkver, fname)
        sys.stdout.write("about to parse %s\n" % input_name)
        if not os.path.isfile(input_name):
            continue
        index = clang.cindex.Index.create()
        tu = index.parse(input_name, args=['-x', 'c++', '-m32', '-Isteamworks_sdk_%s/' % sdkver, '-I/usr/lib/clang/6.0.1/include/'])

        diagnostics = list(tu.diagnostics)
        if len(diagnostics) > 0:
            print('There were parse errors')
            pprint.pprint(diagnostics)
        else:
            children = list(tu.cursor.get_children())
            for child in children:
                if child.kind == clang.cindex.CursorKind.CLASS_DECL and child.displayname in classes:
                    handle_class(sdkver, child)
                if child.kind == clang.cindex.CursorKind.STRUCT_DECL or \
                        child.kind == clang.cindex.CursorKind.CLASS_DECL:
                    handle_callback_maybe(sdkver, child)
                if child.displayname in print_sizes:
                    sys.stdout.write("size of %s is %u\n" % (child.displayname, child.type.get_size()))

for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

getapifile = open("cb_getapi_table.dat", "w")
cbsizefile = open("cb_getapi_sizes.dat", "w")
for cb in cb_table.keys():
    cbsizefile.write("case %u: /* %s */\n" % (cb, cb_table[cb][1][0]))
    cbsizefile.write("    return %u;\n" % cb_table[cb][0])
    getapifile.write("case %u:\n" % cb)
    getapifile.write("    switch(callback_len){\n")
    getapifile.write("    default:\n") # the first one should be the latest, should best support future SDK versions
    for struct in cb_table[cb][1]:
        getapifile.write("    case sizeof(struct win%s): cb_%s(lin_callback, callback); break;\n" % (struct, struct))
    getapifile.write("    }\n    break;\n")
