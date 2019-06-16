""" Game fix Dark Sould Prepare To Die Edition
"""
#pylint: disable=C0103

from protonfixes import util

def main():
    """ Needs WMP9, devenum, quartz, dinput and win7 """

    #For WMP9 to work
    util.use_win32_prefix()

    #For main menu, intro and outro playback
    util.protontricks('wmp9')
    util.protontricks('devenum')
    util.protontricks('quartz')

    #In case if someone wishes to use DSfix
    util.protontricks('dinput8')
    util.winedll_override('dinput8', 'n')

    util.protontricks('win7')
    #Avoiding problems with missing syswow64
    util._mk_syswow64() #pylint: disable=protected-access
