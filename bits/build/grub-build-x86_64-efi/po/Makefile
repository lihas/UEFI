# Makefile for PO directory in any package using GNU gettext.
# Copyright (C) 1995-1997, 2000-2007, 2009-2010 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file can be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU General Public
# License but which still want to provide support for the GNU gettext
# functionality.
# Please note that the actual code of GNU gettext is covered by the GNU
# General Public License and is *not* in the public domain.
#
# Origin: gettext-0.18
GETTEXT_MACRO_VERSION = 0.18

PACKAGE = grub
VERSION = 2.00
PACKAGE_BUGREPORT = bug-grub@gnu.org

SHELL = /bin/sh


srcdir = /home/neo/development/uefi/bits/build/grub/po
top_srcdir = /home/neo/development/uefi/bits/build/grub
VPATH = /home/neo/development/uefi/bits/build/grub/po

prefix = /home/neo/development/uefi/bits/build/grub-inst-x86_64-efi
exec_prefix = ${prefix}
datarootdir = ${prefix}/share
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gettextsrcdir = $(datadir)/gettext/po

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

# We use $(mkdir_p).
# In automake <= 1.9.x, $(mkdir_p) is defined either as "mkdir -p --" or as
# "$(mkinstalldirs)" or as "$(install_sh) -d". For these automake versions,
# ${SHELL} /home/neo/development/uefi/bits/build/grub/build-aux/install-sh does not start with $(SHELL), so we add it.
# In automake >= 1.10, /bin/mkdir -p is derived from ${MKDIR_P}, which is defined
# either as "/path/to/mkdir -p" or ".../install-sh -c -d". For these automake
# versions, $(mkinstalldirs) and $(install_sh) are unused.
mkinstalldirs = $(SHELL) ${SHELL} /home/neo/development/uefi/bits/build/grub/build-aux/install-sh -d
install_sh = $(SHELL) ${SHELL} /home/neo/development/uefi/bits/build/grub/build-aux/install-sh
MKDIR_P = /bin/mkdir -p
mkdir_p = /bin/mkdir -p

GMSGFMT_ = /usr/bin/msgfmt
GMSGFMT_no = /usr/bin/msgfmt
GMSGFMT_yes = /usr/bin/msgfmt
GMSGFMT = $(GMSGFMT_$(USE_MSGCTXT))
MSGFMT_ = /usr/bin/msgfmt
MSGFMT_no = /usr/bin/msgfmt
MSGFMT_yes = /usr/bin/msgfmt
MSGFMT = $(MSGFMT_$(USE_MSGCTXT))
XGETTEXT_ = /usr/bin/xgettext
XGETTEXT_no = /usr/bin/xgettext
XGETTEXT_yes = /usr/bin/xgettext
XGETTEXT = $(XGETTEXT_$(USE_MSGCTXT))
MSGMERGE = msgmerge
MSGMERGE_UPDATE = /usr/bin/msgmerge --update
MSGINIT = msginit
MSGCONV = msgconv
MSGFILTER = msgfilter

POFILES = 
GMOFILES = 
UPDATEPOFILES = 
DUMMYPOFILES = 
DISTFILES.common = Makefile.in.in remove-potcdate.sin \
$(DISTFILES.common.extra1) $(DISTFILES.common.extra2) \
$(DISTFILES.common.extra3) $(DISTFILES.common.extra4)
DISTFILES = $(DISTFILES.common) Makevars POTFILES.in POTFILES-shell.in \
$(POFILES) $(GMOFILES) \
$(DISTFILES.extra1) $(DISTFILES.extra2) $(DISTFILES.extra3) $(DISTFILES.extra4) grub.d.sed README

