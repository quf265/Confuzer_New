#include "./../header_file/execute.h"

Execute::Execute(/* args */)
{
    container_type = CONTAINER_TYPE;

    trace_file_path = TRACE_FILE_PATH;

    kata_address = KATA_ADDRESS;
    kata_fsync_file_path = KATA_FSYNC_FILE_PATH;
    kata_user_home_path = KATA_USER_HOME_PATH;
}

Execute::~Execute()
{

}

void Execute::first_function()
{
    cout<<"hello execute class"<<endl;
}

int Execute::execute_syscall(SyscallArgumentInfo * syscall_argument_info)
{
    int retval;
    int trace_marker_fd;
    int kata_fd;
    char cmd[10000] = {0};
    string trace_marker_start_message;
    string trace_marker_end_message;
    if (container_type == 0 || container_type == 1)
    {
        tracing_on(1);
        trace_marker_fd = open(kata_fsync_file_path.c_str(), O_WRONLY);
        if (trace_marker_fd == -1)
        {
            printf("cant not open trace marker fd\n");
            return -1;
        }
        trace_marker_start_message = syscall_argument_info->log_buffer;
        trace_marker_end_message = syscall_argument_info->log_buffer;
        trace_marker_start_message += "start";
        trace_marker_end_message += "end";
        write(trace_marker_fd, trace_marker_start_message.c_str(), trace_marker_start_message.length());
        sleep(1);
    }
    else
    {
        kata_fd = open(kata_fsync_file_path.c_str(), O_RDONLY);
        if (kata_fd == -1)
        {
            printf("cant not open kata fd\n");
            return -1;
        }
        sprintf(cmd, "sshpass -p 1234 ssh -t %s \"echo 1 > /sys/kernel/debug/tracing/tracing_on\"", kata_address.c_str());
        system(cmd);
        sleep(1);
        fsync(kata_fd);
        fsync(kata_fd);
        fsync(kata_fd);
    }
    retval = syscall(syscall_argument_info->nr, syscall_argument_info->argument[0], syscall_argument_info->argument[1], syscall_argument_info->argument[2], syscall_argument_info->argument[3], syscall_argument_info->argument[4], syscall_argument_info->argument[5]);
    if (container_type == 0 || container_type == 1)
    {
        write(trace_marker_fd, trace_marker_end_message.c_str(), trace_marker_end_message.length());
        close(trace_marker_fd);
        tracing_on(0);
    }
    else
    {
        fdatasync(kata_fd);
        fdatasync(kata_fd);
        fdatasync(kata_fd);
        sprintf(cmd, "sshpass -p 1234 ssh -t %s \"echo 0 > /sys/kernel/debug/tracing/tracing_on; cat /sys/kernel/debug/tracing/trace | grep pool >> %s/ftraceresult/%sTracing.txt; echo > /sys/kernel/debug/tracing/trace;\"", kata_address.c_str(), kata_user_home_path.c_str(), syscall_argument_info->syscall_name.c_str());
        system(cmd);
        close(kata_fd);
    }

    if (retval != -1)
    {
        syscall_argument_info->testSuccess = 1;
    }
    else
    {
        syscall_argument_info->testSuccess = 0;
    }
    syscall_argument_info->retval = retval;
    syscall_argument_info->errorNumber = errno;

    return 0;
}

void Execute::tracing_on(int on_off)
{
    int trace_fd = -1;
    trace_fd = open(trace_file_path.c_str(), O_RDWR);
    if (on_off == 1)
    {
        if (trace_fd != -1)
        {
            write(trace_fd, "1", 2);
            close(trace_fd);
        }
    }
    else
    {
        if (trace_fd != -1)
        {
            write(trace_fd, "0", 2);
            close(trace_fd);
        }
    }
}