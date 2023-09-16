#!/usr/bin/env python3

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../vrclient/gen_wrapper.py

CLANG_PATH='/usr/lib/clang/15'

from clang.cindex import Cursor, CursorKind, Index, TypeKind
from collections import namedtuple
import concurrent.futures
import os
import re

SDK_VERSIONS = [
    "158",
    "157",
    "156",
    "155",
    "154",
    "153a",
    "152",
    "151",
    "150",
    "149",
    "148a",
    "147",
    "146",
    "145",
    "144",
    "143y",
    "143x",
    "143",
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
    "133x",
    "133b",
    "133a",
    "133",
    "132x",
    "132",
    "131",
    "130x",
    "130",
    "129a",
    "129",
    "128x",
    "128",
    "127",
    "126a",
    "126",
    "125",
    "124",
    "123a",
    "123",
    "122",
    "121x",
    "121",
    "120",
    "119x",
    "119",
    "118",
    "117",
    "116x",
    "116",
    "115",
    "114",
    "113",
    "112x",
    "112",
    "111x",
    "111",
    "110",
    "109",
    "108",
    "107",
    "106",
    "105",
    "104",
    "103",
    "102x",
    "102",
    "101x",
    "101",
    "100",
    "099y",
    "099x",
    "099w",
    "099v",
    "099u",
]

ABIS = ['u32', 'u64', 'w32', 'w64']

SDK_SOURCES = {
    "steam_api.h": [
        "ISteamApps",
        "ISteamAppList",
        "ISteamClient",
        "ISteamController",
        "ISteamGameSearch",
        "ISteamFriends",
        "ISteamHTMLSurface",
        "ISteamHTTP",
        "ISteamInput",
        "ISteamInventory",
        "ISteamMatchmaking",
        "ISteamMatchmakingServers",
        "ISteamMusic",
        "ISteamMusicRemote",
        "ISteamNetworking",
        "ISteamParties",
        "ISteamRemotePlay",
        "ISteamRemoteStorage",
        "ISteamScreenshots",
        "ISteamUGC",
        "ISteamUnifiedMessages",
        "ISteamUser",
        "ISteamUserStats",
        "ISteamUtils",
        "ISteamVideo"
    ],
    "isteamappticket.h": [
        "ISteamAppTicket"
    ],
    "isteamgameserver.h": [
        "ISteamGameServer"
    ],
    "isteamgameserverstats.h": [
        "ISteamGameServerStats"
    ],
    "isteamgamestats.h": [
        "ISteamGameStats"
    ],
    "isteammasterserverupdater.h": [
        "ISteamMasterServerUpdater"
    ],
    "isteamgamecoordinator.h": [
        "ISteamGameCoordinator"
    ],
    "isteamparentalsettings.h": [
        "ISteamParentalSettings"
    ],
    "isteamnetworkingmessages.h": [
        "ISteamNetworkingMessages"
    ],
    "isteamnetworkingsockets.h": [
        "ISteamNetworkingSockets"
    ],
    "isteamnetworkingsocketsserialized.h": [
        "ISteamNetworkingSocketsSerialized"
    ],
    "isteamnetworkingutils.h": [
        "ISteamNetworkingUtils"
    ],
    "steamnetworkingfakeip.h": [
        "ISteamNetworkingFakeUDPPort"
    ],
}

SDK_CLASSES = {klass: source for source, klasses in SDK_SOURCES.items()
               for klass in klasses}

VERSION_ALIASES = {
    #these interfaces are undocumented and binary compatible
    #"target interface": ["alias 1", "alias 2"],
    "SteamUtils004":["SteamUtils003"],
    "SteamUtils002":["SteamUtils001"],
    "SteamGameServer008":["SteamGameServer007","SteamGameServer006"],
    "SteamNetworkingSocketsSerialized002":["SteamNetworkingSocketsSerialized001"],
    "STEAMAPPS_INTERFACE_VERSION001":["SteamApps001"],
    "SteamNetworkingSockets002":["SteamNetworkingSockets003"],
}

# these structs are manually confirmed to be equivalent
EXEMPT_STRUCTS = {
    "CSteamID",
    "CGameID",
    "CCallbackBase",
    "SteamIPAddress_t",
    "SteamPS3Params_t",
    "ValvePackingSentinel_t"
}

# structs for which the size is important, either because of arrays or size parameters
SIZED_STRUCTS = {
    "SteamPartyBeaconLocation_t",
    "SteamItemDetails_t",
}

# we have converters for these written by hand because they're too complicated to generate
MANUAL_STRUCTS = [
    "SteamNetworkingMessage_t"
]

Method = namedtuple('Method', ['name', 'version_func'], defaults=[lambda _: True])

MANUAL_METHODS = {
    #TODO: 001 005 007
    #NOTE: 003 never appeared in a public SDK, but is an alias for 002 (the version in SDK 1.45 is actually 004 but incorrectly versioned as 003)
    "cppISteamNetworkingSockets_SteamNetworkingSockets": [
        Method("ReceiveMessagesOnConnection"),
        Method("ReceiveMessagesOnListenSocket"),
        Method("ReceiveMessagesOnPollGroup"),
        Method("SendMessages"),
        Method("CreateFakeUDPPort"),
    ],
    "cppISteamNetworkingUtils_SteamNetworkingUtils": [
        Method("AllocateMessage"),
        Method("SetConfigValue", lambda version: version >= 3)
    ],
    "cppISteamNetworkingMessages_SteamNetworkingMessages": [
        Method("ReceiveMessagesOnChannel"),
    ],
    "cppISteamInput_SteamInput": [
        Method("EnableActionEventCallbacks"),
        Method("GetGlyphForActionOrigin"),
        Method("GetGlyphPNGForActionOrigin"),
        Method("GetGlyphSVGForActionOrigin"),
        Method("GetGlyphForActionOrigin_Legacy"),
        Method("GetGlyphForXboxOrigin"),
    ],
    "cppISteamController_SteamController": [
        Method("GetGlyphForActionOrigin"),
        Method("GetGlyphForXboxOrigin"),
    ],
    "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort": [
        Method("DestroyFakeUDPPort"),
        Method("ReceiveMessages"),
    ],
    "cppISteamClient_SteamClient": [
        Method("Set_SteamAPI_CCheckCallbackRegisteredInProcess", lambda version: version >= 20),
    ],
}



