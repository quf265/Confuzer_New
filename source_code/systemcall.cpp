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
    int syscall_count = 0;
    syscallargsinfo.syscall_name = syscalljsoninfo.name;
    syscallargsinfo.nr = syscalljsoninfo.syscallnum;
    for (int i = 0; i < 6; i++)
    {
        syscallargsinfo.argument_name[i] = syscalljsoninfo.argument_datatype[i] + " " + syscalljsoninfo.argument[i];
        syscallargsinfo.argument[i] = (long)(syscalljsoninfo.argument[i].c_str());

        if(syscalljsoninfo.argument_datatype[i].find("char") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_PATHNAME;
        }
        else if(syscalljsoninfo.argument_type[i].find("*") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_ADDRESS;
        }
        else if(syscalljsoninfo.argument[i].find("fd") != string::npos)
        {
            syscallargsinfo.argument_type[i] = ARG_FD;
        }
        else if(!syscalljsoninfo.options[i].empty())
        {
            syscallargsinfo.argument_type[i] = ARG_OP;
            syscallargsinfo.argument_log[i].push_back(syscalljsoninfo.argument[i]);
        }
        else
        {
            syscallargsinfo.argument_type[i] = ARG_UNDEFINED;
        }
    }
    syscallargsinfo_collect.syscall_argument_info[syscall_count++] = syscallargsinfo;
    syscallargsinfo_collect.syscall_count = syscall_count;
}

void Systemcall::setJsonStruct()
{
    //용원이형이 주는 데이터
    string name = "0"; // 시스템콜 이름
    int syscallnum = 0; // 시스템콜 넘버
    string argument[6] = {"0"};// argument 자료형
    string argument_datatype[6] = {"0"}; // argument 자료형
    string options[6] = {"0"}; // flag 받을 곳

    //데이터 삽입
    syscalljsoninfo.name = name;
    syscalljsoninfo.syscallnum = syscallnum;
    for(int i = 0; i < 6; i++)
    {
        syscalljsoninfo.argument[i] = argument[i];
        syscalljsoninfo.argument_datatype[i] = argument_datatype[i];
        syscalljsoninfo.options[i] = options[i];
    }
}