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
    void setSyscallStruct();
    struct SyscallArgumentInfo getSyscallStruct();
};



