""" Utilities for getting the ms corefonts for protonfixes
"""

import os
import shutil
import subprocess
import urllib.request
from threading import Thread
from tempfile import NamedTemporaryFile as Temp
from .logger import log

#pylint: disable=W0106

COREFONTS_DIR = os.path.expanduser('~/.config/protonfixes/mscorefonts/')
FONTS_LIST = [
    'andalemo.ttf', 'arial.ttf', 'arialbd.ttf',
    'arialbi.ttf', 'ariali.ttf', 'ariblk.ttf',
    'comic.ttf', 'comicbd.ttf', 'cour.ttf',
    'courbd.ttf', 'courbi.ttf', 'couri.ttf',
    'georgia.ttf', 'georgiab.ttf', 'georgiai.ttf',
    'georgiaz.ttf', 'impact.ttf', 'times.ttf',
    'timesbd.ttf', 'timesbi.ttf', 'timesi.ttf',
    'trebuc.ttf', 'trebucbd.ttf', 'trebucbi.ttf',
    'trebucit.ttf', 'verdana.ttf', 'verdanab.ttf',
    'verdanai.ttf', 'verdanaz.ttf', 'webdings.ttf',
    ]


def check_corefonts():
    """ Returns True if all corefonts are in cache, else returns False
    """

    if not os.path.isdir(COREFONTS_DIR):
        return False

    installed = os.listdir(COREFONTS_DIR)
    fonts = [False for x in FONTS_LIST if x not in installed]
    if all(fonts):
        return True
    return False


def download_file(url, files):
    """ Downloads a file at url and returns the adds the filename to files
    """

    log.debug('Downloading ' + url)
    with urllib.request.urlopen(url, files) as font:
        with Temp(delete=False, prefix='font' + str(os.getpid())) as temp:
            shutil.copyfileobj(font, temp)
            files.append(temp)


def extract_cab(filename, dst_dir):
    """ Extract a cab file filename to dst_dir using cabextract or bsdtar
    """

    log.debug('Extracting ' + filename)
    cabextract = shutil.which('cabextract')
    bsdtar = shutil.which('bsdtar')

    if cabextract:
        # cabextract command to extract just ttf files
        cabextract_cmd = [cabextract,
                          '-L', # make filenames lowercase
                          '-F', '*.ttf', # only extract ttf
                          '-d', dst_dir, # extract to dst_dir
                          filename,
                          ]
        cab = subprocess.Popen(cabextract_cmd)
        cab.wait()
        return True

    if bsdtar:
        # bsdtar command to extract just ttf files
        bsdtar_cmd = [bsdtar,
                      '-C', dst_dir,
                      '-xf', filename,
                      '*.[Tt][Tt][Ff]', # just TTF files
                      ]

        cab = subprocess.Popen(bsdtar_cmd)
        cab.wait()

        return True
    return False


def get_corefonts():
    """ Downloads the ms-corefonts from the pushcx/corefonts mirror
    """

    if check_corefonts():
        return

    urlbase = 'https://github.com/pushcx/corefonts/raw/master/'
    urlsuffix = '32.exe'
    fonts = ['andale', 'arial', 'arialb', 'comic', 'courie', 'georgi',
             'impact', 'times', 'trebuc', 'verdan', 'webdin', ]

    try:
        os.makedirs(COREFONTS_DIR)
    except FileExistsError:
        log.debug('Directory exists: ' + COREFONTS_DIR)

    urls = [urlbase + x + urlsuffix for x in fonts]
    files = []

    # download files in threads
    dl_threads = [Thread(target=download_file, args=(u, files))
                  for u in urls]
    [thread.start() for thread in dl_threads]
    [thread.join() for thread in dl_threads]

    # extract files with threads
    ex_threads = [Thread(target=extract_cab, args=(f.name, COREFONTS_DIR))
                  for f in files]
    [thread.start() for thread in ex_threads]
    [thread.join() for thread in ex_threads]

    # rename files to lowercase
    [shutil.move(os.path.join(d, f), os.path.join(d, f).lower())
     for d, _, files in os.walk(COREFONTS_DIR)
     for f in files]

    # cleanup temp files
    [log.debug('Removing ' + f.name) for f in files]
    [os.remove(f.name) for f in files]


def link_fonts(directory):
    """ Make links to core fonts in directory
    """

    log.info('Creating MS Core font links in ' + directory)
    src = COREFONTS_DIR
    dst = directory
    link_list = [(os.path.join(d, f), os.path.join(dst, f))
                 for d, _, files in os.walk(src) for f in files]
    for source_file, dest_file in link_list:
        try:
            os.symlink(source_file, dest_file)
        except FileExistsError:
            log.debug('Not overwriting ' + dest_file)
