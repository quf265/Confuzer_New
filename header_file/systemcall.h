#include "Confuzer.h"
#include "flagInfo.h"
#include "structInfo.h"

class Systemcall
{
private:
    struct SyscallJsonInfo syscalljsoninfo;
    struct SyscallArgumentInfo syscallargsinfo;
    /* data */
public:
    Systemcall(/* args */);
    ~Systemcall();
    void first_function();
    void setSyscallStruct();
};



