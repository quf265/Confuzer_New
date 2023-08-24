#include "./../header_file/systemcall.h"

using namespace std;

Systemcall::Systemcall(/* args */)
{
    // syscalljsoninfo.name = "0";
    // syscalljsoninfo.syscallnum = 0;
    // syscalljsoninfo.argument = {"0"};
    // syscalljsoninfo.argument_type = "0";
    // syscalljsoninfo.parameter_count = 0;
    // syscallargsinfo.syscall_name = "0";
    // syscallargsinfo.nr = 0;
    // syscallargsinfo.argument = {0};
    // syscallargsinfo.argument_type = {0};
    // syscallargsinfo.retval = 0;
    // syscallargsinfo.argument_log = {"0"};
    // syscallargsinfo.testSuccess = 0;
    // syscallargsinfo.errorNumber = 0;
    // syscallargsinfo.kindOfContainer = 0;
    // syscallargsinfo.log_buffer = 0;
    // syscallargsinfo.argument_name = {"0"};
    // syscallargsinfo.parameter_count = 0;
    // syscallargsinfo.failCount = 0;
    memset(&syscalljsoninfo, 0, sizeof(struct SyscallJsonInfo));
    memset(&syscallargsinfo, 0, sizeof(struct SyscallArgumentInfo));
}

Systemcall::~Systemcall()
{
}

void Systemcall::first_function()
{
    cout<<"hello systemcall class"<<endl;
}

void Systemcall::setSyscallStruct()
{
    syscallargsinfo.syscall_name = syscalljsoninfo.name;
    syscallargsinfo.nr = syscalljsoninfo.syscallnum;
    for (int i = 0; i < 6; i++)
    {
        syscallargsinfo.argument_name[i] = syscalljsoninfo.argument_datatype[i] + " " + syscalljsoninfo.argument[i];
        syscallargsinfo.argument[i] = (long)(syscalljsoninfo.argument[i].c_str());

        if(syscalljsoninfo.argument[i].find("fd") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_FD;
        }
        else if(syscalljsoninfo.argument_type[i].find("ARG_LEN") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_LEN;
        }
        else if(syscalljsoninfo.argument_type[i].find("*") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_ADDRESS;
        }
        else if(syscalljsoninfo.argument[i].find("mode") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_MODE_T;
            syscallargsinfo.argument_log[i].push_back(syscalljsoninfo.argument[i]);
        }
        else if(syscalljsoninfo.argument_type[i].find("ARG_OP") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_OP;
            syscallargsinfo.argument_log[i].push_back(syscalljsoninfo.argument[i]);
        }
        else if(syscalljsoninfo.argument_type[i].find("ARG_LIST") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_LIST;
            syscallargsinfo.argument_log[i].push_back(syscalljsoninfo.argument[i]);
        }
        else if(syscalljsoninfo.argument[i].find("pathname") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_PATHNAME;
        }
        else
        {
            syscallargsinfo.argument_type[i] = ARG_UNDEFINED;
        }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_NON_NULL_ADDRESS") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_NON_NULL_ADDRESS;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_PID") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_PID;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_RANGE") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_RANGE;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_CPU") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_CPU;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_IOVEC") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_IOVEC;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_IOVECLEN") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_IOVECLEN;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_SOCKADDR") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_SOCKADDR;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_SOCKADDRLEN") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_SOCKADDRLEN;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_MMAP") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_MMAP;
        // }
        // else if(syscalljsoninfo.argument_type[i].find("ARG_SOCKETINFO") != string::npos)
        // {
        //     syscallargsinfo.argument_type[i] = ARG_SOCKETINFO;
        // }
    }
}

void Systemcall::setJsonStruct()
{

}