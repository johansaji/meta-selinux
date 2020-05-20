#SRC_URI = "git://github.com/TresysTechnology/refpolicy.git;protocol=git;branch=master;name=refpolicy;destsuffix=refpolicy"
SRC_URI += "git://github.com/TresysTechnology/refpolicy-contrib.git;protocol=git;branch=master;name=refpolicy-contrib;destsuffix=refpolicy/policy/modules/contrib"
SRC_URI = "git://github.com/SELinuxProject/refpolicy.git;protocol=git;branch=master;name=refpolicy;destsuffix=refpolicy"

#SRCREV_refpolicy = "${AUTOREV}"
SRCREV_refpolicy-contrib = "${AUTOREV}"
SRCREV_FORMAT = "refpolicy.refpolicy-contrib"

SRCREV_refpolicy ?= "df696a325404b84c2c931c85356510005e5e6916"

FILESEXTRAPATHS_prepend := "${THISDIR}/refpolicy-git:"

SRC_URI += " file://0001-fc-subs-volatile-alias-common-var-volatile-paths.patch \
    file://0002-fc-subs-busybox-set-aliases-for-bin-sbin-and-usr.patch \
    file://0003-fc-sysklogd-apply-policy-to-sysklogd-symlink.patch \
    file://0004-fc-hostname-apply-policy-to-common-yocto-hostname-al.patch \
    file://0005-fc-bash-apply-usr-bin-bash-context-to-bin-bash.bash.patch \
    file://0006-fc-resolv.conf-label-resolv.conf-in-var-run-properly.patch \
    file://0007-fc-login-apply-login-context-to-login.shadow.patch \
    file://0008-fc-bind-fix-real-path-for-bind.patch \
    file://0009-fc-hwclock-add-hwclock-alternatives.patch \
    file://0010-fc-dmesg-apply-policy-to-dmesg-alternatives.patch \
    file://0011-fc-ssh-apply-policy-to-ssh-alternatives.patch \
    file://0012-fc-sysnetwork-apply-policy-to-ip-alternatives.patch \
    file://0013-fc-udev-apply-policy-to-udevadm-in-libexec.patch \
    file://0014-fc-rpm-apply-rpm_exec-policy-to-cpio-binaries.patch \
    file://0015-fc-su-apply-policy-to-su-alternatives.patch \
    file://0016-fc-fstools-fix-real-path-for-fstools.patch \
    file://0017-policy-module-logging-Add-the-syslogd_t-to-trusted-o.patch \
    file://0018-policy-module-logging-add-rules-for-the-symlink-of-v.patch \
    file://0019-policy-module-logging-add-rules-for-syslogd-symlink-.patch \
    file://0020-policy-module-logging-add-domain-rules-for-the-subdi.patch \
    file://0021-policy-module-files-add-rules-for-the-symlink-of-tmp.patch \
    file://0022-policy-module-terminals-add-rules-for-bsdpty_device_.patch \
    file://0023-policy-module-terminals-don-t-audit-tty_device_t-in-.patch \
    file://0024-policy-module-rpc-allow-nfsd-to-exec-shell-commands.patch \
    file://0025-policy-module-rpc-fix-policy-for-nfsserver-to-mount-.patch \
    file://0026-policy-module-sysfs-fix-for-new-SELINUXMNT-in-sys.patch \
    file://0027-policy-module-rpc-allow-sysadm-to-run-rpcinfo.patch \
    file://0028-policy-module-userdomain-fix-selinux-utils-to-manage.patch \
    file://0029-policy-module-selinuxutil-fix-setfiles-statvfs-to-ge.patch \
    file://0030-policy-module-admin-fix-dmesg-to-use-dev-kmsg-as-def.patch \
    file://0031-policy-module-ftp-add-ftpd_t-to-mls_file_write_all_l.patch \
    file://0032-policy-module-init-update-for-systemd-related-allow-.patch \
    file://0033-refpolicy-minimum-make-sysadmin-module-optional.patch \
    file://0034-policy-module-apache-add-rules-for-the-symlink-of-va.patch \
"

include refpolicy_common.inc
