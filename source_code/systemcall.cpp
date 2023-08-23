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
}

Systemcall::getSyscallStruct()
{
    return syscallargsinfo;
}