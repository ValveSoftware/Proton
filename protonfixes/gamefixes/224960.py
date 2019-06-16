""" Game fix for Tomb Raider I
"""
# pylint: disable=C0103

from protonfixes import util

def main():
    """ Enable Glide emulation in dosbox config """

    conf_dict = {'glide': {'glide': 'emu'}}
    util.create_dosbox_conf('glide_fix.conf', conf_dict)
    util.append_argument('-conf')
    util.append_argument('glide_fix.conf')
