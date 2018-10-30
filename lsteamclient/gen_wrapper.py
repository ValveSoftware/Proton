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

# these structs are manually confirmed to be equivalent
exempt_structs = [
        "CSteamID",
        "CGameID",
        "CCallbackBase",
        "SteamPS3Params_t",
        "ValvePackingSentinel_t"
]

#struct_conversion_cache = {
#    '142': {
#                'SteamUGCDetails_t': True,
#                'SteamUGCQueryCompleted_t': False
#           }
#}
struct_conversion_cache = {}

# callback classes for which we have a linux wrapper
wrapped_classes = [
        "ISteamMatchmakingServerListResponse",
        "ISteamMatchmakingPingResponse",
        "ISteamMatchmakingPlayersResponse",
        "ISteamMatchmakingRulesResponse"
]

print_sizes = []

class_versions = {}

def strip_const(typename):
    return typename.replace("const ", "", 1)

def find_windows_struct(struct):
    for child in list(windows_build.cursor.get_children()):
        if strip_const(struct.spelling) == child.spelling:
            return child.type
    return None

def struct_needs_conversion_nocache(struct):
    if strip_const(struct.spelling) in exempt_structs:
        return False
    windows_struct = find_windows_struct(struct)
    assert(not windows_struct is None) #must find windows_struct
    for field in struct.get_fields():
        if struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True
        if field.type.kind == clang.cindex.TypeKind.RECORD and \
                struct_needs_conversion(field.type):
            return True
    return False

