# Copied from https://github.com/adobe-type-tools/afdko/blob/develop/python/afdko/otf2ttf.py

import argparse
import glob
import logging
import os
import sys
from functools import partial, singledispatch
from itertools import chain
from multiprocessing import Pool

from fontTools import configLogger
from fontTools.misc.cliTools import makeOutputFileName
from fontTools.pens.cu2quPen import Cu2QuPen
from fontTools.pens.ttGlyphPen import TTGlyphPen
from fontTools.ttLib import TTCollection, TTFont, TTLibError, newTable

log = logging.getLogger()
configLogger(logger=log)

# default approximation error, measured in UPEM
MAX_ERR = 1.0

# default 'post' table format
POST_FORMAT = 2.0

# assuming the input contours' direction is correctly set (counter-clockwise),
# we just flip it to clockwise
REVERSE_DIRECTION = True


def glyphs_to_quadratic(
        glyphs, max_err=MAX_ERR, reverse_direction=REVERSE_DIRECTION):
    quadGlyphs = {}
    for gname in glyphs.keys():
        glyph = glyphs[gname]
        ttPen = TTGlyphPen(glyphs)
        cu2quPen = Cu2QuPen(ttPen, max_err,
                            reverse_direction=reverse_direction)
        glyph.draw(cu2quPen)
        quadGlyphs[gname] = ttPen.glyph()
    return quadGlyphs


def update_hmtx(ttFont, glyf):
    hmtx = ttFont["hmtx"]
    for glyphName, glyph in glyf.glyphs.items():
        if hasattr(glyph, 'xMin'):
            hmtx[glyphName] = (hmtx[glyphName][0], glyph.xMin)


@singledispatch
def otf_to_ttf(ttFont, post_format=POST_FORMAT, **kwargs):
    if ttFont.sfntVersion != "OTTO":
        raise TTLibError("Not a OpenType font (bad sfntVersion)")
    assert "CFF " in ttFont

    glyphOrder = ttFont.getGlyphOrder()

    ttFont["loca"] = newTable("loca")
    ttFont["glyf"] = glyf = newTable("glyf")
    glyf.glyphOrder = glyphOrder
    glyf.glyphs = glyphs_to_quadratic(ttFont.getGlyphSet(), **kwargs)
    del ttFont["CFF "]
    if "VORG" in ttFont:
        del ttFont["VORG"]
    glyf.compile(ttFont)
    update_hmtx(ttFont, glyf)

    ttFont["maxp"] = maxp = newTable("maxp")
    maxp.tableVersion = 0x00010000
    maxp.maxZones = 1
    maxp.maxTwilightPoints = 0
    maxp.maxStorage = 0
    maxp.maxFunctionDefs = 0
    maxp.maxInstructionDefs = 0
    maxp.maxStackElements = 0
    maxp.maxSizeOfInstructions = 0
    maxp.maxComponentElements = max(
        len(g.components if hasattr(g, 'components') else [])
        for g in glyf.glyphs.values())
    maxp.compile(ttFont)

    post = ttFont["post"]
    post.formatType = post_format
    post.extraNames = []
    post.mapping = {}
    post.glyphOrder = glyphOrder
    try:
        post.compile(ttFont)
    except OverflowError:
        post.formatType = 3
        log.warning("Dropping glyph names, they do not fit in 'post' table.")

    ttFont.sfntVersion = "\000\001\000\000"


@otf_to_ttf.register(TTCollection)
def _(fonts, **kwargs):
    skip = 0
    for font in fonts:
        try:
            otf_to_ttf(font, **kwargs)
        except TTLibError as warn:
            skip += 1
            log.warning(warn)

    if skip == len(fonts):
        raise TTLibError("a Font Collection that has Not a OpenType font")


def run(path, options):
    try:
        font = TTFont(path, fontNumber=options.face_index)
        extension = '.ttf'
    except TTLibError:
        font = TTCollection(path)
        extension = '.ttc'

    if options.output and not os.path.isdir(options.output):
        output = options.output
    else:
        output = makeOutputFileName(path, outputDir=options.output,
                                    extension=extension,
                                    overWrite=options.overwrite)

    try:
        otf_to_ttf(font,
                   post_format=options.post_format,
                   max_err=options.max_error,
                   reverse_direction=options.reverse_direction)
    except TTLibError as warn:
        log.warning(f'"{path}" cannot be converted since it is {warn}.')
    else:
        font.save(output)


def main(args=None):
    parser = argparse.ArgumentParser()
    parser.add_argument("input", nargs='+', metavar="INPUT")
    parser.add_argument("-o", "--output")
    parser.add_argument("-e", "--max-error", type=float, default=MAX_ERR)
    parser.add_argument("--post-format", type=float, default=POST_FORMAT)
    parser.add_argument(
        "--keep-direction", dest='reverse_direction', action='store_false')
    parser.add_argument("--face-index", type=int, default=-1)
    parser.add_argument("--overwrite", action='store_true')
    options = parser.parse_args(args)

    if options.output and len(options.input) > 1:
        if not os.path.isdir(options.output):
            parser.error("-o/--output option must be a directory when "
                         "processing multiple fonts")

    files = list(chain.from_iterable(map(glob.glob, options.input)))

    # Set the pool capacity to be the minimum of file quantity and CPU count,
    # at least 1.
    poolCapacity = max(min(os.cpu_count(), len(files)), 1)
    # Limit parallel capacity to 60 on win32 to avoid WaitForMultipleObjects
    # errors. See https://bugs.python.org/issue45077
    if poolCapacity > 60 and sys.platform == "win32":
        poolCapacity = 60
    # Do not use "with" statement, or code coverage will malfunction.
    pool = Pool(poolCapacity)
    try:
        pool.map(partial(run, options=options), files)
    finally:
        pool.close()
        pool.join()


if __name__ == "__main__":
    sys.exit(main())
