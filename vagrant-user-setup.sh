#!/bin/sh

set -e

#build and install recent mingw-w64
if [ ! -e "$HOME/.local/bin/x86_64-w64-mingw32-gcc" ]; then
    mkdir -p $HOME/mingw-w64-build/
    (cd $HOME/mingw-w64-build && $HOME/proton/build-mingw-w64.sh "$HOME/.local/")
    #clean up the build tree, this takes up like 6GB
    rm -rf $HOME/mingw-w64-build/
fi

#install rust with x86_64 and i686 targets
RUST_VERSION="1.44.1"
RUST_CARGO_HOME=$HOME/rust/cargo
RUST_RUSTUP_HOME=$HOME/rust/rustup
if [ ! -e "$RUST_CARGO_HOME" ]; then

    curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs > $HOME/rustup-install.sh

    #64-bit toolchain
    CARGO_HOME=$RUST_CARGO_HOME RUSTUP_HOME=$RUST_RUSTUP_HOME \
        sh $HOME/rustup-install.sh -y --no-modify-path \
        --default-host "x86_64-unknown-linux-gnu" \
        --default-toolchain "$RUST_VERSION-x86_64-unknown-linux-gnu" \
        -t "i686-unknown-linux-gnu"

    cat > $HOME/.local/bin/cargo <<EOF
PATH=$RUST_CARGO_HOME/bin/:\$PATH CARGO_HOME=$RUST_CARGO_HOME RUSTUP_HOME=$RUST_RUSTUP_HOME cargo \$@
EOF

    chmod 755 $HOME/.local/bin/cargo
fi