POTFILES = \
     /home/neo/development/uefi/bits/build/grub/./build-aux/arg-nonnull.h \
     /home/neo/development/uefi/bits/build/grub/./build-aux/c++defs.h \
     /home/neo/development/uefi/bits/build/grub/./build-aux/warn-on-use.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/boot/decompressor/minilib.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/boot/decompressor/none.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/boot/decompressor/xz.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/bonito.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/cs5536.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/emu/pci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/pci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/ehci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/emu/usb.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/ohci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/serial/common.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/serial/ftdi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/serial/pl2303.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/uhci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/usb.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/usbhub.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/bus/usb/usbtrans.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/acpi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/acpihalt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/arc/lsdev.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/blocklist.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/boot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/cacheinfo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/cat.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/cmp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/configfile.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/date.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/echo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/efi/acpi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/efi/fixvideo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/efi/loadbios.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/efi/lsefimmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/efi/lsefisystab.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/efi/lssal.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/extcmd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/gptsync.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/halt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/hashsum.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/hdparm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/help.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/hexdump.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/cmostest.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/cpuid.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/pc/acpi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/pc/drivemap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/pc/halt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/pc/lsapm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/pc/play.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/i386/pc/sendkey.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/ieee1275/suspend.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/iorw.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/keylayouts.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/keystatus.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/legacycfg.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/loadenv.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/lsacpi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/ls.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/lsmmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/lspci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/memrw.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/menuentry.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/minicmd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/mips/loongson/lsspd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/parttool.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/password.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/password_pbkdf2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/probe.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/read.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/regexp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/search.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/search_file.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/search_label.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/search_uuid.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/search_wrap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/setpci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/sleep.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/terminal.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/test.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/testload.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/time.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/true.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/usbtest.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/videoinfo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/videotest.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/wildcard.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/commands/xnu_uuid.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/AFSplitter.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/ahci.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/arc/arcdisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/ata.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/cryptodisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/diskfilter.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/dmraid_nvidia.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/efi/efidisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/geli.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/host.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/i386/pc/biosdisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/ieee1275/nand.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/ieee1275/ofdisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/ldm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/loopback.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/luks.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/lvm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/mdraid1x_linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/mdraid_linux_be.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/mdraid_linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/memdisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/pata.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/raid5_recover.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/raid6_recover.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/scsi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/disk/usbms.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/i386/coredetect.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/i386/loadcore32.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/i386/loadcore64.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/i386/nocfgtables.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/i386/pc/cfgtables.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/loadcore32.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/loadcore64.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/loadcore.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/loadcore_common.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/main.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/mm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/pnvram.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/prepare32.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/prepare64.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/prepare.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/runtime/config.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/runtime/efiemu.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/efiemu/symbols.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/font/font.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/font/font_cmd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/affs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/afs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/bfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/btrfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/cpio_be.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/cpio.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/exfat.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/ext2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/fat.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/fshelp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/hfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/hfsplus.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/iso9660.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/jfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/minix2_be.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/minix2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/minix3_be.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/minix3.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/minix_be.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/minix.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/newc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/nilfs2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/ntfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/ntfscomp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/odc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/reiserfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/romfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/sfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/squash4.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/tar.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/udf.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/ufs2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/ufs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/xfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/zfs/zfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/zfs/zfscrypt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/zfs/zfs_fletcher.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/zfs/zfsinfo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/zfs/zfs_lzjb.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/fs/zfs/zfs_sha256.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gdb/cstub.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gdb/gdb.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gdb/i386/idt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gdb/i386/signal.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gentrigtables.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gettext/gettext.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/font.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gfxmenu.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_box.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_canvas.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_circular_progress.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_image.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_label.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_list.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_progress_bar.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_string_util.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/gui_util.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/icon_manager.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/model.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/theme_loader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/view.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gfxmenu/widget-box.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/alloca.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/alloca.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-ba.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-eexst.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-fmtstream.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-fmtstream.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-fs-xinl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-help.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-namefrob.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-parse.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-pin.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-pv.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-pvh.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/argp-xinl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/asnprintf.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/basename-lgpl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/btowc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/dirname.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/dirname-lgpl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/errno.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/error.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/error.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/float+.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/float.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/fnmatch.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/fnmatch.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/fnmatch_loop.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/getdelim.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/getline.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/getopt1.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/getopt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/getopt.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/getopt_int.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/gettext.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/intprops.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/langinfo.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/localcharset.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/localcharset.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/malloc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/mbrtowc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/mbsinit.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/mbsrtowcs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/mbsrtowcs-state.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/memchr.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/mempcpy.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/nl_langinfo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/printf-args.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/printf-args.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/printf-parse.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/printf-parse.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/progname.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/progname.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/rawmemchr.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/realloc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/regcomp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/regex.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/regexec.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/regex.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/regex_internal.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/regex_internal.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/size_max.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/sleep.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stdbool.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stddef.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stdint.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stdio.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stdio-write.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stdlib.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strcasecmp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strchrnul.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/streq.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strerror.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/string.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strings.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/stripslash.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strncasecmp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strndup.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strnlen1.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strnlen1.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/strnlen.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/sysexits.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/sys_wait.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/unistd.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/vasnprintf.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/vasnprintf.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/verify.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/vsnprintf.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/wchar.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/wcrtomb.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/wctype.in.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/gnulib/xsize.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/hello/hello.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/hook/datehook.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/io/bufio.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/io/gzio.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/io/lzopio.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/io/xzio.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/command.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/corecmd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/device.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/disk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/efi/efi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/efi/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/efi/mm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/elf.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/argp_common.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/cache.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/full.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/hostdisk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/hostfs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/lite.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/main.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/misc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/mm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/emu/time.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/env.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/err.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/file.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/fs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/generic/millisleep.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/generic/rtc_get_time_ms.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/coreboot/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/coreboot/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/efi/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/multiboot_mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/pc/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/pc/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/pit.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/qemu/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/i386/tsc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ia64/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ia64/dl_helper.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ia64/efi/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ieee1275/cmain.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ieee1275/ieee1275.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ieee1275/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ieee1275/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/ieee1275/openfw.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/list.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/main.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/mips/arc/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/mips/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/mips/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/mips/loongson/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/mips/qemu_mips/init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/misc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/mm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/parser.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/partition.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/powerpc/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/rescue_parser.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/rescue_reader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/sparc64/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/sparc64/ieee1275/ieee1275.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/term.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/time.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/vga_init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/kern/x86_64/dl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/adler32.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/arc/datetime.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/arg.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/backtrace.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/cmdline.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/cmos_datetime.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/crc64.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/crc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/crypto.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/efi/datetime.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/efi/halt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/efi/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/efi/relocator.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/emu/halt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/envblk.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/fake_module.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/hexdump.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/i386/backtrace.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/i386/halt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/i386/pc/biosnum.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/i386/pc/vesa_modes_table.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/i386/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/i386/relocator.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/ieee1275/cmos.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/ieee1275/datetime.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/ieee1275/halt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/ieee1275/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/ieee1275/relocator.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/legacy_parse.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/ac.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/arcfour.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/bithelp.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/blowfish.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/camellia.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/camellia-glue.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/camellia.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/cast5.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/cipher.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/crc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/des.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/dsa.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/ecc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/elgamal.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/hash-common.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/hash-common.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/hmac-tests.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/md4.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/md5.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/md.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/primegen.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/pubkey.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/rfc2268.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/rijndael.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/rijndael-tables.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/rmd160.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/rmd.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/rsa.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/seed.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/serpent.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/sha1.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/sha256.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/sha512.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/tiger.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/twofish.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt/cipher/whirlpool.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/libgcrypt_wrap/cipher_wrap.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/LzFind.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/LzmaDec.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/LzmaEnc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/minilzo/lzoconf.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/minilzo/lzodefs.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/minilzo/minilzo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/minilzo/minilzo.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/mips/arc/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/mips/loongson/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/mips/qemu_mips/reboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/mips/relocator.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/pbkdf2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/assert.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/ctype.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/errno.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/inttypes.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/langinfo.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/limits.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/localcharset.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/locale.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/stdint.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/stdio.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/stdlib.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/string.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/sys/types.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/unistd.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/wchar.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/posix_wrap/wctype.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/powerpc/relocator.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/priority_queue.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/reed_solomon.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/relocator.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_config.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_dec_bcj.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_dec_lzma2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_dec_stream.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_lzma2.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_private.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/lib/xzembed/xz_stream.h \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/aout.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/efi/appleloader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/efi/chainloader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/bsd32.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/bsd64.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/bsd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/bsd_pagetable.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/bsdXX.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/coreboot/chainloader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/multiboot_mbi.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/pc/chainloader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/pc/freedos.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/pc/linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/pc/ntldr.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/pc/plan9.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/pc/pxechainloader.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/i386/xnu.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/ia64/efi/linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/lzss.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/macho32.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/macho64.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/macho.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/machoXX.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/mips/linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/multiboot.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/multiboot_elfxx.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/multiboot_mbi2.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/powerpc/ieee1275/linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/sparc64/ieee1275/linux.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/xnu.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/loader/xnu_resume.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/mmap/efi/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/mmap/i386/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/mmap/i386/pc/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/mmap/i386/uppermem.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/mmap/mips/uppermem.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/mmap/mmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/arp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/bootp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/dns.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/drivers/efi/efinet.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/drivers/emu/emunet.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/drivers/i386/pc/pxe.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/drivers/ieee1275/ofnet.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/ethernet.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/http.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/icmp6.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/icmp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/ip.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/netbuff.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/net.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/tcp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/tftp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/net/udp.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/auth.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/autofs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/charset.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/cmdline.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/color.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/completion.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/context.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/crypto.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/datetime.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/dyncmd.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/main.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/menu.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/menu_entry.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/menu_text.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/misc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/normal/term.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/acorn.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/amiga.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/apple.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/bsdlabel.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/dvh.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/gpt.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/msdos.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/plan.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/sun.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/partmap/sunpc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/parttool/msdospart.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/script/argv.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/script/execute.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/script/function.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/script/lexer.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/script/main.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/script/script.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/arc/console.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/at_keyboard.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/efi/console.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/efi/serial.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/emu/console.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/gfxterm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/i386/pc/console.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/i386/pc/vga_text.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/i386/vga_common.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/ieee1275/console.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/ieee1275/escc.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/ieee1275/serial.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/ns8250.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/serial.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/terminfo.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/tparm.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/term/usb_keyboard.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/tests/example_functional_test.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/tests/lib/functional_test.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/tests/lib/test.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/tests/test_blockarg.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/bitmap.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/bitmap_scale.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/bochs.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/cirrus.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/colors.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/efi_gop.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/efi_uga.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/emu/sdl.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/fb/fbblit.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/fb/fbfill.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/fb/fbutil.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/fb/video_fb.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/i386/pc/vbe.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/i386/pc/vga.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/ieee1275.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/radeon_fuloong2e.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/readers/jpeg.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/readers/png.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/readers/tga.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/sis315_init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/sis315pro.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/sm712.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/sm712_init.c \
     /home/neo/development/uefi/bits/build/grub/./grub-core/video/video.c \
     /home/neo/development/uefi/bits/build/grub/./include/grub/acorn_filecore.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/acpi.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/aout.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/arc/arc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/arc/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ata.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/at_keyboard.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/auth.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/autoefi.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/backtrace.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/bitmap.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/bitmap_scale.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/bsdlabel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/bufio.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/cache.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/charset.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/cmos.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/command.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/cryptodisk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/crypto.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/cs5536.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/datetime.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/decompressor.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/deflate.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/device.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/diskfilter.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/disk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/dl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/api.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/console_control.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/disk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/edid.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/efi.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efiemu/efiemu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efiemu/runtime.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/graphics_output.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/pci.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/pe32.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/efi/uga_draw.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/elf.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/elfload.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/emu/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/emu/export.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/emu/getroot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/emu/hostdisk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/emu/misc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/env.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/env_private.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/err.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/extcmd.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fat.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fbblit.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fbfill.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fbutil.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/file.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fontformat.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/font.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fs.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/fshelp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gdb.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gfxmenu_model.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gfxmenu_view.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gfxterm.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gfxwidgets.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gpt_partition.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gui.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/gui_string_util.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/hfs.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i18n.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/at_keyboard.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/bsd.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/cmos.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/coreboot/boot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/coreboot/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/coreboot/lbio.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/coreboot/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/coreboot/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/coreboot/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/cpuid.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/efiemu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/efi/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/efi/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/floppy.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/freebsd_linker.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/freebsd_reboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/gdb.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/ieee1275/ieee1275.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/ieee1275/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/ieee1275/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/io.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/linux.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/macho.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot/boot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/multiboot/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/netbsd_bootinfo.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/netbsd_reboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/openbsd_bootarg.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/openbsd_reboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/apm.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/biosdisk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/biosnum.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/boot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/chainloader.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pci.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/int.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/pxe.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/vbe.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pc/vesa_modes_table.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/pit.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/qemu/boot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/qemu/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/qemu/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/qemu/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/qemu/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/qemu/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/reboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/relocator.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/relocator_private.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/tsc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/vga_common.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/i386/xnu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ia64/efi/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ia64/efi/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ia64/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ia64/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ia64/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ia64/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/icon_manager.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ieee1275/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ieee1275/ieee1275.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ieee1275/ofdisk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/keyboard_layouts.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/legacy_parse.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/arg.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/cmdline.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/crc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/envblk.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/libgcc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/hexdump.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/LzFind.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/LzHash.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/LzmaDec.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/LzmaEnc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lib/LzmaTypes.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/libpciaccess.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/libusb.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/list.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/loader.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/lvm.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/macho.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/machoload.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/menu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/menu_viewer.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/arc/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/arc/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/arc/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/at_keyboard.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/cache.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/cmos.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/io.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/at_keyboard.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/cmos.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/ec.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/pci.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/loongson/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/mips.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/multiboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/pci.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/at_keyboard.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/cmos.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/console.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/loader.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/qemu_mips/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/relocator.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mips/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/misc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mm.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/mm_private.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/msdos_partition.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/multiboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/multiboot_loader.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net/arp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net/ethernet.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net/ip.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net/netbuff.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net/tcp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/net/udp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/normal.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ns8250.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/ntfs.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/offsets.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/parser.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/partition.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/parttool.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/pci.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/pciutils.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/ieee1275/ieee1275.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/relocator.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/powerpc/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/priority_queue.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/reader.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/reed_solomon.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/relocator.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/relocator_private.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/script_sh.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/scsicmd.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/scsi.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sdl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/search.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/smbus.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sparc64/ieee1275/boot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sparc64/ieee1275/ieee1275.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sparc64/ieee1275/kernel.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sparc64/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sparc64/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/sparc64/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/symbol.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/term.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/terminfo.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/test.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/tparm.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/trig.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/unicode.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/usbdesc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/usb.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/usbserial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/usbtrans.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/util/libnvpair.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/util/libzfs.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/util/lvm.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/util/misc.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/util/ofpath.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/util/resolve.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/vga.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/video_fb.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/video.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/at_keyboard.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/efi/boot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/efi/loader.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/efi/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/efi/serial.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/io.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/linux.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/macho.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/memory.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/multiboot.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/pci.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/relocator.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/setjmp.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/time.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/types.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/x86_64/xnu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/xnu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/dmu.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/dmu_objset.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/dnode.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/dsl_dataset.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/dsl_dir.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/sa_impl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/spa.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/uberblock_impl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/vdev_impl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zap_impl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zap_leaf.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zfs_acl.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zfs.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zfs_znode.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zil.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zio_checksum.h \
     /home/neo/development/uefi/bits/build/grub/./include/grub/zfs/zio.h \
     /home/neo/development/uefi/bits/build/grub/./include/multiboot2.h \
     /home/neo/development/uefi/bits/build/grub/./include/multiboot.h \
     /home/neo/development/uefi/bits/build/grub/./tests/cmp_unit_test.c \
     /home/neo/development/uefi/bits/build/grub/./tests/example_unit_test.c \
     /home/neo/development/uefi/bits/build/grub/./tests/lib/unit_test.c \
     /home/neo/development/uefi/bits/build/grub/./tests/printf_unit_test.c \
     /home/neo/development/uefi/bits/build/grub/./util/bin2h.c \
     /home/neo/development/uefi/bits/build/grub/./util/getroot.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-editenv.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-fstest.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-macho2img.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-menulst2cfg.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mkfont.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mkimage.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mkimagexx.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mklayout.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mkpasswd-pbkdf2.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mkrelpath.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-mount.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-pe2elf.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-probe.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-script-check.c \
     /home/neo/development/uefi/bits/build/grub/./util/grub-setup.c \
     /home/neo/development/uefi/bits/build/grub/./util/ieee1275/grub-ofpathname.c \
     /home/neo/development/uefi/bits/build/grub/./util/ieee1275/ofpath.c \
     /home/neo/development/uefi/bits/build/grub/./util/lvm.c \
     /home/neo/development/uefi/bits/build/grub/./util/misc.c \
     /home/neo/development/uefi/bits/build/grub/./util/raid.c \
     /home/neo/development/uefi/bits/build/grub/./util/resolve.c

