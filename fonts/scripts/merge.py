#!/usr/bin/env python3

# This script was created by Giovanni Mascellani for CodeWeavers

# Based on merge_noto.py and merge_fonts.py from the nototools
# (https://github.com/googlefonts/nototools), with the following
# copyright notice:

# Copyright 2014-2017 Google Inc. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# The font name changing logic is taken from
# https://github.com/chrissimpkins/fontname.py/blob/master/fontname.py,
# with the following copyright notice:

# Copyright 2019 Christopher Simpkins
# MIT License

# The font subsetting logic is taken from
# https://github.com/fonttools/fonttools/blob/main/Lib/fontTools/subset/__init__.py
# with the following copyright notice:

# Copyright 2013 Google, Inc. All Rights Reserved.
# Google Author(s): Behdad Esfahbod

# The whole fonttools repository is distributed under the MIT license.

"""Merges a number of Noto fonts and then sets a given name to the
result.

"""

import sys
import tempfile
import os

from fontTools import merge
from fontTools import ttLib
from fontTools import subset
from fontTools.ttLib.tables import otTables

def read_line_metrics(font):
    metrics = {
        "ascent": font["hhea"].ascent,
        "descent": font["hhea"].descent,
        "usWinAscent": font["OS/2"].usWinAscent,
        "usWinDescent": font["OS/2"].usWinDescent,
        "sTypoAscender": font["OS/2"].sTypoAscender,
        "sTypoDescender": font["OS/2"].sTypoDescender,
        "sxHeight": font["OS/2"].sxHeight,
        "sCapHeight": font["OS/2"].sCapHeight,
        "sTypoLineGap": font["OS/2"].sTypoLineGap,
    }
    return metrics


def set_line_metrics(font, metrics):
    font["hhea"].ascent = metrics["ascent"]
    font["hhea"].descent = metrics["descent"]
    font["OS/2"].usWinAscent = metrics["usWinAscent"]
    font["OS/2"].usWinDescent = metrics["usWinDescent"]
    font["OS/2"].sTypoAscender = metrics["sTypoAscender"]
    font["OS/2"].sTypoDescender = metrics["sTypoDescender"]
    font["OS/2"].sxHeight = metrics["sxHeight"]
    font["OS/2"].sCapHeight = metrics["sCapHeight"]
    font["OS/2"].sTypoLineGap = metrics["sTypoLineGap"]

def has_gsub_table(fontfile):
    font = ttLib.TTFont(fontfile)
    return "GSUB" in font

SCRIPT_TO_OPENTYPE_SCRIPT_TAG = {
    # Retrieved from Opentype 1.9 delta specs. Prerelease scripttags used out of necessity. https://docs.microsoft.com/en-us/typography/opentype/spec/scripttags
    "Carian": "cari",
    "CypriotSyllabary": "cprt",
    "CyproMinoan": "cpmn",
    "Deseret": "dsrt",
    "Glagolitic": "glag",
    "EgyptianHieroglyphs": "egyp",
    "ImperialAramaic": "armi",
    "LinearA": "lina",
    "LinearB": "linb",
    "Lisu": "lisu",
    "Lycian": "lyci",
    "Lydian": "lydi",
    "Ogham": "ogam",
    "OldItalic": "ital",
    "OldPersian": "xpeo",
    "OldSouthArabian": "sarb",
    "OldTurkic": "orkh",
    "OldSogdian": "sogo",
    "OldNorthArabian": "narb",
    "OldHungarian": "hung",
    "Osmanya": "osma",
    "Phoenician": "phnx",
    "SumeroAkkadianCuneiform": "xsux",
    "Ugaritic": "ugar",
    "OlChiki": "olck",
    "TaiLe": "tale",
    "Cuneiform": "xsux",
    "Cypriot": "cprt",
    "Runic": "runr",
    "Shavian": "shaw",
    "Vai": "vai ",
    "Yi": "yi  ",
    "AnatolianHieroglyphs": "hluw",
    "Bamum": "bamu",
    "ByzantineMusic": "byzm",
    "Gothic": "goth",
    "ImperialAramaic": "armi",
    "InscriptionalPahlavi": "phli",
    "InscriptionalParthian": "prti",
    "Khojki": "khoj",
    "MathematicalAlphanumericSymbols": "math",
    "MeroiticCursive": "merc",
    "MeroiticHieroglyphs": "mero",
    "MusicalSymbols": "musc",
    "Palmyrene": "palm",
    "Rejang": "rjng",
    "Samaritan": "samr",
    "Carian": "cari",
    "Ahom": "ahom",
    "Adlam": "adlm",
    "Dogra": "dogr",
    "Lisu": "lisu",
    "Mandaean": "mand",
    "Manichaean": "mani",
    "Tifinagh": "tfng",
    "Wancho": "wcho",
    "Yezidi": "yezi",
    "Cherokee": "cher",
    "Chorasmian": "chrs",
    "PahawhHmong": "hmng",
    "Phagspa": "phag",
    "Sundanese": "sund",
    "WarangCiti": "wara",
    "SylotiNagri": "sylo",
    "PsalterPahlavi": "phlp",
    "CaucasianAlbanian": "aghb",
    "Medefaidrin": "medf",
    "MeiteiMayek": "mtei",
    "MendeKikakui": "mend",
    "Mro": "mroo",
    "Multani": "mult",
    "Nabataean": "nbat",
    "Nandinagari": "nand",
    "Newa": "newa",
    "NewTaiLue": "talu",
    "Nushu": "nshu",
    "NyiakengPuachueHmong": "hmnp",
    "OldPermic": "perm",
    "SoraSompeng": "sora",
    "Soyombo": "soyo",
    "SylotiNagri": "sylo",
    "Tagbanwa": "tagb",
    "Tagalog": "tglg",
    "Takri": "takr",
    "TaiTham": "lana",
    "TaiViet": "tavt",
    "Tangut": "tang",
    "Thaana": "thaa",
    "UgariticCuneiform": "ugar",
    "ZanabazarSquare": "zanb",
    "SignWriting": "sgnw",
    "OldUyghur": "ougr",
    "Tangsa": "tnsa",
    "Toto": "toto",
    "Vithkuqi": "vith",
    "Duployan": "dupl",
    "Hatran": "hatr",
    # These last two would only merge using the long script name including the 'NotoSerif' part
    "NotoSerifYezidi": "yezi",
    "NotoSerifNyiakengPuachueHmong": "hmnp",
}

