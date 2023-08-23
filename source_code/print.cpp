#include "./../header_file/print.h"

Print::Print(/* args */)
{
}

Print::~Print()
{
}


void Print::first_function()
{
    cout<<"hello print class"<<endl;
}

void Print::make_log_buffer(SyscallArgumentInfo * syscall_argument_info,int before_test)
{
    char log_buffer[10000] = {0};
    if (before_test)
    {
        char *sptr = log_buffer;
        sptr += sprintf(sptr, "%s(", syscall_argument_info->syscall_name.c_str());
        for (int i = 1; i <= syscall_argument_info->parameter_count; ++i)
        {
            sptr = render_arg(syscall_argument_info, sptr, i);
        }
        sptr += sprintf(sptr, ") ");
    }
    else
    {
        char *sptr = log_buffer;
        sptr += sprintf(sptr, "%s", syscall_argument_info->log_buffer.c_str());
        if (syscall_argument_info->retval == -1)
        {
            sptr += sprintf(sptr, "= %ld (%s)",
                            (long)syscall_argument_info->retval, strerror(syscall_argument_info->errorNumber));
        }
        else
        {
            sptr += sprintf(sptr, "= ");
            if ((unsigned long)syscall_argument_info->retval > 10000)
                sptr += sprintf(sptr, "0x%lx", syscall_argument_info->retval);
            else
                sptr += sprintf(sptr, "%ld", (long)syscall_argument_info->retval);
        }
        sptr += sprintf(sptr, "\n");
    }
    syscall_argument_info->log_buffer = log_buffer;
}

char *Print::render_arg(SyscallArgumentInfo * syscall_argument_info, char *sptr, unsigned int argnum)
{
    const char *name = NULL;
    unsigned long reg = 0;
    enum arg_type type = ARG_UNDEFINED;

    type = syscall_argument_info->argument_type[argnum-1];
    name = syscall_argument_info->argument_name[argnum-1].c_str();
    reg = syscall_argument_info->argument[argnum-1];

    if (argnum != 1)
        sptr += sprintf(sptr, ", ");

    sptr += sprintf(sptr, "%s=", name);

    //sptr = decode_argtype(rec, sptr, reg, type, argnum);

    return sptr;
}

void Print::print_result(SyscallArgumentInfo *syscall_argument_info)
{

}