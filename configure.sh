#!/bin/bash

set -eu

SRCDIR="$(dirname "$0")"
DEFAULT_BUILD_NAME="proton-localbuild" # If no --build-name specified

# Output helpers
COLOR_ERR=""
COLOR_STAT=""
COLOR_INFO=""
COLOR_CMD=""
COLOR_CLEAR=""
if [[ $(tput colors 2>/dev/null || echo 0) -gt 0 ]]; then
  COLOR_ERR=$'\e[31;1m'
  COLOR_STAT=$'\e[32;1m'
  COLOR_INFO=$'\e[30;1m'
  COLOR_CMD=$'\e[93;1m'
  COLOR_CLEAR=$'\e[0m'
fi

sh_quote() {
        local quoted
        quoted="$(printf '%q ' "$@")"; [[ $# -eq 0 ]] || echo "${quoted:0:-1}";
}
err()      { echo >&2 "${COLOR_ERR}!!${COLOR_CLEAR} $*"; }
stat()     { echo >&2 "${COLOR_STAT}::${COLOR_CLEAR} $*"; }
info()     { echo >&2 "${COLOR_INFO}::${COLOR_CLEAR} $*"; }
showcmd()  { echo >&2 "+ ${COLOR_CMD}$(sh_quote "$@")${COLOR_CLEAR}"; }
die()      { err "$@"; exit 1; }
finish()   { stat "$@"; exit 0; }
cmd()      { showcmd "$@"; "$@"; }

#
# Dependency Checks
#

MISSING_DEPENDENCIES=0

dependency_command() {
    local COMMAND=$1
    shift
    if ! command -v "$COMMAND" &> /dev/null; then
        err "Couldn't find command '$COMMAND'. Please install ${@:-$COMMAND}."
        MISSING_DEPENDENCIES=1
    fi
}

CONTAINER_MOUNT_OPTS=""

check_container_engine() {
    stat "Trying $1."
    if ! cmd $1 run --rm $2; then
        info "$1 is unable to run the container."
        return 1
    fi

    touch permission_check

    # Capture both stdout and stderr
    local output="$($1 run -v "$(pwd):/test$CONTAINER_MOUNT_OPTS" \
                                            --rm $2 \
                                            stat --format "%u" /test/permission_check 2>&1)"
    rm permission_check

    # Filter output to get inner_uid or "Permission denied"
    local inner_uid=$(echo "$output" | grep -E '^[0-9]+$|Permission denied')

    # Check if inner_uid is not captured or empty
    if [ -z "$inner_uid" ]; then
        err "Unable to determine UID - received output: $output"
        die "Please check your $1 setup."
    fi

    if [[ $inner_uid == *"Permission denied"* ]]; then
        err "The container cannot access files. Are you using SELinux?"
        die "Please read README.md and check your $1 setup works."
    elif [ "$inner_uid" -eq 0 ]; then
        # namespace maps the user as root or the build is performed as host's root
        ROOTLESS_CONTAINER=1
    elif [ "$inner_uid" -eq "$(id -u)" ]; then
        ROOTLESS_CONTAINER=0
    else
        err "File owner's UID doesn't map to 0 or $(id -u) in the container."
        die "Don't know how to map permissions. Please check your $1 setup."
    fi
}

#
# Configure
#

THIS_COMMAND="$0 $*" # For printing, not evaling
MAKEFILE="./Makefile"

# This is not rigorous.  Do not use this for untrusted input.  Do not.  If you need a version of
# this for untrusted input, rethink the path that got you here.
function escape_for_make() {
  local escape="$1"
  escape="${escape//\\/\\\\}" #  '\' -> '\\'
  escape="${escape//#/\\#}"   #  '#' -> '\#'
  escape="${escape//\$/\$\$}" #  '$' -> '$$'
  escape="${escape// /\\ }"   #  ' ' -> '\ '
  echo "$escape"
}

function configure() {
  local steamrt_image="$arg_protonsdk_image"
  local srcdir
  srcdir="$(dirname "$0")"

  if [[ "$srcdir" = "." ]]; then
    err "Cannot do a top level in-tree build."
    die "Create a subdirectory in build/ or outside of the tree and run configure.sh from there."
  fi

  # nothing specified, getting the default value from the Makefile to test the
  # container engine
  if [[ -z $steamrt_image ]]; then
    steamrt_image="$(sed -n 's/STEAMRT_IMAGE ?= //p' $SRCDIR/Makefile.in)"
  fi

  # Build name
  local build_name="$arg_build_name"
  if [[ -n $build_name ]]; then
    info "Configuring with build name: $build_name"
  else
    build_name="$DEFAULT_BUILD_NAME"
    info "No build name specified, using default: $build_name"
  fi

  dependency_command make "GNU Make"

  if [ "$MISSING_DEPENDENCIES" -ne 0 ]; then
      die "Missing dependencies, cannot continue."
  fi

  if [[ -n "$arg_relabel_volumes" ]]; then
    CONTAINER_MOUNT_OPTS=:Z
  fi

  if [[ -n "$arg_container_engine" ]]; then
    check_container_engine "$arg_container_engine" "$steamrt_image" || die "Specified container engine \"$arg_container_engine\" doesn't work"
  else
    stat "Trying to find usable container engine."
    if check_container_engine docker "$steamrt_image"; then
      arg_container_engine="docker"
    elif check_container_engine podman "$steamrt_image"; then
      arg_container_engine="podman"
    else
        die "${arg_container_engine:-Container engine discovery} has failed. Please fix your setup."
    fi
  fi

  stat "Using $arg_container_engine."

  ## Write out config
  # Don't die after this point or we'll have rather unhelpfully deleted the Makefile
  [[ ! -e "$MAKEFILE" ]] || rm "$MAKEFILE"

  {
    # Config
    echo "# Generated by: $THIS_COMMAND"
    echo ""
    echo "SRCDIR     := $(escape_for_make "$srcdir")"
    echo "BUILD_NAME := $(escape_for_make "$build_name")"

    # SteamRT was specified, baking it into the Makefile
    if [[ -n $arg_protonsdk_image ]]; then
      echo "STEAMRT_IMAGE := $(escape_for_make "$arg_protonsdk_image")"
    fi

    echo "ROOTLESS_CONTAINER := $ROOTLESS_CONTAINER"
    echo "CONTAINER_ENGINE := $arg_container_engine"
    if [[ -n "$arg_docker_opts" ]]; then
      echo "DOCKER_OPTS := $arg_docker_opts"
    fi
    if [[ -n "$CONTAINER_MOUNT_OPTS" ]]; then
      echo "CONTAINER_MOUNT_OPTS := $CONTAINER_MOUNT_OPTS"
    fi
    if [[ -n "$arg_enable_ccache" ]]; then
      echo "ENABLE_CCACHE := 1"
    fi
    if [[ -n "$arg_enable_bear" ]]; then
      echo "ENABLE_BEAR := 1"
    fi

    # Include base
    echo ""
    echo "include \$(SRCDIR)/Makefile.in"
  } >> "$MAKEFILE"

  stat "Created $MAKEFILE, now run make to build."
  stat "  See README.md for make targets and instructions"
}

#
# Parse arguments
#

arg_protonsdk_image=""
arg_build_name=""
arg_container_engine=""
arg_docker_opts=""
arg_relabel_volumes=""
arg_enable_ccache=""
arg_enable_bear=""
arg_help=""
invalid_args=""
function parse_args() {
  local arg;
  local val;
  local val_used;
  local val_passed;
  while [[ $# -gt 0 ]]; do
    arg="$1"
    val=''
    val_used=''
    val_passed=''
    if [[ -z $arg ]]; then # Sanity
      err "Unexpected empty argument"
      return 1
    elif [[ ${arg:0:2} != '--' ]]; then
      err "Unexpected positional argument ($1)"
      return 1
    fi

    # Looks like an argument does it have a --foo=bar value?
    if [[ ${arg%=*} != "$arg" ]]; then
      val="${arg#*=}"
      arg="${arg%=*}"
      val_passed=1
    else
      # Otherwise for args that want a value, assume "--arg val" form
      val="${2:-}"
    fi

    # The args
    if [[ $arg = --help || $arg = --usage ]]; then
      arg_help=1
    elif [[ $arg = --build-name ]]; then
      arg_build_name="$val"
      val_used=1
    elif [[ $arg = --container-engine ]]; then
      arg_container_engine="$val"
      val_used=1
    elif [[ $arg = --docker-opts ]]; then
      arg_docker_opts="$val"
      val_used=1
    elif [[ $arg = --relabel-volumes ]]; then
      arg_relabel_volumes="1"
    elif [[ $arg = --enable-ccache ]]; then
      arg_enable_ccache="1"
    elif [[ $arg = --enable-bear ]]; then
      arg_enable_bear="1"
    elif [[ $arg = --proton-sdk-image ]]; then
      val_used=1
      arg_protonsdk_image="$val"
    else
      err "Unrecognized option $arg"
      return 1
    fi

    # Check if this arg used the value and shouldn't have or vice-versa
    if [[ -n $val_used && -z $val_passed ]]; then
      # "--arg val" form, used $2 as the value.

      # Don't allow this if it looked like "--arg --val"
      if [[ ${val#--} != "$val" ]]; then
        err "Ambiguous format for argument with value \"$arg $val\""
        err "  (use $arg=$val or $arg='' $val)"
        return 1
      fi

      # Error if this was the last positional argument but expected $val
      if [[ $# -le 1 ]]; then
        err "$arg takes a parameter, but none given"
        return 1
      fi

      shift # consume val
    elif [[ -z $val_used && -n $val_passed ]]; then
      # Didn't use a value, but passed in --arg=val form
      err "$arg does not take a parameter"
      return 1
    fi

    shift # consume arg
  done
}

usage() {
  "$1" "Usage: $0 { --proton-sdk-image=<image> }"
  "$1" "  Generate a Makefile for building Proton.  May be run from another directory to create"
  "$1" "  out-of-tree build directories (e.g. mkdir mybuild && cd mybuild && ../configure.sh)"
  "$1" ""
  "$1" "  Options"
  "$1" "    --help / --usage     Show this help text and exit"
  "$1" ""
  "$1" "    --build-name=<name>  Set the name of the build that displays when used in Steam"
  "$1" ""
  "$1" "    --container-engine=<engine> Which Docker-compatible container engine to use,"
  "$1" "                                e.g. podman. Tries to do autodiscovery when not specified."
  "$1" ""
  "$1" "    --docker-opts='<options>' Extra options to pass to Docker when invoking the runtime."
  "$1" ""
  "$1" "    --relabel-volumes Bind-mounted volumes will be relabeled. Use with caution."
  "$1" ""
  "$1" "    --enable-ccache Mount \$CCACHE_DIR or \$HOME/.ccache inside of the container and use ccache for the build."
  "$1" ""
  "$1" "    --enable-bear Invokes make via bear creating compile_commands.json."
  "$1" ""
  "$1" "  Steam Runtime"
  "$1" "    Proton builds that are to be installed & run under the steam client must be built with"
  "$1" "    the Steam Runtime SDK to ensure compatibility.  See README.md for more information."
  "$1" ""
  "$1" "    --proton-sdk-image=<image>  Automatically invoke the Steam Runtime SDK in <image>"
  "$1" "                                for build steps that must be run in an SDK"
  "$1" "                                environment.  See README.md for instructions to"
  "$1" "                                create this image."
  exit 1;
}

parse_args "$@" || usage err
[[ -z $arg_help ]] || usage info

configure
