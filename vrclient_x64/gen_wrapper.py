#!/usr/bin/env python

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../lsteamclient/gen_wrapper.py

from __future__ import print_function

import pprint
import sys
import clang.cindex
import os
import re

sdk_versions = [
    "v1.1.3b",
    "v1.0.17",
    "v1.0.16",
    "v1.0.15",
    "v1.0.14",
    "v1.0.13",
    "v1.0.12",
    "v1.0.11",
    "v1.0.10",
    "v1.0.9",
    "v1.0.8",
    "v1.0.7",
    "v1.0.6",
    "v1.0.5",
    "v1.0.4",
    "v1.0.3a", #non-public build used by The Lab, see Proton github PR#2075
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
        "IVRInput",
        "IVRIOBuffer",
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

def get_params(f):
    return [p for p in f.get_children() if p.kind == clang.cindex.CursorKind.PARM_DECL]

def ivrclientcore_init(cppname, method):
    if "002" in cppname:
        return "ivrclientcore_002_init"
    return "ivrclientcore_init"

def ivrclientcore_get_generic_interface(cppname, method):
    return "ivrclientcore_get_generic_interface"

def ivrclientcore_cleanup(cppname, method):
    return "ivrclientcore_cleanup"

def ivrsystem_get_dxgi_output_info(cppname, method):
    param_count = len(get_params(method))
    return {
        1: "get_dxgi_output_info",
        2: "get_dxgi_output_info2"
    }.get(param_count, "unhandled_get_dxgi_output_info_method")

def ivrsystem_get_output_device(cppname, method):
    #introduced in 016, changed in 017
    if "016" in cppname:
        return "ivrsystem_016_get_output_device"
    return "ivrsystem_get_output_device"

def ivrcompositor_submit(cppname, method):
    if "005" in cppname:
        return "ivrcompositor_005_submit"
    if "006" in cppname:
        return "ivrcompositor_006_submit"
    if "007" in cppname:
        return "ivrcompositor_007_submit"
    if "008" in cppname:
        return "ivrcompositor_008_submit"
    return "ivrcompositor_submit"

def ivrcompositor_post_present_handoff(cppname, method):
    return "ivrcompositor_post_present_handoff"

def ivrcompositor_wait_get_poses(cppname, method):
    for version in ["016", "017", "018", "019", "020", "021", "022"]:
        if version in cppname:
            return "ivrcompositor_wait_get_poses"
    return None

def ivrcompositor_get_vulkan_device_extensions_required(cppname, method):
    return "ivrcompositor_get_vulkan_device_extensions_required"

def ivrrendermodels_load_into_texture_d3d11_async(cppname, method):
    assert "005" in cppname or "006" in cppname
    return "ivrrendermodels_load_into_texture_d3d11_async"

method_overrides = [
    ("IVRClientCore", "Init", ivrclientcore_init),
    ("IVRClientCore", "GetGenericInterface", ivrclientcore_get_generic_interface),
    ("IVRClientCore", "Cleanup", ivrclientcore_cleanup),
    ("IVRSystem", "GetDXGIOutputInfo", ivrsystem_get_dxgi_output_info),
    ("IVRSystem", "GetOutputDevice", ivrsystem_get_output_device),
    ("IVRCompositor", "Submit", ivrcompositor_submit),
    ("IVRCompositor", "PostPresentHandoff", ivrcompositor_post_present_handoff),
    ("IVRCompositor", "WaitGetPoses", ivrcompositor_wait_get_poses),
    ("IVRCompositor", "GetVulkanDeviceExtensionsRequired", ivrcompositor_get_vulkan_device_extensions_required),
    ("IVRRenderModels", "LoadIntoTextureD3D11_Async", ivrrendermodels_load_into_texture_d3d11_async),
]

method_overrides_data = [
    ("IVRClientCore", "struct client_core_data", None),
    ("IVRCompositor", "struct compositor_data", "destroy_compositor_data"),
]

def display_sdkver(s):
    if s.startswith("v"):
        s = s[1:]
    return s.replace(".", "")

def strip_ns(name):
    return name.replace("vr::","")

def handle_method(cfile, classname, winclassname, cppname, method, cpp, cpp_h, existing_methods, iface_version):
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
    for param in get_params(method):
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
    for param in get_params(method):
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

    should_gen_wrapper = strip_ns(method.result_type.spelling).startswith("IVR")
    if should_gen_wrapper:
        cfile.write("create_win_interface(pchNameAndVersion,\n        ")

    is_method_overridden = False
    for classname_pattern, methodname, override_generator in method_overrides:
        if used_name == methodname and classname_pattern in classname:
            fn_name = override_generator(cppname, method)
            if fn_name:
                cfile.write("%s(%s_%s, _this->linux_side" % (fn_name, cppname, used_name))
                is_method_overridden = True
                break
    else:
        cfile.write("%s_%s(_this->linux_side" % (cppname, used_name))

    cpp.write("((%s*)linux_side)->%s(" % (classname, method.spelling))
    unnamed = 'a'
    first = True
    next_is_size = False
    for param in get_params(method):
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
                if do_lin_to_win and \
                        (do_lin_to_win[0] == "VREvent_t" or \
                         do_lin_to_win[0] == "VRControllerState001_t"):
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
    if is_method_overridden:
        cfile.write(", %s" % iface_version[iface_version.find("_") + 1:].lstrip("0"))
        for classname_pattern, user_data_type, _ in method_overrides_data:
            if classname_pattern in classname:
                cfile.write(", &_this->user_data")
                break
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

max_c_api_param_count = 0

def get_capi_thunk_params(method):
    def toBOOL(x):
        return "TRUE" if x else "FALSE"
    returns_record = method.result_type.get_canonical().kind == clang.cindex.TypeKind.RECORD
    param_types = [x.type for x in get_params(method)]
    if returns_record:
        param_types.insert(0, method.result_type)
    param_count = len(param_types)
    has_float_params = any(x.spelling == "float" for x in param_types)
    is_4th_float = param_count >= 4 and param_types[3].spelling == "float"
    return "%s, %s, %s" % (param_count, toBOOL(has_float_params), toBOOL(is_4th_float))

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

    file_exists = os.path.isfile("vrclient_x64/%s.c" % winname)
    cfile = open("vrclient_x64/%s.c" % winname, "a")
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

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

""")

    cpp = open("vrclient_x64/%s.cpp" % cppname, "w")
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

    cpp_h = open("vrclient_x64/%s.h" % cppname, "w")
    cpp_h.write("#ifdef __cplusplus\nextern \"C\" {\n#endif\n")

    winclassname = "win%s_%s" % (classnode.spelling, iface_version)
    cfile.write("#include \"%s.h\"\n\n" % cppname)
    cfile.write("typedef struct __%s {\n" % winclassname)
    cfile.write("    vtable_ptr *vtable;\n") # make sure to keep this first (flat API depends on it)
    cfile.write("    void *linux_side;\n")
    for classname_pattern, user_data_type, _ in method_overrides_data:
        if classname_pattern in classnode.spelling:
            cfile.write("    %s user_data;\n" % user_data_type)
            break
    cfile.write("} %s;\n\n" % winclassname)
    methods = []
    method_names = []
    for child in children:
        if child.kind == clang.cindex.CursorKind.CXX_METHOD:
            handle_method(cfile, classnode.spelling, winclassname, cppname, child, cpp, cpp_h, method_names, iface_version)
            methods.append(child)

    cfile.write("extern vtable_ptr %s_vtable;\n\n" % winclassname)
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("void __asm_dummy_vtables(void) {\n")
    cfile.write("#endif\n")
    cfile.write("    __ASM_VTABLE(%s,\n" % winclassname)
    for method in method_names:
        cfile.write("        VTABLE_ADD_FUNC(%s_%s)\n" % (winclassname, method))
    cfile.write("    );\n")
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("}\n")
    cfile.write("#endif\n\n")
    cfile.write("%s *create_%s(void *linux_side)\n{\n" % (winclassname, winclassname))
    cfile.write("    %s *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(%s));\n" % (winclassname, winclassname))
    cfile.write("    TRACE(\"-> %p\\n\", r);\n")
    cfile.write("    r->vtable = &%s_vtable;\n" % winclassname)
    cfile.write("    r->linux_side = linux_side;\n")
    cfile.write("    return r;\n}\n\n")
    cfile.write("void destroy_%s(void *object)\n{\n" % winclassname)
    cfile.write("    TRACE(\"%p\\n\", object);\n")
    for classname_pattern, user_data_type, user_data_destructor in method_overrides_data:
        if user_data_destructor and classname_pattern in classnode.spelling:
            cfile.write("    struct __%s *win_object = object;\n" % winclassname)
            cfile.write("    %s(&win_object->user_data);\n" % user_data_destructor)
            break
    cfile.write("    HeapFree(GetProcessHeap(), 0, object);\n}\n\n")

    # flat (FnTable) API
    cfile.write("%s *create_%s_FnTable(void *linux_side)\n{\n" % (winclassname, winclassname))
    cfile.write("    %s *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(%s));\n" % (winclassname, winclassname))
    cfile.write("    struct thunk *thunks = alloc_thunks(%d);\n" % len(methods))
    cfile.write("    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, %d * sizeof(*vtable));\n" % len(methods))
    cfile.write("    int i;\n\n")
    cfile.write("    TRACE(\"-> %p, vtable %p, thunks %p\\n\", r, vtable, thunks);\n")
    for i in range(len(methods)):
        thunk_params = get_capi_thunk_params(methods[i])
        global max_c_api_param_count
        max_c_api_param_count = max(len(get_params(methods[i])), max_c_api_param_count)
        cfile.write("    init_thunk(&thunks[%d], r, %s_%s, %s);\n" % (i, winclassname, method_names[i], thunk_params))
    cfile.write("    for (i = 0; i < %d; i++)\n" % len(methods))
    cfile.write("        vtable[i] = &thunks[i];\n")
    cfile.write("    r->linux_side = linux_side;\n")
    cfile.write("    r->vtable = (void *)vtable;\n")
    cfile.write("    return r;\n}\n\n")
    cfile.write("void destroy_%s_FnTable(void *object)\n{\n" % winclassname)
    cfile.write("    %s *win_object = object;\n" % winclassname)
    cfile.write("    TRACE(\"%p\\n\", win_object);\n")
    for classname_pattern, user_data_type, user_data_destructor in method_overrides_data:
        if user_data_destructor and classname_pattern in classnode.spelling:
            cfile.write("    %s(&win_object->user_data);\n" % user_data_destructor)
            break
    cfile.write("    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);\n")
    cfile.write("    HeapFree(GetProcessHeap(), 0, win_object->vtable);\n")
    cfile.write("    HeapFree(GetProcessHeap(), 0, win_object);\n}\n\n")

    cpp.write("#ifdef __cplusplus\n}\n#endif\n")
    cpp_h.write("#ifdef __cplusplus\n}\n#endif\n")

    constructors = open("vrclient_x64/win_constructors.h", "a")
    constructors.write("extern void *create_%s(void *);\n" % winclassname)
    constructors.write("extern void *create_%s_FnTable(void *);\n" % winclassname)

    destructors = open("vrclient_x64/win_destructors.h", "a")
    destructors.write("extern void destroy_%s(void *);\n" % winclassname)
    destructors.write("extern void destroy_%s_FnTable(void *);\n" % winclassname)

    constructors = open("vrclient_x64/win_constructors_table.dat", "a")
    constructors.write("    {\"%s\", &create_%s, &destroy_%s},\n" % (iface_version, winclassname, winclassname))
    constructors.write("    {\"FnTable:%s\", &create_%s_FnTable, &destroy_%s_FnTable},\n" % (iface_version, winclassname, winclassname))
    if iface_version in aliases.keys():
        for alias in aliases[iface_version]:
            constructors.write("    {\"%s\", &create_%s, &destroy_%s}, /* alias */\n" % (alias, winclassname, winclassname))
            constructors.write("    {\"FnTable:%s\", &create_%s_FnTable, &destroy_%s_FnTable},\n" % (alias, winclassname, winclassname))

    generate_c_api_thunk_tests(winclassname, methods, method_names)


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
    cppname = "vrclient_x64/%s.cpp" % filename_base
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

    hfile = open("vrclient_x64/struct_converters.h", "a")

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


def generate_x64_call_flat_method(cfile, param_count, has_floats, is_4th_float):
    assert param_count >= 4
    if is_4th_float:
        assert has_floats
    def l(line):
        cfile.write(line + '\n')

    stack_space = 0x20 # shadow register space
    stack_space += 0x8 * (param_count - 3)
    stack_space |= 0x8
    src_offset = 0x20 + 0x8 + stack_space # shadow register space + ret
    dst_offset = 0x20

    name = "call_flat_method%s%s%s" % (param_count, "_f" if has_floats else "", "_f" if is_4th_float else "")

    l(r"__ASM_GLOBAL_FUNC(%s," % name)
    l(r'    "subq $0x%x, %%rsp\n\t"' % stack_space);
    l(r'    __ASM_CFI(".cfi_adjust_cfa_offset %d\n\t")' % stack_space)

    if is_4th_float:
        l(r'    "movq %%xmm3, 0x%x(%%rsp)\n\t"' % dst_offset)
    else:
        l(r'    "movq %%r9, 0x%x(%%rsp)\n\t"' % dst_offset)
    dst_offset += 8

    for i in range(5, param_count + 1):
        l(r'    "movq 0x%x(%%rsp), %%rax\n\t" // copy parameter' % src_offset)
        l(r'    "movq %%rax, 0x%x(%%rsp)\n\t"' % dst_offset)
        src_offset += 8
        dst_offset += 8

    l(r'    "movq %r8, %r9\n\t" // shift over arguments')
    l(r'    "movq %rdx, %r8\n\t"')
    l(r'    "movq %rcx, %rdx\n\t"')
    l(r'    "movq %r10, %rcx\n\t" // add This pointer')

    if has_floats:
        l(r'    "movaps %xmm2, %xmm3\n\t"')
        l(r'    "movaps %xmm1, %xmm2\n\t"')
        l(r'    "movaps %xmm0, %xmm1\n\t"')

    l(r'    "call *%r11\n\t"')
    l(r'    "addq $0x%x, %%rsp\n\t"' % stack_space);
    l(r'    __ASM_CFI(".cfi_adjust_cfa_offset -%d\n\t")' % stack_space)
    l(r'    "ret");')
    l(r'extern void %s(void);' % name);

def generate_flatapi_c():
    with open("vrclient_x64/flatapi.c", "w") as f:
        f.write(r"""/* This file is auto-generated, do not edit. */

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"

#include "cxx.h"
#include "flatapi.h"

#ifdef __i386__
__ASM_GLOBAL_FUNC(call_flat_method,
    "popl %eax\n\t"
    "pushl %ecx\n\t"
    "pushl %eax\n\t"
    "jmp *%edx");
#else
// handles "this" and up to 3 parameters
__ASM_GLOBAL_FUNC(call_flat_method,
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "jmp *%r11");
extern void call_flat_method(void);

__ASM_GLOBAL_FUNC(call_flat_method_f,
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "jmp *%r11");
extern void call_flat_method_f(void);
""")

        for i in range(4, max_c_api_param_count + 1):
            f.write("\n")
            generate_x64_call_flat_method(f, i, False, False)
        for i in range(4, max_c_api_param_count + 1):
            f.write("\n")
            generate_x64_call_flat_method(f, i, True, False)
            f.write("\n")
            generate_x64_call_flat_method(f, i, True, True)

        f.write('\npfn_call_flat_method\n')
        f.write('get_call_flat_method_pfn( int param_count, BOOL has_floats, BOOL is_4th_float )\n{\n')
        f.write('    if (!has_floats)\n')
        f.write('    {\n')
        f.write('    if (param_count <= 3) return call_flat_method;\n')
        for i in range(4, max_c_api_param_count):
            f.write('    if (param_count == %s) return call_flat_method%s;\n' % (i, i))
        f.write('    return call_flat_method%s;\n' % max_c_api_param_count)
        f.write('    }\n')
        f.write('    if (is_4th_float)\n')
        f.write('    {\n')
        f.write('    if (param_count <= 3) return call_flat_method_f;\n')
        for i in range(4, max_c_api_param_count):
            f.write('    if (param_count == %s) return call_flat_method%s_f_f;\n' % (i, i))
        f.write('    return call_flat_method%s_f_f;\n' % max_c_api_param_count)
        f.write('    }\n')
        f.write('    if (param_count <= 3) return call_flat_method_f;\n')
        for i in range(4, max_c_api_param_count):
            f.write('    if (param_count == %s) return call_flat_method%s_f;\n' % (i, i))
        f.write('    return call_flat_method%s_f;\n' % max_c_api_param_count)
        f.write('}\n')

        f.write("#endif\n")

def generate_c_api_method_test(f, header, thunks_c, class_name, method_name, method):
    thunk_params = get_capi_thunk_params(method)
    f.write("\n    init_thunk(t, this_ptr_value, %s_%s, %s);\n" % (class_name, method_name, thunk_params))
    f.write("    ")
    header.write("\n")
    thunks_c.write("\n")

    returns_record = method.result_type.get_canonical().kind == clang.cindex.TypeKind.RECORD
    if returns_record:
        f.write("%s *" % strip_ns(method.result_type.spelling))
        header.write("%s *" % strip_ns(method.result_type.spelling))
        thunks_c.write("%s *" % strip_ns(method.result_type.spelling))
    else:
        f.write("%s " % strip_ns(method.result_type.spelling))
        header.write("%s " % strip_ns(method.result_type.spelling))
        thunks_c.write("%s " % strip_ns(method.result_type.spelling))
    first_param = True
    f.write('(__stdcall *capi_%s_%s)(' % (class_name, method_name))
    header.write('__thiscall %s_%s(void *_this' % (class_name, method_name))
    thunks_c.write('__thiscall %s_%s(void *_this' % (class_name, method_name))
    if returns_record:
        f.write("%s *_r" % strip_ns(method.result_type.spelling))
        first_param = False
        header.write(", %s *_r" % strip_ns(method.result_type.spelling))
        thunks_c.write(", %s *_r" % strip_ns(method.result_type.spelling))

    for param in get_params(method):
        if param.type.kind == clang.cindex.TypeKind.POINTER \
                and param.type.get_pointee().kind == clang.cindex.TypeKind.UNEXPOSED:
            typename = "void *"
        else:
            typename = param.type.spelling.split("::")[-1].replace("&", "*");
        if not first_param:
            f.write(", ")
        first_param = False
        f.write("%s %s" % (typename, param.spelling))
        header.write(", %s %s" % (typename, param.spelling))
        thunks_c.write(", %s %s" % (typename, param.spelling))
    f.write(") = (void *)t;\n")
    header.write(");\n")
    thunks_c.write(")\n{\n")

    def get_param_typename(param):
        param_size = param.type.get_size()
        if param.type.kind == clang.cindex.TypeKind.POINTER \
                or param.type.spelling.endswith("&") \
                or param.type.spelling == "vr::glSharedTextureHandle_t":
            return "ptr"
        elif param.type.spelling == "bool":
            return "bool"
        elif param.type.spelling == "float":
            return "float"
        elif param.type.spelling == "vr::HmdRect2_t":
            return "HmdRect2"
        elif param.type.spelling == "vr::HmdVector2_t":
            return "HmdVector2"
        elif param.type.spelling == "vr::HmdVector3_t":
            return "HmdVector3"
        elif param.type.spelling == "vr::HmdColor_t":
            return "HmdColor"
        elif param_size == 8:
            return "uint64"
        elif param_size == 4 or param_size == 2:
            return "uint32"
        else:
            return "unknown"

    thunks_c.write("    push_ptr_parameter(_this);\n")
    if returns_record:
        thunks_c.write("    push_ptr_parameter(_r);\n")
    for param in get_params(method):
        typename = get_param_typename(param)
        thunks_c.write("    push_%s_parameter(%s);\n" % (typename, param.spelling))
    if method.result_type.kind != clang.cindex.TypeKind.VOID:
        thunks_c.write("    return 0;\n")
    thunks_c.write("}\n")

    parameter_checks = []
    def add_parameter_check(typename, value):
        parameter_checks.append("check_%s_parameter(\"%s_%s\", %s)" % (typename, class_name, method_name, value))
    add_parameter_check("ptr", "this_ptr_value")
    f.write("\n")
    f.write("    clear_parameters();\n")
    f.write("    capi_%s_%s(" % (class_name, method_name))
    first_param = True
    if returns_record:
        f.write("data_ptr_value")
        first_param = False
        add_parameter_check("ptr", "data_ptr_value")
    for i, param in enumerate(get_params(method)):
        i += 1
        typename = get_param_typename(param)
        if typename == "ptr":
            v = "(void *)%s" % i
        elif typename == "bool":
            v = "1"
        elif typename == "float":
            v = "%s.0f" % i
        elif typename == "HmdRect2":
            v = "DEFAULT_RECT"
        elif typename == "HmdVector2":
            v = "DEFAULT_VECTOR2"
        elif typename == "HmdVector3":
            v = "DEFAULT_VECTOR3"
        elif typename == "HmdColor":
            v = "DEFAULT_COLOR"
        else:
            v = str(i)
        if not first_param:
            f.write(", ")
        first_param = False
        f.write(v)
        add_parameter_check(typename, v)
    f.write(");\n")
    for c in parameter_checks:
        f.write("    %s;\n" % c)

def generate_c_api_thunk_tests(winclassname, methods, method_names):
    class_name = re.sub(r'^win[A-Za-z]+_', '', winclassname)

    filename = "tests/capi_thunks_autogen.h"
    file_exists = os.path.isfile(filename)
    header = open(filename, "a")
    if not file_exists:
        header.write("""/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "cxx.h"
#include "flatapi.h"
#include "vrclient_defs.h"

#include "capi_thunks.h"
""")
    header.write("\nvoid test_capi_thunks_%s(void);\n" % class_name)

    filename = "tests/capi_thunks_autogen.c"
    file_exists = os.path.isfile(filename)
    thunks_c = open(filename, "a")
    if not file_exists:
        thunks_c.write("""/* This file is auto-generated, do not edit. */
#include "capi_thunks_autogen.h"
""")

    filename = "tests/capi_thunks_tests_autogen.c"
    file_exists = os.path.isfile(filename)
    with open(filename, "a") as f:
        if not file_exists:
            f.write("""/* This file is auto-generated, do not edit. */
#include "capi_thunks_autogen.h"
""")
        f.write("\nvoid test_capi_thunks_%s(void)\n{\n" % class_name)
        f.write("    struct thunk *t = alloc_thunks(1);\n");
        for i in range(len(methods)):
            generate_c_api_method_test(f, header, thunks_c, class_name, method_names[i], methods[i])
        f.write("    VirtualFree(t, 0, MEM_RELEASE);\n")
        f.write("}\n")

    filename = "tests/main_autogen.c"
    file_exists = os.path.isfile(filename)
    with open(filename, "a") as f:
        if not file_exists:
            f.write("""/* This file is auto-generated, do not edit. */
#include "capi_thunks_autogen.h"

#include <stdio.h>

int main(void)
{
""")
        f.write("    test_capi_thunks_%s();\n" % class_name)


#clang.cindex.Config.set_library_file("/usr/lib/llvm-3.8/lib/libclang-3.8.so.1");

prog = re.compile("^.*const\s*char.* \*?(\w*)_Version.*\"(.*)\"")
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
        tu = index.parse(input_name, args=['-x', 'c++', '-std=c++11', '-DGNUC', '-Iopenvr_%s/' % sdkver, '-I/usr/lib/clang/7.0.0/include/'])

        diagnostics = list(tu.diagnostics)
        if len(diagnostics) > 0:
            print('There were parse errors')
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

with open("tests/main_autogen.c", "a") as f:
    f.write("    printf(\"All tests executed.\\n\");\n")
    f.write("}\n")

generate_flatapi_c()
