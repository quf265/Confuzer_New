#include "./../header_file/systemcall.h"

Systemcall::Systemcall(/* args */)
{
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
    syscallargsinfo.nr = syscalljsoninfo.syscallnum;
    for (int i = 0; i < 6; i++)
    {
        syscallargsinfo.nr = syscalljsoninfo.syscallnum;
        syscallargsinfo.argument[i] = (long)(syscalljsoninfo.argument[i].c_str());
        syscallargsinfo.argument_name[i] = syscalljsoninfo.argument[i];


        if(syscalljsoninfo.argument_type[i] == "ARG_UNDEFINED")
        {
            syscallargsinfo.argument_type[i] = ARG_UNDEFINED;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_FD")
        {
            syscallargsinfo.argument_type[i] = ARG_FD;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_LEN")
        {
            syscallargsinfo.argument_type[i] = ARG_LEN;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_ADDRESS")
        {
            syscallargsinfo.argument_type[i] = ARG_ADDRESS;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_MODE_T")
        {
            syscallargsinfo.argument_type[i] = ARG_MODE_T;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_NON_NULL_ADDRESS")
        {
            syscallargsinfo.argument_type[i] = ARG_NON_NULL_ADDRESS;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_PID")
        {
            syscallargsinfo.argument_type[i] = ARG_PID;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_RANGE")
        {
            syscallargsinfo.argument_type[i] = ARG_RANGE;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_OP")
        {
            syscallargsinfo.argument_type[i] = ARG_OP;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_LIST")
        {
            syscallargsinfo.argument_type[i] = ARG_LIST;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_CPU")
        {
            syscallargsinfo.argument_type[i] = ARG_CPU;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_PATHNAME")
        {
            syscallargsinfo.argument_type[i] = ARG_PATHNAME;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_IOVEC")
        {
            syscallargsinfo.argument_type[i] = ARG_IOVEC;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_IOVECLEN")
        {
            syscallargsinfo.argument_type[i] = ARG_IOVECLEN;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_SOCKADDR")
        {
            syscallargsinfo.argument_type[i] = ARG_SOCKADDR;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_SOCKADDRLEN")
        {
            syscallargsinfo.argument_type[i] = ARG_SOCKADDRLEN;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_MMAP")
        {
            syscallargsinfo.argument_type[i] = ARG_MMAP;
        }
        else if(syscalljsoninfo.argument_type[i] == "ARG_SOCKETINFO")
        {
            syscallargsinfo.argument_type[i] = ARG_SOCKETINFO;
        }
    }
}
