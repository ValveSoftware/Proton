#!/bin/bash

#this script resizes the build VM disk image.  the generic/debian9 box that we
#use only ships a 32G disk, which is only just large enough to hold the Steam
#runtime, two Wine build trees, and final Proton dist/ folder.

set -e

NOTE_STYLE="\e[31m\e[1m"
RESET_STYLE="\e[0m"

NEW_LIBVIRT_DISK_SIZE=128G

function note {
    echo -e "$NOTE_STYLE""$1""$RESET_STYLE"
}

function usage {
    note "To automatically resize a libvirt disk to $NEW_LIBVIRT_DISK_SIZE:"
    echo ""
    echo -e "\t$0 --libvirt-disk <libvirt disk path>"
    echo ""
    note "You may find the disk path with \"virsh vol-list default\"."
    echo ""
    note "Or, if you've already manually resized the disk (e.g. VirtualBox users):"
    echo ""
    echo -e "\t$0 --resize-vm-partition"
    exit 1
}

#to be run from within the VM
if [ "$1" == "--fdisk" ]; then
    sudo sfdisk -d /dev/sda > /tmp/sda.sfdisk

    #remove start and size params from sda3 line, sfdisk will automatically use the rest of the disk
    sed -e "s/^.dev.sda3.*$/\/dev\/sda3 : type=83/" < /tmp/sda.sfdisk | sudo sfdisk --force /dev/sda

    exit

#to be run from within the VM
elif [ "$1" == "--resize2fs" ]; then
    #resize2fs automatically uses the whole partition
    sudo resize2fs /dev/sda3

    exit

#libvirt disk image to resize
elif [ "$1" == "--libvirt-disk" ]; then
    if [ -z "$2" ]; then
        note "You must give a disk path to --libvirt-disk"
        echo ""
        usage
        exit 1
    fi
    LIBVIRT_DISK_PATH="$2"

    note "Going to resize disk $LIBVIRT_DISK_PATH"
    note "Shutting down VM"
    vagrant halt

    note "Resizing the VM disk image"
    virsh vol-resize "$LIBVIRT_DISK_PATH" "$NEW_LIBVIRT_DISK_SIZE" --pool default

#just resize the partition in the VM
elif [ "$1" == "--resize-vm-partition" ]; then
    : #noop

else
    if [ -n "$1" -a "$1" != "--help" -a "$1" != "-h" ]; then
        note "Unknown argument: $1"
        exit 1
    fi
    usage
    exit 1
fi

note "Starting the VM"
vagrant up
vagrant rsync

note "Repartitioning the disk"
vagrant ssh -c "/home/vagrant/proton/resize-vagrant-disk.sh --fdisk"

note "Restarting the VM"
#seems to be necessary for resize2fs to pick up on the new partition size
#maybe there's a way to do that without rebooting?
vagrant halt
vagrant up

note "Resizing the filesystem"
vagrant ssh -c "/home/vagrant/proton/resize-vagrant-disk.sh --resize2fs"

note "Here's the output from \"df -h /dev/sda3\":"
vagrant ssh -c "df -h /dev/sda3"

note "Shutting down the VM"
#just to be sure everything is in a clean state
vagrant halt

note "Done!"
