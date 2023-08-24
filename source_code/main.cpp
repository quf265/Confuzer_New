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

    /*
    // 큰 흐름
    string syscall_name;
    SyscallArgumentInfoCollector syscall_argument_info_collector;  //필요한 시스템콜 정보 다 담는 구조체
    SyscallJsonInfoCollector syscall_json_info_collector;
    my_initialize.init(&syscall_json_info_collector);           //JSON 파일에서 읽어와서 구조체에 전부 담기
    my_systemcall.init(&syscall_json_info_collector);           //담은 구조체를 my_systemcall에서 사용할 수 있게 가져옴
    while (1)
    {
        cin >> syscall_name;
        if(syscall_name.length() == 0)
            break;
        while (1)
        {
            if (my_systemcall.get_syscall_argument_info(syscall_name,&syscall_argument_info_collector)) // 특정 syscall에 대해서 argument를 채우고
                break;
            my_print.make_log_buffer(&syscall_argument_info_collector, 0); // 시스템콜 실행전에 로그를 생성
            my_execute.execute_syscall(&syscall_argument_info_collector);  // 시스템콜을 실행하고
            my_print.make_log_buffer(&syscall_argument_info_collector, 1); // 시스템콜 실행후에 로그를 생성
            my_print.print_result(&syscall_argument_info_collector);       // 결과를 출력하고
        }
        my_mapping.mapping_result(); // 테스트 종료후 매핑하기
    }
    */
    return 0;
    
}
