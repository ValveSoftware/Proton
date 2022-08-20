#!/usr/bin/env python

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../lsteamclient/gen_wrapper.py

from __future__ import print_function

CLANG_PATH='/usr/lib/clang/13.0.0'

from clang.cindex import CursorKind, Index, Type, TypeKind
import pprint
import sys
import os
import re

sdk_versions = [
    "v1.16.8",
    "v1.14.15",
    "v1.13.10",
    "v1.12.5",
    "v1.11.11",
    "v1.10.30",
    "v1.9.16",
    "v1.8.19",
    "v1.7.15",
    "v1.6.10",
    "v1.5.17",
    "v1.4.18",
    "v1.3.22",
    "v1.2.10",
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
    ("ivrclientcore.h",
        [ #classes
        "IVRApplications",
        "IVRChaperone",
        "IVRChaperoneSetup",
        "IVRCompositor",
        "IVRControlPanel",
        "IVRDriverManager",
        "IVRExtendedDisplay",
        "IVRNotifications",
        "IVRInput",
        "IVRIOBuffer",
        "IVRMailbox",
        "IVROverlay",
        "IVRRenderModels",
        "IVRResources",
        "IVRScreenshots",
        "IVRSettings",
        "IVRSystem",
        "IVRTrackedCamera",
        "IVRHeadsetView",
        "IVROverlayView",
        "IVRClientCore",
        ], [ #vrclient-allocated structs
        "RenderModel_t",
        "RenderModel_TextureMap_t",
        ]
    ),
]

next_is_size_structs = [
        "VREvent_t",
        "VRControllerState001_t",
        "InputAnalogActionData_t",
        "InputDigitalActionData_t",
        "InputPoseActionData_t",
        "InputSkeletalActionData_t",
        "CameraVideoStreamFrameHeader_t",
        "Compositor_CumulativeStats",
        "VRActiveActionSet_t",
        "InputOriginInfo_t",
        "InputBindingInfo_t",
]

unhandled_next_is_size_structs = [
        "VROverlayIntersectionMaskPrimitive_t" # not next, but next-next uint32 is the size
]

struct_size_fields = {
        "Compositor_OverlaySettings": ["size"],
        "Compositor_FrameTiming": ["size", "m_nSize"],
        "DriverDirectMode_FrameTiming": ["m_nSize"],
}

