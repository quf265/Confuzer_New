//공통으로 사용하는 헤더파일

#ifndef CONFUZER_HEADER_FILE
#define CONFUZER_HEADER_FILE


//#define _GNU_SOURCE

//cpp - haeder
#include<iostream>
#include<vector>
#include<algorithm>
#include <map>

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
//#include <linux/nfsd/syscall.h>
#include <linux/aio_abi.h>
#include <linux/kexec.h>
#include <linux/futex.h>
#include <linux/hw_breakpoint.h>
#include <linux/perf_event.h>
#include <linux/sched.h>
//#include <liburing.h>
#include <sched.h>
#include <arpa/inet.h>
#include <poll.h>
#include <utime.h>
//#include <ustat.h>
#include <mqueue.h>
#include <time.h>

// options값을 호출하기 위해 추가한 header파일
#include <asm/prctl.h>
#include <linux/bpf.h>
//#include <linux/close_range.h>
#include <sys/eventfd.h>
#include <sys/fanotify.h>
#include <sys/random.h>
#include <sys/inotify.h>
//#include <linux/ioprio.h>
#include <sys/syscall.h>
#include <sys/shm.h>
#include <linux/kcmp.h>
#include <linux/reboot.h>
#include <sys/mman.h>
#include <linux/membarrier.h>
#include <linux/memfd.h>
//#include <sys/mount.h>
//#include <numaif.h>
#include <sys/prctl.h>
#include <sys/quota.h>
#include <linux/dqblk_xfs.h>
#include <linux/seccomp.h>
#include <sys/signalfd.h>
#include <sys/swap.h>
#include <sys/timerfd.h>

#include <sys/klog.h>

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

//실행할 때 사용하는 시스템콜 정보 구조체
struct SyscallArgumentInfo
{
    string syscall_name;

    unsigned int nr;

    unsigned long argument[6];
    /*
    unsigned long a1;
    unsigned long a2;
    unsigned long a3;
    unsigned long a4;
    unsigned long a5;
    unsigned long a6;
    */

    enum arg_type argument_type[6];
    /*
    enum arg_type a1Type;
    enum arg_type a2Type;
    enum arg_type a3Type;
    enum arg_type a4Type;
    enum arg_type a5Type;
    enum arg_type a6Type;
    */
    unsigned long retval;

    int testSuccess;
    int errorNumber;
    int kindOfContainer; // 0: 도커, 1: gVisor, 2: kata

    string log_buffer;

    string argument_name[6];
    /*
    string a1_name;
    string a2_name;
    string a3_name;
    string a4_name;
    string a5_name;
    string a6_name;
    */

    int parameter_count;

    int failCount;
};

struct SyscallArgumentInfoCollector
{
    int execute_syscall_count;
    SyscallArgumentInfo syscall_argument_info[6];
};

//호상이가 만들기
struct SyscallJsonInfo{
    string name;
    string a1;
    string a2;
    string a3;
    string a4;
    string a5;
    string a6;
    
    string a1Type;
    string a2Type;
    string a3Type;
    string a4Type;
    string a5Type;
    string a6Type;

    int parameter_count;
};

//Json에서 받은 정보 전부 저장하는 곳
struct SyscallJsonInfoCollector{

    int syscall_count;
    SyscallJsonInfo * syscall_json_info;
};

#endif