CATALOGS = 

# Makevars gets inserted here. (Don't remove this line!)
# Makefile variables for PO directory in any package using GNU gettext.

# Usually the message domain is the same as the package name.
DOMAIN = $(PACKAGE)

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

# These options get passed to xgettext.
XGETTEXT_OPTIONS = --keyword=_ --keyword=N_

# This is the copyright holder that gets inserted into the header of the
# $(DOMAIN).pot file.  Set this to the copyright holder of the surrounding
# package.  (Note that the msgstr strings, extracted from the package's
# sources, belong to the copyright holder of the package.)  Translators are
# expected to transfer the copyright for their translations to this person
# or entity, or to disclaim their copyright.  The empty string stands for
# the public domain; in this case the translators are expected to disclaim
# their copyright.
COPYRIGHT_HOLDER = Free Software Foundation, Inc.

# This is the email address or URL to which the translators shall report
# bugs in the untranslated strings:
# - Strings which are not entire sentences, see the maintainer guidelines
#   in the GNU gettext documentation, section 'Preparing Strings'.
# - Strings which use unclear terms or require additional context to be
#   understood.
# - Strings which make invalid assumptions about notation of date, time or
#   money.
# - Pluralisation problems.
# - Incorrect English spelling.
# - Incorrect formatting.
# It can be your email address, or a mailing list address where translators
# can write to without being subscribed, or the URL of a web page through
# which the translators can contact you.
MSGID_BUGS_ADDRESS = bug-grub@gnu.org