POST_EXEC_FUNCS = {
    "ISteamClient_BShutdownIfAllPipesClosed" : "after_shutdown",
    "ISteamClient_CreateSteamPipe" : "after_steam_pipe_create",
}

INTERFACE_NAME_VERSION = re.compile(r'^(?P<name>.+?)(?P<version>\d*)$')
DEFINE_INTERFACE_VERSION = re.compile(r'^#define\s*(?P<name>STEAM(?:\w*)_VERSION(?:\w*))\s*"(?P<version>.*)"')

def method_needs_manual_handling(interface_with_version, method_name):
    match_dict = INTERFACE_NAME_VERSION.match(interface_with_version).groupdict()
    interface = match_dict['name']
    version = int(match_dict['version']) if match_dict['version'] else None

    method_list = MANUAL_METHODS.get(interface, [])
    method = next(filter(lambda m: m.name == method_name, method_list), None)

    return method and method.version_func(version)

def post_execution_function(classname, method_name):
    return POST_EXEC_FUNCS.get(classname + "_" + method_name, None)

# manual converters for simple types (function pointers)
MANUAL_TYPES = [
    "FSteamNetworkingSocketsDebugOutput",
    "SteamAPIWarningMessageHook_t",
    "SteamAPI_CheckCallbackRegistered_t",
    "SteamAPI_PostAPIResultInProcess_t",
    "void ()",
]

# manual converters for specific parameters
MANUAL_PARAMS = [
    "nNativeKeyCode"
]

converted_structs = []

# callback classes for which we have a linux wrapper
WRAPPED_CLASSES = [
    "ISteamMatchmakingServerListResponse",
    "ISteamMatchmakingPingResponse",
    "ISteamMatchmakingPlayersResponse",
    "ISteamMatchmakingRulesResponse",
    "ISteamNetworkingFakeUDPPort",
    "ISteamNetworkingConnectionCustomSignaling",
    "ISteamNetworkingCustomSignalingRecvContext",
]

all_classes = {}
all_records = {}
all_sources = {}
all_structs = {}
all_versions = {}

PATH_CONV_METHODS_UTOW = {
    "ISteamAppList_GetAppInstallDir": {
        "pchDirectory": {"len": "cchNameMax", "url": False},
        "ret_size": True,
    },
    "ISteamApps_GetAppInstallDir": {
        "pchFolder": {"len": "cchFolderBufferSize", "url": False},
        "ret_size": True,
    },
    "ISteamUGC_GetQueryUGCAdditionalPreview": {
        "pchURLOrVideoID": {"len": "cchURLSize", "url": True},
    },
    "ISteamUGC_GetItemInstallInfo": {
        "pchFolder": {"len": "cchFolderSize", "url": False},
    },
    "ISteamUser_GetUserDataFolder": {
        "pchBuffer": {"len": "cubBuffer", "url": False},
    },
}

PATH_CONV_METHODS_WTOU = {
    "ISteamApps_GetFileDetails": {
        "pszFileName": {"array": False, "url": False},
    },
    ### ISteamGameServer::SetModDir - "Just the folder name, not the whole path. I.e. "Spacewar"."
    "ISteamHTMLSurface_LoadURL": {
        "pchURL": {"array": False, "url": True},
    },
    "ISteamHTMLSurface_FileLoadDialogResponse": {
        "pchSelectedFiles": {"array": True, "url": False},
    },
    "ISteamRemoteStorage_PublishWorkshopFile": {
        "pchFile": {"array": False, "url": False},
        "pchPreviewFile": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_UpdatePublishedFileFile": {
        "pchFile": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_UpdatePublishedFilePreviewFile": {
        "pchPreviewFile": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_PublishVideo": {
        "pchPreviewFile": {"array": False, "url": False},
    },
    "ISteamScreenshots_AddScreenshotToLibrary": {
        "pchFilename": {"array": False, "url": False},
        "pchThumbnailFilename": {"array": False, "url": False},
    },
    "ISteamScreenshots_AddVRScreenshotToLibrary": {
        "pchFilename": {"array": False, "url": False},
        "pchVRFilename": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_UGCDownloadToLocation": {
        "pchLocation": {"array": False, "url": False},
    },
    "ISteamUGC_SetItemContent": {
        "pszContentFolder": {"array": False, "url": False},
    },
    "ISteamUGC_SetItemPreview": {
        "pszPreviewFile": {"array": False, "url": False},
    },
    "ISteamUGC_AddItemPreviewFile": {
        "pszPreviewFile": {"array": False, "url": False},
    },
    "ISteamUGC_UpdateItemPreviewFile": {
        "pszPreviewFile": {"array": False, "url": False},
    },
    "ISteamUGC_BInitWorkshopForGameServer": {
        "pszFolder": {"array": False, "url": False},
    },
    "ISteamUtils_CheckFileSignature": {
        "szFileName": {"array": False, "url": False},
    },
    "ISteamController_Init": {
        "pchAbsolutePathToControllerConfigVDF": {"array": False, "url": False},
    },
    "ISteamInput_SetInputActionManifestFilePath": {
        "pchInputActionManifestAbsolutePath": {"array": False, "url": False},
    },
}