def get_opentype_script_tag(fontfile):
    fontfile = os.path.basename(fontfile)
    if fontfile.startswith("NotoSans"):
        fontfile = fontfile[8:]
    fontfile = fontfile[: fontfile.index("-")]
    return SCRIPT_TO_OPENTYPE_SCRIPT_TAG[fontfile]

def add_gsub_to_font(fontfile):
    """Adds an empty GSUB table to a font."""
    font = ttLib.TTFont(fontfile)
    gsub_table = ttLib.getTableClass("GSUB")("GSUB")
    gsub_table.table = otTables.GSUB()
    gsub_table.table.Version = 1.0
    gsub_table.table.ScriptList = otTables.ScriptList()
    gsub_table.table.ScriptCount = 1
    gsub_table.table.LookupList = otTables.LookupList()
    gsub_table.table.LookupList.LookupCount = 0
    gsub_table.table.LookupList.Lookup = []
    gsub_table.table.FeatureList = otTables.FeatureList()
    gsub_table.table.FeatureList.FeatureCount = 0
    gsub_table.table.LookupList.FeatureRecord = []

    script_record = otTables.ScriptRecord()
    script_record.ScriptTag = get_opentype_script_tag(fontfile)
    script_record.Script = otTables.Script()
    script_record.Script.LangSysCount = 0
    script_record.Script.LangSysRecord = []

    default_lang_sys = otTables.DefaultLangSys()
    default_lang_sys.FeatureIndex = []
    default_lang_sys.FeatureCount = 0
    default_lang_sys.LookupOrder = None
    default_lang_sys.ReqFeatureIndex = 65535
    script_record.Script.DefaultLangSys = default_lang_sys

    gsub_table.table.ScriptList.ScriptRecord = [script_record]

    font["GSUB"] = gsub_table

    target_file = tempfile.gettempdir() + "/" + os.path.basename(fontfile)
    font.save(target_file)
    return target_file

def parse_unicodes(s):
    import re

    s = re.sub(r"0[xX]", " ", s)
    s = re.sub(r"[<+>,;&#\\xXuU\n	]", " ", s)
    l = []
    for item in s.split():
        fields = item.split("-")
        if len(fields) == 1:
            l.append(int(item, 16))
        else:
            start, end = fields
            l.extend(range(int(start, 16), int(end, 16) + 1))
    return l

def main():
    output_filename = sys.argv[-1]
    ranges_filename = sys.argv[-2]
    weight = sys.argv[-3]
    font_name = sys.argv[-4]
    ps_name = sys.argv[-5]
    input_filenames = sys.argv[1:-5]

    # Add a GSUB table to the fonts that do not have one, otherwise
    # the merger will complain
    for index, filename in enumerate(input_filenames):
        if not has_gsub_table(filename):
            input_filenames[index] = add_gsub_to_font(filename)

    merger = merge.Merger()
    font = merger.merge(input_filenames)

    # Use the line metrics defined by the first font, which is
    # supposed to be the basic NotoSans
    metrics = read_line_metrics(ttLib.TTFont(input_filenames[0]))
    set_line_metrics(font, metrics)

    # Select the subset we care about
    options = subset.Options(ignore_missing_unicodes=False)
    subsetter = subset.Subsetter(options)
    unicodes = []
    with open(ranges_filename) as ranges:
        for line in ranges:
            unicodes.extend(parse_unicodes(line.split("#")[0]))
    if len(unicodes) != 0:
        subsetter.populate(unicodes=unicodes)
        subsetter.subset(font)

    # Rename the result
    for record in font['name'].names:
        if record.nameID == 1:
            record.string = font_name
        elif record.nameID == 4:
            record.string = "{} {}".format(font_name, weight)
        elif record.nameID == 6:
            record.string = "{}-{}".format(ps_name, weight.replace(' ', ''))

    font.save(output_filename)

if __name__ == '__main__':
    main()
