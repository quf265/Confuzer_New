#ifndef FALG_INFO_HEADER
#define FALG_INFO_HEADER
#include "Confuzer.h"

// 직접 정의해야 하는 options값
#define MAP_HUGE_2MB (21 << MAP_HUGE_SHIFT)
#define MAP_HUGE_1GB (30 << MAP_HUGE_SHIFT)

#define SHM_HUGE_2MB (21 << SHM_HUGE_SHIFT) // Define Fail
#define SHM_HUGE_1GB (30 << SHM_HUGE_SHIFT) // Define Fail

#define SYSLOG_ACTION_CLEAR 5
#define SYSLOG_ACTION_CLOSE 0
#define SYSLOG_ACTION_CONSOLE_LEVEL 8
#define SYSLOG_ACTION_CONSOLE_OFF 6
#define SYSLOG_ACTION_CONSOLE_ON 7
#define SYSLOG_ACTION_OPEN 1
#define SYSLOG_ACTION_READ 2
#define SYSLOG_ACTION_READ_ALL 3
#define SYSLOG_ACTION_READ_CLEAR 4
#define SYSLOG_ACTION_SIZE_BUFFER 10
#define SYSLOG_ACTION_SIZE_UNREAD 9

class FlagInfo
{
private:
    /* data */
public:
    FlagInfo(/* args */);
    ~FlagInfo();
    void first_function();
    // void get_flag();
    map<string, long> get_flag(); // 멤버 함수 선언
};

#endif