# This is the list of locale categories, beyond LC_MESSAGES, for which the
# message catalogs shall be used.  It is usually empty.
EXTRA_LOCALE_CATEGORIES =

.SUFFIXES:
.SUFFIXES: .po .gmo .mo .sed .sin .nop .po-create .po-update

.po.mo:
	@echo "$(MSGFMT) -c -o $@ $<"; \
	$(MSGFMT) --endianness=little -c -o t-$@ $< && mv t-$@ $@

.po.gmo:
	@lang=`echo $* | sed -e 's,.*/,,'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}rm -f $${lang}.gmo && $(GMSGFMT) --endianness=little -c --statistics --verbose -o $${lang}.gmo $${lang}.po"; \
	cd $(srcdir) && rm -f $${lang}.gmo && $(GMSGFMT) --endianness=little -c --statistics --verbose -o t-$${lang}.gmo $${lang}.po && mv t-$${lang}.gmo $${lang}.gmo

.sin.sed:
	sed -e '/^#/d' $< > t-$@
	mv t-$@ $@


all: check-macro-version all-no

all-yes: stamp-po
all-no:

# Ensure that the gettext macros and this Makefile.in.in are in sync.
check-macro-version:
	@test "$(GETTEXT_MACRO_VERSION)" = "0.18" \
	  || { echo "*** error: gettext infrastructure mismatch: using a Makefile.in.in from gettext version $(GETTEXT_MACRO_VERSION) but the autoconf macros are from gettext version 0.18" 1>&2; \
	       exit 1; \
	     }

# $(srcdir)/$(DOMAIN).pot is only created when needed. When xgettext finds no
# internationalized messages, no $(srcdir)/$(DOMAIN).pot is created (because
# we don't want to bother translators with empty POT files). We assume that
# LINGUAS is empty in this case, i.e. $(POFILES) and $(GMOFILES) are empty.
# In this case, stamp-po is a nop (i.e. a phony target).

# stamp-po is a timestamp denoting the last time at which the CATALOGS have
# been loosely updated. Its purpose is that when a developer or translator
# checks out the package via CVS, and the $(DOMAIN).pot file is not in CVS,
# "make" will update the $(DOMAIN).pot and the $(CATALOGS), but subsequent
# invocations of "make" will do nothing. This timestamp would not be necessary
# if updating the $(CATALOGS) would always touch them; however, the rule for
# $(POFILES) has been designed to not touch files that don't need to be
# changed.
stamp-po: $(srcdir)/$(DOMAIN).pot
	test ! -f $(srcdir)/$(DOMAIN).pot || \
	  test -z "$(GMOFILES)" || $(MAKE) $(GMOFILES)
	@test ! -f $(srcdir)/$(DOMAIN).pot || { \
	  echo "touch stamp-po" && \
	  echo timestamp > stamp-poT && \
	  mv stamp-poT stamp-po; \
	}

# Note: Target 'all' must not depend on target '$(DOMAIN).pot-update',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

# This target rebuilds $(DOMAIN).pot; it is an expensive operation.
# Note that $(DOMAIN).pot is not touched if it doesn't need to be changed.
$(DOMAIN).pot-update: $(POTFILES) $(srcdir)/POTFILES.in $(srcdir)/POTFILES-shell.in remove-potcdate.sed
	if LC_ALL=C grep 'GNU grub' $(top_srcdir)/* 2>/dev/null | grep -v 'libtool:' >/dev/null; then \
	  package_gnu='GNU '; \
	else \
	  package_gnu=''; \
	fi; \
	if test -n '$(MSGID_BUGS_ADDRESS)' || test '$(PACKAGE_BUGREPORT)' = '@'PACKAGE_BUGREPORT'@'; then \
	  msgid_bugs_address='$(MSGID_BUGS_ADDRESS)'; \
	else \
	  msgid_bugs_address='$(PACKAGE_BUGREPORT)'; \
	fi; \
	case `$(XGETTEXT) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	  '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].* | 0.16 | 0.16.[0-1]*) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  --flag=argp_error:2:c-format --flag=argp_failure:4:c-format --flag=error:3:c-format --flag=error_at_line:5:c-format \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	  *) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  --flag=argp_error:2:c-format --flag=argp_failure:4:c-format --flag=error:3:c-format --flag=error_at_line:5:c-format \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --package-name="$${package_gnu}grub" \
	      --package-version='2.00' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	esac; \
	case `$(XGETTEXT) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	  '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].* | 0.16 | 0.16.[0-1]*) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS:  --flag=argp_error:2:c-format --flag=argp_failure:4:c-format --flag=error:3:c-format --flag=error_at_line:5:c-format \
	      --files-from=$(srcdir)/POTFILES-shell.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	      --join-existing --language=Shell \
	      --keyword=gettext_quoted --keyword=gettext_printf \
	    ;; \
	  *) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS:  --flag=argp_error:2:c-format --flag=argp_failure:4:c-format --flag=error:3:c-format --flag=error_at_line:5:c-format \
	      --files-from=$(srcdir)/POTFILES-shell.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --package-name="$${package_gnu}grub" \
	      --package-version='2.00' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	      --join-existing --language=Shell \
	      --keyword=gettext_quoted --keyword=gettext_printf \
	    ;; \
	esac ; \
	test ! -f $(DOMAIN).po || { \
	  sed -f grub.d.sed < $(DOMAIN).po > $(DOMAIN).1po && \
	  mv $(DOMAIN).1po $(DOMAIN).po; \
	  if test -f $(srcdir)/$(DOMAIN).pot; then \
	    sed -f remove-potcdate.sed < $(srcdir)/$(DOMAIN).pot > $(DOMAIN).1po && \
	    sed -f remove-potcdate.sed < $(DOMAIN).po > $(DOMAIN).2po && \
	    if cmp $(DOMAIN).1po $(DOMAIN).2po >/dev/null 2>&1; then \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(DOMAIN).po; \
	    else \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(srcdir)/$(DOMAIN).pot && \
	      mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	    fi; \
	  else \
	    mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	  fi; \
	}