def struct_needs_conversion(struct):
    if not sdkver in struct_conversion_cache:
        struct_conversion_cache[sdkver] = {}
    if not strip_const(struct.spelling) in struct_conversion_cache[sdkver]:
        struct_conversion_cache[sdkver][strip_const(struct.spelling)] = struct_needs_conversion_nocache(struct)
    return struct_conversion_cache[sdkver][strip_const(struct.spelling)]

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
    need_convert = []
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            if param.type.kind == clang.cindex.TypeKind.POINTER and \
                    param.type.get_pointee().kind == clang.cindex.TypeKind.FUNCTIONPROTO:
                #unspecified function pointer
                typename = "void *"
            else:
                typename = param.type.spelling.split("::")[-1];

            #assume pointers are out-params and structs are in-params
            real_type = param.type;
            while real_type.kind == clang.cindex.TypeKind.POINTER:
                real_type = real_type.get_pointee()
            if real_type.kind == clang.cindex.TypeKind.RECORD and \
                    not real_type.spelling in wrapped_classes and \
                    struct_needs_conversion(real_type):
                need_convert.append(param)

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
    for param in need_convert:
        if param.type.kind == clang.cindex.TypeKind.POINTER:
            #handle single pointers, but not double pointers
            assert(param.type.get_pointee().kind == clang.cindex.TypeKind.RECORD)
            cpp.write("    %s lin_%s;\n" % (strip_const(param.type.get_pointee().spelling), param.spelling))
            cpp.write("    win_to_lin_struct_%s_%s(%s, &lin_%s);\n" % (strip_const(param.type.get_pointee().spelling), sdkver, param.spelling, param.spelling))
        else:
            #raw structs
            cpp.write("    %s lin_%s;\n" % (param.type.spelling, param.spelling))
            cpp.write("    win_to_lin_struct_%s_%s(&%s, &lin_%s);\n" % (param.type.spelling, sdkver, param.spelling, param.spelling))

    cfile.write("    TRACE(\"%p\\n\", _this);\n")

    if method.result_type.kind == clang.cindex.TypeKind.VOID:
        cfile.write("    ")
    elif char_param_is_unix_path:
        cfile.write("    path_result = ")
    elif returns_record:
        cfile.write("    *_r = ")
    else:
        cfile.write("    return ")

    if method.result_type.kind == clang.cindex.TypeKind.VOID:
        cpp.write("    ")
    elif len(need_convert) > 0:
        cpp.write("    %s retval = " % (method.result_type.spelling))
    else:
        cpp.write("    return ")

    should_do_cb_wrap = "GetAPICallResult" in used_name
    should_gen_wrapper = method.result_type.spelling.startswith("ISteam") or \
            used_name.startswith("GetISteamGenericInterface")

    if should_do_cb_wrap:
        cfile.write("do_cb_wrap(0, _this->linux_side, &%s_%s" % (cppname, used_name))
    else:
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
            elif param.type.kind == clang.cindex.TypeKind.POINTER and \
                    param.type.get_pointee().spelling in wrapped_classes:
                cfile.write(", create_Linux%s(%s)" % (param.type.get_pointee().spelling, param.spelling))
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
            elif param in need_convert:
                cfile.write(", %s" % param.spelling)
                if param.type.kind != clang.cindex.TypeKind.POINTER:
                    cpp.write("lin_%s" % (param.spelling))
                else:
                    cpp.write("&lin_%s" % (param.spelling))
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
    for param in need_convert:
        if param.type.kind == clang.cindex.TypeKind.POINTER:
            if not "const " in param.type.spelling: #don't modify const arguments
                cpp.write("    lin_to_win_struct_%s_%s(&lin_%s, %s);\n" % (param.type.get_pointee().spelling, sdkver, param.spelling, param.spelling))
        else:
            cpp.write("    lin_to_win_struct_%s_%s(&lin_%s, &%s);\n" % (param.type.spelling, sdkver, param.spelling, param.spelling))
    if method.result_type.kind != clang.cindex.TypeKind.VOID and \
            len(need_convert) > 0:
        cpp.write("    return retval;\n")
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
    cpp.write("#include \"steam_defs.h\"\n")
    cpp.write("#include \"steamworks_sdk_%s/steam_api.h\"\n" % sdkver)
    if not fname == "steam_api.h":
        cpp.write("#include \"steamworks_sdk_%s/%s\"\n" % (sdkver, fname))
    cpp.write("#include \"steamclient_private.h\"\n")
    cpp.write("#include \"%s.h\"\n" % cppname)
    cpp.write("#ifdef __cplusplus\nextern \"C\" {\n#endif\n")
    cpp.write("#include \"struct_converters_%s.h\"\n" % sdkver)

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
def handle_struct(sdkver, struct):
    members = struct.get_children()
    cb_num = None
    has_fields = False
    for c in members:
        if c.kind == clang.cindex.CursorKind.ENUM_DECL:
            enums = c.get_children()
            for e in enums:
                if e.displayname == "k_iCallback":
                    cb_num = e.enum_value
        if c.kind == clang.cindex.CursorKind.FIELD_DECL:
            has_fields = True

    w2l_handler_name = None
    l2w_handler_name = None

    if cb_num is None:
        #open here so the .h is always created
        hfile = open("struct_converters_%s.h" % sdkver, "a")

        if not has_fields:
            return
        if struct.spelling == "":
            return
        if not struct_needs_conversion(struct.type):
            return

        struct_name = "%s_%s" % (struct.displayname, sdkver)
        w2l_handler_name = "win_to_lin_struct_%s" % struct_name;
        l2w_handler_name = "lin_to_win_struct_%s" % struct_name;

        hfile.write("extern void %s(const void *w, void *l);\n" % w2l_handler_name)
        hfile.write("extern void %s(const void *l, void *w);\n\n" % l2w_handler_name)

    else:
        #for callbacks, we use the windows struct size in the cb dispatch switch
        windows_struct = find_windows_struct(struct.type)
        struct_name = "%s_%s" % (struct.displayname, windows_struct.get_size())
        l2w_handler_name = "cb_%s" % struct_name;
        if l2w_handler_name in generated_cb_handlers:
            # we already have a handler for the callback struct of this size
            return
        if not struct_needs_conversion(struct.type):
            return

        cb_id = cb_num | (struct.type.get_size() << 16)
        if cb_id in generated_cb_ids:
            # either this cb changed name, or steam used the same ID for different structs
            return

        generated_cb_ids.append(cb_id)

        datfile = open("cb_converters.dat", "a")
        datfile.write("case 0x%08x: win_msg->m_cubParam = %s; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); %s(lin_msg.m_pubParam, win_msg->m_pubParam); break;\n" % (cb_id, windows_struct.get_size(), l2w_handler_name))

        generated_cb_handlers.append(l2w_handler_name)

        if not cb_num in cb_table.keys():
            # latest SDK linux size, list of windows struct sizes and names
            cb_table[cb_num] = (struct.type.get_size(), [])
        cb_table[cb_num][1].append((windows_struct.get_size(), struct_name))

        hfile = open("cb_converters.h", "a")
        hfile.write("extern void %s(void *l, void *w);\n\n" % l2w_handler_name)


    filename_base = "struct_converters_%s" % sdkver
    cppname = "%s.cpp" % filename_base
    file_exists = os.path.isfile(cppname)
    cppfile = open(cppname, "a")
    if not file_exists:
        cppfile.write("#include \"steam_defs.h\"\n")
        cppfile.write("#include \"steamworks_sdk_%s/steam_api.h\"\n" % sdkver)
        cppfile.write("#include \"steamworks_sdk_%s/isteamgameserver.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamgameserverstats.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamgameserverstats.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamgamecoordinator.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamgamecoordinator.h\"\n" % sdkver)
        cppfile.write("#include \"steamclient_private.h\"\n")
        cppfile.write("extern \"C\" {\n")
        cpp_files_need_close_brace.append(cppname)

    cppfile.write("#pragma pack( push, 8 )\n")
    cppfile.write("struct win%s {\n" % struct_name)
    for m in struct.get_children():
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                cppfile.write("    %s %s[%u];\n" % (m.type.element_type.spelling, m.displayname, m.type.element_count))
            elif m.type.kind == clang.cindex.TypeKind.RECORD and \
                    struct_needs_conversion(m.type):
                cppfile.write("    win%s_%s %s;\n" % (m.type.spelling, sdkver, m.displayname))
            else:
                cppfile.write("    %s %s;\n" % (m.type.spelling, m.displayname))
    cppfile.write("}  __attribute__ ((ms_struct));\n")
    cppfile.write("#pragma pack( pop )\n")

    def handle_field(m, src, dst):
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                assert(m.type.element_type.kind != clang.cindex.TypeKind.RECORD or \
                        not struct_needs_conversion(m.type.element_type))
                cppfile.write("    memcpy(%s->%s, %s->%s, sizeof(%s->%s));\n" % (dst, m.displayname, src, m.displayname, dst, m.displayname))
            elif m.type.kind == clang.cindex.TypeKind.RECORD and \
                    struct_needs_conversion(m.type):
                cppfile.write("    %s_to_%s_struct_%s_%s(&%s->%s, &%s->%s);\n" % (src, dst, m.type.spelling, sdkver, src, m.displayname, dst, m.displayname))
            else:
                cppfile.write("    %s->%s = %s->%s;\n" % (dst, m.displayname, src, m.displayname))

    if w2l_handler_name:
        cppfile.write("void %s(const void *w, void *l)\n{\n" % w2l_handler_name)
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.displayname, struct.displayname))
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (struct_name, struct_name))
        for m in struct.get_children():
            handle_field(m, "win", "lin")
        cppfile.write("}\n\n")

    if l2w_handler_name:
        cppfile.write("void %s(const void *l, void *w)\n{\n" % l2w_handler_name)
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.displayname, struct.displayname))
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (struct_name, struct_name))
        for m in struct.get_children():
            handle_field(m, "lin", "win")
        cppfile.write("}\n\n")

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
        linux_build = index.parse(input_name, args=['-x', 'c++', '-m32', '-Isteamworks_sdk_%s/' % sdkver, '-I/usr/lib/clang/7.0.0/include/'])

        diagnostics = list(linux_build.diagnostics)
        if len(diagnostics) > 0:
            print('There were parse errors')
            pprint.pprint(diagnostics)
        else:
            windows_build = index.parse(input_name, args=['-x', 'c++', '-m32', '-Isteamworks_sdk_%s/' % sdkver, '-I/usr/lib/clang/7.0.0/include/', '-mms-bitfields', '-U__linux__', '-Wno-incompatible-ms-struct'])
            diagnostics = list(windows_build.diagnostics)
            if len(diagnostics) > 0:
                print('There were parse errors (windows build)')
                pprint.pprint(diagnostics)
            else:
                children = list(linux_build.cursor.get_children())
                for child in children:
                    if child.kind == clang.cindex.CursorKind.CLASS_DECL and child.displayname in classes:
                        handle_class(sdkver, child)
                    if child.kind == clang.cindex.CursorKind.STRUCT_DECL or \
                            child.kind == clang.cindex.CursorKind.CLASS_DECL:
                        handle_struct(sdkver, child)
                    if child.displayname in print_sizes:
                        sys.stdout.write("size of %s is %u\n" % (child.displayname, child.type.get_size()))

for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

getapifile = open("cb_getapi_table.dat", "w")
cbsizefile = open("cb_getapi_sizes.dat", "w")
for cb in cb_table.keys():
    cbsizefile.write("case %u: /* %s */\n" % (cb, cb_table[cb][1][0][1]))
    cbsizefile.write("    return %u;\n" % cb_table[cb][0])
    getapifile.write("case %u:\n" % cb)
    getapifile.write("    switch(callback_len){\n")
    getapifile.write("    default:\n") # the first one should be the latest, should best support future SDK versions
    for (size, name) in cb_table[cb][1]:
        getapifile.write("    case %s: cb_%s(lin_callback, callback); break;\n" % (size, name))
    getapifile.write("    }\n    break;\n")
