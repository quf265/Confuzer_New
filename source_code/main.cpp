#include "./../header_file/Confuzer.h"
#include "./../header_file/execute.h"
#include "./../header_file/mapping.h"
#include "./../header_file/print.h"
#include "./../header_file/systemcall.h"
#include "./../header_file/flagInfo.h"
#include "./../header_file/structInfo.h"
#include "./../header_file/initialize.h"

int main(void)
{
    //for Debug
    Print my_print;
    Systemcall my_systemcall;
    Execute my_execute;
    Mapping my_mapping;
    FlagInfo my_flagInfo;
    StructInfo my_structInfo;
    Initialize my_initialize;
    my_print.first_function();
    my_systemcall.first_function();
    my_execute.first_function();
    my_mapping.first_function();
    my_flagInfo.first_function();
    my_structInfo.first_function();
    my_initialize.first_function();

    /* 큰 흐름
    SyscallArgumentInfo syscall_argument_info;  
    my_initialize.init();           //JSON 파일에서 읽어와서 
    while(1)
    {
        if(my_systemcall.get_syscall_argument_info(&syscall_argument_info)) //argument를 채우고
            break;
        my_print.make_log_buffer(&syscall_argument_info, 0);    //시스템콜 실행전에 로그를 생성
        my_execute.execute_syscall(&syscall_argument_info);     //시스템콜을 실행하고
        my_print.make_log_buffer(&syscall_argument_info, 1);    //시스템콜 실행후에 로그를 생성
        my_print.print_result(&syscall_argument_info);      //결과를 출력하고
    }
    my_mapping.mapping_result();        //테스트 종료후 매핑하기

    return 0;
    */
}