# This rule has no dependencies: we don't need to update $(DOMAIN).pot at
# every "make" invocation, only create it when it is missing.
# Only "make $(DOMAIN).pot-update" or "make dist" will force an update.
$(srcdir)/$(DOMAIN).pot:
	$(MAKE) $(DOMAIN).pot-update

# This target rebuilds a PO file if $(DOMAIN).pot has changed.
# Note that a PO file is not touched if it doesn't need to be changed.
$(POFILES): $(srcdir)/$(DOMAIN).pot
	@lang=`echo $@ | sed -e 's,.*/,,' -e 's/\.po$$//'`; \
	if test -f "$(srcdir)/$${lang}.po"; then \
	  test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	  echo "$${cdcmd}$(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot"; \
	  cd $(srcdir) \
	    && { case `$(MSGMERGE_UPDATE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	           '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) $${lang}.po $(DOMAIN).pot;; \
	           *) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot;; \
	         esac; \
	       }; \
	else \
	  $(MAKE) $${lang}.po-create; \
	fi


install: install-exec install-data
install-exec:
install-data: install-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    $(INSTALL_DATA) $(srcdir)/$$file \
			    $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
install-data-no: all
install-data-yes: all
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  if test -r $$cat; then realcat=$$cat; else realcat=$(srcdir)/$$cat; fi; \
	  $(INSTALL_DATA) $$realcat $(DESTDIR)$$dir/$(DOMAIN).mo; \
	  echo "installing $$realcat as $(DESTDIR)$$dir/$(DOMAIN).mo"; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	      rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      ln -s ../LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      ln $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      cp -p $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      echo "installing $$realcat link as $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo"; \
	    fi; \
	  done; \
	done

install-strip: install

installdirs: installdirs-exec installdirs-data
installdirs-exec:
installdirs-data: installdirs-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	else \
	  : ; \
	fi
installdirs-data-no:
installdirs-data-yes:
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	    fi; \
	  done; \
	done

# Define this as empty until I found a useful application.
installcheck:

uninstall: uninstall-exec uninstall-data
uninstall-exec:
uninstall-data: uninstall-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
uninstall-data-no:
uninstall-data-yes:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  for lc in LC_MESSAGES $(EXTRA_LOCALE_CATEGORIES); do \
	    rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	  done; \
	done

check: all

info dvi ps pdf html tags TAGS ctags CTAGS ID:

mostlyclean:
	rm -f remove-potcdate.sed
	rm -f stamp-poT
	rm -f core core.* $(DOMAIN).po $(DOMAIN).1po $(DOMAIN).2po *.new.po
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f stamp-po $(GMOFILES)

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir:
	$(MAKE) update-po
	@$(MAKE) dist2
# This is a separate target because 'update-po' must be executed before.
dist2: stamp-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  dists="$$dists Makevars.template"; \
	fi; \
	if test -f $(srcdir)/$(DOMAIN).pot; then \
	  dists="$$dists $(DOMAIN).pot stamp-po"; \
	fi; \
	if test -f $(srcdir)/ChangeLog; then \
	  dists="$$dists ChangeLog"; \
	fi; \
	for i in 0 1 2 3 4 5 6 7 8 9; do \
	  if test -f $(srcdir)/ChangeLog.$$i; then \
	    dists="$$dists ChangeLog.$$i"; \
	  fi; \
	done; \
	if test -f $(srcdir)/LINGUAS; then dists="$$dists LINGUAS"; fi; \
	for file in $$dists; do \
	  if test -f $$file; then \
	    cp -p $$file $(distdir) || exit 1; \
	  else \
	    cp -p $(srcdir)/$$file $(distdir) || exit 1; \
	  fi; \
	done

update-po: Makefile
	$(MAKE) $(DOMAIN).pot-update
	test -z "$(UPDATEPOFILES)" || $(MAKE) $(UPDATEPOFILES)
	$(MAKE) update-gmo

# General rule for creating PO files.

.nop.po-create:
	@lang=`echo $@ | sed -e 's/\.po-create$$//'`; \
	echo "File $$lang.po does not exist. If you are a translator, you can create it through 'msginit'." 1>&2; \
	exit 1

# General rule for updating PO files.

.nop.po-update:
	@lang=`echo $@ | sed -e 's/\.po-update$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang $$lang.po $(DOMAIN).pot -o $$lang.new.po"; \
	cd $(srcdir); \
	if { case `$(MSGMERGE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	       '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	       *) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	     esac; \
	   }; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "msgmerge for $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

