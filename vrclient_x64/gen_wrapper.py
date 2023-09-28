#!/usr/bin/env python

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../lsteamclient/gen_wrapper.py

CLANG_PATH='/usr/lib/clang/15'

from clang.cindex import Cursor, CursorKind, Index, TypeKind
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

# these structs are manually confirmed to be equivalent
EXEMPT_STRUCTS = {
    "HmdColor_t",
    "HmdMatrix33_t",
    "HmdMatrix34_t",
    "HmdMatrix44_t",
    "HmdQuad_t",
    "HmdQuaternion_t",
    "HmdQuaternionf_t",
    "HmdVector2_t",
    "HmdVector3_t",
    "HmdVector3d_t",
    "HmdVector4_t",
    "IntersectionMaskCircle_t",
    "IntersectionMaskRectangle_t",
    "CVRSettingHelper",
}

# structs for which the size is important, either because of arrays or size parameters
SIZED_STRUCTS = {
    "CameraVideoStreamFrameHeader_t",
    "Compositor_BenchmarkResults",
    "Compositor_CumulativeStats",
    "Compositor_StageRenderSettings",
    "InputAnalogActionData_t",
    "InputBindingInfo_t",
    "InputDigitalActionData_t",
    "InputOriginInfo_t",
    "InputPoseActionData_t",
    "InputSkeletalActionData_t",
    "InputSkeletonActionData_t",
    "Texture_t",
    "TrackedDevicePose_t",
    "VRActiveActionSet_t",
    "VRBoneTransform_t",
    "VRControllerState001_t",
    "VREvent_t",
    "VROverlayIntersectionMaskPrimitive_t",
    "VROverlayView_t",
}

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

PATH_CONV_METHODS_UTOW = {
    "IVRScreenshots_GetScreenshotPropertyFilename": {
        "pchFilename": {"len": "cchFilename"},
        "ret_size": True,
    },

# maybe?
#    "IVRRenderModels_GetRenderModelOriginalPath": {
#        "pchOriginalPath": {"len": unOriginalPathLen},
#    },
#    "IVRResources_GetResourceFullPath": {
#        "pchPathBuffer": {"len": unBufferLen},
#    },
#    IVRInput::GetInputSourceHandle
#    IVRIOBuffer::Open
#    TODO: LaunchInternalProcess, need steam cooperation
}

PATH_CONV_METHODS_WTOU = {
    "IVRInput_SetActionManifestPath": {"pchActionManifestPath"},
    "IVRCompositor_SetOverlayFromFile": {"pchFilePath"},
    "IVROverlay_SetOverlayFromFile": {"pchFilePath"},
    "IVRApplications_AddApplicationManifest": {"pchApplicationManifestFullPath"},
    "IVRApplications_RemoveApplicationManifest": {"pchApplicationManifestFullPath"},
    "IVRScreenshots_RequestScreenshot": {"pchVRFilename", "pchPreviewFilename"},
    "IVRScreenshots_TakeStereoScreenshot": {"pchVRFilename", "pchPreviewFilename"},
    "IVRScreenshots_SubmitScreenshot": {"pchSourcePreviewFilename", "pchSourceVRFilename"},
    "IVRControlPanel_undoc23": {"a"},
    "IVRControlPanel_undoc27": {"a"},
    "IVRCompositor_SetStageOverride_Async": {"pchRenderModelPath"},

# maybe?
#    "IVRResources_GetResourceFullPath": {"pchResourceTypeDirectory"},
#    IVRInput::GetInputSourceHandle
#    IVRIOBuffer::Open
#    TODO: LaunchInternalProcess, need steam cooperation
}

all_classes = {}
all_records = {}
all_structs = {}
all_sources = {}
all_versions = {}
unique_structs = []


MANUAL_METHODS = {
    "IVRClientCore_BIsHmdPresent": True,
    "IVRClientCore_Init": True,
    "IVRClientCore_GetGenericInterface": True,
    "IVRClientCore_Cleanup": True,
    "IVRSystem_GetDXGIOutputInfo": True,
    "IVRSystem_GetOutputDevice": lambda ver, abi: ver > 16,
    "IVRCompositor_Submit": lambda ver, abi: ver > 8,
    "IVRCompositor_SetSkyboxOverride": lambda ver, abi: ver > 8,
    "IVRCompositor_PostPresentHandoff": True,
    "IVRCompositor_WaitGetPoses": lambda ver, abi: ver > 15 and ver < 27,
    "IVRCompositor_GetVulkanDeviceExtensionsRequired": True,
    "IVRRenderModels_LoadTextureD3D11_Async": True,
    "IVRRenderModels_FreeTextureD3D11": True,
    "IVRRenderModels_LoadIntoTextureD3D11_Async": True,
    "IVRMailbox_undoc3": True,
    "IVROverlay_SetOverlayTexture": True,
    "IVRInput_GetDigitalActionData": lambda ver, abi: ver > 3,
}


