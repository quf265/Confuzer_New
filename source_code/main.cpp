#include "./../header_file/Confuzer.h"
#include "./../header_file/execute.h"
#include "./../header_file/mapping.h"
#include "./../header_file/print.h"
#include "./../header_file/systemcall.h"
#include "./../header_file/flagInfo.h"
#include "./../header_file/structInfo.h"

int main(void)
{

    Print my_print;
    Systemcall my_systemcall;
    Execute my_execute;
    Mapping my_mapping;
    FlagInfo my_flagInfo;
    StructInfo my_structInfo;
    my_print.first_function();
    my_systemcall.first_function();
    my_execute.first_function();
    my_mapping.first_function();
    my_flagInfo.first_function();
    my_structInfo.first_function();
}
