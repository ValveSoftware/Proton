#!/usr/bin/env python

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../lsteamclient/gen_wrapper.py

CLANG_PATH='/usr/lib/clang/15'

from clang.cindex import Cursor, CursorKind, Index, Type, TypeKind
import concurrent.futures
import os
import re

SDK_VERSIONS = [
    "v1.26.7",
    "v1.23.7",
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

ABIS = ['u32', 'u64', 'w32', 'w64']

SDK_SOURCES = {
    "ivrclientcore.h": [
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
        ],
    ],
}

SDK_CLASSES = {klass: source for source, value in SDK_SOURCES.items()
               for klass in value[0]}
SDK_STRUCTS = {klass: source for source, value in SDK_SOURCES.items()
               for klass in value[1]}

STRUCTS_NEXT_IS_SIZE = [
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

STRUCTS_NEXT_IS_SIZE_UNHANDLED = [
    "VROverlayIntersectionMaskPrimitive_t" # not next, but next-next uint32 is the size
]

STRUCTS_SIZE_FIELD = {
    "Compositor_OverlaySettings": ["size"],
    "Compositor_FrameTiming": ["size", "m_nSize"],
    "DriverDirectMode_FrameTiming": ["m_nSize"],
}

PATH_CONV = [
    {
        "parent_name": "SetActionManifestPath",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchActionManifestPath"],
        "w2l_arrays": [False],
        "return_is_size": False
    },
    {
        "parent_name": "SetOverlayFromFile",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchFilePath"],
        "w2l_arrays": [False],
        "return_is_size": False
    },
    {
        "parent_name": "AddApplicationManifest",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchApplicationManifestFullPath"],
        "w2l_arrays": [False],
        "return_is_size": False
    },
    {
        "parent_name": "RemoveApplicationManifest",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchApplicationManifestFullPath"],
        "w2l_arrays": [False],
        "return_is_size": False
    },
    {
        "parent_name": "RequestScreenshot",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchPreviewFilename", "pchVRFilename"],
        "w2l_arrays": [False, False],
        "return_is_size": False
    },
    {
        "parent_name": "TakeStereoScreenshot",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchPreviewFilename", "pchVRFilename"],
        "w2l_arrays": [False, False],
        "return_is_size": False
    },
    {
        "parent_name": "SubmitScreenshot",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchSourcePreviewFilename", "pchSourceVRFilename"],
        "w2l_arrays": [False, False],
        "return_is_size": False
    },
    {
        "parent_name": "GetScreenshotPropertyFilename",
        "l2w_names":["pchFilename"],
        "l2w_lens":["cchFilename"],
        "w2l_names": [],
        "w2l_arrays": [],
        "return_is_size": True
    },
    {
        "parent_name": "undoc23",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["a"],
        "w2l_arrays": [False],
        "return_is_size": False
    },
    {
        "parent_name": "undoc27",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["a"],
        "w2l_arrays": [False],
        "return_is_size": False
    },
    {
        "parent_name": "SetStageOverride_Async",
        "l2w_names":[],
        "l2w_lens":[],
        "w2l_names": ["pchRenderModelPath"],
        "w2l_arrays": [False],
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

struct_conversion_cache = {}
struct_needs_size_adjustment_cache = {}

all_classes = {}
all_records = {}
all_structs = {}
all_sources = {}
all_versions = {}


MANUAL_METHODS = {
    "IVRSystem_GetDXGIOutputInfo": True,
    "IVRSystem_GetOutputDevice": lambda ver, abi: ver > 16,
    "IVRRenderModels_LoadTextureD3D11_Async": True,
    "IVRRenderModels_FreeTextureD3D11": True,
    "IVRRenderModels_LoadIntoTextureD3D11_Async": True,
}


def is_manual_method(klass, method, abi):
    version = re.search(r'(\d+)$', klass.version)

    key = f'{klass.spelling}_{method.name}'
    needs_manual = MANUAL_METHODS.get(key, False)

    if callable(needs_manual) and version:
        return needs_manual(int(version[0]), abi)
    return needs_manual


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
            "025" in cppname or \
            "026" in cppname or \
            "027" in cppname
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
    ("IVRCompositor", "Submit", ivrcompositor_submit),
    ("IVRCompositor", "SetSkyboxOverride", ivrcompositor_set_skybox_override),
    ("IVRCompositor", "PostPresentHandoff", ivrcompositor_post_present_handoff),
    ("IVRCompositor", "WaitGetPoses", ivrcompositor_wait_get_poses),
    ("IVRCompositor", "GetVulkanDeviceExtensionsRequired", ivrcompositor_get_vulkan_device_extensions_required),
    ("IVRMailbox", "undoc3", ivrmailbox_undoc3),
    ("IVROverlay", "SetOverlayTexture", ivroverlay_set_overlay_texture),
    ("IVRInput",  "GetDigitalActionData", ivrinput_get_digital_action_data),
]

method_overrides_data = [
    ("IVRClientCore", "struct client_core_data", None),
]


class Method:
    def __init__(self, sdkver, abi, cursor, index, override):
        self._sdkver = sdkver
        self._abi = abi

        self._cursor = cursor
        self._index = index
        self._override = override

        self.result_type = cursor.result_type
        self.spelling = cursor.spelling

    @property
    def name(self):
        if self._override > 1: return f'{self.spelling}_{self._override}'
        return self.spelling

    def get_arguments(self):
        return self._cursor.get_arguments()

    def get_children(self):
        return self._cursor.get_children()


class Destructor(Method):
    def __init__(self, sdkver, abi, cursor, index, override):
        super().__init__(sdkver, abi, cursor, index, override)

    @property
    def name(self):
        if self._override > 1: return f'destructor_{self._override}'
        return 'destructor'


class Class:
    def __init__(self, sdkver, abi, cursor):
        self._sdkver = sdkver
        self._abi = abi

        self._cursor = cursor

        self.spelling = cursor.spelling
        self.filename = SDK_CLASSES[self.spelling]
        self.version = all_versions[sdkver][self.spelling]

        self._methods = None

    @property
    def methods(self):
        if self._methods:
            return self._methods

        overrides = {}
        is_method = lambda c: c.kind == CursorKind.CXX_METHOD and c.is_virtual_method()
        in_vtable = lambda c: is_method(c) or c.kind == CursorKind.DESTRUCTOR

        self._methods = []
        for i, method in enumerate(filter(in_vtable, self._cursor.get_children())):
            index, override = overrides.get(method.spelling, (i, 1))
            overrides[method.spelling] = (index, override + 1)
            if method.kind == CursorKind.DESTRUCTOR:
                self._methods.append(Destructor(self._sdkver, self._abi, method, index, override))
            else:
                self._methods.append(Method(self._sdkver, self._abi, method, index, override))

        return self._methods

    def get_children(self):
        return self._cursor.get_children()


def display_sdkver(s):
    if s.startswith("v"):
        s = s[1:]
    return s.replace(".", "")

def strip_ns(name):
    return name.replace("vr::","")

def get_path_converter(parent):
    for conv in PATH_CONV:
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


def underlying_type(decl):
    if type(decl) is Cursor:
        decl = decl.type
    decl = decl.get_canonical()
    if decl.kind == TypeKind.LVALUEREFERENCE: return underlying_type(decl.get_pointee())
    if decl.kind == TypeKind.CONSTANTARRAY: return underlying_type(decl.element_type)
    if decl.kind == TypeKind.POINTER: return underlying_type(decl.get_pointee())
    return decl


def declspec(decl, name):
    if type(decl) is Cursor:
        decl = decl.type

    const = 'const ' if decl.is_const_qualified() else ''
    if decl.kind in (TypeKind.POINTER, TypeKind.LVALUEREFERENCE):
        decl = decl.get_pointee()
        return declspec(decl, f"*{const}{name}")
    if decl.kind == TypeKind.CONSTANTARRAY:
        decl, count = decl.element_type, decl.element_count
        return declspec(decl, f"({const}{name})[{count}]")

    if len(name):
        name = f' {name}'

    if decl.kind in (TypeKind.UNEXPOSED, TypeKind.FUNCTIONPROTO):
        return f'void{name}'
    if decl.kind == TypeKind.ENUM:
        return f'{decl.spelling.split("::")[-1]}{name}'

    real_name = canonical_typename(decl)
    real_name = real_name.removeprefix("const ")
    real_name = real_name.removeprefix("vr::")

    if real_name in SDK_STRUCTS:
        typename = f"win{real_name}_{display_sdkver(sdkver)}"
    elif struct_needs_conversion(decl.get_canonical()) \
         and not decl.is_const_qualified(): # FIXME
        typename = f"win{real_name}_{display_sdkver(sdkver)}"
    else:
        typename = decl.spelling
        typename = typename.removeprefix("const ")
        typename = typename.removeprefix("vr::")

    return f'{const}{typename}{name}'


def handle_method_hpp(method, cppname, out):
    ret = f'{declspec(method.result_type, "")} '

    params = [declspec(p, "") for p in method.get_arguments()]
    params = ['void *'] + params

    out(f'extern {ret}{cppname}_{method.name}({", ".join(params)});\n')


def handle_method_cpp(method, classname, cppname, out):
    returns_void = method.result_type.kind == TypeKind.VOID

    ret = f'{declspec(method.result_type, "")} '

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]
    params = [declspec(p, names[i]) for i, p in enumerate(method.get_arguments())]

    names = ['linux_side'] + names
    params = ['void *linux_side'] + params

    out(f'{ret}{cppname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    if not returns_void:
        out(f'    {declspec(method.result_type, "_ret")};\n')

    do_lin_to_win = None
    do_win_to_lin = None
    do_wrap = None
    do_unwrap = None
    for param in method.get_arguments():
        if param.type.kind == TypeKind.POINTER and \
                param.type.get_pointee().kind == TypeKind.UNEXPOSED:
            #unspecified function pointer
            continue

        real_type = param.type;
        while real_type.kind == TypeKind.POINTER:
            real_type = real_type.get_pointee()
        if param.type.kind == TypeKind.POINTER:
            if strip_ns(param.type.get_pointee().get_canonical().spelling) in SDK_STRUCTS:
                do_unwrap = (strip_ns(param.type.get_pointee().get_canonical().spelling), param.spelling)
            elif param.type.get_pointee().get_canonical().kind == TypeKind.POINTER and \
                    strip_ns(param.type.get_pointee().get_pointee().get_canonical().spelling) in SDK_STRUCTS:
                do_wrap = (strip_ns(param.type.get_pointee().get_pointee().get_canonical().spelling), param.spelling)
            elif real_type.get_canonical().kind == TypeKind.RECORD and \
                    struct_needs_conversion(real_type.get_canonical()):
                real_name = canonical_typename(real_type)
                do_win_to_lin = (strip_ns(real_name), param.spelling)
                if not real_type.is_const_qualified():
                    do_lin_to_win = (strip_ns(real_name), param.spelling)

    if do_lin_to_win or do_win_to_lin:
        if do_lin_to_win:
            out(f'    {do_lin_to_win[0]} lin;\n')
        else:
            out(f'    {do_win_to_lin[0]} lin;\n')

    if do_wrap:
        out(f'    {do_wrap[0]} *lin;\n')

    if do_win_to_lin:
        #XXX we should pass the struct size here
        out(f'    if ({do_win_to_lin[1]})\n')
        out(f'        struct_{strip_ns(do_win_to_lin[0])}_{display_sdkver(sdkver)}_win_to_lin({do_win_to_lin[1]}, &lin);\n')


    size_fixup = {}
    convert_size_param = ""
    params = list(zip(names[1:], method.get_arguments()))
    params += [(None, None)] # for next_name, next_param
    for i, (name, param) in enumerate(params[:-1]):
        real_type = underlying_type(param)
        if strip_ns(real_type.spelling) not in STRUCTS_NEXT_IS_SIZE:
            continue

        next_name, next_param = params[i + 1]
        if not next_param or next_param.type.spelling != "uint32_t":
            convert_size_param = ', -1'
        elif struct_needs_size_adjustment(real_type.get_canonical()):
            real_name = real_type.spelling
            out(f'    uint32_t lin_{next_name} = std::min({next_name}, (uint32_t)sizeof({real_name}));\n')
            convert_size_param = f', {next_name}'
            size_fixup[next_name] = True
        elif do_win_to_lin and do_win_to_lin[1] == name:
            assert do_win_to_lin[0] not in STRUCTS_NEXT_IS_SIZE_UNHANDLED
            out(f'    uint32_t lin_{next_name} = {next_name} ? sizeof(lin) : 0;\n')
            convert_size_param = f', {next_name}'
            size_fixup[next_name] = True

    if returns_void:
        out(u'    ')
    else:
        out(u'    _ret = ')

    params = []
    for name, param in zip(names[1:], method.get_arguments()):
        if name in size_fixup:
            params.append(f'lin_{name}')
        elif do_lin_to_win and do_lin_to_win[1] == name or \
                do_win_to_lin and do_win_to_lin[1] == name or \
                do_wrap and do_wrap[1] == name:
            params.append("%s ? &lin : nullptr" % name)
        elif do_unwrap and do_unwrap[1] == name:
            params.append("struct_%s_%s_unwrap(%s)" % (strip_ns(do_unwrap[0]), display_sdkver(sdkver), do_unwrap[1]))
        elif "&" in param.type.spelling:
            params.append("*%s" % name)
        else:
            params.append("(%s)%s" % (param.type.spelling, name))

    out(f'(({classname}*)linux_side)->{method.spelling}({", ".join(params)});\n')

    if do_lin_to_win:
        out(f'    if ({do_lin_to_win[1]})\n')
        out(f'        struct_{strip_ns(do_lin_to_win[0])}_{display_sdkver(sdkver)}_lin_to_win(&lin, {do_lin_to_win[1]}{convert_size_param});\n')
    if do_wrap and not returns_void:
            out(u'    if (_ret == 0)\n')
            out(f'        *{do_wrap[1]} = struct_{strip_ns(do_wrap[0])}_{display_sdkver(sdkver)}_wrap(lin);\n')

    if not returns_void:
        out(u'    return _ret;\n')
    out(u'}\n\n')


def handle_thiscall_wrapper(klass, method, out):
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    def param_stack_size(param):
        if param.type.kind == TypeKind.LVALUEREFERENCE: return 4
        return ((param.type.get_size() + 3) // 4) * 4

    size = 4 + sum(param_stack_size(p) for p in method.get_arguments())
    if returns_record: size += 4

    name = f'win{klass.spelling}_{klass.version}_{method.name}'
    out(f'DEFINE_THISCALL_WRAPPER({name}, {size})\n')


def handle_method_c(klass, method, winclassname, cppname, out):
    returns_void = method.result_type.kind == TypeKind.VOID
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    ret = "*" if returns_record else ""
    ret = f'{declspec(method.result_type, ret)} '

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]
    params = [declspec(p, names[i]) for i, p in enumerate(method.get_arguments())]

    if returns_record:
        params = [f'{declspec(method.result_type, "*_ret")}'] + params
        names = ['_ret'] + names

    params = ['struct w_steam_iface *_this'] + params
    names = ['_this'] + names

    if is_manual_method(klass, method, 'w'):
        out(f'extern {ret}__thiscall {winclassname}_{method.name}({", ".join(params)});\n\n')
        return

    out(f'{ret}__thiscall {winclassname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    if returns_record:
        del params[1]
        del names[1]

    if not returns_record and not returns_void:
        out(f'    {ret}_ret;\n')

    path_conv = get_path_converter(method)

    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                out(f'    const char **lin_{path_conv["w2l_names"][i]} = vrclient_dos_to_unix_stringlist({path_conv["w2l_names"][i]});\n')
                # TODO
                pass
            else:
                out(f'    char lin_{path_conv["w2l_names"][i]}[PATH_MAX];\n')
                out(f'    vrclient_dos_path_to_unix_path({path_conv["w2l_names"][i]}, lin_{path_conv["w2l_names"][i]});\n')

    out(u'    TRACE("%p\\n", _this);\n')

    if returns_record:
        out(u'    *_ret = ')
    elif not returns_void:
        out(u'    _ret = ')
    else:
        out(u'    ')

    is_method_overridden = False
    for classname_pattern, methodname, override_generator in method_overrides:
        if method.name == methodname and classname_pattern in klass.spelling:
            fn_name = override_generator(cppname, method)
            if fn_name:
                out("%s(%s_%s, " % (fn_name, cppname, method.name))
                is_method_overridden = True
                break
    else:
        out(f'{cppname}_{method.name}(')

    def param_call(param, name):
        if name == '_this': return '_this->u_iface'
        if path_conv and name in path_conv["w2l_names"]: return f'{name} ? lin_{name} : NULL'
        return name

    params = ['_this'] + list(method.get_arguments())
    out(", ".join([param_call(p, n) for p, n in zip(params, names)]))

    if is_method_overridden:
        out(f', {klass.version[klass.version.find("_") + 1:].lstrip("0")}')
        for classname_pattern, user_data_type, _ in method_overrides_data:
            if classname_pattern in klass.spelling:
                out(u', &_this->user_data')
                break
    out(u');\n')

    if path_conv and len(path_conv["l2w_names"]) > 0:
        for i in range(len(path_conv["l2w_names"])):
            assert(path_conv["l2w_names"][i]) #otherwise, no name means string is in return value. needs special handling.
            out(u'    ')
            if path_conv["return_is_size"]:
                out(u'_ret = ')
            out(f'vrclient_unix_path_to_dos_path(_ret, {path_conv["l2w_names"][i]}, {path_conv["l2w_names"][i]}, {path_conv["l2w_lens"][i]});\n')
    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                out(f'    vrclient_free_stringlist(lin_{path_conv["w2l_names"][i]});\n')

    if not returns_void:
        out(u'    return _ret;\n')
    out(u'}\n\n')


max_c_api_param_count = 0

def get_capi_thunk_params(method):
    def toBOOL(x):
        return "TRUE" if x else "FALSE"
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD
    param_types = [x.type for x in method.get_arguments()]
    if returns_record:
        param_types.insert(0, method.result_type)
    param_count = len(param_types)
    has_float_params = any(x.spelling == "float" for x in param_types)
    is_4th_float = param_count >= 4 and param_types[3].spelling == "float"
    return "%s, %s, %s" % (param_count, toBOOL(has_float_params), toBOOL(is_4th_float))


def handle_class(klass):
    cppname = f"cpp{klass.spelling}_{klass.version}"

    with open(f"vrclient_x64/{cppname}.h", "w") as file:
        out = file.write

        out(u'#ifdef __cplusplus\n')
        out(u'extern "C" {\n')
        out(u'#endif\n')

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            handle_method_hpp(method, cppname, out)

        out(u'#ifdef __cplusplus')
        out(u'\n}')
        out(u'\n#endif\n')

    with open(f"vrclient_x64/{cppname}.cpp", "w") as file:
        out = file.write

        out(u'#include "vrclient_private.h"\n')
        out(u'#include "vrclient_defs.h"\n')
        if os.path.isfile(f"openvr_{klass._sdkver}/ivrclientcore.h"):
            out(f'#include "openvr_{klass._sdkver}/ivrclientcore.h"\n')
        else:
            out(f'#include "openvr_{klass._sdkver}/openvr.h"\n')
        out(u'using namespace vr;\n')
        out(u'extern "C" {\n')
        out(u'#include "struct_converters.h"\n')
        out(u'}\n')
        out(f'#include "{cppname}.h"\n')
        out(u'#ifdef __cplusplus\n')
        out(u'extern "C" {\n')
        out(u'#endif\n')

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            handle_method_cpp(method, klass.spelling, cppname, out)

        out(u'#ifdef __cplusplus\n')
        out(u'}\n')
        out(u'#endif\n')

    winclassname = f'win{klass.spelling}_{klass.version}'
    with open(f'vrclient_x64/win{klass.spelling}.c', 'a') as file:
        out = file.write

        out(f'#include "{cppname}.h"\n\n')

        for method in klass.methods:
            handle_thiscall_wrapper(klass, method, out)
        out('\n')

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            handle_method_c(klass, method, winclassname, cppname, out)

        out(f'extern vtable_ptr {winclassname}_vtable;\n\n')
        out(u'#ifndef __GNUC__\n')
        out(u'void __asm_dummy_vtables(void) {\n')
        out(u'#endif\n')
        out(f'    __ASM_VTABLE({winclassname},\n')
        for method in sorted(klass.methods, key=lambda x: (x._index, -x._override)):
            out(f'        VTABLE_ADD_FUNC({winclassname}_{method.name})\n')
        out(u'    );\n')
        out(u'#ifndef __GNUC__\n')
        out(u'}\n')
        out(u'#endif\n\n')
        out(f'struct w_steam_iface *create_{winclassname}(void *u_iface)\n')
        out(u'{\n')
        out(u'    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));\n')
        out(u'    TRACE("-> %p\\n", r);\n')
        out(f'    r->vtable = &{winclassname}_vtable;\n')
        out(u'    r->u_iface = u_iface;\n')
        out(u'    return r;\n')
        out(u'}\n\n')
        out(f'void destroy_{winclassname}(struct w_steam_iface *object)\n')
        out(u'{\n')
        out(u'    TRACE("%p\\n", object);\n')
        for classname_pattern, user_data_type, user_data_destructor in method_overrides_data:
            if user_data_destructor and classname_pattern in klass.spelling:
                out(f'    {user_data_destructor}(&object->user_data);\n')
                break
        out(u'    HeapFree(GetProcessHeap(), 0, object);\n')
        out(u'}\n\n')

        # flat (FnTable) API
        out(f'struct w_steam_iface *create_{winclassname}_FnTable(void *u_iface)\n')
        out(u'{\n')
        out(u'    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));\n')
        out(f'    struct thunk *thunks = alloc_thunks({len(klass.methods)});\n')
        out(f'    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, {len(klass.methods)} * sizeof(*vtable));\n')
        out(u'    int i;\n\n')
        out(u'    TRACE("-> %p, vtable %p, thunks %p\\n", r, vtable, thunks);\n')
        for i, method in enumerate(klass.methods):
            thunk_params = get_capi_thunk_params(method)
            arguments = list(method.get_arguments())
            global max_c_api_param_count
            max_c_api_param_count = max(len(arguments), max_c_api_param_count)
            out(f'    init_thunk(&thunks[{i}], r, {winclassname}_{method.name}, {thunk_params});\n')
        out(f'    for (i = 0; i < {len(klass.methods)}; i++)\n')
        out(u'        vtable[i] = &thunks[i];\n')
        out(u'    r->u_iface = u_iface;\n')
        out(u'    r->vtable = (void *)vtable;\n')
        out(u'    return r;\n')
        out(u'}\n\n')
        out(f'void destroy_{winclassname}_FnTable(struct w_steam_iface *object)\n')
        out(u'{\n')
        out(u'    TRACE("%p\\n", object);\n')
        for classname_pattern, user_data_type, user_data_destructor in method_overrides_data:
            if user_data_destructor and classname_pattern in klass.spelling:
                out(f'    {user_data_destructor}(&object->user_data);\n')
                break
        out(u'    VirtualFree(object->vtable[0], 0, MEM_RELEASE);\n')
        out(u'    HeapFree(GetProcessHeap(), 0, object->vtable);\n')
        out(u'    HeapFree(GetProcessHeap(), 0, object);\n')
        out(u'}\n\n')

    constructors = open("vrclient_x64/win_constructors.h", "a")
    constructors.write(f'extern struct w_steam_iface *create_{winclassname}(void *);\n')
    constructors.write(f'extern struct w_steam_iface *create_{winclassname}_FnTable(void *);\n')

    destructors = open("vrclient_x64/win_destructors.h", "a")
    destructors.write(f'extern void destroy_{winclassname}(struct w_steam_iface *);\n')
    destructors.write(f'extern void destroy_{winclassname}_FnTable(struct w_steam_iface *);\n')

    constructors = open("vrclient_x64/win_constructors_table.dat", "a")
    constructors.write(f"    {{\"{klass.version}\", &create_{winclassname}, &destroy_{winclassname}}},\n")
    constructors.write(f"    {{\"FnTable:{klass.version}\", &create_{winclassname}_FnTable, &destroy_{winclassname}_FnTable}},\n")

    generate_c_api_thunk_tests(winclassname, klass.methods)


def canonical_typename(cursor):
    if type(cursor) is Cursor:
        return canonical_typename(cursor.type)

    name = cursor.get_canonical().spelling
    return name.removeprefix("const ")


def find_struct_abis(name):
    records = all_records[sdkver]
    missing = [name not in records[abi] for abi in ABIS]
    assert all(missing) or not any(missing)
    if any(missing): return None
    return {abi: records[abi][name].type for abi in ABIS}


def struct_needs_conversion_nocache(struct):
    name = canonical_typename(struct)

    abis = find_struct_abis(name)
    if abis is None:
        return False, False

    names = {a: [f.spelling for f in abis[a].get_fields()]
             for a in ABIS}
    assert names['u32'] == names['u64']
    assert names['u32'] == names['w32']
    assert names['u32'] == names['w64']

    offsets = {a: {f: abis[a].get_offset(f) for f in names[a]}
               for a in ABIS}
    if offsets['u32'] != offsets['w32']:
        return True, False
    if offsets['u64'] != offsets['w64']:
        return True, False

    types = {a: [f.type.get_canonical() for f in abis[a].get_fields()]
             for a in ABIS}
    if any(t.kind == TypeKind.RECORD and struct_needs_conversion(t)
           for t in types['u32']):
        return True, False
    if any(t.kind == TypeKind.RECORD and struct_needs_conversion(t)
           for t in types['u64']):
        return True, False

    assert abis['u32'].get_size() <= abis['w32'].get_size()
    if abis['u32'].get_size() < abis['w32'].get_size():
        return False, True

    assert abis['u64'].get_size() <= abis['w64'].get_size()
    if abis['u64'].get_size() < abis['w64'].get_size():
        return False, True

    return False, False


def struct_needs_conversion(struct):
    name = canonical_typename(struct)

    if not sdkver in struct_conversion_cache:
        struct_conversion_cache[sdkver] = {}
        struct_needs_size_adjustment_cache[sdkver] = {}

    if not name in struct_conversion_cache[sdkver]:
        struct_conversion_cache[sdkver][name], \
                struct_needs_size_adjustment_cache[sdkver][name] = \
                struct_needs_conversion_nocache(struct)

    return struct_conversion_cache[sdkver][name]

def struct_needs_size_adjustment(struct):
    name = canonical_typename(struct)
    return not struct_needs_conversion(struct) and struct_needs_size_adjustment_cache[sdkver][name]

def get_field_attribute_str(field):
    ftype = field.type.get_canonical()
    if ftype.kind != TypeKind.RECORD:
        return ""
    name = canonical_typename(ftype)
    abis = find_struct_abis(name)
    align = abis['w32'].get_align()
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

    if strip_ns(struct.displayname) in SDK_STRUCTS:
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
                elif struct.displayname in STRUCTS_SIZE_FIELD and \
                    m.displayname in STRUCTS_SIZE_FIELD[struct.displayname]:
                        cppfile.write("    " + dst + "->" + m.displayname + " = sizeof(*" + dst + ");\n")
                elif size and strip_ns(m.type.get_canonical().spelling) == "VREvent_Data_t":
                    #truncate variable-length data struct at the end of the parent struct
                    #XXX: dumb hard-coding. are the other types with lengths variable length?
                    cppfile.write("    memcpy(&" + dst + "->data, &" + src + "->data, " + size + " - (((char*)&" + dst + "->data) - ((char*)" + dst + ")));\n")
                else:
                    cppfile.write("    " + dst + "->" + m.displayname + " = " + src + "->" + m.displayname + ";\n")

    if strip_ns(struct.displayname) in STRUCTS_NEXT_IS_SIZE:
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
        hfile.write("extern void struct_%s_win_to_lin(const void *w, void *l);\n" % handler_name)
        cppfile.write("void struct_%s_win_to_lin(const void *w, void *l)\n{\n" % handler_name)
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

def generate_c_api_method_test(f, header, thunks_c, class_name, method):
    thunk_params = get_capi_thunk_params(method)
    f.write("\n    init_thunk(t, this_ptr_value, %s_%s, %s);\n" % (class_name, method.name, thunk_params))
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
    f.write('(__stdcall *capi_%s_%s)(' % (class_name, method.name))
    header.write('__thiscall %s_%s(void *_this' % (class_name, method.name))
    thunks_c.write('__thiscall %s_%s(void *_this' % (class_name, method.name))
    if returns_record:
        f.write("%s *_r" % strip_ns(method.result_type.spelling))
        first_param = False
        header.write(", %s *_r" % strip_ns(method.result_type.spelling))
        thunks_c.write(", %s *_r" % strip_ns(method.result_type.spelling))

    for param in method.get_arguments():
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
    for param in method.get_arguments():
        typename = get_param_typename(param)
        thunks_c.write("    push_%s_parameter(%s);\n" % (typename, param.spelling))
    if method.result_type.kind != TypeKind.VOID:
        thunks_c.write("    return 0;\n")
    thunks_c.write("}\n")

    parameter_checks = []
    def add_parameter_check(typename, value):
        parameter_checks.append("check_%s_parameter(\"%s_%s\", %s)" % (typename, class_name, method.name, value))
    add_parameter_check("ptr", "this_ptr_value")
    f.write("\n")
    f.write("    clear_parameters();\n")
    f.write("    capi_%s_%s(" % (class_name, method.name))
    first_param = True
    if returns_record:
        f.write("data_ptr_value")
        first_param = False
        add_parameter_check("ptr", "data_ptr_value")
    for i, param in enumerate(method.get_arguments()):
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

def generate_c_api_thunk_tests(winclassname, methods):
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
        for method in methods:
            generate_c_api_method_test(f, header, thunks_c, class_name, method)
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


def enumerate_structs(cursor, vr_only=False):
    for child in cursor.get_children():
        if child.kind == CursorKind.NAMESPACE \
           and child.displayname == "vr":
            yield from child.get_children()
        elif not vr_only:
            yield child


def parse(sources, sdkver, abi):
    args = [f'-m{abi[1:]}', '-I' + CLANG_PATH + '/include/']
    if abi[0] == 'w':
        args += ["-D_WIN32", "-U__linux__"]
        args += ["-fms-extensions", "-mms-bitfields"]
        args += ["-Wno-ignored-attributes", "-Wno-incompatible-ms-struct"]
    if abi[0] == 'u':
        args += ["-DGNUC"]

    index = Index.create()
    build = index.parse("source.cpp", args=args, unsaved_files=sources.items())
    diagnostics = list(build.diagnostics)
    for diag in diagnostics: print(diag)
    assert len(diagnostics) == 0

    return sdkver, abi, build


def load(sdkver):
    prog = re.compile("^.*const\s*char.* \*?(\w*)_Version.*\"(.*)\"")
    sdkdir = f'openvr_{sdkver}'

    sources = {}
    versions = {}
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
                    versions[iface] = version

    if not has_vrclientcore:
        source = [f'#include "{sdkdir}/openvr.h"']
    else:
        source = [f'#include "{sdkdir}/{file}"'
                  for file in SDK_SOURCES.keys()]
    sources["source.cpp"] = "\n".join(source)

    return versions, sources


def generate(sdkver, structs):
    print(f'generating SDK version {sdkver}...')
    for child in structs['u32'].values():
        handle_struct(sdkver, child)


for i, sdkver in enumerate(SDK_VERSIONS):
    print(f'loading SDKs... {i * 100 // len(SDK_VERSIONS)}%', end='\r')
    all_versions[sdkver], all_sources[sdkver] = load(sdkver)
print(u'loading SDKs... 100%')


tmp_classes = {}

with concurrent.futures.ThreadPoolExecutor() as executor:
    arg0 = [sdkver for sdkver in SDK_VERSIONS for abi in ABIS]
    arg1 = [abi for sdkver in SDK_VERSIONS for abi in ABIS]
    def parse_map(sdkver, abi):
        return parse(all_sources[sdkver], sdkver, abi)

    results = executor.map(parse_map, arg0, arg1)
    for i, result in enumerate(results):
        print(f'parsing SDKs... {i * 100 // len(arg0)}%', end='\r')
        sdkver, abi, build = result
        if sdkver not in all_records: all_records[sdkver] = {}
        if sdkver not in tmp_classes: tmp_classes[sdkver] = {}
        if sdkver not in all_structs: all_structs[sdkver] = {}

        versions = all_versions[sdkver]

        records = enumerate_structs(build.cursor)
        # reverse the order to favor definitions over declarations
        records = dict(reversed([(c.type.spelling, c) for c in records]))

        classes = enumerate_structs(build.cursor, vr_only=True)
        classes = filter(lambda c: c.is_definition(), classes)
        classes = filter(lambda c: c.kind == CursorKind.CLASS_DECL, classes)
        classes = filter(lambda c: c.spelling in SDK_CLASSES, classes)
        classes = filter(lambda c: c.spelling in versions, classes)
        classes = [Class(sdkver, abi, c) for c in classes]
        classes = {c.version: c for c in classes}

        structs = enumerate_structs(build.cursor, vr_only=True)
        struct_kinds = (CursorKind.STRUCT_DECL, CursorKind.CLASS_DECL)
        structs = filter(lambda c: c.kind in struct_kinds, structs)
        structs = {c.spelling: c for c in structs}

        all_records[sdkver][abi] = records
        tmp_classes[sdkver][abi] = classes
        all_structs[sdkver][abi] = structs

for i, sdkver in enumerate(reversed(SDK_VERSIONS)):
    all_classes.update(tmp_classes[sdkver]['u32'])

print('parsing SDKs... 100%')


for klass in all_classes.values():
    with open(f"vrclient_x64/win{klass.spelling}.c", "w") as file:
        out = file.write

        out(u'/* This file is auto-generated, do not edit. */\n')
        out(u'#include <stdarg.h>\n')
        out(u'#include <stdint.h>\n')
        out(u'\n')
        out(u'#include "windef.h"\n')
        out(u'#include "winbase.h"\n')
        out(u'#include "wine/debug.h"\n')
        out(u'\n')
        out(u'#include "vrclient_defs.h"\n')
        out(u'\n')
        out(u'#include "vrclient_private.h"\n')
        out(u'\n')
        out(u'#include "struct_converters.h"\n')
        out(u'\n')
        out(u'#include "flatapi.h"\n')
        out(u'\n')
        out(u'WINE_DEFAULT_DEBUG_CHANNEL(vrclient);\n')
        out(u'\n')


for _, klass in sorted(all_classes.items()):
    sdkver = klass._sdkver
    handle_class(klass)


for sdkver in SDK_VERSIONS:
    generate(sdkver, all_structs[sdkver])


for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

with open("tests/main_autogen.c", "a") as f:
    f.write("    printf(\"All tests executed.\\n\");\n")
    f.write("}\n")

generate_flatapi_c()