PATH_CONV_STRUCTS = {
    "HTML_StartRequest_t": {
        "pchURL": True,
    },
    "HTML_URLChanged_t": {
        "pchURL": True,
    },
    "HTML_FinishedRequest_t": {
        "pchURL": True,
    },
    "HTML_OpenLinkInNewTab_t": {
        "pchURL": True,
    },
    "HTML_LinkAtPosition_t": {
        "pchURL": True,
    },
    "HTML_FileOpenDialog_t": {
        "pchInitialFile": True,
    },
    "HTML_NewWindow_t": {
        "pchURL": True,
    },
}


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

    def needs_conversion(self, other):
        return False


class Struct:
    def __init__(self, sdkver, abi, cursor):
        self._cursor = cursor
        self._sdkver = sdkver
        self._abi = abi
        self._fields = None
        self._conv_cache = {}

        self.name = canonical_typename(self._cursor)
        self.type = self._cursor.type.get_canonical()
        self.size = self.type.get_size()
        self.align = self.type.get_align()
        self.id = f'{abi}_{self.name}_{sdkver}'

        if self.name in EXEMPT_STRUCTS:
            self._fields = [Padding(0, self.size)]

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

    def needs_conversion(self, other):
        if other.id in self._conv_cache:
            return self._conv_cache[other.id]
        self._conv_cache[other.id] = other._conv_cache[self.id] = True

        if self.name in PATH_CONV_STRUCTS and self._abi[0] != other._abi[0]:
            return True
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

    def needs_conversion(self, other):
        return True


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

        self.name = cursor.spelling
        self.filename = SDK_CLASSES.get(self.name, None)
        versions = all_versions[sdkver]
        self.version = self.name[1:].upper()
        self.version = versions.get(self.version, "")

        self.type = self._cursor.type.get_canonical()

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

    def needs_conversion(self, other):
        return self._abi[0] != other._abi[0]

    def write_definition(self, out, prefix):
        out(f'struct {prefix}{self.full_name}\n')
        out(u'{\n')
        out(u'#ifdef __cplusplus\n')
        for method in self.methods:
            types = [declspec(p, "", prefix if prefix != "cpp" else None)
                     for p in method.get_arguments()]

            # CGameID -> CGameID &
            # Windows side follows the prototype in the header while Linux
            # steamclient treats gameID parameter as pointer
            if self.full_name == 'ISteamUser_SteamUser008' \
               and method.name == 'InitiateGameConnection':
                types[3] = 'CGameID *'

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
    name = canonical_typename(decl)
    if name not in all_structs:
        return BasicType(decl, abi)
    return all_structs[name][sdkver][abi]


def canonical_typename(cursor):
    if type(cursor) in (Struct, Class, Cursor):
        return canonical_typename(cursor.type)

    name = cursor.get_canonical().spelling
    return name.removeprefix("const ")


def underlying_typename(decl):
    return canonical_typename(underlying_type(decl))


def find_struct_abis(name):
    if not name in all_structs:
        return None
    structs = all_structs[name]
    if not sdkver in structs:
        return None
    return structs[sdkver]


def struct_needs_conversion(struct):
    name = canonical_typename(struct)
    if name in EXEMPT_STRUCTS:
        return False
    if name in MANUAL_STRUCTS:
        return True
    if name in PATH_CONV_STRUCTS:
        return True

    abis = find_struct_abis(name)
    if abis is None: return False
    if abis['w32'].needs_conversion(abis['u32']):
        return True
    if abis['w64'].needs_conversion(abis['u64']):
        return True
    return False


def underlying_type(decl):
    if type(decl) is Cursor:
        decl = decl.type
    if decl.kind == TypeKind.LVALUEREFERENCE: return underlying_type(decl.get_pointee())
    if decl.kind == TypeKind.CONSTANTARRAY: return underlying_type(decl.element_type)
    if decl.kind == TypeKind.POINTER: return underlying_type(decl.get_pointee())
    return decl


def param_needs_conversion(decl):
    decl = underlying_type(decl)
    return decl.spelling not in WRAPPED_CLASSES and \
           decl.kind == TypeKind.RECORD and \
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
    ret = declspec(decl.get_result(), "", prefix)
    params = [declspec(a, "", prefix) for a in decl.argument_types()]
    params = ", ".join(params) if len(params) else "void"
    return f'{ret} ({name})({params})'


