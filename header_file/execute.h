#include "Confuzer.h"
#include "flagInfo.h"
#include "structInfo.h"

#define KATA_ADDRESS "kataworker2@192.168.122.12"

#define CONTAINER_TYPE 0 // 0: 도커, 1: gVisor, 2: kata

#define TRACE_FILE_PATH "/data/shared/trace"
#define USER_FILE_PATH "/program/"
#define KATA_FSYNC_FILE_PATH "/tmp/test.txt" 
#define KATA_USER_HOME_PATH "/home/kataworker2"

class Execute
{
private:
    /* data */
    //all
    string trace_file_path;
    string user_file_path;
    //kata
    string kata_address;
    string kata_fsync_file_path;
    string kata_user_home_path;
    int container_type;
    
    void tracing_on(int on_off);
    
public:
    Execute(/* args */);
    ~Execute();
    void first_function();
    int execute_syscall(SyscallArgumentInfoCollector * syscall_argument_info);




};