path_conversions = [
    {
        "parent_name": "SetActionManifestPath",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchActionManifestPath"],
        "w2l_arrays": [False],
        "file_converter": "json_convert_action_manifest",
        "return_is_size": False
    },
    {
        "parent_name": "SetOverlayFromFile",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchFilePath"],
        "w2l_arrays": [False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "AddApplicationManifest",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchApplicationManifestFullPath"],
        "w2l_arrays": [False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "RemoveApplicationManifest",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchApplicationManifestFullPath"],
        "w2l_arrays": [False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "RequestScreenshot",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchPreviewFilename", "pchVRFilename"],
        "w2l_arrays": [False, False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "TakeStereoScreenshot",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchPreviewFilename", "pchVRFilename"],
        "w2l_arrays": [False, False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "SubmitScreenshot",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchSourcePreviewFilename", "pchSourceVRFilename"],
        "w2l_arrays": [False, False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "GetScreenshotPropertyFilename",
        "l2w_names":["pchFilename"],
        "l2w_lens":["cchFilename"],
        "w2l_names": [],
        "w2l_arrays": [],
        "file_converter": None,
        "return_is_size": True
    },
    {
        "parent_name": "undoc23",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["a"],
        "w2l_arrays": [False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "undoc27",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["a"],
        "w2l_arrays": [False],
        "file_converter": None,
        "return_is_size": False
    },
    {
        "parent_name": "SetStageOverride_Async",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchRenderModelPath"],
        "w2l_arrays": [False],
        "file_converter": None,
        "return_is_size": False
    },

#    {#maybe?
#        "parent_name": "GetRenderModelOriginalPath",
#        "l2w_names":[pchOriginalPath],
#        "l2w_lens":[unOriginalPathLen],
#        "w2l_names": [],
#        "w2l_arrays": [],
#        "return_is_size": False
#    },
#    {#maybe?
#        "parent_name": "GetResourceFullPath",
#        "l2w_names":[pchPathBuffer],
#        "l2w_lens":[unBufferLen],
#        "w2l_names": [pchResourceTypeDirectory],
#        "w2l_arrays": [False],
#        "return_is_size": False
#    },
    #IVRInput::GetInputSourceHandle
    #IVRIOBuffer::Open

    #TODO: LaunchInternalProcess, need steam cooperation
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

struct_conversion_cache = {}
struct_needs_size_adjustment_cache = {}

print_sizes = []

class_versions = {}

def get_params(f):
    return [p for p in f.get_children() if p.kind == CursorKind.PARM_DECL]

def ivrclientcore_is_hmd_present(cppname, method):
    return "ivrclientcore_is_hmd_present"

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

def ivrcompositor_set_skybox_override(cppname, method):
    if "008" in cppname:
        return "ivrcompositor_008_set_skybox_override"
    return "ivrcompositor_set_skybox_override"

def ivrcompositor_post_present_handoff(cppname, method):
    return "ivrcompositor_post_present_handoff"

def ivrcompositor_wait_get_poses(cppname, method):
    for version in ["016", "017", "018", "019", "020", "021", "022", "024", "026"]:
        if version in cppname:
            return "ivrcompositor_wait_get_poses"
    return None

def ivrcompositor_get_vulkan_device_extensions_required(cppname, method):
    return "ivrcompositor_get_vulkan_device_extensions_required"

def ivrrendermodels_load_texture_d3d11_async(cppname, method):
    assert "004" in cppname or "005" in cppname or "006" in cppname
    return "ivrrendermodels_load_texture_d3d11_async"

def ivrrendermodels_free_texture_d3d11(cppname, method):
    assert "004" in cppname or "005" in cppname or "006" in cppname
    return "ivrrendermodels_free_texture_d3d11"

def ivrrendermodels_load_into_texture_d3d11_async(cppname, method):
    assert "005" in cppname or "006" in cppname
    return "ivrrendermodels_load_into_texture_d3d11_async"

def ivrmailbox_undoc3(cppname, method):
    assert "001" in cppname
    return "ivrmailbox_undoc3"

def ivroverlay_set_overlay_texture(cppname, method):
    if "001" in cppname:
        return "ivroverlay_001_set_overlay_texture"
    for version in ["002", "003", "004", "005"]:
        if version in cppname:
            return "ivroverlay_005_set_overlay_texture"
    assert \
            "007" in cppname or \
            "008" in cppname or \
            "010" in cppname or \
            "011" in cppname or \
            "012" in cppname or \
            "013" in cppname or \
            "014" in cppname or \
            "016" in cppname or \
            "017" in cppname or \
            "018" in cppname or \
            "019" in cppname or \
            "020" in cppname or \
            "021" in cppname or \
            "022" in cppname or \
            "024" in cppname or \
            "025" in cppname
    return "ivroverlay_set_overlay_texture"

def ivrinput_get_digital_action_data(cppname, method):
    if "003" in cppname:
        return None
    return "ivrinput_get_digital_action_data"

method_overrides = [
    ("IVRClientCore", "BIsHmdPresent", ivrclientcore_is_hmd_present),
    ("IVRClientCore", "Init", ivrclientcore_init),
    ("IVRClientCore", "GetGenericInterface", ivrclientcore_get_generic_interface),
    ("IVRClientCore", "Cleanup", ivrclientcore_cleanup),
    ("IVRSystem", "GetDXGIOutputInfo", ivrsystem_get_dxgi_output_info),
    ("IVRSystem", "GetOutputDevice", ivrsystem_get_output_device),
    ("IVRCompositor", "Submit", ivrcompositor_submit),
    ("IVRCompositor", "SetSkyboxOverride", ivrcompositor_set_skybox_override),
    ("IVRCompositor", "PostPresentHandoff", ivrcompositor_post_present_handoff),
    ("IVRCompositor", "WaitGetPoses", ivrcompositor_wait_get_poses),
    ("IVRCompositor", "GetVulkanDeviceExtensionsRequired", ivrcompositor_get_vulkan_device_extensions_required),
    ("IVRRenderModels", "LoadTextureD3D11_Async", ivrrendermodels_load_texture_d3d11_async),
    ("IVRRenderModels", "FreeTextureD3D11", ivrrendermodels_free_texture_d3d11),
    ("IVRRenderModels", "LoadIntoTextureD3D11_Async", ivrrendermodels_load_into_texture_d3d11_async),
    ("IVRMailbox", "undoc3", ivrmailbox_undoc3),
    ("IVROverlay", "SetOverlayTexture", ivroverlay_set_overlay_texture),
    ("IVRInput",  "GetDigitalActionData", ivrinput_get_digital_action_data),
]

method_overrides_data = [
    ("IVRClientCore", "struct client_core_data", None),
]

def display_sdkver(s):
    if s.startswith("v"):
        s = s[1:]
    return s.replace(".", "")

def strip_ns(name):
    return name.replace("vr::","")

def get_path_converter(parent):
    for conv in path_conversions:
        if conv["parent_name"] in parent.spelling:
            if None in conv["l2w_names"]:
                return conv
            if type(parent) == Type:
                children = list(parent.get_fields())
            else:
                children = list(parent.get_children())
            for child in children:
                if child.spelling in conv["w2l_names"] or \
                        child.spelling in conv["l2w_names"]:
                    return conv
    return None

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
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD
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
    do_win_to_lin = None
    do_size_fixup = None
    do_wrap = None
    do_unwrap = None
    need_convert = []
    for param in get_params(method):
        if param.type.kind == TypeKind.POINTER and \
                param.type.get_pointee().kind == TypeKind.UNEXPOSED:
            #unspecified function pointer
            typename = "void *"
        else:
            typename = param.type.spelling.split("::")[-1].replace("&", "*")
            real_type = param.type;
            while real_type.kind == TypeKind.POINTER:
                real_type = real_type.get_pointee()
            if param.type.kind == TypeKind.POINTER:
                if strip_ns(param.type.get_pointee().get_canonical().spelling) in system_structs:
                    do_unwrap = (strip_ns(param.type.get_pointee().get_canonical().spelling), param.spelling)
                    typename = "win" + do_unwrap[0] + "_" + display_sdkver(sdkver) + " *"
                elif param.type.get_pointee().get_canonical().kind == TypeKind.POINTER and \
                        strip_ns(param.type.get_pointee().get_pointee().get_canonical().spelling) in system_structs:
                    do_wrap = (strip_ns(param.type.get_pointee().get_pointee().get_canonical().spelling), param.spelling)
                    typename = "win" + do_wrap[0] + "_" + display_sdkver(sdkver) + " **"
                elif real_type.get_canonical().kind == TypeKind.RECORD and \
                        struct_needs_conversion(real_type.get_canonical()):
                    do_win_to_lin = (strip_const(strip_ns(real_type.get_canonical().spelling)), param.spelling)
                    if not real_type.is_const_qualified():
                        do_lin_to_win = (strip_const(strip_ns(real_type.get_canonical().spelling)), param.spelling)
                    #preserve pointers
                    typename = typename.replace(strip_ns(real_type.spelling), "win%s_%s" % (strip_ns(real_type.get_canonical().spelling), display_sdkver(sdkver)))
                elif real_type.get_canonical().kind == TypeKind.RECORD and \
                        strip_ns(real_type.spelling) in next_is_size_structs and \
                        struct_needs_size_adjustment(real_type.get_canonical()):
                    do_size_fixup = (strip_const(strip_ns(real_type.get_canonical().spelling)), param.spelling)

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

    path_conv = get_path_converter(method)

    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                cfile.write("    const char **lin_%s = vrclient_dos_to_unix_stringlist(%s);\n" % (path_conv["w2l_names"][i], path_conv["w2l_names"][i]))
                # TODO
                pass
            else:
                cfile.write("    char lin_%s[PATH_MAX];\n" % path_conv["w2l_names"][i])
                cfile.write("    vrclient_dos_path_to_unix_path(%s, lin_%s);\n" % (path_conv["w2l_names"][i], path_conv["w2l_names"][i]))
                if path_conv["file_converter"] is not None:
                    cfile.write("    %s(lin_%s);\n" % (path_conv["file_converter"], path_conv["w2l_names"][i]))
        if None in path_conv["l2w_names"]:
            cfile.write("    const char *path_result;\n")
        elif path_conv["return_is_size"]:
            cfile.write("    uint32_t path_result;\n")
        elif len(path_conv["l2w_names"]) > 0:
            cfile.write("    %s path_result;\n" % method.result_type.spelling)

    if do_lin_to_win or do_win_to_lin:
        if do_lin_to_win:
            cpp.write("    %s lin;\n" % do_lin_to_win[0])
        else:
            cpp.write("    %s lin;\n" % do_win_to_lin[0])
        if not method.result_type.kind == TypeKind.VOID:
            cpp.write("    %s _ret;\n" % method.result_type.spelling)

    if do_wrap:
        cpp.write("    %s *lin;\n" % do_wrap[0])
        if not method.result_type.kind == TypeKind.VOID:
            cpp.write("    %s _ret;\n" % method.result_type.spelling)

    cfile.write("    TRACE(\"%p\\n\", _this);\n")

    if do_win_to_lin:
        #XXX we should pass the struct size here
        cpp.write("    if(%s)\n" % do_win_to_lin[1])
        cpp.write("        struct_%s_%s_win_to_lin(%s, &lin);\n" % (strip_ns(do_win_to_lin[0]), display_sdkver(sdkver), do_win_to_lin[1]))

    if method.result_type.kind == TypeKind.VOID:
        cfile.write("    ")
        cpp.write("    ")
    elif path_conv and (len(path_conv["l2w_names"]) > 0 or path_conv["return_is_size"]):
        cfile.write("    path_result = ")
        cpp.write("    return ")
    elif returns_record:
        cfile.write("    *_r = ")
        cpp.write("    return ")
    elif do_lin_to_win or do_win_to_lin:
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
    next_is_size_no_conv = False
    convert_size_param = ""
    for param in get_params(method):
        if not first:
            cpp.write(", ")
        else:
            first = False
        if param.spelling == "":
            cfile.write(", _%s" % unnamed)
            cpp.write("(%s)_%s" % (param.type.spelling, unnamed))
            unnamed = chr(ord(unnamed) + 1)
        else:
            if do_lin_to_win and do_lin_to_win[1] == param.spelling or \
                    do_win_to_lin and do_win_to_lin[1] == param.spelling or \
                    do_wrap and do_wrap[1] == param.spelling:
                cfile.write(", %s" % param.spelling)
                cpp.write("%s ? &lin : nullptr" % param.spelling)
                if do_win_to_lin:
                    assert(not do_win_to_lin[0] in unhandled_next_is_size_structs)
                    if do_win_to_lin[0] in next_is_size_structs:
                        next_is_size = True
            elif do_unwrap and do_unwrap[1] == param.spelling:
                cfile.write(", %s" % param.spelling)
                cpp.write("struct_%s_%s_unwrap(%s)" % (strip_ns(do_unwrap[0]), display_sdkver(sdkver), do_unwrap[1]))
            elif path_conv and param.spelling in path_conv["w2l_names"]:
                cfile.write(", %s ? lin_%s : NULL" % (param.spelling, param.spelling))
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
            elif do_size_fixup and do_size_fixup[1] == param.spelling:
                next_is_size = True
                next_is_size_no_conv = True
                cfile.write(", %s" % param.spelling)
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
            elif next_is_size:
                cfile.write(", %s" % param.spelling)
                next_is_size = False
                if next_is_size_no_conv and param.type.spelling == "uint32_t":
                    cpp.write("std::min(%s, (uint32_t)sizeof(vr::%s))" % (param.spelling, do_size_fixup[0]))
                    convert_size_param = ", " + param.spelling
                elif param.type.spelling == "uint32_t":
                    cpp.write("%s ? sizeof(lin) : 0" % param.spelling)
                    convert_size_param = ", " + param.spelling
                else:
                    cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
                    convert_size_param = ", -1"
                next_is_size_no_conv = False
            elif "&" in param.type.spelling:
                cfile.write(", %s" % param.spelling)
                cpp.write("*%s" % param.spelling)
            else:
                cfile.write(", %s" % param.spelling)
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
    if path_conv and len(path_conv["l2w_names"]) > 0:
        for i in range(len(path_conv["l2w_names"])):
            assert(path_conv["l2w_names"][i]) #otherwise, no name means string is in return value. needs special handling.
            cfile.write("    ")
            if path_conv["return_is_size"]:
                cfile.write("path_result = ")
            cfile.write("vrclient_unix_path_to_dos_path(path_result, %s, %s, %s);\n" % (path_conv["l2w_names"][i], path_conv["l2w_names"][i], path_conv["l2w_lens"][i]))
        cfile.write("    return path_result;\n")
    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                cfile.write("    vrclient_free_stringlist(lin_%s);\n" % path_conv["w2l_names"][i])
    if do_lin_to_win:
        if next_is_size and not convert_size_param:
            convert_size_param = ", -1"
        cpp.write("    if(%s)\n" % do_lin_to_win[1])
        cpp.write("        struct_%s_%s_lin_to_win(&lin, %s%s);\n" % (strip_ns(do_lin_to_win[0]), display_sdkver(sdkver), do_lin_to_win[1], convert_size_param))
    if do_lin_to_win or do_win_to_lin:
        if not method.result_type.kind == TypeKind.VOID:
            cpp.write("    return _ret;\n")
    if do_wrap and not method.result_type.kind == TypeKind.VOID:
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
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD
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
        if child.kind == CursorKind.CXX_METHOD:
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

def strip_const(typename):
    return typename.replace("const ", "", 1)

windows_structs32 = {}
def find_windows_struct(struct):
    return windows_structs32.get(strip_const(struct.spelling), None)

windows_structs64 = {}
def find_windows64_struct(struct):
    return windows_structs64.get(strip_const(struct.spelling), None)

linux_structs64 = {}
def find_linux64_struct(struct):
    return linux_structs64.get(strip_const(struct.spelling), None)

def struct_needs_conversion_nocache(struct):
#    if strip_const(struct.spelling) in exempt_structs:
#        return False
#    if strip_const(struct.spelling) in manually_handled_structs:
#        return True

    needs_size_adjustment = False

    #check 32-bit compat
    windows_struct = find_windows_struct(struct)
    assert(not windows_struct is None) #must find windows_struct
    for field in struct.get_fields():
        if struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True, False
        if field.type.get_canonical().kind == TypeKind.RECORD and \
                struct_needs_conversion(field.type.get_canonical()):
            return True, False

    assert(struct.get_size() <= windows_struct.get_size())
    if struct.get_size() < windows_struct.get_size():
        needs_size_adjustment = True

    #check 64-bit compat
    windows_struct = find_windows64_struct(struct)
    assert(not windows_struct is None) #must find windows_struct
    lin64_struct = find_linux64_struct(struct)
    assert(not lin64_struct is None) #must find lin64_struct
    for field in lin64_struct.get_fields():
        if lin64_struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True, False
        if field.type.get_canonical().kind == TypeKind.RECORD and \
                struct_needs_conversion(field.type.get_canonical()):
            return True, False

    assert(lin64_struct.get_size() <= windows_struct.get_size())
    if lin64_struct.get_size() < windows_struct.get_size():
        needs_size_adjustment = True

    return False, needs_size_adjustment

def struct_needs_conversion(struct):
    if not sdkver in struct_conversion_cache:
        struct_conversion_cache[sdkver] = {}
        struct_needs_size_adjustment_cache[sdkver] = {}

    if not strip_const(struct.spelling) in struct_conversion_cache[sdkver]:
        struct_conversion_cache[sdkver][strip_const(struct.spelling)], \
                struct_needs_size_adjustment_cache[sdkver][strip_const(struct.spelling)] = \
                struct_needs_conversion_nocache(struct)

    return struct_conversion_cache[sdkver][strip_const(struct.spelling)]

def struct_needs_size_adjustment(struct):
    return not struct_needs_conversion(struct) and struct_needs_size_adjustment_cache[sdkver][strip_const(struct.spelling)]

def get_field_attribute_str(field):
    ftype = field.type.get_canonical()
    if ftype.kind != TypeKind.RECORD:
        return ""
    win_struct = find_windows_struct(ftype)
    align = win_struct.get_align()
    return " __attribute__((aligned(" + str(align) + ")))"

generated_struct_handlers = []
cpp_files_need_close_brace = []

LIN_TO_WIN=1
WIN_TO_LIN=2
WRAPPERS=3

#because of struct packing differences between win32 and linux, we
#need to convert these structs from their linux layout to the win32
#layout.
def handle_struct(sdkver, struct):
    handler_name = "%s_%s" % (struct.displayname, display_sdkver(sdkver))

    if handler_name in generated_struct_handlers:
        # we already have a handler for the struct struct of this size
        return

    which = set()

    if struct_needs_conversion(struct.type.get_canonical()):
        which.add(LIN_TO_WIN)
        which.add(WIN_TO_LIN)

    if strip_ns(struct.displayname) in system_structs:
        which.add(WRAPPERS)

    if len(which) == 0:
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

    cppfile.write("#pragma pack(push, 8)\n")
    cppfile.write("struct win%s {\n" % handler_name)
    for m in struct.get_children():
        if m.kind == CursorKind.FIELD_DECL:
            if m.type.get_canonical().kind == TypeKind.CONSTANTARRAY:
                cppfile.write("    %s %s[%u]" % (m.type.element_type.spelling, m.displayname, m.type.element_count))
            elif m.type.get_canonical().kind == TypeKind.RECORD and \
                    struct_needs_conversion(m.type.get_canonical()):
                cppfile.write("    win%s_%s %s" % (strip_ns(m.type.spelling), display_sdkver(sdkver), m.displayname))
            else:
                if m.type.get_canonical().kind == TypeKind.POINTER and \
                        m.type.get_pointee().kind == TypeKind.FUNCTIONPROTO:
                    cppfile.write("    void *%s /*fn pointer*/ " % m.displayname)
                else:
                    cppfile.write("    %s %s" % (m.type.spelling, m.displayname))
            cppfile.write(get_field_attribute_str(m) + ";\n")
    if WRAPPERS in which:
        cppfile.write("\n    %s *linux_side;\n" % struct.displayname)
    cppfile.write("}  __attribute__ ((ms_struct));\n")
    cppfile.write("#pragma pack(pop)\n\n")

    def dump_converter(src, dst, size):
        for m in struct.get_children():
            if m.kind == CursorKind.FIELD_DECL:
                if m.type.get_canonical().kind == TypeKind.CONSTANTARRAY:
                    #TODO: if this is a struct, or packed differently, we'll have to
                    # copy each element in a for-loop
                    cppfile.write("    memcpy(" + dst + "->" + m.displayname + ", " + src + "->" + m.displayname + ", sizeof(" + dst + "->" + m.displayname + "));\n")
                elif m.type.get_canonical().kind == TypeKind.RECORD and \
                        struct_needs_conversion(m.type.get_canonical()):
                    cppfile.write("    struct_" + strip_ns(m.type.spelling) + "_" + display_sdkver(sdkver) + "_" + src + "_to_" + dst + \
                            "(&" + src + "->" + m.displayname + ", &" + dst + "->" + m.displayname + ");\n")
                elif struct.displayname in struct_size_fields and \
                    m.displayname in struct_size_fields[struct.displayname]:
                        cppfile.write("    " + dst + "->" + m.displayname + " = sizeof(*" + dst + ");\n")
                elif size and strip_ns(m.type.get_canonical().spelling) == "VREvent_Data_t":
                    #truncate variable-length data struct at the end of the parent struct
                    #XXX: dumb hard-coding. are the other types with lengths variable length?
                    cppfile.write("    memcpy(&" + dst + "->data, &" + src + "->data, " + size + " - (((char*)&" + dst + "->data) - ((char*)" + dst + ")));\n")
                else:
                    cppfile.write("    " + dst + "->" + m.displayname + " = " + src + "->" + m.displayname + ";\n")

    if strip_ns(struct.displayname) in next_is_size_structs:
        size_arg = "sz"
        size_arg_type = ", uint32_t sz"
    else:
        size_arg = None
        size_arg_type = ""

    if LIN_TO_WIN in which:
        hfile.write("extern void struct_%s_lin_to_win(void *l, void *w%s);\n" % (handler_name, size_arg_type))
        cppfile.write("void struct_%s_lin_to_win(void *l, void *w%s)\n{\n" % (handler_name, size_arg_type))
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (handler_name, handler_name))
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.displayname, struct.displayname))
        dump_converter("lin", "win", size_arg)
        cppfile.write("}\n\n")

    if WIN_TO_LIN in which:
        #XXX: should pass size param here, too
        hfile.write("extern void struct_%s_win_to_lin(void *w, void *l);\n" % handler_name)
        cppfile.write("void struct_%s_win_to_lin(void *w, void *l)\n{\n" % handler_name)
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (handler_name, handler_name))
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.displayname, struct.displayname))
        dump_converter("win", "lin", None)
        cppfile.write("}\n\n")

    if WRAPPERS in which:
        hfile.write("extern struct win%s *struct_%s_wrap(void *l);\n" % (handler_name, handler_name))

        cppfile.write("struct win%s *struct_%s_wrap(void *l)\n{\n" % (handler_name, handler_name))
        cppfile.write("    struct win%s *win = (struct win%s *)malloc(sizeof(*win));\n" % (handler_name, handler_name))
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.displayname, struct.displayname))

        dump_converter("lin", "win", None)

        cppfile.write("    win->linux_side = lin;\n");
        cppfile.write("    return win;\n")

        cppfile.write("}\n\n")

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

    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD
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
        if param.type.kind == TypeKind.POINTER \
                and param.type.get_pointee().kind == TypeKind.UNEXPOSED:
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
        if param.type.kind == TypeKind.POINTER \
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
    if method.result_type.kind != TypeKind.VOID:
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


