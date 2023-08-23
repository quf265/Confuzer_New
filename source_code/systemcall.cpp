#include "./../header_file/systemcall.h"

void Systemcall::setSyscallStruct()
{
    syscallargsinfo.nr = syscalljsoninfo.syscallnum;
    for (int i = 0; i < 6; i++)
    {
        syscallargsinfo.arg[i] = (long)(syscalljsoninfo.args[i].c_str());
    }
}

Systemcall::struct SyscallArgumentInfo getSyscallStruct()
{
    return syscallargsinfo;
}