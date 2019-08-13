---
Rebasing Proton onto new upstream releases
---

We maintain a lot of patches on top of upstream releases. When cherry-picking
stuff from upstream into Proton, *always* use the `-x` parameter so the
original commit ID is retained in the log message. Contrarily, *never* use `-x`
when picking things that are not upstreamed. This lets us use the cherry-picked
log message as an indicator of which commits can be dropped during a rebase
because they were already upstreamed.

Here's a command which will generate the list of commits that were applied on
top of wine-4.2, which were not backported from upstream Wine:

    wine$ git log --pretty=oneline --reverse --grep='cherry pick' --invert-grep wine-4.2..proton_4.2

You can then pick that list (*without* `-x`!) onto a new Wine release tag,
resolving conflicts and such as you go.

Here's a somewhat clumsy script that I think is easier to work with than git's
built-in tools:

    #!/bin/bash
    
    # Cherry-picks commits from an input file in --pretty=oneline format.
    # Lines that begin with '#' are ignored.
    # Aborts when a cherry-pick fails.
    # Outputs the same input file on stderr, but with '#' prefixed to lines that were successfully cherry-picked.
    
    #Usage:
    # $ pick_commits to_pick 2> ~/to_pick2
    #   On pick failure, fix conflicts and use "git cherry-pick --continue", or
    #     otherwise fix up the repo as desired.
    #   Edit ~/to_pick2 to comment-out the commit that you fixed.
    #   Continue using the new file:
    # $ pick_commits to_pick2 2> ~/to_pick
    #   Repeat, alternating between to_pick and to_pick2.
    
    broken=0
    while read -r l; do
        f=$(echo -n "$l" | cut '-d ' -f1 -)
        if [ $broken == 0 -a ${f:0:1} != '#' ]; then
            echo "Picking $l"
            git cherry-pick $f 2>&1
            if [ $? -ne 0 ]; then
                echo $l 1>&2
                broken=1
            else
                echo '#'$l 1>&2
            fi
        else
            echo $l 1>&2
        fi
    done < "$1"

Once your Wine rebase is done, update the prefix version in the proton Python
script, resetting the minor version back to 1.