prog = re.compile("^.*const\s*char.* \*?(\w*)_Version.*\"(.*)\"")
for sdkver in sdk_versions:
    print(f'parsing SDK version {sdkver}...')
    sdkdir = f'openvr_{sdkver}'

    sources = {}
    iface_versions = {}
    has_vrclientcore = False
    for file in os.listdir(sdkdir):
        x = open(f"{sdkdir}/{file}", "r")
        if file == "ivrclientcore.h":
            has_vrclientcore = True

        for l in x:
            if "_Version" in l:
                result = prog.match(l)
                if result:
                    iface, version = result.group(1, 2)
                    iface_versions[iface] = version

    if not has_vrclientcore:
        source = [f'#include "{sdkdir}/openvr.h"']
    else:
        source = [f'#include "{sdkdir}/{file}"' for file, _, _ in files]

    sources["source.cpp"] = "\n".join(source)
    windows_args = ["-D_WIN32", "-fms-extensions", "-Wno-ignored-attributes",
                    "-mms-bitfields", "-U__linux__", "-Wno-incompatible-ms-struct"]
    windows_args += ['-I' + CLANG_PATH + '/include/']
    linux_args = ["-DGNUC"]
    linux_args += ['-I' + CLANG_PATH + '/include/']

    index = Index.create()

    linux_build32 = index.parse("source.cpp", args=linux_args + ["-m32"], unsaved_files=sources.items())
    diagnostics = list(linux_build32.diagnostics)
    for diag in diagnostics: print(diag)
    assert len(diagnostics) == 0

    linux_build64 = index.parse("source.cpp", args=linux_args + ["-m64"], unsaved_files=sources.items())
    diagnostics = list(linux_build64.diagnostics)
    for diag in diagnostics: print(diag)
    assert len(diagnostics) == 0

    windows_build32 = index.parse("source.cpp", args=windows_args + ["-m32"], unsaved_files=sources.items())
    diagnostics = list(windows_build32.diagnostics)
    for diag in diagnostics: print(diag)
    assert len(diagnostics) == 0

    windows_build64 = index.parse("source.cpp", args=windows_args + ["-m64"], unsaved_files=sources.items())
    diagnostics = list(windows_build64.diagnostics)
    for diag in diagnostics: print(diag)
    assert len(diagnostics) == 0

    classes = sum([e for _, e, _ in files], [])
    system_structs = sum([e for _, _, e in files], [])

    def enumerate_structs(cursor, vr_only=False):
        for child in cursor.get_children():
            if child.kind == CursorKind.NAMESPACE and child.displayname == "vr":
                yield from child.get_children()
            elif not vr_only:
                yield child

    windows_structs32 = dict(reversed([(child.type.spelling, child.type) for child
                                       in enumerate_structs(windows_build32.cursor)]))
    windows_structs64 = dict(reversed([(child.type.spelling, child.type) for child
                                       in enumerate_structs(windows_build64.cursor)]))
    linux_structs64 = dict(reversed([(child.type.spelling, child.type) for child
                                     in enumerate_structs(linux_build64.cursor)]))

    for child in enumerate_structs(linux_build32.cursor, vr_only=True):
        if child.kind == CursorKind.CLASS_DECL and child.displayname in classes:
            handle_class(sdkver, child)
        if child.kind in [CursorKind.STRUCT_DECL, CursorKind.CLASS_DECL]:
            handle_struct(sdkver, child)
        if child.displayname in print_sizes:
            sys.stdout.write("size of %s is %u\n" % (child.displayname, child.type.get_size()))

for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

with open("tests/main_autogen.c", "a") as f:
    f.write("    printf(\"All tests executed.\\n\");\n")
    f.write("}\n")

generate_flatapi_c()