def declspec(decl, name, prefix):
    call = callconv(decl, prefix)
    if type(decl) is Cursor:
        decl = decl.type
    decl = decl.get_canonical()

    const = 'const ' if decl.is_const_qualified() else ''
    if decl.kind == TypeKind.FUNCTIONPROTO:
        return declspec_func(decl, name, prefix)
    if decl.kind in (TypeKind.POINTER, TypeKind.LVALUEREFERENCE):
        decl = decl.get_pointee()
        return declspec(decl, f"*{call}{const}{name}", prefix)
    if decl.kind == TypeKind.CONSTANTARRAY:
        decl, count = decl.element_type, decl.element_count
        return declspec(decl, f"({const}{name})[{count}]", prefix)

    if len(name):
        name = f' {name}'

    if decl.kind in (TypeKind.UNEXPOSED, TypeKind.FUNCTIONPROTO):
        return f'void{name}'
    if decl.kind == TypeKind.ENUM:
        return f'uint{decl.get_size() * 8}_t{name}'

    type_name = decl.spelling.removeprefix("const ")
    if prefix == "win" and param_needs_conversion(decl):
        return f"{const}win{type_name}_{sdkver}{name}"
    if type_name.startswith('ISteam'):
        return f'{const}void /*{type_name}*/{name}'
    if type_name in ('void', 'bool', 'char', 'float', 'double'):
        return f'{const}{type_name}{name}'
    if type_name.startswith(('int', 'long', 'short', 'signed')):
        return f'{const}int{decl.get_size() * 8}_t{name}'
    if type_name.startswith(('uint', 'unsigned')):
        return f'{const}uint{decl.get_size() * 8}_t{name}'

    return f'{decl.spelling}{name}'


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
    manual_convert = {n: p for n, p in zip(names, method.get_arguments())
                      if underlying_type(p).spelling in MANUAL_TYPES
                      or p.spelling in MANUAL_PARAMS}

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
        assert underlying_typename(param) in SIZED_STRUCTS | EXEMPT_STRUCTS

    for i, (name, param) in enumerate(params[1:]):
        if underlying_type(param).kind != TypeKind.RECORD:
            continue
        prev_name, prev_param = params[i - 1]
        if not any(w in prev_name.lower() for w in ('count', 'len', 'size', 'num')):
            continue
        if underlying_typename(param) not in SIZED_STRUCTS | EXEMPT_STRUCTS:
            print('Warning:', underlying_typename(param), name, 'following', prev_name)

    need_output = {}

    for name, param in sorted(need_convert.items()):
        type_name = underlying_typename(param)

        if param.type.kind != TypeKind.POINTER:
            out(f'    {declspec(param, f"lin_{name}", "u_")};\n')
            out(f'    win_to_lin_struct_{type_name}_{sdkver}( &params->{name}, &lin_{name} );\n')
            continue

        pointee = param.type.get_pointee()
        if pointee.kind == TypeKind.POINTER:
            need_output[name] = param
            out(f'    {declspec(pointee, f"lin_{name}", "u_")};\n')
            continue

        if not pointee.is_const_qualified():
            need_output[name] = param

        out(f'    {declspec(pointee, f"lin_{name}", "u_")};\n')
        out(f'    win_to_lin_struct_{type_name}_{sdkver}( params->{name}, &lin_{name} );\n')

    for name, param in sorted(manual_convert.items()):
        if name in MANUAL_PARAMS:
            out(f'    {declspec(param, f"lin_{name}", "u_")} = manual_convert_{name}( params->{name} );\n')
        else:
            out(f'    {declspec(param, f"lin_{name}", "u_")} = manual_convert_{method.name}_{name}( params->{name} );\n')

    if returns_void:
        out(u'    ')
    elif returns_record:
        out(u'    *params->_ret = ')
    else:
        out(u'    params->_ret = ')

    def param_call(name, param):
        pfx = '&' if param.type.kind == TypeKind.POINTER else ''
        if name in need_convert: return f"{pfx}lin_{name}"
        if name in manual_convert: return f"lin_{name}"
        return f'params->{name}'

    params = [param_call(n, p) for n, p in zip(names[1:], method.get_arguments())]

    # CGameID -> CGameID &
    # Windows side follows the prototype in the header while Linux
    # steamclient treats gameID parameter as pointer
    if klass.full_name == 'ISteamUser_SteamUser008' \
       and method.name == 'InitiateGameConnection':
        params[3] = f'&{params[3]}'

    out(f'iface->{method.spelling}( {", ".join(params)} );\n')

    for name, param in sorted(need_output.items()):
        type_name = underlying_typename(param)
        out(f'    lin_to_win_struct_{type_name}_{sdkver}( &lin_{name}, params->{name} );\n')

    if method.result_type.kind != TypeKind.VOID:
        post_exec = post_execution_function(classname, method.spelling)
        if post_exec: out(f'    params->_ret = {post_exec}( params->_ret );\n')
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