def is_manual_method(klass, method, abi):
    version = re.search(r'(\d+)$', klass.version)

    key = f'{klass.name}_{method.name}'
    needs_manual = MANUAL_METHODS.get(key, False)

    if callable(needs_manual) and version:
        return needs_manual(int(version[0]), abi)
    return needs_manual


class Padding:
    def __init__(self, offset, size):
        self.offset = offset
        self.size = size


class Field:
    def __init__(self, cursor, struct, type, offset, name=None):
        self._cursor = cursor
        self._type = type

        self.name = cursor.spelling if not name else name
        self.type = cursor.type
        self.size = self.type.get_size()
        self.offset = offset

    def needs_conversion(self, other):
        return self._type.needs_conversion(other._type)


class BasicType:
    def __init__(self, type, abi):
        self._type = type.get_canonical()
        self._abi = abi
        self._decl_order = 0
        self._conv_cache = {}

        self.size = self._type.get_size()
        self.id = self._type.spelling

    @property
    def order(self):
        return self._decl_order

    def set_used(self, order=-1):
        if self._decl_order <= order:
            return
        self._decl_order = order

    def needs_conversion(self, other):
        if self._type.kind == TypeKind.POINTER and self._type.get_pointee().kind == TypeKind.FUNCTIONPROTO:
            return self._abi != other._abi
        return False


class Struct:
    def __init__(self, sdkver, abi, cursor):
        self._cursor = cursor
        self._sdkver = sdkver
        self._abi = abi
        self._fields = None
        self._decl_order = 0
        self._conv_cache = {}

        self.name = canonical_typename(self._cursor)
        self.name = self.name.removeprefix("vr::")
        self.type = self._cursor.type.get_canonical()
        self.size = self.type.get_size()
        self.align = self.type.get_align()
        self.id = f'{abi}_{self.name}_{sdkver}'

        if self._cursor.spelling in EXEMPT_STRUCTS:
            self._fields = [Padding(0, self.size)]

    @property
    def order(self):
        return self._decl_order

    def set_used(self, order=-1):
        if self._decl_order <= order:
            return
        self._decl_order = order
        [f._type.set_used(order - 1) for f in self.fields]

    @property
    def padded_fields(self):
        if self._fields: return self._fields

        size, self._fields = 0, []
        for cursor in self._cursor.get_children():
            if cursor.kind == CursorKind.CXX_BASE_SPECIFIER \
               and len(list(cursor.type.get_fields())) > 0:
                base_type = Type(cursor.type, self._sdkver, self._abi)
                self._fields += base_type.padded_fields
                size = cursor.type.get_size()
            break

        for cursor in self.type.get_fields():
            assert not cursor.is_bitfield()
            offset = self.type.get_offset(cursor.spelling)
            assert offset % 8 == 0
            offset = offset // 8
            # assert offset >= size or type(self) is Union

            if size < offset: self._fields.append(Padding(size, offset - size))
            field_type = Type(cursor.type, self._sdkver, self._abi)
            self._fields.append(Field(cursor, self, field_type, offset))
            size = max(size, offset + cursor.type.get_size())

        if size < self.size: self._fields.append(Padding(size, self.size - size))
        return self._fields

    @property
    def fields(self):
        return [f for f in self.padded_fields if type(f) is not Padding]

    def write_definition(self, out, prefix):
        version = all_versions[sdkver][self.name]
        kind = 'union' if type(self) is Union else 'struct'
        wrapped = len(prefix) > 0

        out(f'#pragma pack( push, {self.align} )\n')
        out(f'{kind} {prefix}{version}\n')
        out(u'{\n')
        for f in self.padded_fields:
            if type(f) is Field:
                out(f'    {declspec(f._cursor, f.name, prefix, wrapped)};\n')
            else:
                out(f'    uint8_t __pad_{f.offset}[{f.size}];\n')
        out(u'};\n')
        out(u'#pragma pack( pop )\n\n')

    def write_checks(self, out, prefix):
        version = all_versions[sdkver][self.name]

        out(f'C_ASSERT( sizeof({prefix}{version}) >= {self.size} );\n')
        for f in self.fields:
            out(f'C_ASSERT( offsetof({prefix}{version}, {f.name}) == {f.offset} );\n')
            out(f'C_ASSERT( sizeof({prefix}{version}().{f.name}) >= {f.size} );\n')
        out(u'\n')

    def needs_conversion(self, other):
        if other.id in self._conv_cache:
            return self._conv_cache[other.id]
        self._conv_cache[other.id] = other._conv_cache[self.id] = True

        if self.name in SIZED_STRUCTS and self.size != other.size:
            return True
        if len(self.fields) != len(other.fields):
            return True
        if any([a.offset != b.offset or a.needs_conversion(b)
               for a, b in zip(self.fields, other.fields)]):
            return True

        self._conv_cache[other.id] = other._conv_cache[self.id] = False
        return False

    def get_children(self):
        return self._cursor.get_children()


