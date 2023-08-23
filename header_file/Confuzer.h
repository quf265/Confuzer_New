//공통으로 사용하는 헤더파일

#ifndef CONFUZER_HEADER_FILE
#define CONFUZER_HEADER_FILE


//#define _GNU_SOURCE

//cpp - haeder
#include<iostream>
#include<vector>
#include<algorithm>



//c - header
#include<string>
#include<cstring>
#include<cstdio>
#include <fcntl.h>

//linux header
#include <syscall.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <sys/xattr.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/sysinfo.h>
#include <sys/uio.h>
#include <sys/times.h>
#include <sys/vfs.h> 
#include <sys/timex.h>
#include <sys/epoll.h>
#include <linux/module.h>
#include <linux/nfsd/syscall.h>
#include <linux/aio_abi.h>
#include <linux/kexec.h>
#include <linux/futex.h>
#include <linux/hw_breakpoint.h>
#include <linux/perf_event.h>
#include <linux/sched.h>
#include <liburing.h>
#include <sched.h>
#include <arpa/inet.h>
#include <poll.h>
#include <utime.h>
#include <ustat.h>
#include <mqueue.h>
#include <time.h>


using namespace std;
//구조체

enum arg_type
{
    ARG_UNDEFINED,
    ARG_FD,
    ARG_LEN,
    ARG_ADDRESS,
    ARG_MODE_T,
    ARG_NON_NULL_ADDRESS,
    ARG_PID,
    ARG_RANGE,
    ARG_OP,
    ARG_LIST,
    ARG_CPU,
    ARG_PATHNAME,
    ARG_IOVEC,
    ARG_IOVECLEN,
    ARG_SOCKADDR,
    ARG_SOCKADDRLEN,
    ARG_MMAP,
    ARG_SOCKETINFO,
};

struct StructCollector{
    struct stat stat_struct = {0};
    struct pollfd poll_struct = {0};
    struct sigaction sigaction_struct = {0};
    struct iovec iovec_struct = {0};
    struct timeval timeval_struct = {0};
    struct shmid_ds shmid_ds_struct = {0};
    struct timespec timespec_struct = {0};
    struct itimerval itimerval_struct = {0};
    struct sockaddr sockaddr_struct = {0};
    struct msghdr msghdr_struct = {0};
    struct rusage rusage_struct = {0};
    struct utsname utsname_struct = {0};
    struct sembuf sembuf_struct = {0};
    struct msqid_ds msqid_ds_struct = {0};
    struct linux_dirent linux_dirent_sturct = {0};
    struct timezone timezone_struct = {0};
    struct rlimit rlimit_struct = {0};
    struct sysinfo sysinfo_struct = {0};
    struct tms tms_struct = {0};
    struct utimbuf utinbuf_struct = {0};
    struct ustat ustat_struct = {0};
    struct statfs statfs_struct = {0};
    struct sched_param sched_param_struct = {0};
    struct __sysctl_args __sysctl_args_struct = {0};
    struct timex timex_struct = {0};
    struct rlimit rlimit_struct = {0};
    struct kernel_sym kernel_sym_struct = {0};
    struct nfsctl_arg nfsctl_arg_struct = {0};
    struct user_desc userdesc_struct = {0};
    struct io_event io_event_struct = {0};
    struct iocb iocb_struct = {0};
    struct sigevent sigevent_struct = {0};
    struct epoll_event = {0};
    struct mq_attr mq_attr_struct = {0};
    struct kexec_segment kexec_segment_struct = {0};
    struct robust_list_head robust_list_head_struct = {0};
    struct perf_event_attr perf_event_attr_struct = {0};
    struct file_handle file_handle_struct = {0};
    struct mmsghdr mmsghdr_struct = {0};
    struct statx statx_struct = {0};
    struct io_uring_params io_uring_params_struct = {0};
    struct clone_args clone_args_struct = {0};
};

//실행할 때 사용하는 시스템콜 정보 구조체
struct SyscallArgumentInfo
{
    unsigned int nr;
    unsigned long a1;
    unsigned long a2;
    unsigned long a3;
    unsigned long a4;
    unsigned long a5;
    unsigned long a6;

    enum arg_type a1Type;
    enum arg_type a2Type;
    enum arg_type a3Type;
    enum arg_type a4Type;
    enum arg_type a5Type;
    enum arg_type a6Type;
    unsigned long retval;

    int testSuccess;
    int errorNumber;
    int kindOfContainer; // 0: 도커, 1: gVisor, 2: kata

    int failCount;

};

//호상이가 만들기
struct SyscallJsonInfo{
    string name;
    
    int parameter_count;
    

};

#endif
