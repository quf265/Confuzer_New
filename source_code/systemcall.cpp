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

void Systemcall::setSyscallStruct(struct struct)
{
    syscallargsinfo.name = struct.name;
    syscallargsinfo.nr = struct.syscallnum;
}

Systemcall::getSyscallStruct()
{
    return syscallargsinfo;
}