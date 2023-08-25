#!/usr/bin/env python3

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../vrclient/gen_wrapper.py

from __future__ import print_function

CLANG_PATH='/usr/lib/clang/16'

from clang.cindex import CursorKind, Index, Type, TypeKind
from collections import namedtuple
import pprint
import sys
import os
import re
import math

sdk_versions = [
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

files = [
    ("steam_api.h", [
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
    ("isteamgamestats.h", [
        "ISteamGameStats"
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
    ("isteamnetworkingmessages.h", [
        "ISteamNetworkingMessages"
    ]),
    ("isteamnetworkingsockets.h", [
        "ISteamNetworkingSockets"
    ]),
    ("isteamnetworkingsocketsserialized.h", [
        "ISteamNetworkingSocketsSerialized"
    ]),
    ("isteamnetworkingutils.h", [
        "ISteamNetworkingUtils"
    ]),
    ("steamnetworkingfakeip.h", [
        "ISteamNetworkingFakeUDPPort"
    ]),
]

aliases = {
    #these interfaces are undocumented and binary compatible
    #"target interface": ["alias 1", "alias 2"],
    "SteamUtils004":["SteamUtils003"],
    "SteamUtils002":["SteamUtils001"],
    "SteamGameServer008":["SteamGameServer007","SteamGameServer006"],
    "SteamNetworkingSocketsSerialized002":["SteamNetworkingSocketsSerialized001"],
    "STEAMAPPS_INTERFACE_VERSION001":["SteamApps001"],
    "STEAMAPPS_INTERFACE_VERSION001":["SteamApps001"],
    "SteamNetworkingSockets002":["SteamNetworkingSockets003"],
}

# these structs are manually confirmed to be equivalent
exempt_structs = [
        "CSteamID",
        "CGameID",
        "CCallbackBase",
        "SteamPS3Params_t",
        "ValvePackingSentinel_t"
]

# we have converters for these written by hand because they're too complicated to generate
manually_handled_structs = [
        "SteamNetworkingMessage_t"
]

Method = namedtuple('Method', ['name', 'version_func'], defaults=[lambda _: True])

manually_handled_methods = {
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



post_execution_functions = {
        "ISteamClient_BShutdownIfAllPipesClosed" : "after_shutdown",
        "ISteamClient_CreateSteamPipe" : "after_steam_pipe_create",
}

INTERFACE_NAME_VERSION = re.compile(r'^(?P<name>.+?)(?P<version>\d*)$')

def method_needs_manual_handling(interface_with_version, method_name):
    match_dict = INTERFACE_NAME_VERSION.match(interface_with_version).groupdict()
    interface = match_dict['name']
    version = int(match_dict['version']) if match_dict['version'] else None

    method_list = manually_handled_methods.get(interface, [])
    method = next(filter(lambda m: m.name == method_name, method_list), None)

    return method and method.version_func(version)

def post_execution_function(classname, method_name):
    return post_execution_functions.get(classname + "_" + method_name)

# manual converters for simple types (function pointers)
manual_type_converters = [
        "FSteamNetworkingSocketsDebugOutput",
        "SteamAPIWarningMessageHook_t",
        "SteamAPI_CheckCallbackRegistered_t"
]

# manual converters for specific parameters
manual_param_converters = [
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
wrapped_classes = [
        "ISteamMatchmakingServerListResponse",
        "ISteamMatchmakingPingResponse",
        "ISteamMatchmakingPlayersResponse",
        "ISteamMatchmakingRulesResponse",
        "ISteamNetworkingFakeUDPPort",
]

print_sizes = []

class_versions = {}

path_conversions = [
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
    if strip_const(struct.spelling) in exempt_structs:
        return False
    if strip_const(struct.spelling) in manually_handled_structs:
        return True

    #check 32-bit compat
    windows_struct = find_windows_struct(struct)
    if windows_struct is None:
        print("Couldn't find windows struct for " + struct.spelling)
    assert(not windows_struct is None) #must find windows_struct
    for field in struct.get_fields():
        if struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True
        if field.type.kind == TypeKind.RECORD and \
                struct_needs_conversion(field.type):
            return True

    #check 64-bit compat
    windows_struct = find_windows64_struct(struct)
    assert(not windows_struct is None) #must find windows_struct
    lin64_struct = find_linux64_struct(struct)
    assert(not lin64_struct is None) #must find lin64_struct
    for field in lin64_struct.get_fields():
        if lin64_struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True
        if field.type.kind == TypeKind.RECORD and \
                struct_needs_conversion(field.type):
            return True

    #check if any members need path conversion
    path_conv = get_path_converter(struct)
    if path_conv:
        return True
    return False

def struct_needs_conversion(struct):
    if not sdkver in struct_conversion_cache:
        struct_conversion_cache[sdkver] = {}
    if not strip_const(struct.spelling) in struct_conversion_cache[sdkver]:
        struct_conversion_cache[sdkver][strip_const(struct.spelling)] = struct_needs_conversion_nocache(struct)
    return struct_conversion_cache[sdkver][strip_const(struct.spelling)]

def handle_destructor(cfile, classname, winclassname, method):
    cfile.write(f"DEFINE_THISCALL_WRAPPER({winclassname}_destructor, 4)\n")
    cfile.write(f"void __thiscall {winclassname}_destructor({winclassname} *_this)\n{{/* never called */}}\n\n")
    return "destructor"

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

class DummyWriter(object):
    def write(self, s):
        #noop
        pass

def to_c_bool(b):
    if b:
        return "1"
    return "0"

dummy_writer = DummyWriter()

def handle_method(cfile, classname, winclassname, cppname, method, cpp, cpp_h, existing_methods):
    used_name = method.spelling
    if used_name in existing_methods:
        number = '2'
        while used_name in existing_methods:
            idx = existing_methods.index(used_name)
            used_name = f"{method.spelling}_{number}"
            number = chr(ord(number) + 1)
        existing_methods.insert(idx, used_name)
    else:
        existing_methods.append(used_name)
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD
    if returns_record:
        parambytes = 8 #_this + return pointer
    else:
        parambytes = 4 #_this
    for param in list(method.get_children()):
        if param.kind == CursorKind.PARM_DECL:
            if param.type.kind == TypeKind.LVALUEREFERENCE:
                parambytes += 4
            else:
                parambytes += int(math.ceil(param.type.get_size()/4.0) * 4)
    if method_needs_manual_handling(cppname, used_name):
        cpp = dummy_writer #just don't write the cpp function
    cfile.write(f"DEFINE_THISCALL_WRAPPER({winclassname}_{used_name}, {parambytes})\n")
    cpp_h.write("extern ")
    if method.result_type.spelling.startswith("ISteam"):
        cfile.write(f"win{method.result_type.spelling} ")
        cpp.write("void *")
        cpp_h.write("void *")
    elif returns_record:
        cfile.write(f"{method.result_type.spelling} *")
        cpp.write(f"{method.result_type.spelling} ")
        cpp_h.write(f"{method.result_type.spelling} ")
    else:
        cfile.write(f"{method.result_type.spelling} ")
        cpp.write(f"{method.result_type.spelling} ")
        cpp_h.write(f"{method.result_type.spelling} ")
    cfile.write(f'__thiscall {winclassname}_{used_name}({winclassname} *_this')
    cpp.write(f"{cppname}_{used_name}(void *linux_side")
    cpp_h.write(f"{cppname}_{used_name}(void *")
    if returns_record:
        cfile.write(f", {method.result_type.spelling} *_r")
    unnamed = 'a'
    need_convert = []
    manual_convert = []
    for param in list(method.get_children()):
        if param.kind == CursorKind.PARM_DECL:
            if param.type.kind == TypeKind.POINTER and \
                (param.type.get_pointee().kind == TypeKind.UNEXPOSED or param.type.get_pointee().kind == TypeKind.FUNCTIONPROTO):
                #unspecified function pointer
                typename = "void *"
            else:
                typename = param.type.spelling.split("::")[-1]

            real_type = param.type
            while real_type.kind == TypeKind.POINTER:
                real_type = real_type.get_pointee()
            win_name = typename
            if real_type.kind == TypeKind.RECORD and \
                    not real_type.spelling in wrapped_classes and \
                    struct_needs_conversion(real_type):
                need_convert.append(param)
                #preserve pointers
                win_name = typename.replace(real_type.spelling, f"win{real_type.spelling}_{sdkver}")
            elif real_type.spelling in manual_type_converters:
                manual_convert.append(param)
            elif param.spelling in manual_param_converters:
                manual_convert.append(param)

            win_name = win_name.replace('&', '*')

            if param.spelling == "":
                cfile.write(f", {win_name} _{unnamed}")
                cpp.write(f", {win_name} _{unnamed}")
                cpp_h.write(f", {win_name}")
                unnamed = chr(ord(unnamed) + 1)
            else:
                cfile.write(f", {win_name} {param.spelling}")
                cpp.write(f", {win_name} {param.spelling}")
                cpp_h.write(f", {win_name}")
    cfile.write(")\n{\n")
    cpp.write(")\n{\n")
    cpp_h.write(");\n")

    path_conv = get_path_converter(method)

    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                cfile.write(f"    const char **lin_{path_conv['w2l_names'][i]} = steamclient_dos_to_unix_stringlist({path_conv['w2l_names'][i]});\n")
                # TODO
                pass
            else:
                cfile.write(f"    char lin_{path_conv['w2l_names'][i]}[PATH_MAX];\n")
                cfile.write(f"    steamclient_dos_path_to_unix_path({path_conv['w2l_names'][i]}, lin_{path_conv['w2l_names'][i]}, {to_c_bool(path_conv['w2l_urls'][i])});\n")
        if None in path_conv["l2w_names"]:
            cfile.write("    const char *path_result;\n")
        elif path_conv["return_is_size"]:
            cfile.write("    uint32 path_result;\n")
        elif len(path_conv["l2w_names"]) > 0:
            cfile.write(f"    {method.result_type.spelling} path_result;\n")

    for param in need_convert:
        if param.type.kind == TypeKind.POINTER:
            #handle single pointers, but not double pointers
            real_type = param.type
            while real_type.kind == TypeKind.POINTER:
                real_type = real_type.get_pointee()
            assert(param.type.get_pointee().kind == TypeKind.RECORD or \
                    strip_const(real_type.spelling) in manually_handled_structs)
            cpp.write(f"    {strip_const(param.type.get_pointee().spelling)} lin_{param.spelling};\n")
            cpp.write(f"    win_to_lin_struct_{strip_const(real_type.spelling)}_{sdkver}({param.spelling}, &lin_{param.spelling});\n")
        else:
            #raw structs
            cpp.write(f"    {param.type.spelling} lin_{param.spelling};\n")
            cpp.write(f"    win_to_lin_struct_{param.type.spelling}_{sdkver}(&{param.spelling}, &lin_{param.spelling});\n")
    for param in manual_convert:
        if param.spelling in manual_param_converters:
            cpp.write(f"    {param.spelling} = manual_convert_{param.spelling}({param.spelling});\n")
        else:
            cpp.write(f"    {param.spelling} = ({param.type.spelling})manual_convert_{param.type.spelling}((void*){param.spelling});\n")

    cfile.write("    TRACE(\"%p\\n\", _this);\n")

    if method.result_type.kind == TypeKind.VOID:
        cfile.write("    ")
    elif path_conv and (len(path_conv["l2w_names"]) > 0 or path_conv["return_is_size"]):
        cfile.write("    path_result = ")
    elif returns_record:
        cfile.write("    *_r = ")
    else:
        cfile.write("    return ")

    if method.result_type.kind == TypeKind.VOID:
        cpp.write("    ")
    elif len(need_convert) > 0:
        cpp.write(f"    {method.result_type.spelling} retval = ")
    else:
        cpp.write("    return ")

    post_exec = post_execution_function(classname, method.spelling)
    if post_exec != None:
        cpp.write(post_exec + '(');

    should_do_cb_wrap = "GetAPICallResult" in used_name
    should_gen_wrapper = cpp != dummy_writer and \
            (method.result_type.spelling.startswith("ISteam") or \
             used_name.startswith("GetISteamGenericInterface"))

    if should_do_cb_wrap:
        cfile.write(f"do_cb_wrap(0, _this->linux_side, &{cppname}_{used_name}")
    else:
        if should_gen_wrapper:
            cfile.write("create_win_interface(pchVersion,\n        ")
        cfile.write(f"{cppname}_{used_name}(_this->linux_side")
    cpp.write(f"(({classname}*)linux_side)->{method.spelling}(")
    unnamed = 'a'
    first = True
    for param in list(method.get_children()):
        if param.kind == CursorKind.PARM_DECL:
            if not first:
                cpp.write(", ")
            else:
                first = False
            if param.spelling == "":
                cfile.write(f", _{unnamed}")
                cpp.write(f"({param.type.spelling})_{unnamed}")
                unnamed = chr(ord(unnamed) + 1)
            elif param.type.kind == TypeKind.POINTER and \
                    param.type.get_pointee().spelling in wrapped_classes:
                cfile.write(f", create_Linux{param.type.get_pointee().spelling}({param.spelling}, \"{winclassname}\")")
                cpp.write(f"({param.type.spelling}){param.spelling}")
            elif path_conv and param.spelling in path_conv["w2l_names"]:
                cfile.write(f", {param.spelling} ? lin_{param.spelling} : NULL")
                cpp.write(f"({param.type.spelling}){param.spelling}")
            elif param in need_convert:
                cfile.write(f", {param.spelling}")
                if param.type.kind != TypeKind.POINTER:
                    cpp.write(f"lin_{param.spelling}")
                else:
                    cpp.write(f"&lin_{param.spelling}")
            elif param.type.kind == TypeKind.LVALUEREFERENCE:
                cfile.write(f", {param.spelling}")
                cpp.write(f"*{param.spelling}")
            else:
                cfile.write(f", {param.spelling}")
                cpp.write(f"({param.type.spelling}){param.spelling}")
    if should_gen_wrapper:
        cfile.write(")")

    cfile.write(");\n")
    if post_exec != None:
        cpp.write(")")
    cpp.write(");\n")
    if returns_record:
        cfile.write("    return _r;\n")
    if path_conv and len(path_conv["l2w_names"]) > 0:
        for i in range(len(path_conv["l2w_names"])):
            cfile.write("    ")
            if path_conv["return_is_size"]:
                cfile.write("path_result = ")
            cfile.write(f"steamclient_unix_path_to_dos_path(path_result, {path_conv['l2w_names'][i]}, {path_conv['l2w_names'][i]}, {path_conv['l2w_lens'][i]}, {to_c_bool(path_conv['l2w_urls'][i])});\n")
        cfile.write("    return path_result;\n")
    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                cfile.write(f"    steamclient_free_stringlist(lin_{path_conv['w2l_names'][i]});\n")
    cfile.write("}\n\n")
    for param in need_convert:
        if param.type.kind == TypeKind.POINTER:
            if not "const " in param.type.spelling: #don't modify const arguments
                real_type = param.type
                while real_type.kind == TypeKind.POINTER:
                    real_type = real_type.get_pointee()
                cpp.write(f"    lin_to_win_struct_{real_type.spelling}_{sdkver}(&lin_{param.spelling}, {param.spelling});\n")
        else:
            cpp.write(f"    lin_to_win_struct_{param.type.spelling}_{sdkver}(&lin_{param.spelling}, &{param.spelling});\n")
    if method.result_type.kind != TypeKind.VOID and \
            len(need_convert) > 0:
        cpp.write("    return retval;\n")
    cpp.write("}\n\n")

def get_iface_version(classname):
    # ISteamClient -> STEAMCLIENT_INTERFACE_VERSION
    defname = f"{classname[1:].upper()}_INTERFACE_VERSION"
    if defname in iface_versions.keys():
        ver = iface_versions[defname]
    else:
        defname = f"{classname[1:].upper()}_VERSION"
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

def handle_class(sdkver, classnode, file):
    children = list(classnode.get_children())
    if len(children) == 0:
        return
    (iface_version, already_generated) = get_iface_version(classnode.spelling)
    if already_generated:
        return
    winname = f"win{classnode.spelling}"
    cppname = f"cpp{classnode.spelling}_{iface_version}"

    file_exists = os.path.isfile(f"{winname}.c")
    cfile = open(f"{winname}.c", "a")
    if not file_exists:
        cfile.write("""/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

""")

    cpp = open(f"{cppname}.cpp", "w")
    cpp.write("#include \"steam_defs.h\"\n")
    cpp.write("#pragma push_macro(\"__cdecl\")\n")
    cpp.write("#undef __cdecl\n")
    cpp.write("#define __cdecl\n")
    cpp.write(f"#include \"steamworks_sdk_{sdkver}/steam_api.h\"\n")
    if os.path.isfile(f"steamworks_sdk_{sdkver}/steamnetworkingtypes.h"):
        cpp.write(f"#include \"steamworks_sdk_{sdkver}/steamnetworkingtypes.h\"\n")
    if not file == "steam_api.h":
        cpp.write(f"#include \"steamworks_sdk_{sdkver}/{file}\"\n")
    cpp.write("#pragma pop_macro(\"__cdecl\")\n")
    cpp.write("#include \"steamclient_private.h\"\n")
    cpp.write("#ifdef __cplusplus\nextern \"C\" {\n#endif\n")
    cpp.write(f"#define SDKVER_{sdkver}\n")
    cpp.write("#include \"struct_converters.h\"\n")
    cpp.write(f"#include \"{cppname}.h\"\n")

    cpp_h = open(f"{cppname}.h", "w")

    winclassname = f"win{classnode.spelling}_{iface_version}"
    cfile.write(f"#include \"{cppname}.h\"\n\n")
    cfile.write(f"typedef struct __{winclassname} {{\n")
    cfile.write("    vtable_ptr *vtable;\n")
    cfile.write("    void *linux_side;\n")
    cfile.write(f"}} {winclassname};\n\n")
    methods = []
    for child in children:
        if child.kind == CursorKind.CXX_METHOD and \
                child.is_virtual_method():
            handle_method(cfile, classnode.spelling, winclassname, cppname, child, cpp, cpp_h, methods)
        elif child.kind == CursorKind.DESTRUCTOR:
            methods.append(handle_destructor(cfile, classnode.spelling, winclassname, child))

    cfile.write(f"extern vtable_ptr {winclassname}_vtable;\n\n")
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("void __asm_dummy_vtables(void) {\n")
    cfile.write("#endif\n")
    cfile.write(f"    __ASM_VTABLE({winclassname},\n")
    for method in methods:
        cfile.write(f"        VTABLE_ADD_FUNC({winclassname}_{method})\n")
    cfile.write("    );\n")
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("}\n")
    cfile.write("#endif\n\n")
    cfile.write(f"{winclassname} *create_{winclassname}(void *linux_side)\n{{\n")
    if classnode.spelling in wrapped_classes:
        cfile.write(f"    {winclassname} *r = HeapAlloc(GetProcessHeap(), 0, sizeof({winclassname}));\n")
    else:
        cfile.write(f"    {winclassname} *r = alloc_mem_for_iface(sizeof({winclassname}), \"{iface_version}\");\n")
    cfile.write("    TRACE(\"-> %p\\n\", r);\n")
    cfile.write(f"    r->vtable = alloc_vtable(&{winclassname}_vtable, {len(methods)}, \"{iface_version}\");\n")
    cfile.write("    r->linux_side = linux_side;\n")
    cfile.write("    return r;\n}\n\n")

    cpp.write("#ifdef __cplusplus\n}\n#endif\n")

    constructors = open("win_constructors.h", "a")
    constructors.write(f"extern void *create_{winclassname}(void *);\n")

    constructors = open("win_constructors_table.dat", "a")
    constructors.write(f"    {{\"{iface_version}\", &create_{winclassname}}},\n")
    if iface_version in aliases.keys():
        for alias in aliases[iface_version]:
            constructors.write(f"    {{\"{alias}\", &create_{winclassname}}}, /* alias */\n")


generated_cb_handlers = []
generated_cb_ids = []
cpp_files_need_close_brace = []
cb_table = {}
cb_table64 = {}

def get_field_attribute_str(field):
    if field.type.kind != TypeKind.RECORD:
        return ""
    win_struct = find_windows_struct(field.type)
    if win_struct is None:
        align = field.type.get_align()
    else:
        align = win_struct.get_align()
    return " __attribute__((aligned(" + str(align) + ")))"

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

        if strip_const(struct.spelling) in manually_handled_structs:
            hfile.write("#endif\n\n")
            return

        hfile.write(f"extern void {w2l_handler_name}(const struct win{struct_name} *w, struct {struct.displayname} *l);\n")
        hfile.write(f"extern void {l2w_handler_name}(const struct {struct.displayname} *l, struct win{struct_name} *w);\n")
        hfile.write("#endif\n\n")
    else:
        #for callbacks, we use the windows struct size in the cb dispatch switch
        windows_struct = find_windows_struct(struct.type)
        windows_struct64 = find_windows64_struct(struct.type)
        struct64 = find_linux64_struct(struct.type)
        struct_name = f"{struct.displayname}_{windows_struct.get_size()}"
        l2w_handler_name = f"cb_{struct_name}"
        if windows_struct64.get_size() != windows_struct.get_size():
            struct_name64 = f"{struct.displayname}_{windows_struct64.get_size()}"
            l2w_handler_name64 = f"cb_{struct_name64}"
        else:
            l2w_handler_name64 = None
        if l2w_handler_name in generated_cb_handlers:
            # we already have a handler for the callback struct of this size
            return
        if not struct_needs_conversion(struct.type):
            return

        cb_id = cb_num | (struct.type.get_size() << 16)
        cb_id64 = cb_num | (struct64.get_size() << 16)
        if cb_id in generated_cb_ids:
            # either this cb changed name, or steam used the same ID for different structs
            return

        generated_cb_ids.append(cb_id)

        datfile = open("cb_converters.dat", "a")
        if l2w_handler_name64:
            datfile.write("#ifdef __i386__\n")
            datfile.write(f"case 0x{cb_id:08x}: win_msg->m_cubParam = {windows_struct.get_size()}; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); {l2w_handler_name}((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n")
            datfile.write("#endif\n")

            datfile.write("#ifdef __x86_64__\n")
            datfile.write(f"case 0x{cb_id64:08x}: win_msg->m_cubParam = {windows_struct64.get_size()}; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); {l2w_handler_name64}((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n")
            datfile.write("#endif\n")
        else:
            datfile.write(f"case 0x{cb_id:08x}: win_msg->m_cubParam = {windows_struct.get_size()}; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); {l2w_handler_name}((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n")

        generated_cb_handlers.append(l2w_handler_name)

        if not cb_num in cb_table.keys():
            # latest SDK linux size, list of windows struct sizes and names
            cb_table[cb_num] = (struct.type.get_size(), [])
            if l2w_handler_name64:
                cb_table64[cb_num] = (struct64.get_size(), [])
            else:
                cb_table64[cb_num] = (struct.type.get_size(), [])
        cb_table[cb_num][1].append((windows_struct.get_size(), struct_name))
        if l2w_handler_name64:
            cb_table64[cb_num][1].append((windows_struct64.get_size(), struct_name64))
        else:
            cb_table64[cb_num][1].append((windows_struct.get_size(), struct_name))

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
                cppfile.write(f"    steamclient_unix_path_to_dos_path(1, {src}->{m.displayname}, g_tmppath, sizeof(g_tmppath), {to_c_bool(url)});\n")
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

prog = re.compile("^#define\s*(\w*)\s*\"(.*)\"")
for sdkver in sdk_versions:
    print(f"parsing SDK version {sdkver}...")
    sdkdir = f"steamworks_sdk_{sdkver}"

    sources = {}
    iface_versions = {}
    for file in os.listdir(sdkdir):
        # Some files from Valve have non-UTF-8 stuff in the comments
        # (typically the copyright symbol); therefore we ignore UTF-8
        # encoding errors
        lines = open(f"{sdkdir}/{file}", "r", errors="replace").readlines()
        if file == "isteammasterserverupdater.h":
            if """#error "This file isn't used any more"\n""" in lines:
                sources[f"{sdkdir}/isteammasterserverupdater.h"] = ""

        for line in lines:
            if "define STEAM" in line and "_VERSION" in line:
                result = prog.match(line)
                if result:
                    iface, version = result.group(1, 2)
                    iface_versions[iface] = version

    source = [f"""#if __has_include("{sdkdir}/{file}")
                  #include "{sdkdir}/{file}"
                  #endif""" for file, _ in files]
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

    linux_structs64 = dict(reversed([(child.spelling, child.type) for child
                                     in linux_build64.cursor.get_children()]))
    windows_structs32 = dict(reversed([(child.spelling, child.type) for child
                                       in windows_build32.cursor.get_children()]))
    windows_structs64 = dict(reversed([(child.spelling, child.type) for child
                                       in windows_build64.cursor.get_children()]))

    classes = dict([(klass, file) for file, classes in files for klass in classes])
    for child in linux_build32.cursor.get_children():
        if child.kind == CursorKind.CLASS_DECL and child.displayname in classes:
            handle_class(sdkver, child, classes[child.displayname])
        if child.kind in [CursorKind.STRUCT_DECL, CursorKind.CLASS_DECL]:
            handle_struct(sdkver, child)
        if child.displayname in print_sizes:
            print("size of %s is %u" % (child.displayname, child.type.get_size()))

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
