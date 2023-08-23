#include "./../header_file/structInfo.h"

StructInfo::StructInfo(/* args */)
{
    struct StructCollector{
    struct stat stat_struct;
    struct pollfd poll_struct;
    struct sigaction sigaction_struct;
    struct iovec iovec_struct;
    struct timeval timeval_struct;
    //struct shmid_ds shmid_ds_struct;
    struct timespec timespec_struct;
    struct itimerval itimerval_struct;
    struct sockaddr sockaddr_struct;
    struct msghdr msghdr_struct;
    struct rusage rusage_struct;
    //struct utsname utsname_struct;
    //struct sembuf sembuf_struct;
    //struct msqid_ds msqid_ds_struct;
    //struct linux_dirent linux_dirent_sturct;
    struct timezone timezone_struct;
    struct rlimit rlimit_struct;
    struct sysinfo sysinfo_struct;
    struct tms tms_struct;
    struct utimbuf utinbuf_struct;
    //struct ustat ustat_struct;
    struct statfs statfs_struct;
    struct sched_param sched_param_struct;
    //struct __sysctl_args __sysctl_args_struct;
    struct timex timex_struct;
    //struct kernel_sym kernel_sym_struct;
    //struct nfsctl_arg nfsctl_arg_struct;
    //struct user_desc userdesc_struct;
    struct io_event io_event_struct;
    struct iocb iocb_struct;
    struct sigevent sigevent_struct;
    struct epoll_event epoll_event_struct;
    struct mq_attr mq_attr_struct;
    struct kexec_segment kexec_segment_struct;
    struct robust_list_head robust_list_head_struct;
    struct perf_event_attr perf_event_attr_struct;
    struct file_handle file_handle_struct;
    struct mmsghdr mmsghdr_struct;
    struct statx statx_struct;
    //struct io_uring_params io_uring_params_struct;
    struct clone_args clone_args_struct;
};
}
StructInfo::~StructInfo()
{
}

void StructInfo::first_function()
{
    cout << "hello structInfo class" << endl;
}