class Union(Struct):
    def __init__(self, sdkver, abi, cursor):
        super().__init__(sdkver, abi, cursor)


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
        self._cursor = cursor
        self._sdkver = sdkver
        self._abi = abi
        self._methods = None
        self._decl_order = 0

        self.name = cursor.spelling
        self.filename = SDK_CLASSES.get(self.name, None)
        versions = all_versions[sdkver]
        self.version = versions.get(self.name, "")

        self.type = self._cursor.type.get_canonical()
        self.id = f'{abi}_{self.name}_{sdkver}'

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

    @property
    def full_name(self):
        if len(self.version) == 0:
            return self.name
        return f'{self.name}_{self.version}'

    @property
    def order(self):
        return self._decl_order

    def set_used(self, order=-1):
        if self._decl_order <= order:
            return
        self._decl_order = order

    def needs_conversion(self, other):
        return self._abi[0] != other._abi[0]

    def __eq__(self, other):
        return self._abi[0] == other._abi[0]

    def write_definition(self, out, prefix):
        out(f'struct {prefix}{self.full_name}\n')
        out(u'{\n')
        out(u'#ifdef __cplusplus\n')
        for method in self.methods:
            types = [declspec(p, "", prefix if prefix != "cpp" else None)
                     for p in method.get_arguments()]
            if type(method) is Destructor:
                out(f'    virtual ~{prefix}{self.full_name}( {", ".join(types)} ) = 0;\n')
            else:
                method_name = f'{declspec(method.result_type, "", None)} {method.spelling}'
                out(f'    virtual {method_name}( {", ".join(types)} ) = 0;\n')
        out(u'#endif /* __cplusplus */\n')
        out(u'};\n\n')

    def get_children(self):
        return self._cursor.get_children()


def Record(sdkver, abi, cursor):
    if cursor.type.get_declaration().kind == CursorKind.UNION_DECL:
        return Union(sdkver, abi, cursor)

    method_kinds = (CursorKind.CXX_METHOD, CursorKind.DESTRUCTOR)
    is_method = lambda c: c.kind in method_kinds and c.is_virtual_method()
    for _ in filter(is_method, cursor.get_children()):
        return Class(sdkver, abi, cursor)

    return Struct(sdkver, abi, cursor)


def Type(decl, sdkver, abi):
    name = strip_ns(canonical_typename(decl))
    if name not in all_structs:
        return BasicType(decl, abi)
    return all_structs[name][sdkver][abi]


def display_sdkver(s):
    if s.startswith("v"):
        s = s[1:]
    return s.replace(".", "")

def strip_ns(name):
    return name.replace("vr::","")


def underlying_type(decl):
    if type(decl) is Cursor:
        decl = decl.type
    decl = decl.get_canonical()
    if decl.kind == TypeKind.LVALUEREFERENCE: return underlying_type(decl.get_pointee())
    if decl.kind == TypeKind.CONSTANTARRAY: return underlying_type(decl.element_type)
    if decl.kind == TypeKind.POINTER: return underlying_type(decl.get_pointee())
    return decl


def param_needs_conversion(decl):
    decl = underlying_type(decl)
    return decl.kind == TypeKind.RECORD and \
           struct_needs_conversion(decl)


def callconv(cursor, prefix):
    if type(cursor) is not Cursor or prefix is None:
        return ''
    canon = cursor.type.get_canonical()
    if canon.kind != TypeKind.POINTER:
        return ''
    canon = canon.get_pointee()
    if canon.kind != TypeKind.FUNCTIONPROTO:
        return ''
    if cursor.type.kind == TypeKind.TYPEDEF:
        cursor = cursor.type.get_declaration()

    tokens = cursor.get_tokens()
    while next(tokens).spelling != '(': pass
    token = next(tokens).spelling.strip('_')
    token = token.replace('*', 'stdcall')
    token = token.replace('S_CALLTYPE', 'cdecl')
    return f'{prefix[0].upper()}_{token.upper()} '


def declspec_func(decl, name, prefix):
    ret = declspec(decl.get_result(), "", prefix, False)
    params = [declspec(a, "", prefix, False) for a in decl.argument_types()]
    params = ", ".join(params) if len(params) else "void"
    return f'{ret} ({name})({params})'


