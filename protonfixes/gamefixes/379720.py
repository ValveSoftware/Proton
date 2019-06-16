""" Game fix for Doom 2016
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Install vcrun2015
    """

    # https://github.com/ValveSoftware/Proton/issues/788#issuecomment-416651267
    util.protontricks('vcrun2015')

    # disable chroma implementation that is broken in wine
    # https://github.com/simons-public/protonfixes/issues/26
    chroma_url = 'https://github.com/Riesi/CChromaEditor/files/2277158/CChromaEditorLibrary.zip'
    util.install_from_zip(chroma_url, 'CChromaEditorLibrary.dll')