$(DUMMYPOFILES):

update-gmo: Makefile $(GMOFILES)
	@:

# Recreate Makefile by invoking config.status. Explicitly invoke the shell,
# because execution permission bits may not work on the current file system.
# Use /bin/bash, which is the shell determined by autoconf for the use by its
# scripts, not $(SHELL) which is hardwired to /bin/sh and may be deficient.
Makefile: Makefile.in.in Makevars $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && /bin/bash ./config.status $(subdir)/$@.in po-directories

force:

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
# Special Makefile rules for Pig Latin message catalogs with quotation marks.

DISTFILES.common.extra3 = piglatin.sed en@piglatin.header insert-header.sin Rules-piglatin

.SUFFIXES: .insert-header .po-update-en-piglatin

en@piglatin.po-create:
	$(MAKE) en@piglatin.po-update

en@piglatin.po-update: en@piglatin.po-update-en

.insert-header.po-update-en-piglatin:
	@lang=`echo $@ | sed -e 's/\.po-update-en-piglatin$$//'`; \
	if test "$(PACKAGE)" = "gettext"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null | sed -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | $(MSGFILTER) sed -f `echo $$lang | sed -e 's/.*@//'`.sed 2>/dev/null > $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@piglatin.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@piglatin.header/g' $(srcdir)/insert-header.sin > en@piglatin.insert-header