def declspec(decl, name, prefix, wrapped=False):
    call = callconv(decl, prefix)
    if type(decl) is Cursor:
        decl = decl.type
    if 'VRControllerState_t' not in decl.spelling: # FIXME
        decl = decl.get_canonical()

    const = 'const ' if decl.is_const_qualified() else ''
    if decl.kind == TypeKind.FUNCTIONPROTO:
        return declspec_func(decl, name, prefix)
    if decl.kind in (TypeKind.POINTER, TypeKind.LVALUEREFERENCE):
        decl = decl.get_pointee()
        spec = declspec(decl, f"*{call}{const}{name}", prefix, False)
        if wrapped:
            return f'{prefix.upper()}PTR({spec}, {name})'
        return spec
    if decl.kind == TypeKind.CONSTANTARRAY:
        decl, count = decl.element_type, decl.element_count
        if wrapped:
            spec = declspec(decl, const, prefix, False)
            return f'{prefix.upper()}ARRAY({spec}, {count}, {name})'
        return declspec(decl, f"({const}{name})[{count}]", prefix, False)

    if len(name):
        name = f' {name}'

    if decl.kind in (TypeKind.UNEXPOSED, TypeKind.FUNCTIONPROTO):
        return f'void{name}'
    if decl.kind == TypeKind.ENUM:
        return f'uint{decl.get_size() * 8}_t{name}'

    type_name = decl.spelling.removeprefix("const ")
    type_name = decl.spelling.removeprefix("vr::")
    if type_name.startswith(('IVR', 'ID3D')):
        return f'{const}void /*{type_name}*/{name}'

    if prefix not in (None, "win") and decl.kind == TypeKind.RECORD \
       and type_name in all_versions[sdkver] \
       and type_name not in EXEMPT_STRUCTS:
        if type_name in unique_structs:
            return f'{const}{all_versions[sdkver][type_name]}{name}'
        return f'{const}{prefix}{all_versions[sdkver][type_name]}{name}'

    real_name = canonical_typename(decl)
    real_name = real_name.removeprefix("const ")
    real_name = real_name.removeprefix("vr::")

    if prefix == "win" and real_name in SDK_STRUCTS:
        type_name = f"win{real_name}_{display_sdkver(sdkver)}"
    elif prefix == "win" and struct_needs_conversion(decl.get_canonical()) \
         and not decl.is_const_qualified(): # FIXME
        type_name = f"win{real_name}_{display_sdkver(sdkver)}"
    else:
        type_name = decl.spelling
        type_name = type_name.removeprefix("const ")
        type_name = type_name.removeprefix("vr::")

    if type_name in ('void', 'bool', 'char', 'float', 'double'):
        return f'{const}{type_name}{name}'
    if type_name.startswith(('int', 'long', 'short', 'signed')):
        return f'{const}int{decl.get_size() * 8}_t{name}'
    if type_name.startswith(('uint', 'unsigned')):
        return f'{const}uint{decl.get_size() * 8}_t{name}'

    return f'{const}{type_name}{name}'


def handle_method_hpp(method, cppname, out):
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    ret = "*_ret" if returns_record else "_ret"
    ret = f'{declspec(method.result_type, ret, "win")}'

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]
    params = [declspec(p, names[i], "win") for i, p in enumerate(method.get_arguments())]

    if method.result_type.kind != TypeKind.VOID:
        params = [ret] + params
    params = ['void *linux_side'] + params

    out(f'struct {cppname}_{method.name}_params\n')
    out(u'{\n')
    for param in params:
        out(f'    {param};\n')
    out(u'};\n')
    out(f'extern void {cppname}_{method.name}( struct {cppname}_{method.name}_params *params );\n\n')


