#!/usr/bin/env python3

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../vrclient/gen_wrapper.py

CLANG_PATH='/usr/lib/clang/15'

from clang.cindex import Cursor, CursorKind, Index, Type, TypeKind
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
EXEMPT_STRUCTS = [
    "CSteamID",
    "CGameID",
    "CCallbackBase",
    "SteamPS3Params_t",
    "ValvePackingSentinel_t"
]

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
    "cppISteamUser_SteamUser": [
        #TODO: Do we need the the value -> pointer conversion for other versions of the interface?
        Method("InitiateGameConnection", lambda version: version == 8),
    ],
    #"cppISteamClient_SteamClient": [
    #    Method("BShutdownIfAllPipesClosed"),
    #],
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
    return POST_EXEC_FUNCS.get(classname + "_" + method_name, '')

# manual converters for simple types (function pointers)
MANUAL_TYPES = [
    "FSteamNetworkingSocketsDebugOutput",
    "SteamAPIWarningMessageHook_t",
    "SteamAPI_CheckCallbackRegistered_t"
]

# manual converters for specific parameters
MANUAL_PARAMS = [
    "nNativeKeyCode"
]

#struct_conversion_cache = {
#    '142': {
#                'SteamUGCDetails_t': True,
#                'SteamUGCQueryCompleted_t': False
#           }
#}
struct_conversion_cache = {}

converted_structs = []

# callback classes for which we have a linux wrapper
WRAPPED_CLASSES = [
    "ISteamMatchmakingServerListResponse",
    "ISteamMatchmakingPingResponse",
    "ISteamMatchmakingPlayersResponse",
    "ISteamMatchmakingRulesResponse",
    "ISteamNetworkingFakeUDPPort",
]

all_classes = {}
all_records = {}
all_sources = {}
all_versions = {}