mostlyclean: mostlyclean-piglatin
mostlyclean-piglatin:
	rm -f *.insert-header
# Special Makefile rules for English message catalogs with quotation marks.

DISTFILES.common.extra1 = quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot

.SUFFIXES: .insert-header .po-update-en

en@quot.po-create:
	$(MAKE) en@quot.po-update
en@boldquot.po-create:
	$(MAKE) en@boldquot.po-update

en@quot.po-update: en@quot.po-update-en
en@boldquot.po-update: en@boldquot.po-update-en

.insert-header.po-update-en:
	@lang=`echo $@ | sed -e 's/\.po-update-en$$//'`; \
	if test "$(PACKAGE)" = "gettext"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null | sed -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | $(MSGFILTER) sed -f `echo $$lang | sed -e 's/.*@//'`.sed 2>/dev/null > $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@quot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@quot.header/g' $(srcdir)/insert-header.sin > en@quot.insert-header

en@boldquot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@boldquot.header/g' $(srcdir)/insert-header.sin > en@boldquot.insert-header

mostlyclean: mostlyclean-quot
mostlyclean-quot:
	rm -f *.insert-header
# Special Makefile rules for transforming German typography into Swiss one.

DISTFILES.common.extra2 = swiss.sed Rules-swiss

de_CH.po-create: de.po swiss.sed
	LC_ALL=C.UTF-8 $(MSGFILTER) -i $< -o $(srcdir)/de_CH.po sed -f $(srcdir)/swiss.sed