def handle_method_cpp(method, classname, cppname, out):
    returns_void = method.result_type.kind == TypeKind.VOID
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]

    need_convert = {n: p for n, p in zip(names, method.get_arguments())
                    if param_needs_conversion(p)}

    names = ['linux_side'] + names

    out(f'void {cppname}_{method.name}( struct {cppname}_{method.name}_params *params )\n')
    out(u'{\n')
    out(f'    struct {cppname} *iface = (struct {cppname} *)params->linux_side;\n')

    params = list(zip(names[1:], method.get_arguments()))
    for i, (name, param) in enumerate(params[:-1]):
        if underlying_type(param).kind != TypeKind.RECORD:
            continue
        next_name, next_param = params[i + 1]
        if not any(w in next_name.lower() for w in ('count', 'len', 'size', 'num')):
            continue
        assert strip_ns(underlying_typename(param)) in SIZED_STRUCTS | EXEMPT_STRUCTS

    for i, (name, param) in enumerate(params[1:]):
        if underlying_type(param).kind != TypeKind.RECORD:
            continue
        prev_name, prev_param = params[i - 1]
        if not any(w in prev_name.lower() for w in ('count', 'len', 'size', 'num')):
            continue
        if strip_ns(underlying_typename(param)) not in SIZED_STRUCTS | EXEMPT_STRUCTS:
            print('Warning:', strip_ns(underlying_typename(param)), name, 'following', prev_name)

    need_unwrap = {}
    need_output = {}

    for name, param in sorted(need_convert.items()):
        type_name = strip_ns(underlying_typename(param))

        if param.type.kind != TypeKind.POINTER:
            out(f'    {declspec(param, f"lin_{name}", None).removeprefix("const ")};\n')
            out(f'    win_to_lin_struct_{param.type.spelling}_{display_sdkver(sdkver)}( &params->{name}, &lin_{name} );\n')
            continue

        pointee = param.type.get_pointee()
        if pointee.kind == TypeKind.POINTER:
            need_output[name] = param
            out(f'    {declspec(pointee, f"lin_{name}", None).removeprefix("const ")};\n')
            continue

        if type_name in SDK_STRUCTS:
            need_unwrap[name] = param
            continue

        if not pointee.is_const_qualified():
            need_output[name] = param

        out(f'    {declspec(pointee, f"lin_{name}", None).removeprefix("const ")};\n')
        out(f'    if (params->{name})\n')
        out(f'        struct_{type_name}_{display_sdkver(sdkver)}_win_to_lin( params->{name}, &lin_{name} );\n')

    size_fixup = {}
    size_param = {}
    size_fixup = {}
    params = list(zip(names[1:], method.get_arguments()))
    params += [(None, None)] # for next_name, next_param
    for i, (name, param) in enumerate(params[:-1]):
        real_type = underlying_type(param)
        if strip_ns(real_type.spelling) not in STRUCTS_NEXT_IS_SIZE:
            continue

        next_name, next_param = params[i + 1]
        if not next_param or next_param.type.spelling != "uint32_t":
            size_param[name] = ', -1'
        elif struct_needs_size_adjustment(real_type.get_canonical()):
            real_name = real_type.spelling
            out(f'    uint32_t lin_{next_name} = std::min( params->{next_name}, (uint32_t)sizeof({real_name}) );\n')
            size_param[name] = f', params->{next_name}'
            size_fixup[next_name] = True
        elif name in need_convert:
            assert name not in STRUCTS_NEXT_IS_SIZE_UNHANDLED
            out(f'    uint32_t lin_{next_name} = params->{next_name} ? sizeof(lin_{name}) : 0;\n')
            size_param[name] = f', params->{next_name}'
            size_fixup[next_name] = True

    if returns_void:
        out(u'    ')
    elif returns_record:
        out(u'    *params->_ret = ')
    else:
        out(u'    params->_ret = ')

    def param_call(name, param):
        pfx = '&' if param.type.kind == TypeKind.POINTER else ''
        if name in size_fixup: return f"lin_{name}"
        if name in need_unwrap: return f'struct_{type_name}_{display_sdkver(sdkver)}_unwrap( params->{name} )'
        if name in need_convert: return f"params->{name} ? {pfx}lin_{name} : nullptr"
        return f'params->{name}'

    params = [param_call(n, p) for n, p in zip(names[1:], method.get_arguments())]
    out(f'iface->{method.spelling}( {", ".join(params)} );\n')

    for name, param in sorted(need_output.items()):
        type_name = strip_ns(underlying_typename(param))
        if type_name in SDK_STRUCTS:
            out(u'    if (params->_ret == 0)\n')
            out(f'        *params->{name} = struct_{type_name}_{display_sdkver(sdkver)}_wrap( lin_{name} );\n')
            continue
        out(f'    if (params->{name})\n')
        out(f'        struct_{type_name}_{display_sdkver(sdkver)}_lin_to_win( &lin_{name}, params->{name}{size_param.get(name, "")} );\n')

    out(u'}\n\n')