PATH_CONV = [
    {
        "parent_name": "GetAppInstallDir",
        "l2w_names": ["pchDirectory"],
        "l2w_lens": ["cchNameMax"],
        "l2w_urls": [False],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": True
    },
    {
        "parent_name": "GetAppInstallDir",
        "l2w_names": ["pchFolder"],
        "l2w_lens": ["cchFolderBufferSize"],
        "l2w_urls": [False],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": True
    },
    {
        "parent_name": "GetFileDetails",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pszFileName"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": True
    },
    ### ISteamGameServer::SetModDir - "Just the folder name, not the whole path. I.e. "Spacewar"."
    {
        "parent_name": "LoadURL",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchURL"],
        "w2l_arrays": [False],
        "w2l_urls": [True],
        "return_is_size": False
    },
    {
        "parent_name": "FileLoadDialogResponse",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchSelectedFiles"],
        "w2l_arrays": [True],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_StartRequest_t",
        "l2w_names": ["pchURL"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_URLChanged_t",
        "l2w_names": ["pchURL"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_FinishedRequest_t",
        "l2w_names": ["pchURL"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_OpenLinkInNewTab_t",
        "l2w_names": ["pchURL"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_LinkAtPosition_t",
        "l2w_names": ["pchURL"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_FileOpenDialog_t",
        "l2w_names": ["pchInitialFile"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "HTML_NewWindow_t",
        "l2w_names": ["pchURL"],
        "l2w_lens": [None],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "PublishWorkshopFile",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchFile", "pchPreviewFile"],
        "w2l_arrays": [False, False],
        "w2l_urls": [False, False],
        "return_is_size": False
    },
    {
        "parent_name": "UpdatePublishedFileFile",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchFile"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "UpdatePublishedFilePreviewFile",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchPreviewFile"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "PublishVideo",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchPreviewFile"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "AddScreenshotToLibrary",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchFilename", "pchThumbnailFilename"],
        "w2l_arrays": [False, False],
        "w2l_urls": [False, False],
        "return_is_size": False
    },
    {
        "parent_name": "AddVRScreenshotToLibrary",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchFilename", "pchVRFilename"],
        "w2l_arrays": [False, False],
        "w2l_urls": [False, False],
        "return_is_size": False
    },
    {
        "parent_name": "UGCDownloadToLocation",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchLocation"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "GetQueryUGCAdditionalPreview",
        "l2w_names": ["pchURLOrVideoID"],
        "l2w_lens": ["cchURLSize"],
        "l2w_urls": [True],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "SetItemContent",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pszContentFolder"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "SetItemPreview",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pszPreviewFile"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "AddItemPreviewFile",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pszPreviewFile"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "UpdateItemPreviewFile",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pszPreviewFile"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "GetItemInstallInfo",
        "l2w_names": ["pchFolder"],
        "l2w_lens": ["cchFolderSize"],
        "l2w_urls": [False],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "BInitWorkshopForGameServer",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pszFolder"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "GetUserDataFolder",
        "l2w_names": ["pchBuffer"],
        "l2w_lens": ["cubBuffer"],
        "l2w_urls": [False],
        "w2l_names": [],
        "w2l_arrays": [],
        "w2l_urls": [],
        "return_is_size": False
    },
    {
        "parent_name": "CheckFileSignature",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["szFileName"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "Init",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchAbsolutePathToControllerConfigVDF"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
    {
        "parent_name": "SetInputActionManifestFilePath",
        "l2w_names": [],
        "l2w_lens": [],
        "l2w_urls": [],
        "w2l_names": ["pchInputActionManifestAbsolutePath"],
        "w2l_arrays": [False],
        "w2l_urls": [False],
        "return_is_size": False
    },
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
        self.version = self.spelling[1:].upper()
        self.version = all_versions[sdkver][self.version]

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
    if name in EXEMPT_STRUCTS:
        return False
    if name in MANUAL_STRUCTS:
        return True

    abis = find_struct_abis(name)
    if abis is None:
        return False

    names = {a: [f.spelling for f in abis[a].get_fields()]
             for a in ABIS}
    assert names['u32'] == names['u64']
    assert names['u32'] == names['w32']
    assert names['u32'] == names['w64']

    offsets = {a: {f: abis[a].get_offset(f) for f in names[a]}
               for a in ABIS}
    if offsets['u32'] != offsets['w32']:
        return True
    if offsets['u64'] != offsets['w64']:
        return True

    types = {a: [f.type.get_canonical() for f in abis[a].get_fields()]
             for a in ABIS}
    if any(t.kind == TypeKind.RECORD and struct_needs_conversion(t)
           for t in types['u32']):
        return True
    if any(t.kind == TypeKind.RECORD and struct_needs_conversion(t)
           for t in types['u64']):
        return True

    if get_path_converter(struct):
        return True
    return False


def struct_needs_conversion(struct):
    name = canonical_typename(struct)
    if not sdkver in struct_conversion_cache:
        struct_conversion_cache[sdkver] = {}
    if not name in struct_conversion_cache[sdkver]:
        struct_conversion_cache[sdkver][name] = struct_needs_conversion_nocache(struct)
    return struct_conversion_cache[sdkver][name]


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
    if decl.kind == TypeKind.LVALUEREFERENCE: return underlying_type(decl.get_pointee())
    if decl.kind == TypeKind.CONSTANTARRAY: return underlying_type(decl.element_type)
    if decl.kind == TypeKind.POINTER: return underlying_type(decl.get_pointee())
    return decl


def param_needs_conversion(decl):
    decl = underlying_type(decl)
    return decl.spelling not in WRAPPED_CLASSES and \
           decl.kind == TypeKind.RECORD and \
           struct_needs_conversion(decl)


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

    if param_needs_conversion(decl):
        return f"win{decl.spelling}_{sdkver}{name}"

    if decl.spelling.startswith('const '):
        const, type_name = 'const ', decl.spelling[6:]
    else:
        const, type_name = '', decl.spelling

    if type_name.startswith('ISteam'):
        return f'{const}void /*{type_name}*/{name}'

    return f'{decl.spelling}{name}'


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

    need_convert = {n: p for n, p in zip(names, method.get_arguments())
                    if param_needs_conversion(p)}
    manual_convert = {n: p for n, p in zip(names, method.get_arguments())
                      if underlying_type(p).spelling in MANUAL_TYPES
                      or p.spelling in MANUAL_PARAMS}

    names = ['linux_side'] + names
    params = ['void *linux_side'] + params

    out(f'{ret}{cppname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    if not returns_void:
        out(f'    {declspec(method.result_type, "_ret")};\n')

    for name, param in sorted(need_convert.items()):
        if param.type.kind == TypeKind.POINTER:
            #handle single pointers, but not double pointers
            real_type = param.type
            while real_type.kind == TypeKind.POINTER:
                real_type = real_type.get_pointee()
            real_name = canonical_typename(real_type)
            assert(param.type.get_pointee().kind == TypeKind.RECORD or real_name in MANUAL_STRUCTS)
            pointee_name = canonical_typename(param.type.get_pointee())
            out(f'    {pointee_name} lin_{name};\n')
            out(f'    win_to_lin_struct_{real_name}_{sdkver}({name}, &lin_{name});\n')
        else:
            #raw structs
            out(f'    {param.type.spelling} lin_{name};\n')
            out(f'    win_to_lin_struct_{param.type.spelling}_{sdkver}(&{name}, &lin_{name});\n')

    for name, param in sorted(manual_convert.items()):
        if name in MANUAL_PARAMS:
            out(f'    {name} = manual_convert_{name}({name});\n')
        else:
            out(f'    {name} = ({param.type.spelling})manual_convert_{param.type.spelling}((void*){name});\n')

    if returns_void:
        out(u'    ')
    else:
        out(u'    _ret = ')

    def param_call(name, param):
        pfx = '&' if param.type.kind == TypeKind.POINTER else ''
        if name in need_convert: return f"{pfx}lin_{name}"
        if param.type.kind == TypeKind.LVALUEREFERENCE: return f'*{name}'
        return f"({param.type.spelling}){name}"

    params = [param_call(n, p) for n, p in zip(names[1:], method.get_arguments())]
    out(f'(({classname}*)linux_side)->{method.spelling}({", ".join(params)});\n')

    for name, param in sorted(need_convert.items()):
        if param.type.kind == TypeKind.POINTER:
            if not "const " in param.type.spelling: #don't modify const arguments
                real_type = param.type
                while real_type.kind == TypeKind.POINTER:
                    real_type = real_type.get_pointee()
                out(f'    lin_to_win_struct_{real_type.spelling}_{sdkver}(&lin_{name}, {name});\n')
        else:
            out(f'    lin_to_win_struct_{param.type.spelling}_{sdkver}(&lin_{name}, &{name});\n')

    if method.result_type.kind != TypeKind.VOID:
        post_exec = post_execution_function(classname, method.spelling)
        out(f'    return {post_exec}(_ret);\n')
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


def handle_method_c(method, winclassname, cppname, out):
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

    params = [f'{winclassname} *_this'] + params
    names = ['_this'] + names

    out(f'{ret}__thiscall {winclassname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    if returns_record:
        del params[1]
        del names[1]

    if not returns_record and not returns_void:
        out(f'    {ret}_ret;\n')

    should_gen_callback = "GetAPICallResult" in method.name
    if should_gen_callback:
        out(u'    int u_callback_len = cubCallback, w_callback_len = cubCallback;\n')
        out(u'    void *u_callback, *w_callback = pCallback;\n')

    path_conv = get_path_converter(method)

    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                out(f'    const char **lin_{path_conv["w2l_names"][i]} = steamclient_dos_to_unix_stringlist({path_conv["w2l_names"][i]});\n')
                # TODO
                pass
            else:
                out(f'    char lin_{path_conv["w2l_names"][i]}[PATH_MAX];\n')
                out(f'    steamclient_dos_path_to_unix_path({path_conv["w2l_names"][i]}, lin_{path_conv["w2l_names"][i]}, {int(path_conv["w2l_urls"][i])});\n')

    out(u'    TRACE("%p\\n", _this);\n')

    if should_gen_callback:
        out(u'    if (!(u_callback = alloc_callback_wtou(iCallbackExpected, w_callback, &u_callback_len))) return FALSE;\n')
        out(u'    cubCallback = u_callback_len;\n')
        out(u'    pCallback = u_callback;\n\n')

    if returns_record:
        out(u'    *_ret = ')
    elif not returns_void:
        out(u'    _ret = ')
    else:
        out(u'    ')

    should_gen_wrapper = not method_needs_manual_handling(cppname, method.name) and \
            (method.result_type.spelling.startswith("ISteam") or \
             method.name.startswith("GetISteamGenericInterface"))
    if should_gen_wrapper:
        out(u'create_win_interface(pchVersion,\n        ')
    out(f'{cppname}_{method.name}(')

    def param_call(param, name):
        if name == '_this': return '_this->linux_side'
        iface = param.type.get_pointee().spelling if param.type.kind == TypeKind.POINTER else None
        if iface in WRAPPED_CLASSES: return f'create_Linux{iface}({name}, "{winclassname}")'
        if path_conv and name in path_conv["w2l_names"]: return f'{name} ? lin_{name} : NULL'
        return name

    params = ['_this'] + list(method.get_arguments())
    out(", ".join([param_call(p, n) for p, n in zip(params, names)]))

    if should_gen_wrapper:
        out(u')')

    out(u');\n')

    if should_gen_callback:
        out(u'    if (_ret && u_callback != w_callback)\n')
        out(u'    {\n')
        out(u'        convert_callback_utow(iCallbackExpected, u_callback, u_callback_len, w_callback, w_callback_len);\n')
        out(u'        HeapFree(GetProcessHeap(), 0, u_callback);\n')
        out(u'    }\n\n')

    if path_conv and len(path_conv["l2w_names"]) > 0:
        for i in range(len(path_conv["l2w_names"])):
            out(u'    ')
            if path_conv["return_is_size"]:
                out(u'_ret = ')
            out(f'steamclient_unix_path_to_dos_path(_ret, {path_conv["l2w_names"][i]}, {path_conv["l2w_names"][i]}, {path_conv["l2w_lens"][i]}, {int(path_conv["l2w_urls"][i])});\n')
    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                out(f'    steamclient_free_stringlist(lin_{path_conv["w2l_names"][i]});\n')

    if not returns_void:
        out(u'    return _ret;\n')
    out(u'}\n\n')


def handle_class(klass):
    cppname = f"cpp{klass.spelling}_{klass.version}"

    with open(f"{cppname}.h", "w") as file:
        out = file.write

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            handle_method_hpp(method, cppname, out)

    with open(f"{cppname}.cpp", "w") as file:
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
        out(f'#include "{cppname}.h"\n')

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            if method_needs_manual_handling(cppname, method.spelling):
                continue
            handle_method_cpp(method, klass.spelling, cppname, out)

        out(u'#ifdef __cplusplus\n')
        out(u'}\n')
        out(u'#endif\n')

    winclassname = f"win{klass.spelling}_{klass.version}"
    with open(f"win{klass.spelling}.c", "a") as file:
        out = file.write

        out(f'#include "{cppname}.h"\n\n')
        out(f'typedef struct __{winclassname} {{\n')
        out(u'    vtable_ptr *vtable;\n')
        out(u'    void *linux_side;\n')
        out(f'}} {winclassname};\n\n')

        for method in klass.methods:
            handle_thiscall_wrapper(klass, method, out)
        out('\n')

        for method in klass.methods:
            if type(method) is Destructor:
                out(f'void __thiscall {winclassname}_{method.name}({winclassname} *_this)\n{{/* never called */}}\n\n')
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
        out(f'{winclassname} *create_{winclassname}(void *linux_side)\n')
        out(u'{\n')
        if klass.spelling in WRAPPED_CLASSES:
            out(f'    {winclassname} *r = HeapAlloc(GetProcessHeap(), 0, sizeof({winclassname}));\n')
        else:
            out(f'    {winclassname} *r = alloc_mem_for_iface(sizeof({winclassname}), "{klass.version}");\n')
        out(u'    TRACE("-> %p\\n", r);\n')
        out(f'    r->vtable = alloc_vtable(&{winclassname}_vtable, {len(klass.methods)}, "{klass.version}");\n')
        out(u'    r->linux_side = linux_side;\n')
        out(u'    return r;\n')
        out(u'}\n\n')

    constructors = open("win_constructors.h", "a")
    constructors.write(f"extern void *create_{winclassname}(void *);\n")

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
    return f" __attribute__((aligned({find_struct_abis(name)['w32'].get_align()})))"

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
        if struct.spelling == "":
            return
        if not struct_needs_conversion(struct.type):
            return

        struct_name = f"{struct.displayname}_{sdkver}"

        if struct_name in converted_structs:
            return
        converted_structs.append(struct_name)

        w2l_handler_name = f"win_to_lin_struct_{struct_name}"
        l2w_handler_name = f"lin_to_win_struct_{struct_name}"
        l2w_handler_name64 = None

        hfile.write(f"#if defined(SDKVER_{sdkver}) || !defined(__cplusplus)\n")
        dump_win_struct(hfile, struct_name)
        hfile.write(f"typedef struct win{struct_name} win{struct_name};\n")
        hfile.write(f"struct {struct.displayname};\n")

        if canonical_typename(struct) in MANUAL_STRUCTS:
            hfile.write("#endif\n\n")
            return

        hfile.write(f"extern void {w2l_handler_name}(const struct win{struct_name} *w, struct {struct.displayname} *l);\n")
        hfile.write(f"extern void {l2w_handler_name}(const struct {struct.displayname} *l, struct win{struct_name} *w);\n")
        hfile.write("#endif\n\n")
    else:
        #for callbacks, we use the windows struct size in the cb dispatch switch
        name = canonical_typename(struct)
        abis = find_struct_abis(name)
        size = {a: abis[a].get_size() for a in abis.keys()}

        struct_name = f"{struct.displayname}_{size['w32']}"
        l2w_handler_name = f"cb_{struct_name}"
        if size['w64'] != size['w32']:
            struct_name64 = f"{struct.displayname}_{size['w64']}"
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
        hfile.write(f"struct {struct.displayname};\n")
        if l2w_handler_name64:
            hfile.write("#ifdef __i386__\n")
            hfile.write(f"struct win{struct_name};\n")
            hfile.write(f"extern void {l2w_handler_name}(const struct {struct.displayname} *l, struct win{struct_name} *w);\n")
            hfile.write("#endif\n")
            hfile.write("#ifdef __x86_64__\n")
            hfile.write(f"struct win{struct_name64};\n")
            hfile.write(f"extern void {l2w_handler_name64}(const struct {struct.displayname} *l, struct win{struct_name64} *w);\n")
            hfile.write("#endif\n\n")
        else:
            hfile.write(f"struct win{struct_name};\n")
            hfile.write(f"extern void {l2w_handler_name}(const struct {struct.displayname} *l, struct win{struct_name} *w);\n\n")

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

    path_conv = get_path_converter(struct.type)

    def handle_field(m, src, dst):
        if m.kind == CursorKind.FIELD_DECL:
            if m.type.kind == TypeKind.CONSTANTARRAY:
                assert(m.type.element_type.kind != TypeKind.RECORD or \
                        not struct_needs_conversion(m.type.element_type))
                cppfile.write(f"    memcpy({dst}->{m.displayname}, {src}->{m.displayname}, sizeof({dst}->{m.displayname}));\n")
            elif m.type.kind == TypeKind.RECORD and \
                    struct_needs_conversion(m.type):
                cppfile.write(f"    {src}_to_{dst}_struct_{m.type.spelling}_{sdkver}(&{src}->{m.displayname}, &{dst}->{m.displayname});\n")
            elif path_conv and m.displayname in path_conv["l2w_names"]:
                for i in range(len(path_conv["l2w_names"])):
                    if path_conv["l2w_names"][i] == m.displayname:
                        url = path_conv["l2w_urls"][i]
                        break
                cppfile.write(f"    steamclient_unix_path_to_dos_path(1, {src}->{m.displayname}, g_tmppath, sizeof(g_tmppath), {int(url)});\n")
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
        cppfile.write(f"void {w2l_handler_name}(const struct win{struct_name} *win, struct {struct.displayname} *lin)\n{{\n")
        for m in struct.get_children():
            handle_field(m, "win", "lin")
        cppfile.write("}\n\n")

    if l2w_handler_name64:
        cppfile.write("#ifdef __x86_64__\n")
        cppfile.write(f"void {l2w_handler_name64}(const struct {struct.displayname} *lin, struct win{struct_name64} *win)\n{{\n")
        for m in struct.get_children():
            handle_field(m, "lin", "win")
        cppfile.write("}\n")
        cppfile.write("#endif\n\n")

    if l2w_handler_name:
        if l2w_handler_name64:
            cppfile.write("#ifdef __i386__\n")
        cppfile.write(f"void {l2w_handler_name}(const struct {struct.displayname} *lin, struct win{struct_name} *win)\n{{\n")
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


def generate(sdkver, records):
    print(f'generating SDK version {sdkver}...')
    for child in records['u32'].values():
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

        records = build.cursor.get_children()
        record_kinds = (CursorKind.STRUCT_DECL, CursorKind.CLASS_DECL)
        records = filter(lambda c: c.kind in record_kinds, records)
        records = {canonical_typename(c): c for c in records}

        classes = build.cursor.get_children()
        classes = filter(lambda c: c.is_definition(), classes)
        classes = filter(lambda c: c.kind == CursorKind.CLASS_DECL, classes)
        classes = filter(lambda c: c.spelling in SDK_CLASSES, classes)
        classes = filter(lambda c: c.spelling[1:].upper() in versions, classes)
        classes = [Class(sdkver, abi, c) for c in classes]
        classes = {c.version: c for c in classes}

        all_records[sdkver][abi] = records
        tmp_classes[sdkver][abi] = classes

for i, sdkver in enumerate(reversed(SDK_VERSIONS)):
    all_classes.update(tmp_classes[sdkver]['u32'])

print('parsing SDKs... 100%')


for klass in all_classes.values():
    with open(f"win{klass.spelling}.c", "w") as file:
        out = file.write

        out(u'/* This file is auto-generated, do not edit. */\n')
        out(u'#include <stdarg.h>\n')
        out(u'\n')
        out(u'#include "windef.h"\n')
        out(u'#include "winbase.h"\n')
        out(u'#include "wine/debug.h"\n')
        out(u'\n')
        out(u'#include "cxx.h"\n')
        out(u'\n')
        out(u'#include "steam_defs.h"\n')
        out(u'\n')
        out(u'#include "steamclient_private.h"\n')
        out(u'\n')
        out(u'#include "struct_converters.h"\n')
        out(u'\n')
        out(u'WINE_DEFAULT_DEBUG_CHANNEL(steamclient);\n')
        out(u'\n')


for _, klass in sorted(all_classes.items()):
    sdkver = klass._sdkver
    handle_class(klass)


for sdkver in SDK_VERSIONS:
    generate(sdkver, all_records[sdkver])


for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

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