DISTFILES.common.extra4 = hebrew.sed cyrillic.sed greek.sed arabic.sed Rules-translit

de@hebrew.po-create: de.po hebrew.sed
	LC_ALL=C.UTF-8 $(MSGFILTER) -i $< -o $(srcdir)/de@hebrew.po sed -f $(srcdir)/hebrew.sed

en@hebrew.po-create: $(DOMAIN).pot hebrew.sed
	LC_ALL=C.UTF-8 $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@hebrew -o - 2>/dev/null | LC_ALL=C.UTF-8 $(MSGCONV) -t UTF-8 | LC_ALL=C.UTF-8 $(MSGFILTER) -o $(srcdir)/en@hebrew.po -i - sed -f $(srcdir)/hebrew.sed

en@cyrillic.po-create: $(DOMAIN).pot cyrillic.sed
	LC_ALL=C.UTF-8 $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@cyrillic -o - 2>/dev/null | LC_ALL=C.UTF-8 $(MSGCONV) -t UTF-8 | LC_ALL=C.UTF-8 $(MSGFILTER) -o $(srcdir)/en@cyrillic.po -i - sed -f $(srcdir)/cyrillic.sed

en@greek.po-create: $(DOMAIN).pot greek.sed
	LC_ALL=C.UTF-8 $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@greek -o - 2>/dev/null | LC_ALL=C.UTF-8 $(MSGCONV) -t UTF-8 | LC_ALL=C.UTF-8 $(MSGFILTER) -o $(srcdir)/en@greek.po -i - sed -f $(srcdir)/greek.sed

en@arabic.po-create: $(DOMAIN).pot arabic.sed
	LC_ALL=C.UTF-8 $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@arabic -o - 2>/dev/null | LC_ALL=C.UTF-8 $(MSGCONV) -t UTF-8 | LC_ALL=C.UTF-8 $(MSGFILTER) -o $(srcdir)/en@arabic.po -i - sed -f $(srcdir)/arabic.sed