def handle_thiscall_wrapper(klass, method, out):
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    def param_stack_size(param):
        if param.type.kind == TypeKind.LVALUEREFERENCE: return 4
        return ((param.type.get_size() + 3) // 4) * 4

    size = 4 + sum(param_stack_size(p) for p in method.get_arguments())
    if returns_record: size += 4

    name = f'win{klass.full_name}_{method.name}'
    out(f'DEFINE_THISCALL_WRAPPER({name}, {size})\n')


def handle_method_c(klass, method, winclassname, cppname, out):
    returns_void = method.result_type.kind == TypeKind.VOID
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    ret = "*" if returns_record else ""
    ret = f'{declspec(method.result_type, ret, "win")} '

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]
    params = [declspec(p, names[i], "win") for i, p in enumerate(method.get_arguments())]

    if returns_record:
        params = [f'{declspec(method.result_type, "*_ret", "win")}'] + params
        names = ['_ret'] + names

    params = ['struct w_steam_iface *_this'] + params
    names = ['_this'] + names

    if is_manual_method(klass, method, 'w'):
        out(f'extern {ret}__thiscall {winclassname}_{method.name}({", ".join(params)});\n\n')
        return

    out(f'{ret}__thiscall {winclassname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    out(f'    struct {cppname}_{method.name}_params params =\n')
    out(u'    {\n')
    out(u'        .linux_side = _this->u_iface,\n')
    for name in names[1:]:
        out(f'        .{name} = {name},\n')
    out(u'    };\n')

    path_conv_utow = PATH_CONV_METHODS_UTOW.get(f'{klass.name}_{method.spelling}', {})
    path_conv_wtou = PATH_CONV_METHODS_WTOU.get(f'{klass.name}_{method.spelling}', {})

    for name in filter(lambda x: x in names, sorted(path_conv_wtou)):
        out(f'    params.{name} = vrclient_dos_to_unix_path( {name} );\n')

    out(u'    TRACE("%p\\n", _this);\n')

    if 'eTextureType' in names:
        out(u'    if (eTextureType == API_DirectX) FIXME( "Not implemented Direct3D API!\\n" );\n')

    out(f'    {cppname}_{method.name}( &params );\n')

    for name, conv in filter(lambda x: x[0] in names, path_conv_utow.items()):
        out(u'    ')
        if "ret_size" in path_conv_utow:
            out(u'params._ret = ')
        out(f'vrclient_unix_path_to_dos_path( params._ret, {name}, {name}, {conv["len"]} );\n')

    for name in filter(lambda x: x in names, sorted(path_conv_wtou)):
        out(f'    vrclient_free_path( params.{name} );\n')

    if not returns_void:
        out(u'    return params._ret;\n')
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
    cppname = f"cpp{klass.full_name}"

    with open(f"vrclient_x64/{cppname}.h", "w") as file:
        out = file.write

        out(u'#ifdef __cplusplus\n')
        out(u'extern "C" {\n')
        out(u'#endif\n')

        out(f'struct {cppname};\n')

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
        out(u'#endif\n\n')

        klass.write_definition(out, "cpp")

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            handle_method_cpp(method, klass.name, cppname, out)

        out(u'#ifdef __cplusplus\n')
        out(u'}\n')
        out(u'#endif\n')

    winclassname = f'win{klass.full_name}'
    with open(f'vrclient_x64/win{klass.name}.c', 'a') as file:
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
    if type(cursor) in (Cursor, Struct):
        return canonical_typename(cursor.type)

    name = cursor.get_canonical().spelling
    return name.removeprefix("const ")


def underlying_typename(decl):
    return canonical_typename(underlying_type(decl))


def find_struct_abis(name):
    name = strip_ns(name)
    if not name in all_structs:
        return None
    structs = all_structs[name]
    if not sdkver in structs:
        return None
    return structs[sdkver]


def struct_needs_conversion(struct):
    name = canonical_typename(struct)

    abis = find_struct_abis(name)
    if abis is None:
        return False
    if abis['w32'].needs_conversion(abis['u32']):
        return True
    if abis['w64'].needs_conversion(abis['u64']):
        return True

    assert abis['u32'].size <= abis['w32'].size
    if abis['u32'].size < abis['w32'].size:
        return False
    assert abis['u64'].size <= abis['w64'].size
    if abis['u64'].size < abis['w64'].size:
        return False

    return False


def struct_needs_size_adjustment(struct):
    name = canonical_typename(struct)
    if name in EXEMPT_STRUCTS:
        return False

    abis = find_struct_abis(name)
    if abis is None:
        return False
    if abis['w32'].needs_conversion(abis['u32']):
        return False
    if abis['w64'].needs_conversion(abis['u64']):
        return False

    assert abis['u32'].size <= abis['w32'].size
    if abis['u32'].size < abis['w32'].size:
        return True
    assert abis['u64'].size <= abis['w64'].size
    if abis['u64'].size < abis['w64'].size:
        return True

    return False


def get_field_attribute_str(field):
    ftype = field.type.get_canonical()
    if ftype.kind != TypeKind.RECORD:
        return ""
    name = canonical_typename(ftype)
    abis = find_struct_abis(name)
    if not abis:
        return " __attribute__((aligned(8)))"
    return f" __attribute__((aligned({abis['w32'].align})))"

generated_struct_handlers = []
cpp_files_need_close_brace = []

LIN_TO_WIN=1
WIN_TO_LIN=2
WRAPPERS=3

#because of struct packing differences between win32 and linux, we
#need to convert these structs from their linux layout to the win32
#layout.
def handle_struct(sdkver, struct):
    handler_name = "%s_%s" % (struct.name, display_sdkver(sdkver))

    if handler_name in generated_struct_handlers:
        # we already have a handler for the struct struct of this size
        return

    which = set()

    if struct_needs_conversion(struct.type.get_canonical()):
        which.add(LIN_TO_WIN)
        which.add(WIN_TO_LIN)

    if strip_ns(struct.name) in SDK_STRUCTS:
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
        cppfile.write("\n    %s *linux_side;\n" % struct.name)
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
                elif struct.name in STRUCTS_SIZE_FIELD and \
                    m.displayname in STRUCTS_SIZE_FIELD[struct.name]:
                        cppfile.write("    " + dst + "->" + m.displayname + " = sizeof(*" + dst + ");\n")
                elif size and strip_ns(m.type.get_canonical().spelling) == "VREvent_Data_t":
                    #truncate variable-length data struct at the end of the parent struct
                    #XXX: dumb hard-coding. are the other types with lengths variable length?
                    cppfile.write("    memcpy(&" + dst + "->data, &" + src + "->data, " + size + " - (((char*)&" + dst + "->data) - ((char*)" + dst + ")));\n")
                else:
                    cppfile.write("    " + dst + "->" + m.displayname + " = " + src + "->" + m.displayname + ";\n")

    if strip_ns(struct.name) in STRUCTS_NEXT_IS_SIZE:
        size_arg = "sz"
        size_arg_type = ", uint32_t sz"
    else:
        size_arg = None
        size_arg_type = ""

    if LIN_TO_WIN in which:
        hfile.write("extern void struct_%s_lin_to_win(void *l, void *w%s);\n" % (handler_name, size_arg_type))
        cppfile.write("void struct_%s_lin_to_win(void *l, void *w%s)\n{\n" % (handler_name, size_arg_type))
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (handler_name, handler_name))
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.name, struct.name))
        dump_converter("lin", "win", size_arg)
        cppfile.write("}\n\n")

    if WIN_TO_LIN in which:
        #XXX: should pass size param here, too
        hfile.write("extern void struct_%s_win_to_lin(const void *w, void *l);\n" % handler_name)
        cppfile.write("void struct_%s_win_to_lin(const void *w, void *l)\n{\n" % handler_name)
        cppfile.write("    struct win%s *win = (struct win%s *)w;\n" % (handler_name, handler_name))
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.name, struct.name))
        dump_converter("win", "lin", None)
        cppfile.write("}\n\n")

    if WRAPPERS in which:
        hfile.write("extern struct win%s *struct_%s_wrap(void *l);\n" % (handler_name, handler_name))

        cppfile.write("struct win%s *struct_%s_wrap(void *l)\n{\n" % (handler_name, handler_name))
        cppfile.write("    struct win%s *win = (struct win%s *)malloc(sizeof(*win));\n" % (handler_name, handler_name))
        cppfile.write("    %s *lin = (%s *)l;\n" % (struct.name, struct.name))

        dump_converter("lin", "win", None)

        cppfile.write("    win->linux_side = lin;\n");
        cppfile.write("    return win;\n")

        cppfile.write("}\n\n")

        hfile.write("extern %s *struct_%s_unwrap(win%s *w);\n" % (struct.name, handler_name, handler_name))

        cppfile.write("struct %s *struct_%s_unwrap(win%s *w)\n{\n" % (struct.name, handler_name, handler_name))
        cppfile.write("    %s *ret = w->linux_side;\n" % struct.name)
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