def handle_method_c(method, winclassname, cppname, out):
    returns_void = method.result_type.kind == TypeKind.VOID
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    ret = "*" if returns_record else ""
    ret = f'{declspec(method.result_type, ret, "win")} '

    types = [p.type for p in method.get_arguments()]
    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]
    params = [declspec(p, names[i], "win") for i, p in enumerate(method.get_arguments())]

    if returns_record:
        params = [f'{declspec(method.result_type, "*_ret", "win")}'] + params
        types = [method.result_type] + types
        names = ['_ret'] + names

    params = ['struct w_steam_iface *_this'] + params
    types = [None] + types
    names = ['_this'] + names

    out(f'{ret}__thiscall {winclassname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    out(f'    struct {cppname}_{method.name}_params params =\n')
    out(u'    {\n')
    out(u'        .linux_side = _this->u_iface,\n')
    for type, name in zip(types[1:], names[1:]):
        iface = type.get_pointee().spelling if type.kind == TypeKind.POINTER else None
        out(f'        .{name} = ')
        if iface not in WRAPPED_CLASSES: out(f'{name},\n')
        else: out(f'create_Linux{iface}({name}, "{winclassname}"),\n')
    out(u'    };\n')

    should_gen_callback = "GetAPICallResult" in method.name
    if should_gen_callback:
        out(u'    int w_callback_len = cubCallback;\n')
        out(u'    void *w_callback = pCallback;\n')

    path_conv_utow = PATH_CONV_METHODS_UTOW.get(f'{klass.name}_{method.spelling}', {})
    path_conv_wtou = PATH_CONV_METHODS_WTOU.get(f'{klass.name}_{method.spelling}', {})

    for name, conv in filter(lambda x: x[0] in names, path_conv_wtou.items()):
        if conv['array']:
            out(f'    params.{name} = steamclient_dos_to_unix_path_array( {name} );\n')
        else:
            out(f'    params.{name} = steamclient_dos_to_unix_path( {name}, {int(conv["url"])} );\n')

    out(u'    TRACE("%p\\n", _this);\n')

    if should_gen_callback:
        out(u'    if (!(params.pCallback = alloc_callback_wtou(iCallbackExpected, w_callback, &params.cubCallback))) return FALSE;\n')

    out(f'    {cppname}_{method.name}( &params );\n')

    should_gen_wrapper = not method_needs_manual_handling(cppname, method.name) and \
            (method.result_type.spelling.startswith("ISteam") or \
             method.name.startswith("GetISteamGenericInterface"))
    if should_gen_wrapper:
        out(u'    params._ret = create_win_interface( pchVersion, params._ret );\n')

    if should_gen_callback:
        out(u'    if (params._ret && params.pCallback != w_callback)\n')
        out(u'    {\n')
        out(u'        convert_callback_utow(iCallbackExpected, params.pCallback, params.cubCallback, w_callback, w_callback_len);\n')
        out(u'        HeapFree(GetProcessHeap(), 0, params.pCallback);\n')
        out(u'    }\n\n')

    for name, conv in filter(lambda x: x[0] in names, path_conv_utow.items()):
        out(u'    ')
        if "ret_size" in path_conv_utow:
            out(u'params._ret = ')
        out(f'steamclient_unix_path_to_dos_path( params._ret, {name}, {name}, {conv["len"]}, {int(conv["url"])} );\n')

    for name, conv in filter(lambda x: x[0] in names, path_conv_wtou.items()):
        if conv["array"]:
            out(f'    steamclient_free_path_array( params.{name} );\n')
        else:
            out(f'    steamclient_free_path( params.{name} );\n')

    if not returns_void:
        out(u'    return params._ret;\n')
    out(u'}\n\n')


def handle_class(klass):
    cppname = f"cpp{klass.full_name}"

    ext = "cpp"
    for method in klass.methods:
        if type(method) is Destructor:
            continue
        if method_needs_manual_handling(cppname, method.name):
            ext = "hpp"

    with open(f"{cppname}.h", "w") as file:
        out = file.write

        out(f'struct {cppname};\n')

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            handle_method_hpp(method, cppname, out)

    with open(f"{cppname}.{ext}", "w") as file:
        out = file.write

        out(u'#include "steam_defs.h"\n')
        out(u'#pragma push_macro("__cdecl")\n')
        out(u'#undef __cdecl\n')
        out(u'#define __cdecl\n')
        out(f'#include "steamworks_sdk_{klass._sdkver}/steam_api.h"\n')
        if os.path.isfile(f"steamworks_sdk_{klass._sdkver}/steamnetworkingtypes.h"):
            out(f'#include "steamworks_sdk_{klass._sdkver}/steamnetworkingtypes.h"\n')
        if klass.filename != "steam_api.h":
            out(f'#include "steamworks_sdk_{klass._sdkver}/{klass.filename}"\n')
        out(u'#pragma pop_macro("__cdecl")\n')
        out(u'#include "steamclient_private.h"\n')
        out(u'#ifdef __cplusplus\n')
        out(u'extern "C" {\n')
        out(u'#endif\n')
        out(f'#define SDKVER_{klass._sdkver}\n')
        out(u'#include "struct_converters.h"\n')
        out(f'#include "{cppname}.h"\n\n')

        klass.write_definition(out, "cpp")

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            if method_needs_manual_handling(cppname, method.spelling):
                continue
            handle_method_cpp(method, klass.name, cppname, out)

        out(u'#ifdef __cplusplus\n')
        out(u'}\n')
        out(u'#endif\n')

    winclassname = f"win{klass.full_name}"
    with open(f"win{klass.name}.c", "a") as file:
        out = file.write

        out(f'#include "{cppname}.h"\n')
        out(u'\n')

        for method in klass.methods:
            handle_thiscall_wrapper(klass, method, out)
        out('\n')

        for method in klass.methods:
            if type(method) is Destructor:
                out(f'void __thiscall {winclassname}_{method.name}(struct w_steam_iface *_this)\n{{/* never called */}}\n\n')
            else:
                handle_method_c(method, winclassname, cppname, out)

        out(f'extern vtable_ptr {winclassname}_vtable;\n')
        out(u'\n')
        out(u'#ifndef __GNUC__\n')
        out(u'void __asm_dummy_vtables(void) {\n')
        out(u'#endif\n')
        out(f'    __ASM_VTABLE({winclassname},\n')
        for method in sorted(klass.methods, key=lambda x: (x._index, -x._override)):
            out(f'        VTABLE_ADD_FUNC({winclassname}_{method.name})\n')
        out(u'    );\n')
        out(u'#ifndef __GNUC__\n')
        out(u'}\n')
        out(u'#endif\n')
        out(u'\n')
        out(f'struct w_steam_iface *create_{winclassname}(void *u_iface)\n')
        out(u'{\n')
        if klass.name in WRAPPED_CLASSES:
            out(u'    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), 0, sizeof(struct w_steam_iface));\n')
        else:
            out(f'    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "{klass.version}");\n')
        out(u'    TRACE("-> %p\\n", r);\n')
        out(f'    r->vtable = alloc_vtable(&{winclassname}_vtable, {len(klass.methods)}, "{klass.version}");\n')
        out(u'    r->u_iface = u_iface;\n')
        out(u'    return r;\n')
        out(u'}\n\n')

    constructors = open("win_constructors.h", "a")
    constructors.write(f"extern struct w_steam_iface *create_{winclassname}(void *);\n")

    constructors = open("win_constructors_table.dat", "a")
    for alias in VERSION_ALIASES.get(klass.version, []):
        constructors.write(f"    {{\"{alias}\", &create_{winclassname}}}, /* alias */\n")
    constructors.write(f"    {{\"{klass.version}\", &create_{winclassname}}},\n")


generated_cb_handlers = []
generated_cb_ids = []
cpp_files_need_close_brace = []
cb_table = {}
cb_table64 = {}

def get_field_attribute_str(field):
    if field.type.kind != TypeKind.RECORD: return ""
    name = canonical_typename(field)
    return f" __attribute__((aligned({find_struct_abis(name)['w32'].align})))"

#because of struct packing differences between win32 and linux, we
#need to convert these structs from their linux layout to the win32
#layout.
def handle_struct(sdkver, struct):
    members = struct.get_children()
    cb_num = None
    has_fields = False
    for c in members:
        if c.kind == CursorKind.ENUM_DECL:
            enums = c.get_children()
            for e in enums:
                if e.displayname == "k_iCallback":
                    cb_num = e.enum_value
        if c.kind == CursorKind.FIELD_DECL:
            has_fields = True

    w2l_handler_name = None
    l2w_handler_name = None

    name = canonical_typename(struct)
    abis = find_struct_abis(name)

    def dump_win_struct(to_file, name):
        to_file.write("#pragma pack( push, 8 )\n")
        to_file.write(f"struct win{name} {{\n")
        for m in struct.get_children():
            if m.kind == CursorKind.FIELD_DECL:
                if m.type.kind == TypeKind.CONSTANTARRAY:
                    to_file.write(f"    {m.type.element_type.spelling} {m.displayname}[{m.type.element_count}];\n")
                elif m.type.kind == TypeKind.RECORD and \
                        struct_needs_conversion(m.type):
                    to_file.write(f"    win{m.type.spelling}_{sdkver} {m.displayname};\n")
                else:
                    if m.type.kind == TypeKind.POINTER and \
                            (m.type.get_pointee().kind == TypeKind.UNEXPOSED or m.type.get_pointee().kind == TypeKind.FUNCTIONPROTO):
                        to_file.write(f"    void *{m.displayname}; /*fn pointer*/\n")
                    else:
                        to_file.write(f"    {m.type.spelling} {m.displayname}{get_field_attribute_str(m)};\n")
        to_file.write("}  __attribute__ ((ms_struct));\n")
        to_file.write("#pragma pack( pop )\n")

    if cb_num is None:
        hfile = open("struct_converters.h", "a")

        if not has_fields:
            return
        if struct.name == "":
            return
        if not struct_needs_conversion(struct.type):
            return

        struct_name = f"{struct.name}_{sdkver}"

        if struct_name in converted_structs:
            return
        converted_structs.append(struct_name)

        w2l_handler_name = f"win_to_lin_struct_{struct_name}"
        l2w_handler_name = f"lin_to_win_struct_{struct_name}"
        l2w_handler_name64 = None

        hfile.write(f"#if defined(SDKVER_{sdkver}) || !defined(__cplusplus)\n")
        dump_win_struct(hfile, struct_name)
        hfile.write(f"typedef struct win{struct_name} win{struct_name};\n")
        hfile.write(f"struct {struct.name};\n")

        if canonical_typename(struct) in MANUAL_STRUCTS:
            hfile.write("#endif\n\n")
            return

        hfile.write(f"extern void {w2l_handler_name}(const struct win{struct_name} *w, struct {struct.name} *l);\n")
        hfile.write(f"extern void {l2w_handler_name}(const struct {struct.name} *l, struct win{struct_name} *w);\n")
        hfile.write("#endif\n\n")
    else:
        #for callbacks, we use the windows struct size in the cb dispatch switch
        size = {a: abis[a].size for a in abis.keys()}

        struct_name = f"{struct.name}_{size['w32']}"
        l2w_handler_name = f"cb_{struct_name}"
        if size['w64'] != size['w32']:
            struct_name64 = f"{struct.name}_{size['w64']}"
            l2w_handler_name64 = f"cb_{struct_name64}"
        else:
            l2w_handler_name64 = None
        if l2w_handler_name in generated_cb_handlers:
            # we already have a handler for the callback struct of this size
            return
        if not struct_needs_conversion(struct.type):
            return

        cb_id = cb_num | (size['u32'] << 16)
        cb_id64 = cb_num | (size['u64'] << 16)
        if cb_id in generated_cb_ids:
            # either this cb changed name, or steam used the same ID for different structs
            return

        generated_cb_ids.append(cb_id)

        datfile = open("cb_converters.dat", "a")
        if l2w_handler_name64:
            datfile.write("#ifdef __i386__\n")
            datfile.write(f"case 0x{cb_id:08x}: win_msg->m_cubParam = {size['w32']}; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); {l2w_handler_name}((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n")
            datfile.write("#endif\n")

            datfile.write("#ifdef __x86_64__\n")
            datfile.write(f"case 0x{cb_id64:08x}: win_msg->m_cubParam = {size['w64']}; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); {l2w_handler_name64}((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n")
            datfile.write("#endif\n")
        else:
            datfile.write(f"case 0x{cb_id:08x}: win_msg->m_cubParam = {size['w32']}; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); {l2w_handler_name}((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n")

        generated_cb_handlers.append(l2w_handler_name)

        if not cb_num in cb_table.keys():
            # latest SDK linux size, list of windows struct sizes and names
            cb_table[cb_num] = (size['u32'], [])
            if l2w_handler_name64:
                cb_table64[cb_num] = (size['u64'], [])
            else:
                cb_table64[cb_num] = (size['u32'], [])
        cb_table[cb_num][1].append((size['w32'], struct_name))
        if l2w_handler_name64:
            cb_table64[cb_num][1].append((size['w64'], struct_name64))
        else:
            cb_table64[cb_num][1].append((size['w32'], struct_name))

        hfile = open("cb_converters.h", "a")
        hfile.write(f"struct {struct.name};\n")
        if l2w_handler_name64:
            hfile.write("#ifdef __i386__\n")
            hfile.write(f"struct win{struct_name};\n")
            hfile.write(f"extern void {l2w_handler_name}(const struct {struct.name} *l, struct win{struct_name} *w);\n")
            hfile.write("#endif\n")
            hfile.write("#ifdef __x86_64__\n")
            hfile.write(f"struct win{struct_name64};\n")
            hfile.write(f"extern void {l2w_handler_name64}(const struct {struct.name} *l, struct win{struct_name64} *w);\n")
            hfile.write("#endif\n\n")
        else:
            hfile.write(f"struct win{struct_name};\n")
            hfile.write(f"extern void {l2w_handler_name}(const struct {struct.name} *l, struct win{struct_name} *w);\n\n")

    cppname = f"struct_converters_{sdkver}.cpp"
    file_exists = os.path.isfile(cppname)
    cppfile = open(cppname, "a")
    if not file_exists:
        cppfile.write("#include \"steam_defs.h\"\n")
        cppfile.write("#pragma push_macro(\"__cdecl\")\n")
        cppfile.write("#undef __cdecl\n")
        cppfile.write("#define __cdecl\n")
        cppfile.write(f"#include \"steamworks_sdk_{sdkver}/steam_api.h\"\n")
        cppfile.write(f"#include \"steamworks_sdk_{sdkver}/isteamgameserver.h\"\n")
        if os.path.isfile(f"steamworks_sdk_{sdkver}/isteamnetworkingsockets.h"):
            cppfile.write(f"#include \"steamworks_sdk_{sdkver}/isteamnetworkingsockets.h\"\n")
        if os.path.isfile(f"steamworks_sdk_{sdkver}/isteamgameserverstats.h"):
            cppfile.write(f"#include \"steamworks_sdk_{sdkver}/isteamgameserverstats.h\"\n")
        if os.path.isfile(f"steamworks_sdk_{sdkver}/isteamgamecoordinator.h"):
            cppfile.write(f"#include \"steamworks_sdk_{sdkver}/isteamgamecoordinator.h\"\n")
        if os.path.isfile(f"steamworks_sdk_{sdkver}/steamnetworkingtypes.h"):
            cppfile.write(f"#include \"steamworks_sdk_{sdkver}/steamnetworkingtypes.h\"\n")
        cppfile.write("#pragma pop_macro(\"__cdecl\")\n")
        cppfile.write("#include \"steamclient_private.h\"\n")
        cppfile.write("extern \"C\" {\n")
        cppfile.write(f"#define SDKVER_{sdkver}\n")
        cppfile.write("#include \"struct_converters.h\"\n")
        cpp_files_need_close_brace.append(cppname)

    path_conv_fields = PATH_CONV_STRUCTS.get(struct.type.spelling, {})

    def handle_field(m, src, dst):
        if m.kind == CursorKind.FIELD_DECL:
            if m.type.kind == TypeKind.CONSTANTARRAY:
                assert(m.type.element_type.kind != TypeKind.RECORD or \
                        not struct_needs_conversion(m.type.element_type))
                cppfile.write(f"    memcpy({dst}->{m.displayname}, {src}->{m.displayname}, sizeof({dst}->{m.displayname}));\n")
            elif m.type.kind == TypeKind.RECORD and \
                    struct_needs_conversion(m.type):
                cppfile.write(f"    {src}_to_{dst}_struct_{m.type.spelling}_{sdkver}(&{src}->{m.displayname}, &{dst}->{m.displayname});\n")
            elif m.displayname in path_conv_fields:
                cppfile.write(f"    steamclient_unix_path_to_dos_path(1, {src}->{m.displayname}, g_tmppath, sizeof(g_tmppath), 1);\n")
                cppfile.write(f"    {dst}->{m.displayname} = g_tmppath;\n")
            else:
                cppfile.write(f"    {dst}->{m.displayname} = {src}->{m.displayname};\n")

    if not cb_num is None:
        if l2w_handler_name64:
            cppfile.write("#ifdef __i386__\n")
            dump_win_struct(cppfile, struct_name)
            cppfile.write("#endif\n")
            cppfile.write("#ifdef __x86_64__\n")
            dump_win_struct(cppfile, struct_name64)
            cppfile.write("#endif\n")
        else:
            dump_win_struct(cppfile, struct_name)

    if w2l_handler_name:
        cppfile.write(f"void {w2l_handler_name}(const struct win{struct_name} *win, struct {struct.name} *lin)\n{{\n")
        for m in struct.get_children():
            handle_field(m, "win", "lin")
        cppfile.write("}\n\n")

    if l2w_handler_name64:
        cppfile.write("#ifdef __x86_64__\n")
        cppfile.write(f"void {l2w_handler_name64}(const struct {struct.name} *lin, struct win{struct_name64} *win)\n{{\n")
        for m in struct.get_children():
            handle_field(m, "lin", "win")
        cppfile.write("}\n")
        cppfile.write("#endif\n\n")

    if l2w_handler_name:
        if l2w_handler_name64:
            cppfile.write("#ifdef __i386__\n")
        cppfile.write(f"void {l2w_handler_name}(const struct {struct.name} *lin, struct win{struct_name} *win)\n{{\n")
        for m in struct.get_children():
            handle_field(m, "lin", "win")
        cppfile.write("}\n")
        if l2w_handler_name64:
            cppfile.write("#endif\n\n")
        else:
            cppfile.write("\n")


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
    sdkdir = f"steamworks_sdk_{sdkver}"

    sources = {}
    versions = {}
    for file in os.listdir(sdkdir):
        # Some files from Valve have non-UTF-8 stuff in the comments
        # (typically the copyright symbol); therefore we ignore UTF-8
        # encoding errors
        lines = open(f"{sdkdir}/{file}", "r", errors="replace").readlines()
        if """#error "This file isn't used any more"\n""" in lines:
            sources[f"{sdkdir}/{file}"] = ""

        results = (DEFINE_INTERFACE_VERSION.match(l) for l in lines)
        for result in (r.groupdict() for r in results if r):
            name, version = result['name'], result['version']
            name = name.replace('_INTERFACE_VERSION', '')
            name = name.replace('_VERSION', '')
            versions[name] = version

    source = [f'#if __has_include("{sdkdir}/{file}")\n'
              f'#include "{sdkdir}/{file}"\n'
              f'#endif\n'
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
print('loading SDKs... 100%')


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

        structs = build.cursor.get_children()
        structs = filter(lambda c: c.is_definition(), structs)
        structs = filter(lambda c: c.type.get_canonical().kind == TypeKind.RECORD, structs)
        structs = filter(lambda c: c.kind != CursorKind.TYPEDEF_DECL, structs)
        structs = filter(lambda c: c.spelling not in SDK_CLASSES, structs)
        structs = [Record(sdkver, abi, c) for c in structs]
        structs = {c.name: c for c in structs}

        classes = build.cursor.get_children()
        classes = filter(lambda c: c.is_definition(), classes)
        classes = filter(lambda c: c.kind == CursorKind.CLASS_DECL, classes)
        classes = filter(lambda c: c.spelling in SDK_CLASSES, classes)
        classes = filter(lambda c: c.spelling[1:].upper() in versions, classes)
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


for klass in all_classes.values():
    with open(f"win{klass.name}.c", "w") as file:
        out = file.write

        out(u'/* This file is auto-generated, do not edit. */\n')
        out(u'#include "steamclient_private.h"\n')
        out(u'\n')
        out(u'#include "steam_defs.h"\n')
        out(u'#include "struct_converters.h"\n')
        out(u'\n')
        out(u'WINE_DEFAULT_DEBUG_CHANNEL(steamclient);\n')
        out(u'\n')


for _, klass in sorted(all_classes.items()):
    sdkver = klass._sdkver
    handle_class(klass)


with open('struct_converters.h', 'w') as file:
    out = file.write

    out(u'#ifndef __STRUCT_CONVERTERS_H\n')
    out(u'#define __STRUCT_CONVERTERS_H\n')

for sdkver in SDK_VERSIONS:
    generate(sdkver, all_records[sdkver])

for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

with open('struct_converters.h', 'a') as file:
    out = file.write

    out(u'#endif /* __STRUCT_CONVERTERS_H */\n')

getapifile = open("cb_getapi_table.dat", "w")
cbsizefile = open("cb_getapi_sizes.dat", "w")

cbsizefile.write("#ifdef __i386__\n")
getapifile.write("#ifdef __i386__\n")
for cb in sorted(cb_table.keys()):
    cbsizefile.write(f"case {cb}: /* {cb_table[cb][1][0][1]} */\n")
    cbsizefile.write(f"    return {cb_table[cb][0]};\n")
    getapifile.write(f"case {cb}:\n")
    getapifile.write("    switch(callback_len){\n")
    getapifile.write("    default:\n") # the first one should be the latest, should best support future SDK versions
    for (size, name) in cb_table[cb][1]:
        getapifile.write(f"    case {size}: cb_{name}(lin_callback, callback); break;\n")
    getapifile.write("    }\n    break;\n")
cbsizefile.write("#endif\n")
getapifile.write("#endif\n")

cbsizefile.write("#ifdef __x86_64__\n")
getapifile.write("#ifdef __x86_64__\n")
for cb in sorted(cb_table64.keys()):
    cbsizefile.write(f"case {cb}: /* {cb_table64[cb][1][0][1]} */\n")
    cbsizefile.write(f"    return {cb_table64[cb][0]};\n")
    getapifile.write(f"case {cb}:\n")
    getapifile.write("    switch(callback_len){\n")
    getapifile.write("    default:\n") # the first one should be the latest, should best support future SDK versions
    for (size, name) in cb_table64[cb][1]:
        getapifile.write(f"    case {size}: cb_{name}(lin_callback, callback); break;\n")
    getapifile.write("    }\n    break;\n")
cbsizefile.write("#endif\n")
getapifile.write("#endif\n")
