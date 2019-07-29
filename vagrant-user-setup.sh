#!/bin/sh

#set up steam runtimes. remove these lines if building without the runtime
if [ ! -e "$HOME/steam-runtime" ]; then
    git clone https://github.com/ValveSoftware/steam-runtime.git
    ./steam-runtime/setup_docker.sh amd64 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev
    ./steam-runtime/setup_docker.sh i386 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev32
    (cd steam-runtime && ./build-runtime.py --verbose --output=./runtime/)
fi

if [ ! -e "$HOME/bin/schroot_wrapper" ]; then
    #create schroot wrapper scripts, for winebuild and winegcc to find in PATH
    mkdir -p $HOME/bin/
    cat > $HOME/bin/schroot_wrapper <<EOF
#!/bin/bash
schroot -c proton_crosscc -- /usr/bin/\$(basename \$0) \$@
EOF
    chmod 755 $HOME/bin/schroot_wrapper
    for a in x86_64 i686
    do
        for f in \
            w64-mingw32-ar \
            w64-mingw32-as \
            w64-mingw32-dlltool \
            w64-mingw32-gcc \
            w64-mingw32-g++ \
            w64-mingw32-ld \
            w64-mingw32-nm \
            w64-mingw32-ranlib \
            w64-mingw32-strip \
            w64-mingw32-windres
        do
            ln -s schroot_wrapper $HOME/bin/$a-$f
        done
    done

    # docker mounts /home/vagrant, not /home, so we need rbind instead of bind
    # for $HOME to get mounted in the schroot when called from within the docker
    cat > /home/vagrant/rbind_fstab << EOF
/proc           /proc           none    rw,bind         0       0
/sys            /sys            none    rw,bind         0       0
/dev            /dev            none    rw,bind         0       0
/dev/pts        /dev/pts        none    rw,bind         0       0
/home           /home           none    rw,rbind         0       0
/tmp            /tmp            none    rw,rbind         0       0
EOF
fi