def classify_struct(name):
    if name in EXEMPT_STRUCTS:
        return None
    structs = all_structs[name]

    prev = []
    versions = {}
    unique = True

    for sdkver in filter(lambda v: v in structs, reversed(SDK_VERSIONS)):
        abis = [structs[sdkver][a] for a in ABIS]

        if any(abis[0].needs_conversion(a) for a in abis[1:]):
            unique = False

        def is_always_compatible(other):
            for a, b in zip(abis, other):
                if a.needs_conversion(b):
                    return False
            return True

        compat = next((k for k, v in prev if is_always_compatible(v)), None)
        if compat:
            versions[sdkver] = versions[compat]
        else:
            [abi.set_used() for abi in abis] # make sure order is computed
            versions[sdkver] = f"{name}_{display_sdkver(sdkver)}"
            prev += [(sdkver, abis)]

    if unique:
        unique_structs.append(name)

    if len(set(versions.values())) == 1:
        versions = {sdkver: name for sdkver in versions.keys()}
    return versions


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

        versions = all_versions[sdkver]

        structs = enumerate_structs(build.cursor, vr_only=True)
        structs = filter(lambda c: c.is_definition(), structs)
        structs = filter(lambda c: c.type.get_canonical().kind == TypeKind.RECORD, structs)
        structs = filter(lambda c: c.kind != CursorKind.TYPEDEF_DECL, structs)
        structs = filter(lambda c: c.spelling not in SDK_CLASSES, structs)
        structs = [Record(sdkver, abi, c) for c in structs]
        structs = {c.name: c for c in structs}

        classes = enumerate_structs(build.cursor, vr_only=True)
        classes = filter(lambda c: c.is_definition(), classes)
        classes = filter(lambda c: c.kind == CursorKind.CLASS_DECL, classes)
        classes = filter(lambda c: c.spelling in SDK_CLASSES, classes)
        classes = filter(lambda c: c.spelling in versions, classes)
        classes = [Class(sdkver, abi, c) for c in classes]
        classes = {c.version: c for c in classes}

        all_records[sdkver][abi] = structs
        tmp_classes[sdkver][abi] = classes

        for name, struct in structs.items():
            if name not in all_structs:
                all_structs[name] = {}
            if sdkver not in all_structs[name]:
                all_structs[name][sdkver] = {}
            all_structs[name][sdkver][abi] = struct

for i, sdkver in enumerate(reversed(SDK_VERSIONS)):
    all_classes.update(tmp_classes[sdkver]['u32'])

print('parsing SDKs... 100%')


tmp_structs = {}

for i, name in enumerate(all_structs.keys()):
    print(f'classifying structs... {i * 100 // len(all_structs.keys())}%', end='\r')
    versions = classify_struct(name)
    for sdkver in SDK_VERSIONS:
        if not versions or sdkver not in versions: continue
        all_versions[sdkver][name] = versions[sdkver]

