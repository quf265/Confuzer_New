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

    string log_buffer;

    int failCount;
};

//호상이가 만들기
struct SyscallJsonInfo{
    string name;
    
    int parameter_count;
    

};

#endif
