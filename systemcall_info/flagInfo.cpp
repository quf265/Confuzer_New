#include "./../header_file/flagInfo.h"

FlagInfo::FlagInfo(/* args */) {} // 생성자 선언

FlagInfo::~FlagInfo() {} // 소멸자 선언

void FlagInfo::first_function()
{
    cout << "hello flagInfo class" << endl;
}

/*
void FlagInfo::get_flag()
{
    cout << "hihi" << endl;
}
*/

map<string, long> FlagInfo::get_flag(){
    cout << "[HELLO CHECK] map<string, long> FlagInfo::get_flag()" << endl;

    map<string, long> map_syscall_options;

    // system call에서 사용되는 모든 parameters의 options값 정의

    map_syscall_options["ARCH_GET_CPUID"] = ARCH_GET_CPUID;
    map_syscall_options["ARCH_GET_FS"] = ARCH_GET_FS;
    map_syscall_options["ARCH_GET_GS"] = ARCH_GET_GS;
    map_syscall_options["ARCH_SET_CPUID"] = ARCH_SET_CPUID;
    map_syscall_options["ARCH_SET_FS"] = ARCH_SET_FS;

    map_syscall_options["ARCH_SET_GS"] = ARCH_SET_GS;
    map_syscall_options["AT_EACCESS"] = AT_EACCESS;
    map_syscall_options["AT_EMPTY_PATH"] = AT_EMPTY_PATH;
    map_syscall_options["AT_FDCWD"] = AT_FDCWD;
    map_syscall_options["AT_NO_AUTOMOUNT"] = AT_NO_AUTOMOUNT;
// 10
    map_syscall_options["AT_REMOVEDIR"] = AT_REMOVEDIR;
    map_syscall_options["AT_STATX_DONT_SYNC"] = AT_STATX_DONT_SYNC;
    map_syscall_options["AT_STATX_FORCE_SYNC"] = AT_STATX_FORCE_SYNC;
    map_syscall_options["AT_STATX_SYNC_AS_STAT"] = AT_STATX_SYNC_AS_STAT;
    map_syscall_options["AT_SYMLINK_FOLLOW"] = AT_SYMLINK_FOLLOW;

    map_syscall_options["AT_SYMLINK_NOFOLLOW"] = AT_SYMLINK_NOFOLLOW;
    map_syscall_options["BPF_MAP_CREATE"] = BPF_MAP_CREATE;
    map_syscall_options["BPF_MAP_DELETE_ELEM"] = BPF_MAP_DELETE_ELEM;
    map_syscall_options["BPF_MAP_GET_NEXT_KEY"] = BPF_MAP_GET_NEXT_KEY;
    map_syscall_options["BPF_MAP_LOOKUP_ELEM"] = BPF_MAP_LOOKUP_ELEM;
// 20
    map_syscall_options["BPF_MAP_UPDATE_ELEM"] = BPF_MAP_UPDATE_ELEM;
    map_syscall_options["BPF_PROG_LOAD"] = BPF_PROG_LOAD;
    map_syscall_options["CLOCK_BOOTTIME"] = CLOCK_BOOTTIME;
    map_syscall_options["CLOCK_BOOTTIME_ALARM"] = CLOCK_BOOTTIME_ALARM;
    map_syscall_options["CLOCK_MONOTONIC"] = CLOCK_MONOTONIC;

    map_syscall_options["CLOCK_PROCESS_CPUTIME_ID"] = CLOCK_PROCESS_CPUTIME_ID;
    map_syscall_options["CLOCK_REALTIME"] = CLOCK_REALTIME;
    map_syscall_options["CLOCK_REALTIME_ALARM"] = CLOCK_REALTIME_ALARM;
    map_syscall_options["CLOCK_TAI"] = CLOCK_TAI;
    map_syscall_options["CLOCK_THREAD_CPUTIME_ID"] = CLOCK_THREAD_CPUTIME_ID;
// 30
    map_syscall_options["CLONE_CHILD_CLEARTID"] = CLONE_CHILD_CLEARTID;
    map_syscall_options["CLONE_CHILD_SETTID"] = CLONE_CHILD_SETTID;
    //map_syscall_options["CLONE_CLEAR_SIGHAND"] = CLONE_CLEAR_SIGHAND;
    map_syscall_options["CLONE_DETACHED"] = CLONE_DETACHED;
    map_syscall_options["CLONE_FILES"] = CLONE_FILES;

    map_syscall_options["CLONE_FS"] = CLONE_FS;
    //map_syscall_options["CLONE_INTO_CGROUP"] = CLONE_INTO_CGROUP;
    map_syscall_options["CLONE_IO"] = CLONE_IO;
    map_syscall_options["CLONE_NEWCGROUP"] = CLONE_NEWCGROUP;
    map_syscall_options["CLONE_NEWIPC"] = CLONE_NEWIPC;
// 40
    map_syscall_options["CLONE_NEWNET"] = CLONE_NEWNET;
    map_syscall_options["CLONE_NEWNS"] = CLONE_NEWNS;
    map_syscall_options["CLONE_NEWPID"] = CLONE_NEWPID;
    //map_syscall_options["CLONE_NEWTIME"] = CLONE_NEWTIME;
    map_syscall_options["CLONE_NEWUSER"] = CLONE_NEWUSER;

    map_syscall_options["CLONE_NEWUTS"] = CLONE_NEWUTS;
    map_syscall_options["CLONE_PARENT"] = CLONE_PARENT;
    map_syscall_options["CLONE_PARENT_SETTID"] = CLONE_PARENT_SETTID;
    //map_syscall_options["CLONE_PID"] = CLONE_PID; // The flag disappeared completely from the kernel sources in Linux 2.5.16.
    map_syscall_options["CLONE_PIDFD"] = CLONE_PIDFD;
// 50
    map_syscall_options["CLONE_PTRACE"] = CLONE_PTRACE;
    map_syscall_options["CLONE_SETTLS"] = CLONE_SETTLS;
    map_syscall_options["CLONE_SIGHAND"] = CLONE_SIGHAND;
    //map_syscall_options["CLONE_STOPPED"] = CLONE_STOPPED; // This flag was deprecated from Linux 2.6.25 onward, and was removed altogether in Linux 2.6.38. 
    map_syscall_options["CLONE_SYSVSEM"] = CLONE_SYSVSEM;

    map_syscall_options["CLONE_THREAD"] = CLONE_THREAD;
    map_syscall_options["CLONE_UNTRACED"] = CLONE_UNTRACED;
    map_syscall_options["CLONE_VFORK"] = CLONE_VFORK;
    map_syscall_options["CLONE_VM"] = CLONE_VM;
    //map_syscall_options["CLOSE_RANGE_CLOEXEC"] = CLOSE_RANGE_CLOEXEC;
// 60
    //map_syscall_options["CLOSE_RANGE_UNSHARE"] = CLOSE_RANGE_UNSHARE;
    map_syscall_options["EFD_CLOEXEC"] = EFD_CLOEXEC;
    map_syscall_options["EFD_NONBLOCK"] = EFD_NONBLOCK;
    map_syscall_options["EFD_SEMAPHORE"] = EFD_SEMAPHORE;
    map_syscall_options["EPOLL_CLOEXEC"] = EPOLL_CLOEXEC;

    map_syscall_options["EPOLL_CTL_ADD"] = EPOLL_CTL_ADD;
    map_syscall_options["EPOLL_CTL_DEL"] = EPOLL_CTL_DEL;
    map_syscall_options["EPOLL_CTL_MOD"] = EPOLL_CTL_MOD;
    map_syscall_options["F_OK"] = F_OK;
    map_syscall_options["FALLOC_FL_COLLAPSE_RANGE"] = FALLOC_FL_COLLAPSE_RANGE;
// 70
    map_syscall_options["FALLOC_FL_INSERT_RANGE"] = FALLOC_FL_INSERT_RANGE;
    map_syscall_options["FALLOC_FL_KEEP_SIZE"] = FALLOC_FL_KEEP_SIZE;
    map_syscall_options["FALLOC_FL_PUNCH_HOLE"] = FALLOC_FL_PUNCH_HOLE;
    map_syscall_options["FALLOC_FL_UNSHARE_RANGE"] = FALLOC_FL_UNSHARE_RANGE;
    map_syscall_options["FALLOC_FL_ZERO_RANGE"] = FALLOC_FL_ZERO_RANGE;

    map_syscall_options["FAN_ACCESS"] = FAN_ACCESS;
    map_syscall_options["FAN_ACCESS_PERM"] = FAN_ACCESS_PERM;
    map_syscall_options["FAN_ATTRIB"] = FAN_ATTRIB;
    map_syscall_options["FAN_CLASS_CONTENT"] = FAN_CLASS_CONTENT;
    map_syscall_options["FAN_CLASS_NOTIF"] = FAN_CLASS_NOTIF;
// 80
    map_syscall_options["FAN_CLASS_PRE_CONTENT"] = FAN_CLASS_PRE_CONTENT;
    map_syscall_options["FAN_CLOEXEC"] = FAN_CLOEXEC;
    map_syscall_options["FAN_CLOSE"] = FAN_CLOSE;
    map_syscall_options["FAN_CLOSE_NOWRITE"] = FAN_CLOSE_NOWRITE;
    map_syscall_options["FAN_CLOSE_WRITE"] = FAN_CLOSE_WRITE;

    map_syscall_options["FAN_CREATE"] = FAN_CREATE;
    map_syscall_options["FAN_DELETE"] = FAN_DELETE;
    map_syscall_options["FAN_DELETE_SELF"] = FAN_DELETE_SELF;
    map_syscall_options["FAN_ENABLE_AUDIT"] = FAN_ENABLE_AUDIT;
    map_syscall_options["FAN_EVENT_ON_CHILD"] = FAN_EVENT_ON_CHILD;
// 90
    //map_syscall_options["FAN_FS_ERROR"] = FAN_FS_ERROR;
    map_syscall_options["FAN_MARK_ADD"] = FAN_MARK_ADD;
    map_syscall_options["FAN_MARK_DONT_FOLLOW"] = FAN_MARK_DONT_FOLLOW;
    //map_syscall_options["FAN_MARK_EVICTABLE"] = FAN_MARK_EVICTABLE;
    map_syscall_options["FAN_MARK_FILESYSTEM"] = FAN_MARK_FILESYSTEM;

    map_syscall_options["FAN_MARK_FLUSH"] = FAN_MARK_FLUSH;
    //map_syscall_options["FAN_MARK_IGNORE"] = FAN_MARK_IGNORE;
    //map_syscall_options["FAN_MARK_IGNORE_SURV"] = FAN_MARK_IGNORE_SURV;
    map_syscall_options["FAN_MARK_IGNORED_MASK"] = FAN_MARK_IGNORED_MASK;
    map_syscall_options["FAN_MARK_IGNORED_SURV_MODIFY"] = FAN_MARK_IGNORED_SURV_MODIFY;
// 100
    map_syscall_options["FAN_MARK_MOUNT"] = FAN_MARK_MOUNT;
    map_syscall_options["FAN_MARK_ONLYDIR"] = FAN_MARK_ONLYDIR;
    map_syscall_options["FAN_MARK_REMOVE"] = FAN_MARK_REMOVE;
    map_syscall_options["FAN_MODIFY"] = FAN_MODIFY;
    map_syscall_options["FAN_MOVE"] = FAN_MOVE;

    map_syscall_options["FAN_MOVE_SELF"] = FAN_MOVE_SELF;
    map_syscall_options["FAN_MOVED_FROM"] = FAN_MOVED_FROM;
    map_syscall_options["FAN_MOVED_TO"] = FAN_MOVED_TO;
    map_syscall_options["FAN_NONBLOCK"] = FAN_NONBLOCK;
    map_syscall_options["FAN_ONDIR"] = FAN_ONDIR;
// 110
    map_syscall_options["FAN_OPEN"] = FAN_OPEN;
    map_syscall_options["FAN_OPEN_EXEC"] = FAN_OPEN_EXEC;
    map_syscall_options["FAN_OPEN_EXEC_PERM"] = FAN_OPEN_EXEC_PERM;
    map_syscall_options["FAN_OPEN_PERM"] = FAN_OPEN_PERM;
    //map_syscall_options["FAN_RENAME"] = FAN_RENAME;

    //map_syscall_options["FAN_REPORT_DFID_NAME"] = FAN_REPORT_DFID_NAME;
    //map_syscall_options["FAN_REPORT_DFID_NAME_TARGET"] = FAN_REPORT_DFID_NAME_TARGET;
    //map_syscall_options["FAN_REPORT_DIR_FID"] = FAN_REPORT_DIR_FID;
    map_syscall_options["FAN_REPORT_FID"] = FAN_REPORT_FID;
    //map_syscall_options["FAN_REPORT_NAME"] = FAN_REPORT_NAME;
// 120
    //map_syscall_options["FAN_REPORT_PIDFD"] = FAN_REPORT_PIDFD;
    //map_syscall_options["FAN_REPORT_TARGET_FID"] = FAN_REPORT_TARGET_FID;
    map_syscall_options["FAN_REPORT_TID"] = FAN_REPORT_TID;
    map_syscall_options["FAN_UNLIMITED_MARKS"] = FAN_UNLIMITED_MARKS;
    map_syscall_options["FAN_UNLIMITED_QUEUE"] = FAN_UNLIMITED_QUEUE;

    map_syscall_options["FUTEX_CLOCK_REALTIME"] = FUTEX_CLOCK_REALTIME;
    map_syscall_options["FUTEX_CMP_REQUEUE"] = FUTEX_CMP_REQUEUE;
    map_syscall_options["FUTEX_FD"] = FUTEX_FD;
    map_syscall_options["FUTEX_PRIVATE_FLAG"] = FUTEX_PRIVATE_FLAG;
    map_syscall_options["FUTEX_REQUEUE"] = FUTEX_REQUEUE;
// 130
    map_syscall_options["FUTEX_WAIT"] = FUTEX_WAIT;
    map_syscall_options["FUTEX_WAIT_BITSET"] = FUTEX_WAIT_BITSET;
    map_syscall_options["FUTEX_WAKE"] = FUTEX_WAKE;
    map_syscall_options["FUTEX_WAKE_BITSET"] = FUTEX_WAKE_BITSET;
    map_syscall_options["FUTEX_WAKE_OP"] = FUTEX_WAKE_OP;

    map_syscall_options["GRND_NONBLOCK"] = GRND_NONBLOCK;
    map_syscall_options["GRND_RANDOM"] = GRND_RANDOM;
    map_syscall_options["IN_CLOEXEC"] = IN_CLOEXEC;
    map_syscall_options["IN_NONBLOCK"] = IN_NONBLOCK;
    //map_syscall_options["IOPRIO_PRIO_CLASS"] = IOPRIO_PRIO_CLASS;
// 140
    //map_syscall_options["IOPRIO_PRIO_DATA"] = IOPRIO_PRIO_DATA;
    //map_syscall_options["IOPRIO_PRIO_VALUE"] = IOPRIO_PRIO_VALUE;
    //map_syscall_options["IOPRIO_WHO_PGRP"] = IOPRIO_WHO_PGRP;
    //map_syscall_options["IOPRIO_WHO_PROCESS"] = IOPRIO_WHO_PROCESS;
    //map_syscall_options["IOPRIO_WHO_USER"] = IOPRIO_WHO_USER;

    //map_syscall_options["IORING_ENTER_ASYNC"] = IORING_ENTER_ASYNC;
    //map_syscall_options["IORING_ENTER_EXT_ARG"] = IORING_ENTER_EXT_ARG;
    //map_syscall_options["IORING_ENTER_GETEVENTS"] = IORING_ENTER_GETEVENTS;
    //map_syscall_options["IORING_ENTER_SQ_NOTIFY"] = IORING_ENTER_SQ_NOTIFY;
    //map_syscall_options["IORING_ENTER_SQ_WAIT"] = IORING_ENTER_SQ_WAIT;
// 150
    //map_syscall_options["IORING_ENTER_SQ_WAKEUP"] = IORING_ENTER_SQ_WAKEUP;
    map_syscall_options["IPC_CREAT"] = IPC_CREAT;
    map_syscall_options["IPC_EXCL"] = IPC_EXCL;
    map_syscall_options["KCMP_EPOLL_TFD"] = KCMP_EPOLL_TFD;
    map_syscall_options["KCMP_FILE"] = KCMP_FILE;

    map_syscall_options["KCMP_FILES"] = KCMP_FILES;
    map_syscall_options["KCMP_FS"] = KCMP_FS;
    map_syscall_options["KCMP_IO"] = KCMP_IO;
    map_syscall_options["KCMP_SIGHAND"] = KCMP_SIGHAND;
    map_syscall_options["KCMP_SYSVSEM"] = KCMP_SYSVSEM;
// 160
    map_syscall_options["KCMP_VM"] = KCMP_VM;
    map_syscall_options["KEXEC_FILE_NO_INITRAMFS"] = KEXEC_FILE_NO_INITRAMFS;
    map_syscall_options["KEXEC_FILE_ON_CRASH"] = KEXEC_FILE_ON_CRASH;
    map_syscall_options["KEXEC_FILE_UNLOAD"] = KEXEC_FILE_UNLOAD;
    map_syscall_options["KEXEC_ON_CRASH"] = KEXEC_ON_CRASH;

    map_syscall_options["KEXEC_PRESERVE_CONTEXT"] = KEXEC_PRESERVE_CONTEXT;
    map_syscall_options["LINUX_REBOOT_CMD_CAD_OFF"] = LINUX_REBOOT_CMD_CAD_OFF;
    map_syscall_options["LINUX_REBOOT_CMD_CAD_ON"] = LINUX_REBOOT_CMD_CAD_ON;
    map_syscall_options["LINUX_REBOOT_CMD_HALT"] = LINUX_REBOOT_CMD_HALT;
    map_syscall_options["LINUX_REBOOT_CMD_KEXEC"] = LINUX_REBOOT_CMD_KEXEC;
// 170
    map_syscall_options["LINUX_REBOOT_CMD_POWER_OFF"] = LINUX_REBOOT_CMD_POWER_OFF;
    map_syscall_options["LINUX_REBOOT_CMD_RESTART"] = LINUX_REBOOT_CMD_RESTART;
    map_syscall_options["LINUX_REBOOT_CMD_RESTART2"] = LINUX_REBOOT_CMD_RESTART2;
    map_syscall_options["LINUX_REBOOT_CMD_SW_SUSPEND"] = LINUX_REBOOT_CMD_SW_SUSPEND;
    map_syscall_options["LINUX_REBOOT_MAGIC1"] = LINUX_REBOOT_MAGIC1;

    map_syscall_options["LINUX_REBOOT_MAGIC2"] = LINUX_REBOOT_MAGIC2;
    map_syscall_options["LINUX_REBOOT_MAGIC2A"] = LINUX_REBOOT_MAGIC2A;
    map_syscall_options["LINUX_REBOOT_MAGIC2B"] = LINUX_REBOOT_MAGIC2B;
    map_syscall_options["LINUX_REBOOT_MAGIC2C"] = LINUX_REBOOT_MAGIC2C;
    map_syscall_options["MAP_32BIT"] = MAP_32BIT;
// 180
    map_syscall_options["MAP_ANON"] = MAP_ANON;
    map_syscall_options["MAP_ANONYMOUS"] = MAP_ANONYMOUS;
    map_syscall_options["MAP_DENYWRITE"] = MAP_DENYWRITE;
    map_syscall_options["MAP_EXECUTABLE"] = MAP_EXECUTABLE;
    map_syscall_options["MAP_FILE"] = MAP_FILE;

    map_syscall_options["MAP_FIXED"] = MAP_FIXED;
    map_syscall_options["MAP_FIXED_NOREPLACE"] = MAP_FIXED_NOREPLACE;
    map_syscall_options["MAP_GROWSDOWN"] = MAP_GROWSDOWN;
    map_syscall_options["MAP_HUGE_1GB"] = MAP_HUGE_1GB;
    //map_syscall_options["MAP_HUGE_1MB"] = MAP_HUGE_1MB;
// 190
    map_syscall_options["MAP_HUGE_2MB"] = MAP_HUGE_2MB;
    map_syscall_options["MAP_HUGETLB"] = MAP_HUGETLB;
    map_syscall_options["MAP_LOCKED"] = MAP_LOCKED;
    map_syscall_options["MAP_NONBLOCK"] = MAP_NONBLOCK;
    map_syscall_options["MAP_NORESERVE"] = MAP_NORESERVE;

    map_syscall_options["MAP_POPULATE"] = MAP_POPULATE;
    map_syscall_options["MAP_PRIVATE"] = MAP_PRIVATE;
    map_syscall_options["MAP_SHARED"] = MAP_SHARED;
    map_syscall_options["MAP_SHARED_VALIDATE"] = MAP_SHARED_VALIDATE;
    map_syscall_options["MAP_STACK"] = MAP_STACK;
// 200
    map_syscall_options["MAP_SYNC"] = MAP_SYNC;
    //map_syscall_options["MAP_UNINITIALIZED"] = MAP_UNINITIALIZED;
    map_syscall_options["MCL_CURRENT"] = MCL_CURRENT;
    map_syscall_options["MCL_FUTURE"] = MCL_FUTURE;
    map_syscall_options["MCL_ONFAULT"] = MCL_ONFAULT;

    //map_syscall_options["MEMBARRIER_CMD_FLAG_CPU"] = MEMBARRIER_CMD_FLAG_CPU;
    map_syscall_options["MEMBARRIER_CMD_GLOBAL"] = MEMBARRIER_CMD_GLOBAL;
    map_syscall_options["MEMBARRIER_CMD_GLOBAL_EXPEDITED"] = MEMBARRIER_CMD_GLOBAL_EXPEDITED;
    map_syscall_options["MEMBARRIER_CMD_PRIVATE_EXPEDITED"] = MEMBARRIER_CMD_PRIVATE_EXPEDITED;
    //map_syscall_options["MEMBARRIER_CMD_PRIVATE_EXPEDITED_RSEQ"] = MEMBARRIER_CMD_PRIVATE_EXPEDITED_RSEQ;
// 210
    map_syscall_options["MEMBARRIER_CMD_PRIVATE_EXPEDITED_SYNC_CORE"] = MEMBARRIER_CMD_PRIVATE_EXPEDITED_SYNC_CORE;
    map_syscall_options["MEMBARRIER_CMD_QUERY"] = MEMBARRIER_CMD_QUERY;
    map_syscall_options["MEMBARRIER_CMD_REGISTER_GLOBAL_EXPEDITED"] = MEMBARRIER_CMD_REGISTER_GLOBAL_EXPEDITED;
    map_syscall_options["MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED"] = MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED;
    //map_syscall_options["MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED_RSEQ"] = MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED_RSEQ;

    map_syscall_options["MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED_SYNC_CORE"] = MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED_SYNC_CORE;
    map_syscall_options["MEMBARRIER_CMD_SHARED"] = MEMBARRIER_CMD_SHARED;
    map_syscall_options["MFD_ALLOW_SEALING"] = MFD_ALLOW_SEALING;
    map_syscall_options["MFD_CLOEXEC"] = MFD_CLOEXEC;
    map_syscall_options["MFD_HUGE_1GB"] = MFD_HUGE_1GB;
// 220
    map_syscall_options["MFD_HUGE_2MB"] = MFD_HUGE_2MB;
    map_syscall_options["MFD_HUGETLB"] = MFD_HUGETLB;
    map_syscall_options["MLOCK_ONFAULT"] = MLOCK_ONFAULT;
    //map_syscall_options["MNT_DETACH"] = MNT_DETACH;
    //map_syscall_options["MNT_EXPIRE"] = MNT_EXPIRE;

    //map_syscall_options["MNT_FORCE"] = MNT_FORCE;
    map_syscall_options["MODULE_INIT_IGNORE_MODVERSIONS"] = MODULE_INIT_IGNORE_MODVERSIONS;
    map_syscall_options["MODULE_INIT_IGNORE_VERMAGIC"] = MODULE_INIT_IGNORE_VERMAGIC;
    //map_syscall_options["MPOL_BIND"] = MPOL_BIND;
    //map_syscall_options["MPOL_DEFAULT"] = MPOL_DEFAULT;
// 230
    //map_syscall_options["MPOL_F_NUMA_BALANCING"] = MPOL_F_NUMA_BALANCING;
    //map_syscall_options["MPOL_F_RELATIVE_NODES"] = MPOL_F_RELATIVE_NODES;
    //map_syscall_options["MPOL_F_STATIC_NODES"] = MPOL_F_STATIC_NODES;
    //map_syscall_options["MPOL_INTERLEAVE"] = MPOL_INTERLEAVE;
    //map_syscall_options["MPOL_LOCAL"] = MPOL_LOCAL;

    //map_syscall_options["MPOL_MF_MOVE"] = MPOL_MF_MOVE;
    //map_syscall_options["MPOL_MF_MOVE_ALL"] = MPOL_MF_MOVE_ALL;
    //map_syscall_options["MPOL_MF_STRICT"] = MPOL_MF_STRICT;
    //map_syscall_options["MPOL_PREFERRED"] = MPOL_PREFERRED;
    //map_syscall_options["MREMAP_DONTUNMAP"] = MREMAP_DONTUNMAP; // must be used in conjunction with MREMAP_MAYMOVE
// 240
    map_syscall_options["MREMAP_FIXED"] = MREMAP_FIXED;
    map_syscall_options["MREMAP_MAYMOVE"] = MREMAP_MAYMOVE;
    map_syscall_options["MS_ASYNC"] = MS_ASYNC;
    map_syscall_options["MS_BIND"] = MS_BIND;
    map_syscall_options["MS_DIRSYNC"] = MS_DIRSYNC;

    map_syscall_options["MS_INVALIDATE"] = MS_INVALIDATE;
    map_syscall_options["MS_LAZYTIME"] = MS_LAZYTIME;
    map_syscall_options["MS_MANDLOCK"] = MS_MANDLOCK;
    map_syscall_options["MS_MOVE"] = MS_MOVE;
    map_syscall_options["MS_NOATIME"] = MS_NOATIME;
// 250
    map_syscall_options["MS_NODEV"] = MS_NODEV;
    map_syscall_options["MS_NODIRATIME"] = MS_NODIRATIME;
    map_syscall_options["MS_NOEXEC"] = MS_NOEXEC;
    map_syscall_options["MS_NOSUID"] = MS_NOSUID;
    //map_syscall_options["MS_NOSYMFOLLOW"] = MS_NOSYMFOLLOW;

    map_syscall_options["MS_PRIVATE"] = MS_PRIVATE;
    map_syscall_options["MS_RDONLY"] = MS_RDONLY;
    map_syscall_options["MS_REC"] = MS_REC;
    map_syscall_options["MS_RELATIME"] = MS_RELATIME;
    map_syscall_options["MS_REMOUNT"] = MS_REMOUNT;
// 260
    map_syscall_options["MS_SHARED"] = MS_SHARED;
    map_syscall_options["MS_SILENT"] = MS_SILENT;
    map_syscall_options["MS_SLAVE"] = MS_SLAVE;
    map_syscall_options["MS_STRICTATIME"] = MS_STRICTATIME;
    map_syscall_options["MS_SYNC"] = MS_SYNC;

    map_syscall_options["MS_SYNCHRONOUS"] = MS_SYNCHRONOUS;
    map_syscall_options["MS_UNBINDABLE"] = MS_UNBINDABLE;
    map_syscall_options["MSG_CONFIRM"] = MSG_CONFIRM;
    map_syscall_options["MSG_DONTROUTE"] = MSG_DONTROUTE;
    map_syscall_options["MSG_DONTWAIT"] = MSG_DONTWAIT;
// 270
    map_syscall_options["MSG_EOR"] = MSG_EOR;
    map_syscall_options["MSG_FASTOPEN"] = MSG_FASTOPEN;
    map_syscall_options["MSG_MORE"] = MSG_MORE;
    map_syscall_options["MSG_NOSIGNAL"] = MSG_NOSIGNAL;
    map_syscall_options["MSG_OOB"] = MSG_OOB;

    map_syscall_options["MSG_PEEK"] = MSG_PEEK;
    map_syscall_options["MSG_WAITALL"] = MSG_WAITALL;
    map_syscall_options["MSG_WAITFORONE"] = MSG_WAITFORONE;
    map_syscall_options["O_APPEND"] = O_APPEND;
    map_syscall_options["O_ASYNC"] = O_ASYNC;
// 280
    map_syscall_options["O_CLOEXEC"] = O_CLOEXEC;
    map_syscall_options["O_CREAT"] = O_CREAT;
    map_syscall_options["O_DIRECT"] = O_DIRECT;
    map_syscall_options["O_DIRECTORY"] = O_DIRECTORY;
    map_syscall_options["O_DSYNC"] = O_DSYNC;

    map_syscall_options["O_EXCL"] = O_EXCL;
    map_syscall_options["O_LARGEFILE"] = O_LARGEFILE;
    map_syscall_options["O_NDELAY"] = O_NDELAY;
    map_syscall_options["O_NOATIME"] = O_NOATIME;
    map_syscall_options["O_NOCTTY"] = O_NOCTTY;
// 290
    map_syscall_options["O_NOFOLLOW"] = O_NOFOLLOW;
    map_syscall_options["O_NONBLOCK"] = O_NONBLOCK;
    //map_syscall_options["O_NOTIFICATION_PIPE"] = O_NOTIFICATION_PIPE;
    map_syscall_options["O_PATH"] = O_PATH;
    map_syscall_options["O_RDONLY"] = O_RDONLY;

    map_syscall_options["O_RDWR"] = O_RDWR;
    map_syscall_options["O_RSYNC"] = O_RSYNC;
    map_syscall_options["O_SYNC"] = O_SYNC;
    map_syscall_options["O_TMPFILE"] = O_TMPFILE;
    map_syscall_options["O_TRUNC"] = O_TRUNC;
// 300
    map_syscall_options["O_WRONLY"] = O_WRONLY;
    //map_syscall_options["OTHERS"] = OTHERS;
    map_syscall_options["PERF_FLAG_FD_CLOEXEC"] = PERF_FLAG_FD_CLOEXEC;
    map_syscall_options["PERF_FLAG_FD_NO_GROUP"] = PERF_FLAG_FD_NO_GROUP;
    map_syscall_options["PERF_FLAG_FD_OUTPUT"] = PERF_FLAG_FD_OUTPUT;

    map_syscall_options["PERF_FLAG_PID_CGROUP"] = PERF_FLAG_PID_CGROUP;
    //map_syscall_options["PIDFD_NONBLOCK"] = PIDFD_NONBLOCK;
    map_syscall_options["PKEY_DISABLE_ACCESS"] = PKEY_DISABLE_ACCESS;
    map_syscall_options["PKEY_DISABLE_WRITE"] = PKEY_DISABLE_WRITE;
    map_syscall_options["POSIX_FADV_DONTNEED"] = POSIX_FADV_DONTNEED;
// 310
    map_syscall_options["POSIX_FADV_NOREUSE"] = POSIX_FADV_NOREUSE;
    map_syscall_options["POSIX_FADV_NORMAL"] = POSIX_FADV_NORMAL;
    map_syscall_options["POSIX_FADV_RANDOM"] = POSIX_FADV_RANDOM;
    map_syscall_options["POSIX_FADV_SEQUENTIAL"] = POSIX_FADV_SEQUENTIAL;
    map_syscall_options["POSIX_FADV_WILLNEED"] = POSIX_FADV_WILLNEED;

    map_syscall_options["PR_CAP_AMBIENT"] = PR_CAP_AMBIENT;
    map_syscall_options["PR_CAPBSET_DROP"] = PR_CAPBSET_DROP;
    map_syscall_options["PR_CAPBSET_READ"] = PR_CAPBSET_READ;
    map_syscall_options["PR_GET_CHILD_SUBREAPER"] = PR_GET_CHILD_SUBREAPER;
    map_syscall_options["PR_GET_DUMPABLE"] = PR_GET_DUMPABLE;
// 320
    map_syscall_options["PR_GET_ENDIAN"] = PR_GET_ENDIAN;
    map_syscall_options["PR_GET_FP_MODE"] = PR_GET_FP_MODE;
    map_syscall_options["PR_GET_FPEMU"] = PR_GET_FPEMU;
    map_syscall_options["PR_GET_FPEXC"] = PR_GET_FPEXC;
    //map_syscall_options["PR_GET_IO_FLUSHER"] = PR_GET_IO_FLUSHER;

    map_syscall_options["PR_GET_KEEPCAPS"] = PR_GET_KEEPCAPS;
    map_syscall_options["PR_GET_NAME"] = PR_GET_NAME;
    map_syscall_options["PR_GET_NO_NEW_PRIVS"] = PR_GET_NO_NEW_PRIVS;
    map_syscall_options["PR_GET_PDEATHSIG"] = PR_GET_PDEATHSIG;
    map_syscall_options["PR_GET_SECCOMP"] = PR_GET_SECCOMP;
// 330
    map_syscall_options["PR_GET_SECUREBITS"] = PR_GET_SECUREBITS;
    map_syscall_options["PR_GET_SPECULATION_CTRL"] = PR_GET_SPECULATION_CTRL;
    map_syscall_options["PR_GET_TAGGED_ADDR_CTRL"] = PR_GET_TAGGED_ADDR_CTRL;
    map_syscall_options["PR_GET_THP_DISABLE"] = PR_GET_THP_DISABLE;
    map_syscall_options["PR_GET_TID_ADDRESS"] = PR_GET_TID_ADDRESS;

    map_syscall_options["PR_GET_TIMERSLACK"] = PR_GET_TIMERSLACK;
    map_syscall_options["PR_GET_TIMING"] = PR_GET_TIMING;
    map_syscall_options["PR_GET_TSC"] = PR_GET_TSC;
    map_syscall_options["PR_GET_UNALIGN"] = PR_GET_UNALIGN;
    map_syscall_options["PR_MCE_KILL"] = PR_MCE_KILL;
// 340
    map_syscall_options["PR_MCE_KILL_GET"] = PR_MCE_KILL_GET;
    map_syscall_options["PR_MPX_DISABLE_MANAGEMENT"] = PR_MPX_DISABLE_MANAGEMENT;
    map_syscall_options["PR_MPX_ENABLE_MANAGEMENT"] = PR_MPX_ENABLE_MANAGEMENT;
    map_syscall_options["PR_PAC_RESET_KEYS"] = PR_PAC_RESET_KEYS;
    map_syscall_options["PR_SET_CHILD_SUBREAPER"] = PR_SET_CHILD_SUBREAPER;

    map_syscall_options["PR_SET_DUMPABLE"] = PR_SET_DUMPABLE;
    map_syscall_options["PR_SET_ENDIAN"] = PR_SET_ENDIAN;
    map_syscall_options["PR_SET_FP_MODE"] = PR_SET_FP_MODE;
    map_syscall_options["PR_SET_FPEMU"] = PR_SET_FPEMU;
    map_syscall_options["PR_SET_FPEXC"] = PR_SET_FPEXC;
// 350
    //map_syscall_options["PR_SET_IO_FLUSHER"] = PR_SET_IO_FLUSHER; // since Linux 5.6
    map_syscall_options["PR_SET_KEEPCAPS"] = PR_SET_KEEPCAPS;
    map_syscall_options["PR_SET_MM"] = PR_SET_MM;
    map_syscall_options["PR_SET_NAME"] = PR_SET_NAME;
    map_syscall_options["PR_SET_NO_NEW_PRIVS"] = PR_SET_NO_NEW_PRIVS;

    map_syscall_options["PR_SET_PDEATHSIG"] = PR_SET_PDEATHSIG;
    map_syscall_options["PR_SET_PTRACER"] = PR_SET_PTRACER;
    map_syscall_options["PR_SET_SECCOMP"] = PR_SET_SECCOMP;
    map_syscall_options["PR_SET_SECUREBITS"] = PR_SET_SECUREBITS;
    map_syscall_options["PR_SET_SPECULATION_CTRL"] = PR_SET_SPECULATION_CTRL;
// 360
    //map_syscall_options["PR_SET_SYSCALL_USER_DISPATCH"] = PR_SET_SYSCALL_USER_DISPATCH;
    map_syscall_options["PR_SET_TAGGED_ADDR_CTRL"] = PR_SET_TAGGED_ADDR_CTRL;
    map_syscall_options["PR_SET_THP_DISABLE"] = PR_SET_THP_DISABLE;
    map_syscall_options["PR_SET_TIMERSLACK"] = PR_SET_TIMERSLACK;
    map_syscall_options["PR_SET_TIMING"] = PR_SET_TIMING;

    map_syscall_options["PR_SET_UNALIGN"] = PR_SET_UNALIGN;
    //map_syscall_options["PR_SET_VMA"] = PR_SET_VMA;
    map_syscall_options["PR_SVE_GET_VL"] = PR_SVE_GET_VL;
    map_syscall_options["PR_SVE_SET_VL"] = PR_SVE_SET_VL;
    map_syscall_options["PR_TASK_PERF_EVENTS_DISABLE"] = PR_TASK_PERF_EVENTS_DISABLE;
// 370
    map_syscall_options["PR_TASK_PERF_EVENTS_ENABLE"] = PR_TASK_PERF_EVENTS_ENABLE;
    map_syscall_options["PRIO_PGRP"] = PRIO_PGRP;
    map_syscall_options["PRIO_PROCESS"] = PRIO_PROCESS;
    map_syscall_options["PRIO_USER"] = PRIO_USER;
    map_syscall_options["PROT_EXEC"] = PROT_EXEC;

    map_syscall_options["PROT_GROWSDOWN"] = PROT_GROWSDOWN;
    map_syscall_options["PROT_GROWSUP"] = PROT_GROWSUP;
    map_syscall_options["PROT_NONE"] = PROT_NONE;
    map_syscall_options["PROT_READ"] = PROT_READ;
    //map_syscall_options["PROT_SAO"] = PROT_SAO; // This feature is specific to the PowerPC architecture
// 380
    //map_syscall_options["PROT_SEM"] = PROT_SEM; // is not currently used in on any architecture.
    map_syscall_options["PROT_WRITE"] = PROT_WRITE;
    map_syscall_options["Q_GETFMT"] = Q_GETFMT;
    map_syscall_options["Q_GETINFO"] = Q_GETINFO;
    map_syscall_options["Q_GETNEXTQUOTA"] = Q_GETNEXTQUOTA;

    map_syscall_options["Q_GETQUOTA"] = Q_GETQUOTA;
    //map_syscall_options["Q_GETSTATS"] = Q_GETSTATS; // This operation is obsolete and was removed in Linux 2.4.22.
    map_syscall_options["Q_QUOTAOFF"] = Q_QUOTAOFF;
    map_syscall_options["Q_QUOTAON"] = Q_QUOTAON;
    map_syscall_options["Q_SETINFO"] = Q_SETINFO;
// 390
    map_syscall_options["Q_SETQUOTA"] = Q_SETQUOTA;
    map_syscall_options["Q_SYNC"] = Q_SYNC;
    map_syscall_options["Q_XGETNEXTQUOTA"] = Q_XGETNEXTQUOTA;
    map_syscall_options["Q_XGETQSTAT"] = Q_XGETQSTAT;
    map_syscall_options["Q_XGETQSTATV"] = Q_XGETQSTATV;

    map_syscall_options["Q_XGETQUOTA"] = Q_XGETQUOTA;
    map_syscall_options["Q_XQUOTAOFF"] = Q_XQUOTAOFF;
    map_syscall_options["Q_XQUOTAON"] = Q_XQUOTAON;
    map_syscall_options["Q_XQUOTARM"] = Q_XQUOTARM;
    map_syscall_options["Q_XQUOTASYNC"] = Q_XQUOTASYNC;
// 400
    map_syscall_options["Q_XSETQLIM"] = Q_XSETQLIM;
    //map_syscall_options["QM_DEPS"] = QM_DEPS;
    //map_syscall_options["QM_INFO"] = QM_INFO;
    //map_syscall_options["QM_MODULES"] = QM_MODULES;
    //map_syscall_options["QM_REFS"] = QM_REFS;

    //map_syscall_options["QM_SYMBOLS"] = QM_SYMBOLS;
    map_syscall_options["R_OK"] = R_OK;
    map_syscall_options["RENAME_EXCHANGE"] = RENAME_EXCHANGE;
    map_syscall_options["RENAME_NOREPLACE"] = RENAME_NOREPLACE;
    map_syscall_options["RENAME_WHITEOUT"] = RENAME_WHITEOUT;
// 410
    map_syscall_options["RLIMIT_AS"] = RLIMIT_AS;
    map_syscall_options["RLIMIT_CORE"] = RLIMIT_CORE;
    map_syscall_options["RLIMIT_CPU"] = RLIMIT_CPU;
    map_syscall_options["RLIMIT_DATA"] = RLIMIT_DATA;
    map_syscall_options["RLIMIT_FSIZE"] = RLIMIT_FSIZE;

    map_syscall_options["RLIMIT_LOCKS"] = RLIMIT_LOCKS;
    map_syscall_options["RLIMIT_MEMLOCK"] = RLIMIT_MEMLOCK;
    map_syscall_options["RLIMIT_MSGQUEUE"] = RLIMIT_MSGQUEUE;
    map_syscall_options["RLIMIT_NICE"] = RLIMIT_NICE;
    map_syscall_options["RLIMIT_NOFILE"] = RLIMIT_NOFILE;
// 420
    map_syscall_options["RLIMIT_NPROC"] = RLIMIT_NPROC;
    map_syscall_options["RLIMIT_RSS"] = RLIMIT_RSS;
    map_syscall_options["RLIMIT_RTPRIO"] = RLIMIT_RTPRIO;
    map_syscall_options["RLIMIT_RTTIME"] = RLIMIT_RTTIME;
    map_syscall_options["RLIMIT_SIGPENDING"] = RLIMIT_SIGPENDING;

    map_syscall_options["RLIMIT_STACK"] = RLIMIT_STACK;
    map_syscall_options["RUSAGE_CHILDREN"] = RUSAGE_CHILDREN;
    map_syscall_options["RUSAGE_SELF"] = RUSAGE_SELF;
    map_syscall_options["RUSAGE_THREAD"] = RUSAGE_THREAD;
    map_syscall_options["RWF_APPEND"] = RWF_APPEND;
// 430
    map_syscall_options["RWF_DSYNC"] = RWF_DSYNC;
    map_syscall_options["RWF_HIPRI"] = RWF_HIPRI;
    map_syscall_options["RWF_NOWAIT"] = RWF_NOWAIT;
    map_syscall_options["RWF_SYNC"] = RWF_SYNC;
    map_syscall_options["S_IFBLK"] = S_IFBLK;

    map_syscall_options["S_IFCHR"] = S_IFCHR;
    map_syscall_options["S_IFIFO"] = S_IFIFO;
    map_syscall_options["S_IFREG"] = S_IFREG;
    map_syscall_options["S_IFSOCK"] = S_IFSOCK;
    map_syscall_options["S_IRGRP"] = S_IRGRP;
// 440
    map_syscall_options["S_IROTH"] = S_IROTH;
    map_syscall_options["S_IRUSR"] = S_IRUSR;
    map_syscall_options["S_IRWXG"] = S_IRWXG;
    map_syscall_options["S_IRWXO"] = S_IRWXO;
    map_syscall_options["S_IRWXU"] = S_IRWXU;

    map_syscall_options["S_ISGID"] = S_ISGID;
    map_syscall_options["S_ISUID"] = S_ISUID;
    map_syscall_options["S_ISVTX"] = S_ISVTX;
    map_syscall_options["S_IWGRP"] = S_IWGRP;
    map_syscall_options["S_IWOTH"] = S_IWOTH;
// 450
    map_syscall_options["S_IWUSR"] = S_IWUSR;
    map_syscall_options["S_IXGRP"] = S_IXGRP;
    map_syscall_options["S_IXOTH"] = S_IXOTH;
    map_syscall_options["S_IXUSR"] = S_IXUSR;
    map_syscall_options["SCHED_BATCH"] = SCHED_BATCH;

    map_syscall_options["SCHED_FIFO"] = SCHED_FIFO;
    map_syscall_options["SCHED_IDLE"] = SCHED_IDLE;
    map_syscall_options["SCHED_OTHER"] = SCHED_OTHER;
    map_syscall_options["SCHED_RR"] = SCHED_RR;
    map_syscall_options["SECCOMP_FILTER_FLAG_LOG"] = SECCOMP_FILTER_FLAG_LOG;
// 460
    map_syscall_options["SECCOMP_FILTER_FLAG_NEW_LISTENER"] = SECCOMP_FILTER_FLAG_NEW_LISTENER;
    map_syscall_options["SECCOMP_FILTER_FLAG_SPEC_ALLOW"] = SECCOMP_FILTER_FLAG_SPEC_ALLOW;
    map_syscall_options["SECCOMP_FILTER_FLAG_TSYNC"] = SECCOMP_FILTER_FLAG_TSYNC;
    map_syscall_options["SECCOMP_GET_ACTION_AVAIL"] = SECCOMP_GET_ACTION_AVAIL;
    map_syscall_options["SECCOMP_GET_NOTIF_SIZES"] = SECCOMP_GET_NOTIF_SIZES;

    map_syscall_options["SECCOMP_SET_MODE_FILTER"] = SECCOMP_SET_MODE_FILTER;
    map_syscall_options["SECCOMP_SET_MODE_STRICT"] = SECCOMP_SET_MODE_STRICT;
    map_syscall_options["SFD_CLOEXEC"] = SFD_CLOEXEC;
    map_syscall_options["SFD_NONBLOCK"] = SFD_NONBLOCK;
    //map_syscall_options["SHM_HUGE_1GB"] = SHM_HUGE_1GB; // Define Fail SHM_HUGE_SHIFT
// 470
    //map_syscall_options["SHM_HUGE_2MB"] = SHM_HUGE_2MB; // Define Fail SHM_HUGE_SHIFT
    map_syscall_options["SHM_HUGETLB"] = SHM_HUGETLB;
    map_syscall_options["SHM_NORESERVE"] = SHM_NORESERVE;
    map_syscall_options["SOCK_CLOEXEC"] = SOCK_CLOEXEC;
    map_syscall_options["SOCK_NONBLOCK"] = SOCK_NONBLOCK;

    map_syscall_options["SPLICE_F_GIFT"] = SPLICE_F_GIFT;
    map_syscall_options["SPLICE_F_MORE"] = SPLICE_F_MORE;
    map_syscall_options["SPLICE_F_MOVE"] = SPLICE_F_MOVE;
    map_syscall_options["SPLICE_F_NONBLOCK"] = SPLICE_F_NONBLOCK;
    map_syscall_options["STATX_ALL"] = STATX_ALL;
// 480
    map_syscall_options["STATX_ATIME"] = STATX_ATIME;
    map_syscall_options["STATX_BASIC_STATS"] = STATX_BASIC_STATS;
    map_syscall_options["STATX_BLOCKS"] = STATX_BLOCKS;
    map_syscall_options["STATX_BTIME"] = STATX_BTIME;
    map_syscall_options["STATX_CTIME"] = STATX_CTIME;

    //map_syscall_options["STATX_DIOALIGN"] = STATX_DIOALIGN; // since Linux 6.1; support varies by filesystem
    map_syscall_options["STATX_GID"] = STATX_GID;
    map_syscall_options["STATX_INO"] = STATX_INO;
    //map_syscall_options["STATX_MNT_ID"] = STATX_MNT_ID; // Want stx_mnt_id (since Linux 5.8)
    map_syscall_options["STATX_MODE"] = STATX_MODE;
// 490
    map_syscall_options["STATX_MTIME"] = STATX_MTIME;
    map_syscall_options["STATX_NLINK"] = STATX_NLINK;
    map_syscall_options["STATX_SIZE"] = STATX_SIZE;
    map_syscall_options["STATX_TYPE"] = STATX_TYPE;
    map_syscall_options["STATX_UID"] = STATX_UID;

    map_syscall_options["SWAP_FLAG_DISCARD"] = SWAP_FLAG_DISCARD;
    map_syscall_options["SWAP_FLAG_PREFER"] = SWAP_FLAG_PREFER;
    map_syscall_options["SYNC_FILE_RANGE_WAIT_AFTER"] = SYNC_FILE_RANGE_WAIT_AFTER;
    map_syscall_options["SYNC_FILE_RANGE_WAIT_BEFORE"] = SYNC_FILE_RANGE_WAIT_BEFORE;
    map_syscall_options["SYNC_FILE_RANGE_WRITE"] = SYNC_FILE_RANGE_WRITE;
// 500
    map_syscall_options["SYSLOG_ACTION_CLEAR"] = SYSLOG_ACTION_CLEAR;
    map_syscall_options["SYSLOG_ACTION_CLOSE"] = SYSLOG_ACTION_CLOSE;
    map_syscall_options["SYSLOG_ACTION_CONSOLE_LEVEL"] = SYSLOG_ACTION_CONSOLE_LEVEL;
    map_syscall_options["SYSLOG_ACTION_CONSOLE_OFF"] = SYSLOG_ACTION_CONSOLE_OFF;
    map_syscall_options["SYSLOG_ACTION_CONSOLE_ON"] = SYSLOG_ACTION_CONSOLE_ON;

    map_syscall_options["SYSLOG_ACTION_OPEN"] = SYSLOG_ACTION_OPEN;
    map_syscall_options["SYSLOG_ACTION_READ"] = SYSLOG_ACTION_READ;
    map_syscall_options["SYSLOG_ACTION_READ_ALL"] = SYSLOG_ACTION_READ_ALL;
    map_syscall_options["SYSLOG_ACTION_READ_CLEAR"] = SYSLOG_ACTION_READ_CLEAR;
    map_syscall_options["SYSLOG_ACTION_SIZE_BUFFER"] = SYSLOG_ACTION_SIZE_BUFFER;
// 510
    map_syscall_options["SYSLOG_ACTION_SIZE_UNREAD"] = SYSLOG_ACTION_SIZE_UNREAD;
    map_syscall_options["TFD_CLOEXEC"] = TFD_CLOEXEC;
    map_syscall_options["TFD_NONBLOCK"] = TFD_NONBLOCK;
    map_syscall_options["TFD_TIMER_ABSTIME"] = TFD_TIMER_ABSTIME;
    map_syscall_options["TFD_TIMER_CANCEL_ON_SET"] = TFD_TIMER_CANCEL_ON_SET;

    map_syscall_options["TIMER_ABSTIME"] = TIMER_ABSTIME;
    //map_syscall_options["UFFD_USER_MODE_ONLY"] = UFFD_USER_MODE_ONLY;
    //map_syscall_options["UMOUNT_NOFOLLOW"] = UMOUNT_NOFOLLOW;
    map_syscall_options["W_OK"] = W_OK;
    map_syscall_options["X_OK"] = X_OK;
// 520
    map_syscall_options["XATTR_CREATE"] = XATTR_CREATE;
    map_syscall_options["XATTR_REPLACE"] = XATTR_REPLACE;

    return map_syscall_options;
}