def struct_order(x):
    name, structs = x if type(x) is tuple else (x, all_structs[x])
    order = (struct.order for abis in structs.values()
             for struct in abis.values())
    return (min(order), name)

for name, structs in sorted(all_structs.items(), key=struct_order):
    tmp_structs[name] = {}
    for sdkver in filter(lambda v: v in structs, SDK_VERSIONS):
        tmp_structs[name][sdkver] = {a: structs[sdkver][a] for a in ABIS}

all_structs = tmp_structs

print('classifying structs... 100%')


for klass in all_classes.values():
    with open(f"vrclient_x64/win{klass.name}.c", "w") as file:
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
    generate(sdkver, all_records[sdkver])


for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

with open("tests/main_autogen.c", "a") as f:
    f.write("    printf(\"All tests executed.\\n\");\n")
    f.write("}\n")

generate_flatapi_c()


declared = {}

with open('vrclient_x64/vrclient_structs_generated.h', 'w') as file:
    out = file.write

    for name in sorted(unique_structs, key=struct_order):
        if name in EXEMPT_STRUCTS: continue
        for sdkver, abis in all_structs[name].items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'struct {version}' in declared: continue
            declared[f'struct {version}'] = True

            kind = 'union' if type(abis['w64']) is Union else 'struct'

            out(f'typedef {kind} {version} {version};\n')
            abis['w64'].write_definition(out, "")

    for name, structs in all_structs.items():
        if name in EXEMPT_STRUCTS: continue
        if name in unique_structs: continue
        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'typedef {version}' in declared: continue
            declared[f'typedef {version}'] = True

            kind = 'union' if type(abis['w64']) is Union else 'struct'

            if type(abis['w64']) is Class:
                out(f'typedef {kind} u_{version} u_{version};\n')
                out(f'typedef {kind} u_{version} u64_{version};\n')
                out(f'typedef {kind} u_{version} u32_{version};\n')
                out(f'typedef {kind} w_{version} w_{version};\n')
                out(f'typedef {kind} w_{version} w64_{version};\n')
                out(f'typedef {kind} w_{version} w32_{version};\n')
                continue

            if abis["w64"].needs_conversion(abis["u64"]):
                out(f'typedef {kind} u64_{version} u64_{version};\n')
            else:
                out(f'typedef {kind} w64_{version} u64_{version};\n')
            out(f'typedef {kind} w64_{version} w64_{version};\n')

            if abis["w32"].needs_conversion(abis["u32"]):
                out(f'typedef {kind} u32_{version} u32_{version};\n')
            else:
                out(f'typedef {kind} w32_{version} u32_{version};\n')
            out(f'typedef {kind} w32_{version} w32_{version};\n')

    for name, structs in all_structs.items():
        if name in EXEMPT_STRUCTS: continue
        if name in unique_structs: continue
        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'struct {version}' in declared: continue
            declared[f'struct {version}'] = True

            kind = 'union' if type(abis['w64']) is Union else 'struct'

            if type(abis['w64']) is Class:
                abis['w64'].write_definition(out, "w_")
                abis['u64'].write_definition(out, "u_")
                continue

            abis['w64'].write_definition(out, "w64_")
            if abis["w64"].needs_conversion(abis["u64"]):
                abis['u64'].write_definition(out, "u64_")

            abis['w32'].write_definition(out, "w32_")
            if abis["w32"].needs_conversion(abis["u32"]):
                abis['u32'].write_definition(out, "u32_")

            out(u'#ifdef __i386__\n')
            out(f'typedef w32_{version} w_{version};\n')
            out(f'typedef u32_{version} u_{version};\n')
            out(u'#endif\n')
            out(u'#ifdef __x86_64__\n')
            out(f'typedef w64_{version} w_{version};\n')
            out(f'typedef u64_{version} u_{version};\n')
            out(u'#endif\n')
            out(u'\n')


with open('vrclient_x64/unixlib_generated.cpp', 'w') as file:
    out = file.write

    out(u'/* This file is auto-generated, do not edit. */\n\n')
    out(u'#include "vrclient_structs.h"\n\n')

    for name in sorted(unique_structs, key=struct_order):
        for sdkver, abis in sorted(all_structs[name].items()):
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'checks {version}' in declared: continue
            declared[f'checks {version}'] = True

            abis['w64'].write_checks(out, "")

    for name, structs in all_structs.items():
        if name in EXEMPT_STRUCTS: continue
        if name in unique_structs: continue
        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'checks {version}' in declared: continue
            declared[f'checks {version}'] = True

            if type(abis['w64']) is Class:
                continue

            abis['w64'].write_checks(out, "w64_")
            abis['u64'].write_checks(out, "u64_")
            abis['w32'].write_checks(out, "w32_")
            abis['u32'].write_checks(out, "u32_")
